/**
 * @file    protocol.c
 * @brief   双模式协议引擎 (二进制封包 + ASCII CLI)
 * @author  TDX33029 / AntMiner Project
 */

#include "protocol.h"
#include "icsp.h"
#include "uart.h"
#include "uprintf.h"
#include "default_firmware.h"
#include <string.h>

#define CLI_LINE_MAX 128

/* 静态大缓冲, 避免占用过多栈空间 */
static uint8_t  bin_rx_buf[sizeof(protocol_header_t) + PROTOCOL_MAX_PAYLOAD + 2];
static uint16_t bin_rx_idx = 0;
static uint16_t bin_expected_len = 0;
static uint16_t bin_discard = 0;    /* 坏帧丢弃模式: 剩余待丢弃字节数 */

static uint8_t  rsp_payload[PROTOCOL_MAX_PAYLOAD];
static uint16_t flash_scratch[PROTOCOL_MAX_PAYLOAD / 2];

static char     cli_line[CLI_LINE_MAX];
static uint16_t cli_idx = 0;

/* CRC-16-CCITT (Poly 0x1021, Init 0xFFFF) */
uint16_t protocol_crc16(const uint8_t *data, uint16_t len)
{
    uint16_t crc = 0xFFFF;
    while (len-- != 0U) {
        crc ^= ((uint16_t)*data++) << 8;
        for (uint8_t i = 0U; i < 8U; i++) {
            if ((crc & 0x8000U) != 0U) {
                crc = (uint16_t)((crc << 1) ^ 0x1021U);
            } else {
                crc = (uint16_t)(crc << 1);
            }
        }
    }
    return crc;
}

static void send_binary_response(uint8_t cmd, uint8_t seq, uint8_t status,
                                 const uint8_t *payload, uint16_t payload_len)
{
    protocol_rsp_header_t hdr;
    uint8_t temp[sizeof(protocol_rsp_header_t) + PROTOCOL_MAX_PAYLOAD];

    hdr.sync0 = PROTOCOL_RSP_SYNC0;
    hdr.sync1 = PROTOCOL_RSP_SYNC1;
    hdr.cmd = cmd;
    hdr.seq = seq;
    hdr.status = status;
    hdr.len = payload_len;

    memcpy(temp, &hdr, sizeof(hdr));
    if ((payload != NULL) && (payload_len > 0U)) {
        memcpy(temp + sizeof(hdr), payload, payload_len);
    }

    uint16_t crc = protocol_crc16(temp, (uint16_t)(sizeof(hdr) + payload_len));
    uart_write_bytes(temp, (uint16_t)(sizeof(hdr) + payload_len));
    uart_write_bytes((const uint8_t *)&crc, 2);
}

static uint8_t icsp_status_to_protocol(icsp_status_t st)
{
    switch (st) {
        case ICSP_OK:                 return PROTOCOL_STATUS_OK;
        case ICSP_ERR_NOT_CONNECTED:
        case ICSP_ERR_WRONG_CHIP:     return PROTOCOL_STATUS_ERR_CHIP;
        case ICSP_ERR_ERASE_FAILED:   return PROTOCOL_STATUS_ERR_ERASE;
        case ICSP_ERR_WRITE_FAILED:   return PROTOCOL_STATUS_ERR_WRITE;
        case ICSP_ERR_VERIFY_FAILED:  return PROTOCOL_STATUS_ERR_VERIFY;
        default:                      return PROTOCOL_STATUS_ERR_PARAM;
    }
}

