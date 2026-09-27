/**
 * @file protocol.c
 * @brief Dual-mode Protocol Engine (Binary Packets & Human CLI)
 * @author TDX33029 / AntMiner Project
 */

#include "protocol.h"
#include "pic16f1704_icsp.h"
#include "uart.h"
#include "default_firmware.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define CLI_LINE_MAX 128

static uint8_t bin_rx_buf[sizeof(protocol_header_t) + PROTOCOL_MAX_PAYLOAD + 2];
static uint16_t bin_rx_idx = 0;
static uint16_t bin_expected_len = 0;

static char cli_line[CLI_LINE_MAX];
static uint16_t cli_idx = 0;

/* CRC-16-CCITT (Poly 0x1021, Init 0xFFFF) */
uint16_t protocol_crc16(const uint8_t *data, uint16_t len) {
    uint16_t crc = 0xFFFF;
    while (len--) {
        crc ^= ((uint16_t)*data++) << 8;
        for (uint8_t i = 0; i < 8; i++) {
            if (crc & 0x8000) {
                crc = (crc << 1) ^ 0x1021;
            } else {
                crc <<= 1;
            }
        }
    }
    return crc;
}

static void send_binary_response(uint8_t cmd, uint8_t seq, uint8_t status, const uint8_t *payload, uint16_t payload_len) {
    protocol_rsp_header_t hdr;
    hdr.sync0 = PROTOCOL_RSP_SYNC0;
    hdr.sync1 = PROTOCOL_RSP_SYNC1;
    hdr.cmd = cmd;
    hdr.seq = seq;
    hdr.status = status;
    hdr.len = payload_len;

    uint8_t temp[sizeof(protocol_rsp_header_t) + PROTOCOL_MAX_PAYLOAD];
    memcpy(temp, &hdr, sizeof(hdr));
    if (payload && payload_len > 0) {
        memcpy(temp + sizeof(hdr), payload, payload_len);
    }

    uint16_t crc = protocol_crc16(temp, sizeof(hdr) + payload_len);
    uart_write_bytes(temp, sizeof(hdr) + payload_len);
    uart_write_bytes((const uint8_t *)&crc, 2);
}