static void handle_binary_packet(const protocol_header_t *req, const uint8_t *payload)
{
    uint16_t rsp_len = 0U;
    uint8_t status = PROTOCOL_STATUS_OK;

    switch (req->cmd) {
        case PROTOCOL_CMD_PING:
            rsp_len = 4U;
            memcpy(rsp_payload, "PONG", 4);
            break;

        case PROTOCOL_CMD_DETECT: {
            pic_chip_info_t info;
            icsp_status_t st = icsp_detect_chip(&info);
            if (st == ICSP_OK) {
                rsp_len = (uint16_t)sizeof(info);
                memcpy(rsp_payload, &info, rsp_len);
                status = PROTOCOL_STATUS_OK;
            } else {
                status = PROTOCOL_STATUS_ERR_CHIP;
            }
            break;
        }

        case PROTOCOL_CMD_ERASE: {
            icsp_status_t st = icsp_bulk_erase();
            status = icsp_status_to_protocol(st);
            break;
        }

        case PROTOCOL_CMD_WRITE_ROW: {
            /* addr = 行首字地址, 负载 = 2*字节数 (典型 64字节 = 32字) */
            uint8_t word_count = (uint8_t)(req->len / 2U);
            if ((word_count == 0U) || (word_count > PIC16F1704_ROW_WORDS)) {
                status = PROTOCOL_STATUS_ERR_PARAM;
            } else {
                for (uint8_t i = 0U; i < word_count; i++) {
                    flash_scratch[i] = (uint16_t)(payload[i * 2U] |
                                                  (payload[i * 2U + 1U] << 8));
                }
                icsp_status_t st = icsp_write_row(req->addr, flash_scratch, word_count);
                status = icsp_status_to_protocol(st);
            }
            break;
        }

        case PROTOCOL_CMD_READ_FLASH: {
            /* addr = 起始字地址, len 字段 = 读取字数 (无负载) */
            uint16_t count = req->len;
            if (count > (PROTOCOL_MAX_PAYLOAD / 2U)) {
                count = (uint16_t)(PROTOCOL_MAX_PAYLOAD / 2U);
            }
            if (count == 0U) {
                status = PROTOCOL_STATUS_ERR_PARAM;
                break;
            }
            icsp_status_t st = icsp_read_flash(req->addr, flash_scratch, count);
            if (st == ICSP_OK) {
                for (uint16_t i = 0U; i < count; i++) {
                    rsp_payload[i * 2U]     = (uint8_t)(flash_scratch[i] & 0xFFU);
                    rsp_payload[i * 2U + 1U] = (uint8_t)((flash_scratch[i] >> 8) & 0xFFU);
                }
                rsp_len = (uint16_t)(count * 2U);
                status = PROTOCOL_STATUS_OK;
            } else {
                status = icsp_status_to_protocol(st);
            }
            break;
        }

        case PROTOCOL_CMD_WRITE_CFG: {
            /* 负载: [Addr: 2B] [Val: 2B] */
            if (req->len >= 4U) {
                uint16_t addr = (uint16_t)(payload[0] | (payload[1] << 8));
                uint16_t val  = (uint16_t)(payload[2] | (payload[3] << 8));
                icsp_status_t st = icsp_write_config_word(addr, val);
                status = icsp_status_to_protocol(st);
            } else {
                status = PROTOCOL_STATUS_ERR_PARAM;
            }
            break;
        }

        case PROTOCOL_CMD_READ_CFG: {
            pic_chip_info_t info;
            icsp_status_t st = icsp_read_configs(&info);
            if (st == ICSP_OK) {
                rsp_len = (uint16_t)sizeof(info);
                memcpy(rsp_payload, &info, rsp_len);
                status = PROTOCOL_STATUS_OK;
            } else {
                status = PROTOCOL_STATUS_ERR_CHIP;
            }
            break;
        }

        case PROTOCOL_CMD_RESET_TARGET:
            icsp_exit_progmode();
            status = PROTOCOL_STATUS_OK;
            break;

        case PROTOCOL_CMD_ONEKEY_BURN: {
            icsp_status_t st = icsp_burn_default_firmware();
            status = (st == ICSP_OK) ? PROTOCOL_STATUS_OK : PROTOCOL_STATUS_ERR_WRITE;
            break;
        }

        default:
            status = PROTOCOL_STATUS_ERR_UNKNOWN;
            break;
    }

    send_binary_response(req->cmd, req->seq, status, rsp_payload, rsp_len);
}

/* ------------------------------- CLI ------------------------------------ */

static int ci_equal(const char *a, const char *b)
{
    while ((*a != '\0') && (*b != '\0')) {
        char ca = *a; char cb = *b;
        if ((ca >= 'a') && (ca <= 'z')) { ca = (char)(ca - 32); }
        if ((cb >= 'a') && (cb <= 'z')) { cb = (char)(cb - 32); }
        if (ca != cb) {
            return 0;
        }
        a++; b++;
    }
    return (*a == '\0') && (*b == '\0');
}

static int starts_with_ci(const char *line, const char *prefix)
{
    while (*prefix != '\0') {
        char ca = *line; char cb = *prefix;
        if (ca == '\0') { return 0; }
        if ((ca >= 'a') && (ca <= 'z')) { ca = (char)(ca - 32); }
        if ((cb >= 'a') && (cb <= 'z')) { cb = (char)(cb - 32); }
        if (ca != cb) { return 0; }
        line++; prefix++;
    }
    return 1;
}

/* 解析无符号数: 0x 前缀按16进制, 否则按10进制 */
static int parse_uint(const char *s, uint16_t *out)
{
    uint32_t val = 0U;
    int digits = 0;
    uint8_t base = 10U;

    if ((s[0] == '0') && ((s[1] == 'x') || (s[1] == 'X'))) {
        base = 16U;
        s += 2;
    }
    while (*s != '\0') {
        char c = *s;
        uint32_t d;
        if ((c >= '0') && (c <= '9')) {
            d = (uint32_t)(c - '0');
        } else if ((base == 16U) && (c >= 'a') && (c <= 'f')) {
            d = (uint32_t)(c - 'a' + 10);
        } else if ((base == 16U) && (c >= 'A') && (c <= 'F')) {
            d = (uint32_t)(c - 'A' + 10);
        } else {
            break;
        }
        val = (val * base) + d;
        if (val > 0xFFFFU) {
            return 0;
        }
        digits++;
        s++;
    }
    if (digits == 0) {
        return 0;
    }
    *out = (uint16_t)val;
    return 1;
}

static void print_chip_info(const pic_chip_info_t *chip)
{
    uprintf("[OK] PIC Detected: %s (raw DevID=0x%04X Rev=0x%02X)\r\n",
            icsp_devid_name(chip->dev_id), chip->dev_id, chip->rev_id);
    uprintf("     CONFIG1=0x%04X, CONFIG2=0x%04X\r\n", chip->config1, chip->config2);
    uprintf("     UserID=[0x%04X, 0x%04X, 0x%04X, 0x%04X]\r\n",
            chip->userid[0], chip->userid[1], chip->userid[2], chip->userid[3]);
    /* 串口输出使用纯ASCII, 避免armcc多字节字符集警告与终端乱码 */
    uprintf("     CP(code protect)=%s, LVP(low-volt prog)=%s\r\n",
            chip->cp_on ? "ON" : "OFF", chip->lvp_on ? "ON" : "OFF");
    if (!chip->lvp_on) {
        uprintf("     [WARN] LVP=OFF: this LVP programmer cannot re-enter the chip, replace it!\r\n");
    }
}