static void handle_binary_packet(const protocol_header_t *req, const uint8_t *payload) {
    uint8_t rsp_payload[PROTOCOL_MAX_PAYLOAD];
    uint16_t rsp_len = 0;
    uint8_t status = PROTOCOL_STATUS_OK;

    switch (req->cmd) {
        case PROTOCOL_CMD_PING:
            rsp_len = 4;
            memcpy(rsp_payload, "PONG", 4);
            break;

        case PROTOCOL_CMD_DETECT: {
            pic_chip_info_t info;
            icsp_status_t st = icsp_detect_chip(&info);
            if (st == ICSP_OK) {
                rsp_len = sizeof(info);
                memcpy(rsp_payload, &info, rsp_len);
                status = PROTOCOL_STATUS_OK;
            } else {
                status = PROTOCOL_STATUS_ERR_CHIP;
            }
            break;
        }

        case PROTOCOL_CMD_ERASE: {
            icsp_status_t st = icsp_bulk_erase();
            status = (st == ICSP_OK) ? PROTOCOL_STATUS_OK : PROTOCOL_STATUS_ERR_ERASE;
            break;
        }

        case PROTOCOL_CMD_WRITE_ROW: {
            /* ADDR = row word address, LEN = number of bytes (typically 64 bytes = 32 words) */
            uint8_t word_count = req->len / 2;
            if (word_count > PIC16F1704_ROW_WORDS) {
                status = PROTOCOL_STATUS_ERR_PARAM;
            } else {
                uint16_t words[PIC16F1704_ROW_WORDS];
                for (int i = 0; i < word_count; i++) {
                    words[i] = payload[i * 2] | (payload[i * 2 + 1] << 8);
                }
                icsp_status_t st = icsp_write_row(req->addr, words, word_count);
                status = (st == ICSP_OK) ? PROTOCOL_STATUS_OK : PROTOCOL_STATUS_ERR_WRITE;
            }
            break;
        }

        case PROTOCOL_CMD_READ_FLASH: {
            /* ADDR = start word address, LEN = number of words to read */
            uint16_t count = req->len;
            if (count > (PROTOCOL_MAX_PAYLOAD / 2)) {
                count = PROTOCOL_MAX_PAYLOAD / 2;
            }
            uint16_t words[PROTOCOL_MAX_PAYLOAD / 2];
            icsp_status_t st = icsp_read_flash(req->addr, words, count);
            if (st == ICSP_OK) {
                for (int i = 0; i < count; i++) {
                    rsp_payload[i * 2]     = (uint8_t)(words[i] & 0xFF);
                    rsp_payload[i * 2 + 1] = (uint8_t)((words[i] >> 8) & 0xFF);
                }
                rsp_len = count * 2;
                status = PROTOCOL_STATUS_OK;
            } else {
                status = PROTOCOL_STATUS_ERR_CHIP;
            }
            break;
        }

        case PROTOCOL_CMD_WRITE_CFG: {
            /* Payload: [Addr: 2B] [Val: 2B] */
            if (req->len >= 4) {
                uint16_t addr = payload[0] | (payload[1] << 8);
                uint16_t val  = payload[2] | (payload[3] << 8);
                icsp_status_t st = icsp_write_config_word(addr, val);
                status = (st == ICSP_OK) ? PROTOCOL_STATUS_OK : PROTOCOL_STATUS_ERR_WRITE;
            } else {
                status = PROTOCOL_STATUS_ERR_PARAM;
            }
            break;
        }

        case PROTOCOL_CMD_READ_CFG: {
            pic_chip_info_t info;
            icsp_status_t st = icsp_read_configs(&info);
            if (st == ICSP_OK) {
                rsp_len = sizeof(info);
                memcpy(rsp_payload, &info, rsp_len);
                status = PROTOCOL_STATUS_OK;
            } else {
                status = PROTOCOL_STATUS_ERR_CHIP;
            }
            break;
        }

        case PROTOCOL_CMD_RESET_TARGET: {
            icsp_exit_progmode();
            status = PROTOCOL_STATUS_OK;
            break;
        }

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

/* CLI Text Mode Parser */
static void handle_cli_command(char *cmdline) {
    /* Strip trailing spaces and newlines */
    int len = strlen(cmdline);
    while (len > 0 && (cmdline[len - 1] == '\r' || cmdline[len - 1] == '\n' || cmdline[len - 1] == ' ')) {
        cmdline[--len] = '\0';
    }
    if (len == 0) return;

    if (strcasecmp(cmdline, "PING") == 0) {
        printf("PONG\r\n");
    } else if (strcasecmp(cmdline, "DETECT") == 0 || strcasecmp(cmdline, "ID") == 0) {
        pic_chip_info_t chip;
        icsp_status_t st = icsp_detect_chip(&chip);
        if (st == ICSP_OK) {
            printf("[OK] PIC Detected: DevID=0x%04X Rev=0x%02X\r\n", chip.dev_id, chip.rev_id);
            printf("     CONFIG1=0x%04X, CONFIG2=0x%04X\r\n", chip.config1, chip.config2);
            printf("     UserID=[0x%04X, 0x%04X, 0x%04X, 0x%04X]\r\n", chip.userid[0], chip.userid[1], chip.userid[2], chip.userid[3]);
        } else {
            printf("[ERR] PIC Not Found or Incompatible! Check wiring and power. Code=%d\r\n", st);
        }
    } else if (strcasecmp(cmdline, "ERASE") == 0) {
        printf("Erasing PIC16F1704 Flash & Config memory...\r\n");
        icsp_status_t st = icsp_bulk_erase();
        if (st == ICSP_OK) {
            printf("[OK] Bulk Erase Completed Successfully!\r\n");
        } else {
            printf("[ERR] Bulk Erase Failed! Code=%d\r\n", st);
        }
    } else if (strncasecmp(cmdline, "READ ", 5) == 0) {
        uint16_t addr = 0, count = 16;
        sscanf(cmdline + 5, "%hx %hx", &addr, &count);
        if (count > 64) count = 64;

        uint16_t buf[64];
        icsp_status_t st = icsp_read_flash(addr, buf, count);
        if (st == ICSP_OK) {
            printf("Address 0x%04X (%d words):\r\n", addr, count);
            for (int i = 0; i < count; i++) {
                printf("%04X ", buf[i]);
                if ((i + 1) % 8 == 0) printf("\r\n");
            }
            if (count % 8 != 0) printf("\r\n");
        } else {
            printf("[ERR] Read Flash Failed! Code=%d\r\n", st);
        }
    } else if (strcasecmp(cmdline, "CFG") == 0) {
        pic_chip_info_t chip;
        if (icsp_read_configs(&chip) == ICSP_OK) {
            printf("CONFIG1: 0x%04X\r\n", chip.config1);
            printf("CONFIG2: 0x%04X\r\n", chip.config2);
            printf("UserID:  %04X %04X %04X %04X\r\n", chip.userid[0], chip.userid[1], chip.userid[2], chip.userid[3]);
        } else {
            printf("[ERR] Read Configs Failed!\r\n");
        }
    } else if (strcasecmp(cmdline, "RESET") == 0) {
        icsp_exit_progmode();
        printf("[OK] Released MCLR. Target PIC is running.\r\n");
    } else if (strcasecmp(cmdline, "ONEKEY") == 0 || strcasecmp(cmdline, "BURN") == 0) {
        printf("Starting One-Key Offline Burn of S19 PIC Firmware...\r\n");
        LED_ON();
        icsp_status_t st = icsp_burn_default_firmware();
        if (st == ICSP_OK) {
            printf("[SUCCESS] S19 PIC Firmware Flashed & Verified 100%% OK!\r\n");
            LED_OFF();
        } else {
            printf("[FAIL] Flashing Failed! Error Code=%d\r\n", st);
            for (int i = 0; i < 6; i++) {
                LED_TOGGLE();
                icsp_delay_ms(150);
            }
            LED_OFF();
        }
    } else if (strcasecmp(cmdline, "HELP") == 0 || strcasecmp(cmdline, "?") == 0) {
        printf("\r\n=== STM32F103 PIC16F1704 Programmer CLI ===\r\n");
        printf("  PING              - Test serial link\r\n");
        printf("  ID / DETECT       - Read PIC16F1704 Device ID & Configs\r\n");
        printf("  ERASE             - Bulk erase PIC Flash & Config\r\n");
        printf("  READ <addr> <n>   - Read n words from Flash\r\n");
        printf("  CFG               - Read Configuration words & User ID\r\n");
        printf("  ONEKEY / BURN     - Flash embedded S19 PIC firmware & verify\r\n");
        printf("  RESET             - Release MCLR and let PIC run\r\n");
        printf("  HELP              - Show this menu\r\n\r\n");
    } else {
        printf("Unknown command: '%s'. Type HELP for menu.\r\n", cmdline);
    }
}

void protocol_init(void) {
    bin_rx_idx = 0;
    bin_expected_len = 0;
    cli_idx = 0;
}

void protocol_process(void) {
    uint8_t ch;
    while (uart_read_byte(&ch)) {
        /* Check if currently accumulating a binary packet */
        if (bin_rx_idx > 0 || ch == PROTOCOL_REQ_SYNC0) {
            bin_rx_buf[bin_rx_idx++] = ch;

            if (bin_rx_idx == 1 && bin_rx_buf[0] != PROTOCOL_REQ_SYNC0) {
                bin_rx_idx = 0; // Not sync0
            } else if (bin_rx_idx == 2 && bin_rx_buf[1] != PROTOCOL_REQ_SYNC1) {
                /* Not sync1, might be an ASCII character */
                bin_rx_idx = 0;
            } else if (bin_rx_idx == sizeof(protocol_header_t)) {
                protocol_header_t *hdr = (protocol_header_t *)bin_rx_buf;
                if (hdr->len > PROTOCOL_MAX_PAYLOAD) {
                    /* Corrupted frame, reset */
                    bin_rx_idx = 0;
                } else {
                    bin_expected_len = sizeof(protocol_header_t) + hdr->len + 2; // + CRC
                }
            } else if (bin_rx_idx > sizeof(protocol_header_t) && bin_rx_idx == bin_expected_len) {
                /* Complete packet received, verify CRC */
                protocol_header_t *hdr = (protocol_header_t *)bin_rx_buf;
                uint16_t rx_crc = bin_rx_buf[bin_expected_len - 2] | (bin_rx_buf[bin_expected_len - 1] << 8);
                uint16_t calc_crc = protocol_crc16(bin_rx_buf, sizeof(protocol_header_t) + hdr->len);

                if (rx_crc == calc_crc) {
                    handle_binary_packet(hdr, bin_rx_buf + sizeof(protocol_header_t));
                } else {
                    send_binary_response(hdr->cmd, hdr->seq, PROTOCOL_STATUS_ERR_CRC, NULL, 0);
                }
                bin_rx_idx = 0;
                bin_expected_len = 0;
                continue;
            }
            if (bin_rx_idx > 0) {
                continue; // Absorbed into binary packet state machine
            }
        }

        /* CLI ASCII line accumulator */
        if (ch == '\r' || ch == '\n') {
            if (cli_idx > 0) {
                cli_line[cli_idx] = '\0';
                handle_cli_command(cli_line);
                cli_idx = 0;
            }
        } else if (ch == '\b' || ch == 0x7F) { // Backspace
            if (cli_idx > 0) {
                cli_idx--;
            }
        } else {
            if (cli_idx < (CLI_LINE_MAX - 1)) {
                cli_line[cli_idx++] = (char)ch;
            }
        }
    }
}