static void handle_cli_command(char *cmdline)
{
    int len = (int)strlen(cmdline);
    while ((len > 0) && ((cmdline[len - 1] == '\r') || (cmdline[len - 1] == '\n') ||
                         (cmdline[len - 1] == ' '))) {
        cmdline[--len] = '\0';
    }
    if (len == 0) {
        return;
    }

    if (ci_equal(cmdline, "PING")) {
        uprintf("PONG\r\n");
    } else if (ci_equal(cmdline, "DETECT") || ci_equal(cmdline, "ID")) {
        pic_chip_info_t chip;
        icsp_status_t st = icsp_detect_chip(&chip);
        if (st == ICSP_OK) {
            print_chip_info(&chip);
        } else {
            uprintf("[ERR] PIC Not Found or Incompatible! Check wiring and power. Code=%d\r\n", st);
        }
    } else if (ci_equal(cmdline, "ERASE")) {
        uprintf("Erasing PIC16F1704 Flash & Config memory...\r\n");
        icsp_status_t st = icsp_bulk_erase();
        if (st == ICSP_OK) {
            uprintf("[OK] Bulk Erase Completed Successfully!\r\n");
        } else {
            uprintf("[ERR] Bulk Erase Failed! Code=%d\r\n", st);
        }
    } else if (starts_with_ci(cmdline, "READ ")) {
        /* READ <addr> [count] - 地址支持0x前缀(16进制), 缺省16进制/10进制自适应 */
        const char *p = cmdline + 5;
        while (*p == ' ') { p++; }
        uint16_t addr = 0U;
        uint16_t count = 16U;
        if (!parse_uint(p, &addr)) {
            uprintf("[ERR] Invalid address.\r\n");
            return;
        }
        while ((*p != '\0') && (*p != ' ')) { p++; }
        while (*p == ' ') { p++; }
        if (*p != '\0') {
            if (!parse_uint(p, &count)) {
                uprintf("[ERR] Invalid count.\r\n");
                return;
            }
        }
        if (count > 64U) { count = 64U; }
        if (count == 0U) { count = 1U; }

        uint16_t buf[64];
        icsp_status_t st = icsp_read_flash(addr, buf, count);
        if (st == ICSP_OK) {
            uprintf("Address 0x%04X (%u words):\r\n", addr, count);
            for (uint16_t i = 0U; i < count; i++) {
                uprintf("%04X ", buf[i]);
                if (((i + 1U) % 8U) == 0U) {
                    uprintf("\r\n");
                }
            }
            if ((count % 8U) != 0U) {
                uprintf("\r\n");
            }
        } else {
            uprintf("[ERR] Read Flash Failed! Code=%d\r\n", st);
        }
    } else if (ci_equal(cmdline, "CFG")) {
        pic_chip_info_t chip;
        if (icsp_read_configs(&chip) == ICSP_OK) {
            print_chip_info(&chip);
        } else {
            uprintf("[ERR] Read Configs Failed!\r\n");
        }
    } else if (ci_equal(cmdline, "RESET")) {
        icsp_exit_progmode();
        uprintf("[OK] Released MCLR. Target PIC is running.\r\n");
    } else if (ci_equal(cmdline, "ONEKEY") || ci_equal(cmdline, "BURN")) {
        uprintf("Starting One-Key Offline Burn of embedded firmware...\r\n");
        LED_ON();
        icsp_status_t st = icsp_burn_default_firmware();
        if (st == ICSP_OK) {
            uprintf("[SUCCESS] Firmware Flashed & Verified 100%% OK!\r\n");
            LED_OFF();
        } else {
            uprintf("[FAIL] Flashing Failed! Error Code=%d\r\n", st);
            for (int i = 0; i < 6; i++) {
                LED_TOGGLE();
                icsp_delay_ms(150U);
            }
            LED_OFF();
        }
    } else if (ci_equal(cmdline, "HELP") || ci_equal(cmdline, "?")) {
        uprintf("\r\n=== STM32F103 PIC16F1704 Programmer CLI ===\r\n");
        uprintf("  PING              - Test serial link\r\n");
        uprintf("  ID / DETECT       - Read PIC16F1704 Device ID & Configs\r\n");
        uprintf("  ERASE             - Bulk erase PIC Flash & Config\r\n");
        uprintf("  READ <addr> [n]   - Read n words (max 64), e.g. READ 0 16\r\n");
        uprintf("  CFG               - Read Configuration words & User ID\r\n");
        uprintf("  ONEKEY / BURN     - Flash embedded firmware & verify\r\n");
        uprintf("  RESET             - Release MCLR and let PIC run\r\n");
        uprintf("  HELP              - Show this menu\r\n");
        uprintf("  Python host tool: host_tool/pic16f_flasher.py -h\r\n\r\n");
    } else {
        uprintf("Unknown command: '%s'. Type HELP for menu.\r\n", cmdline);
    }
}

/* ----------------------------- 调度 -------------------------------------- */

void protocol_init(void)
{
    bin_rx_idx = 0U;
    bin_expected_len = 0U;
    bin_discard = 0U;
    cli_idx = 0U;
}

void protocol_process(void)
{
    uint8_t ch;
    while (uart_read_byte(&ch)) {
        /* 坏帧丢弃模式: 静默吞掉剩余字节 */
        if (bin_discard > 0U) {
            bin_discard--;
            continue;
        }

        /* 二进制封包状态机 */
        if ((bin_rx_idx > 0U) || (ch == PROTOCOL_REQ_SYNC0)) {
            if (bin_rx_idx < sizeof(bin_rx_buf)) {
                bin_rx_buf[bin_rx_idx++] = ch;
            } else {
                bin_discard = 1U;
                bin_rx_idx = 0U;
                continue;
            }

            if (bin_rx_idx == 1U) {
                if (bin_rx_buf[0] != PROTOCOL_REQ_SYNC0) {
                    bin_rx_idx = 0U;
                }
            } else if (bin_rx_idx == 2U) {
                if (bin_rx_buf[1] != PROTOCOL_REQ_SYNC1) {
                    /* 不是帧头: 若该字节本身是 SYNC0 则保留等待下一字节 */
                    if (bin_rx_buf[1] == PROTOCOL_REQ_SYNC0) {
                        bin_rx_buf[0] = PROTOCOL_REQ_SYNC0;
                        bin_rx_idx = 1U;
                    } else {
                        bin_rx_idx = 0U;
                    }
                }
            } else if (bin_rx_idx == sizeof(protocol_header_t)) {
                protocol_header_t *hdr = (protocol_header_t *)(void *)bin_rx_buf;
                if ((hdr->len > PROTOCOL_MAX_PAYLOAD) || (hdr->len == 0U)) {
                    bin_rx_idx = 0U;
                } else {
                    bin_expected_len =
                        (uint16_t)(sizeof(protocol_header_t) + hdr->len + 2U);
                }
            } else if ((bin_rx_idx > sizeof(protocol_header_t)) &&
                       (bin_rx_idx == bin_expected_len)) {
                /* 完整帧到达, 校验CRC */
                protocol_header_t *hdr = (protocol_header_t *)(void *)bin_rx_buf;
                uint16_t rx_crc = (uint16_t)(bin_rx_buf[bin_expected_len - 2U] |
                                             (bin_rx_buf[bin_expected_len - 1U] << 8));
                uint16_t calc_crc = protocol_crc16(bin_rx_buf,
                        (uint16_t)(sizeof(protocol_header_t) + hdr->len));

                if (rx_crc == calc_crc) {
                    handle_binary_packet(hdr, bin_rx_buf + sizeof(protocol_header_t));
                } else {
                    send_binary_response(hdr->cmd, hdr->seq,
                                         PROTOCOL_STATUS_ERR_CRC, NULL, 0);
                }
                bin_rx_idx = 0U;
                bin_expected_len = 0U;
                continue;
            }

            if (bin_rx_idx > 0U) {
                continue;   /* 已被二进制状态机吸收 */
            }
        }

        /* ASCII 命令行累加器 */
        if ((ch == '\r') || (ch == '\n')) {
            if (cli_idx > 0U) {
                cli_line[cli_idx] = '\0';
                handle_cli_command(cli_line);
                cli_idx = 0U;
            }
        } else if ((ch == '\b') || (ch == 0x7FU)) {
            if (cli_idx > 0U) {
                cli_idx--;
            }
        } else {
            if (cli_idx < (CLI_LINE_MAX - 1U)) {
                cli_line[cli_idx++] = (char)ch;
            }
        }
    }
}
