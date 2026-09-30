/**
 * @file    icsp.c
 * @brief   PIC16F1704 低压 ICSP (LVP) 驱动实现
 * @author  TDX33029 / AntMiner Project
 *
 * 协议依据: Microchip DS40001683B "PIC16(L)F170X Memory Programming Specification"
 *
 * 与旧版 (firmware/pic16f1704_icsp.c) 的差异:
 *  1. 配置字/UserID 写入顺序修正: Load Configuration 每次执行都会把地址复位到
 *     0x8000 并载入数据闩锁 (DS40001683B §4.3.1), 因此正确顺序为
 *     "Load Config(带值) -> Increment 到目标 -> Begin", 旧版先递增再发
 *     Load Config 会把数据写到 0x8000 (UserID0)。
 *  2. 行写入补齐 0x3FFF: 未载入的闩锁保留上一次内容, 不补齐可能把旧行数据
 *     写进新行 (闩锁跨 Begin 保持, DS40001683B §5.0)。
 *  3. TDLY 加大到 2us (规范下限 1us)。
 *  4. 增加 F1704 家族器件名识别与 CP/LVP 配置位诊断。
 */

#include "icsp.h"
#include "default_firmware.h"

/* ========================================================================= */
/*                              延时系统 (DWT)                               */
/* ========================================================================= */
static uint32_t cpu_hz = 72000000;

void icsp_delay_init(void)
{
    /* 使能 Cortex-M3 DWT 周期计数器 */
    CoreDebug->DEMCR |= CoreDebug_DEMCR_TRCENA_Msk;
    DWT->CTRL |= DWT_CTRL_CYCCNTENA_Msk;
    DWT->CYCCNT = 0;
    cpu_hz = (SystemCoreClock != 0U) ? SystemCoreClock : 72000000U;
}

void icsp_delay_us(uint32_t us)
{
    uint32_t start = DWT->CYCCNT;
    uint32_t ticks = us * (cpu_hz / 1000000U);
    while ((DWT->CYCCNT - start) < ticks) {
        /* busy wait */
    }
}

void icsp_delay_ms(uint32_t ms)
{
    while (ms--) {
        icsp_delay_us(1000U);
    }
}

/* ========================================================================= */
/*                              GPIO 初始化                                  */
/* ========================================================================= */
void icsp_gpio_init(void)
{
    RCC->APB2ENR |= RCC_APB2ENR_IOPAEN | RCC_APB2ENR_IOPBEN | RCC_APB2ENR_IOPCEN;

    /*
     * PA0: 推挽输出 50MHz (MCLR)  -> CRL[3:0]   = 0x3
     * PA1: 推挽输出 50MHz (DAT)   -> CRL[7:4]   = 0x3
     * PA2: 推挽输出 50MHz (CLK)   -> CRL[11:8]  = 0x3
     * PA3: 推挽输出 50MHz (VDD_EN)-> CRL[15:12] = 0x3
     */
    GPIOA->CRL &= ~0x0000FFFFU;
    GPIOA->CRL |=  0x00003333U;

    /* 默认态: MCLR=1(运行), CLK=0, DAT=0, VDD_EN=1(使能目标供电) */
    MCLR_HIGH();
    CLK_LOW();
    DAT_LOW();
    GPIOA->BSRR = (1U << PIN_VDD_EN);

    /* PC13 (状态LED): 推挽输出 2MHz -> CRH[23:20] = 0x2 */
    GPIOC->CRH &= ~(0xFU << ((PIN_LED - 8U) * 4U));
    GPIOC->CRH |=  (0x2U << ((PIN_LED - 8U) * 4U));
    LED_OFF();

    /* PB9 (KEY_TRIG): 输入上拉 -> CRH[7:4] = 0x8 */
    GPIOB->CRH &= ~(0xFU << ((PIN_KEY - 8U) * 4U));
    GPIOB->CRH |=  (0x8U << ((PIN_KEY - 8U) * 4U));
    GPIOB->BSRR = (1U << PIN_KEY);
}

void icsp_dat_set_output(void)
{
    /* PA1: 推挽输出 50MHz */
    GPIOA->CRL = (GPIOA->CRL & ~(0xFU << (PIN_DAT * 4U))) | (0x3U << (PIN_DAT * 4U));
}

void icsp_dat_set_input(void)
{
    /* PA1: 输入上拉, ODR=1 决定上拉 */
    GPIOA->CRL = (GPIOA->CRL & ~(0xFU << (PIN_DAT * 4U))) | (0x8U << (PIN_DAT * 4U));
    GPIOA->BSRR = (1U << PIN_DAT);
}

/* ========================================================================= */
/*                            底层位收发                                      */
/* ========================================================================= */
void icsp_send_bits(uint32_t data, uint8_t nbits)
{
    icsp_dat_set_output();
    for (uint8_t i = 0U; i < nbits; i++) {
        if ((data & 1U) != 0U) {
            DAT_HIGH();
        } else {
            DAT_LOW();
        }
        icsp_delay_us(ICSP_TCK_US);
        CLK_HIGH();
        icsp_delay_us(ICSP_TCK_US);
        CLK_LOW();
        data >>= 1;
    }
    DAT_LOW();
}

uint32_t icsp_read_bits(uint8_t nbits)
{
    uint32_t val = 0U;
    icsp_dat_set_input();
    icsp_delay_us(ICSP_TCK_US);

    /* 设备在第一个下降沿后输出数据, 上升沿采样 (DS40001683B §4.3.4) */
    for (uint8_t i = 0U; i < nbits; i++) {
        CLK_HIGH();
        icsp_delay_us(ICSP_TCK_US);
        if (DAT_READ()) {
            val |= (1UL << i);
        }
        CLK_LOW();
        icsp_delay_us(ICSP_TCK_US);
    }

    icsp_dat_set_output();
    DAT_LOW();
    return val;
}

void icsp_send_cmd(uint8_t cmd)
{
    icsp_send_bits(cmd & 0x3FU, 6);
    icsp_delay_us(ICSP_TDLY_US);
}

void icsp_load_payload(uint16_t word)
{
    /* 16bit 帧: Start(0) + 14bit数据(LSb先) + Stop(0) */
    uint32_t payload = ((uint32_t)(word & 0x3FFFU)) << 1;
    icsp_send_bits(payload, 16);
    icsp_delay_us(ICSP_TDLY_US);
}

uint16_t icsp_read_payload(void)
{
    /* 16bit 帧: Bit0=Start(0), Bit1..14=数据, Bit15=Stop(0) */
    uint32_t raw = icsp_read_bits(16);
    return (uint16_t)((raw >> 1) & 0x3FFFU);
}

/* ========================================================================= */
/*                            中层 ICSP 操作                                  */
/* ========================================================================= */
/*
 * LVP 进模 (DS40001683B §4.2 + 时序图 8-8/8-9):
 *  1. MCLR 拉低 (时钟/数据线保持低)
 *  2. 等待 >= TENTH (250us)
 *  3. 发送 32bit 密钥 "MCHP"(0x4D434850), LSb 先发, 时序图标注共 33 个时钟
 *  4. MCLR 在整个编程/校验期间保持低
 * 前提: 目标 CONFIG2.LVP=1 (出厂新片默认为 1)
 */
icsp_status_t icsp_enter_progmode(void)
{
    CLK_LOW();
    DAT_LOW();
    icsp_dat_set_output();

    MCLR_LOW();
    icsp_delay_us(ICSP_TENTH_US);

    icsp_send_bits(ICSP_LVP_KEY_BYTE0, 8);  /* 'P' */
    icsp_send_bits(ICSP_LVP_KEY_BYTE1, 8);  /* 'H' */
    icsp_send_bits(ICSP_LVP_KEY_BYTE2, 8);  /* 'C' */
    icsp_send_bits(ICSP_LVP_KEY_BYTE3, 8);  /* 'M' */
    icsp_send_bits(0, 1);                   /* 第33个时钟 */

    icsp_delay_us(ICSP_TDLY_US);
    return ICSP_OK;
}

void icsp_exit_progmode(void)
{
    CLK_LOW();
    DAT_LOW();
    icsp_dat_set_output();

    /* 释放复位: MCLR 拉高, 目标 PIC 开始运行 */
    MCLR_HIGH();
    icsp_delay_ms(ICSP_EXIT_MS);
}

void icsp_reset_pointer(void)
{
    icsp_send_cmd(CMD_RESET_ADDRESS);
}

void icsp_load_config(void)
{
    /* 地址 -> 0x8000, 闩锁载入 0x0000 (读操作用) */
    icsp_send_cmd(CMD_LOAD_CONFIG);
    icsp_load_payload(0x0000U);
}

void icsp_inc_pointer(uint16_t steps)
{
    while (steps-- != 0U) {
        icsp_send_cmd(CMD_INC_ADDRESS);
    }
}

uint16_t icsp_read_word(void)
{
    icsp_send_cmd(CMD_READ_PROG_DATA);
    return icsp_read_payload();
}

/* ========================================================================= */
/*                       高层 PIC16F1704 操作                                 */
/* ========================================================================= */

/* DS40001683B Table 3-1 器件ID字 -> 型号名 */
const char *icsp_devid_name(uint16_t raw_id)
{
    switch (raw_id & PIC16F1704_DEVID_MASK) {
        case PIC16F1704_DEVID: /* 0x3040: 1704/05/08/09 家族掩码基值 */
            switch (raw_id) {
                case DEVID_PIC16F1704:  return "PIC16F1704";
                case DEVID_PIC16LF1704: return "PIC16LF1704";
                case DEVID_PIC16F1708:  return "PIC16F1708";
                case DEVID_PIC16LF1708: return "PIC16LF1708";
                case DEVID_PIC16F1705:  return "PIC16F1705";
                case DEVID_PIC16LF1705: return "PIC16LF1705";
                case DEVID_PIC16F1709:  return "PIC16F1709";
                case DEVID_PIC16LF1709: return "PIC16LF1709";
                default:                return "PIC16F170x";
            }
        default:
            break;
    }
    return "Unknown";
}

icsp_status_t icsp_detect_chip(pic_chip_info_t *info)
{
    if (info == NULL) {
        return ICSP_ERR_PARAM;
    }

    icsp_enter_progmode();
    icsp_reset_pointer();
    icsp_load_config();     /* PC = 0x8000 */
    icsp_inc_pointer(6);    /* PC = 0x8006 (Device ID) */

    uint16_t raw_id = icsp_read_word();
    info->dev_id = raw_id;
    info->rev_id = raw_id & 0x001FU;

    /* 读 CONFIG1 (0x8007) / CONFIG2 (0x8008) */
    icsp_inc_pointer(1);
    info->config1 = icsp_read_word();
    icsp_inc_pointer(1);
    info->config2 = icsp_read_word();

    /* 读 User IDs (0x8000 - 0x8003) */
    icsp_reset_pointer();
    icsp_load_config();
    for (int i = 0; i < 4; i++) {
        info->userid[i] = icsp_read_word();
        icsp_inc_pointer(1);
    }

    icsp_exit_progmode();

    /* 诊断位: CONFIG1.bit7=CP (0=保护), CONFIG2.bit0=LVP (1=允许LVP) */
    info->cp_on = ((info->config1 & CFG1_CP_BIT) == 0U) ? 1U : 0U;
    info->lvp_on = ((info->config2 & CFG2_LVP_BIT) != 0U) ? 1U : 0U;

    /* F1704/05/08/09 家族掩码基值 0x3040 */
    if ((info->dev_id & PIC16F1704_DEVID_MASK) == PIC16F1704_DEVID) {
        info->is_valid_pic16f1704 = true;
        return ICSP_OK;
    }

    info->is_valid_pic16f1704 = false;
    return ((raw_id == 0x3FFFU) || (raw_id == 0x0000U)) ? ICSP_ERR_NOT_CONNECTED
                                                        : ICSP_ERR_WRONG_CHIP;
}

/*
 * 整片擦除 (DS40001683B §4.3.9):
 * PC 在 0x8000-0x8008 时: 程序存储器 + 配置字 + User ID 全部擦除;
 * CP 代码保护位对本命令无影响 (受保护芯片也可擦除解锁)。
 * 出厂校准字 (0x8009+) 不参与擦除。
 */
icsp_status_t icsp_bulk_erase(void)
{
    icsp_enter_progmode();
    icsp_reset_pointer();
    icsp_load_config();     /* PC = 0x8000 */
    icsp_send_cmd(CMD_BULK_ERASE);
    icsp_delay_ms(ICSP_TERAB_MS);   /* TERAB max 5ms */
    icsp_exit_progmode();
    return ICSP_OK;
}

icsp_status_t icsp_read_flash(uint16_t start_addr, uint16_t *buf, uint16_t count)
{
    if ((buf == NULL) || ((uint32_t)start_addr + count) > PIC16F1704_FLASH_WORDS) {
        return ICSP_ERR_PARAM;
    }

    icsp_enter_progmode();
    icsp_reset_pointer();
    if (start_addr > 0U) {
        icsp_inc_pointer(start_addr);
    }

    for (uint16_t i = 0U; i < count; i++) {
        buf[i] = icsp_read_word();
        icsp_inc_pointer(1);
    }

    icsp_exit_progmode();
    return ICSP_OK;
}

/*
 * 行写入 (DS40001683B §5.0 图5-4 多字编程周期):
 *  闩锁按行对齐, 一次 Begin 编程整行, TPINT(max 2.5ms) 覆盖整行;
 *  写入不能跨行。未载入的闩锁保留旧内容, 因此不足 32 字时补 0x3FFF。
 */
icsp_status_t icsp_write_row(uint16_t row_addr, const uint16_t *words, uint8_t count)
{
    if ((words == NULL) || (count == 0U) || (count > PIC16F1704_ROW_WORDS)) {
        return ICSP_ERR_PARAM;
    }
    if ((row_addr % PIC16F1704_ROW_WORDS) != 0U) {
        return ICSP_ERR_PARAM;  /* 必须行对齐 */
    }
    if ((row_addr + count) > PIC16F1704_FLASH_WORDS) {
        return ICSP_ERR_PARAM;
    }

    icsp_enter_progmode();
    icsp_reset_pointer();
    if (row_addr > 0U) {
        icsp_inc_pointer(row_addr);
    }

    /* 载入写闩锁 (载入与载入之间递增地址) */
    for (uint8_t i = 0U; i < PIC16F1704_ROW_WORDS; i++) {
        uint16_t w = (i < count) ? words[i] : 0x3FFFU;
        icsp_send_cmd(CMD_LOAD_PROG_DATA);
        icsp_load_payload(w);
        if (i < (PIC16F1704_ROW_WORDS - 1U)) {
            icsp_send_cmd(CMD_INC_ADDRESS);
        }
    }

    /* 一次 Begin 编程整行 */
    icsp_send_cmd(CMD_BEGIN_PROG);
    icsp_delay_ms(ICSP_TPINT_WORD_MS);
    icsp_send_cmd(CMD_INC_ADDRESS);

    icsp_exit_progmode();
    return ICSP_OK;
}

/*
 * 写配置字 / User ID (DS40001683B §4.3.1):
 * Load Configuration 每次执行都会把地址复位到 0x8000 并载入闩锁,
 * 因此正确顺序: Load Config(带值) -> Increment 到目标 -> Begin。
 * 仅允许 0x8000-0x8008 (0x8009 起为出厂校准字, 禁止触碰)。
 */
icsp_status_t icsp_write_config_word(uint16_t addr, uint16_t value)
{
    if ((addr < PIC16F1704_ADDR_USERID0) || (addr > PIC16F1704_ADDR_CONFIG2)) {
        return ICSP_ERR_PARAM;
    }

    icsp_enter_progmode();
    icsp_reset_pointer();

    /* Load Config 载入目标值, 地址此时 = 0x8000 */
    icsp_send_cmd(CMD_LOAD_CONFIG);
    icsp_load_payload(value & 0x3FFFU);

    if (addr > PIC16F1704_ADDR_USERID0) {
        icsp_inc_pointer((uint16_t)(addr - PIC16F1704_ADDR_USERID0));
    }

    icsp_send_cmd(CMD_BEGIN_PROG);
    icsp_delay_ms(ICSP_TPINT_CFG_MS);   /* 配置字 TPINT max 5ms */

    icsp_exit_progmode();
    return ICSP_OK;
}

icsp_status_t icsp_read_configs(pic_chip_info_t *info)
{
    if (info == NULL) {
        return ICSP_ERR_PARAM;
    }

    icsp_enter_progmode();
    icsp_reset_pointer();
    icsp_load_config();     /* PC = 0x8000 */

    for (int i = 0; i < 4; i++) {
        info->userid[i] = icsp_read_word();
        icsp_inc_pointer(1);
    }

    icsp_inc_pointer(2);    /* 0x8004/8005 保留 -> 0x8006 */
    uint16_t raw_id = icsp_read_word();
    info->dev_id = raw_id;
    info->rev_id = raw_id & 0x001FU;

    icsp_inc_pointer(1);    /* 0x8007 */
    info->config1 = icsp_read_word();

    icsp_inc_pointer(1);    /* 0x8008 */
    info->config2 = icsp_read_word();

    icsp_exit_progmode();

    info->cp_on = ((info->config1 & CFG1_CP_BIT) == 0U) ? 1U : 0U;
    info->lvp_on = ((info->config2 & CFG2_LVP_BIT) != 0U) ? 1U : 0U;
    info->is_valid_pic16f1704 =
        ((info->dev_id & PIC16F1704_DEVID_MASK) == PIC16F1704_DEVID);
    return ICSP_OK;
}

icsp_status_t icsp_verify_flash(uint16_t start_addr, const uint16_t *expected,
                                uint16_t count, uint16_t *err_addr, uint16_t *read_val)
{
    if ((expected == NULL) || ((uint32_t)start_addr + count) > PIC16F1704_FLASH_WORDS) {
        return ICSP_ERR_PARAM;
    }

    icsp_enter_progmode();
    icsp_reset_pointer();
    if (start_addr > 0U) {
        icsp_inc_pointer(start_addr);
    }

    for (uint16_t i = 0U; i < count; i++) {
        uint16_t r = icsp_read_word();
        if (r != (expected[i] & 0x3FFFU)) {
            if (err_addr != NULL) {
                *err_addr = (uint16_t)(start_addr + i);
            }
            if (read_val != NULL) {
                *read_val = r;
            }
            icsp_exit_progmode();
            return ICSP_ERR_VERIFY_FAILED;
        }
        icsp_inc_pointer(1);
    }

    icsp_exit_progmode();
    return ICSP_OK;
}

/* ========================================================================= */
/*                          脱机一键烧录                                      */
/* ========================================================================= */
/*
 * 流程: 检测 -> 整片擦除 -> 逐行写入 -> 写配置字 -> 校验Flash -> 校验配置字
 * 注意: 内嵌镜像 default_firmware.c 为演示占位固件, 替换真实 S19Hyd 固件请
 *       用上位机刷 hex, 或用 tools/hex2c.py 生成后替换该文件重新编译。
 */
icsp_status_t icsp_burn_default_firmware(void)
{
    pic_chip_info_t chip;
    icsp_status_t status;

    /* 1. 检测芯片 */
    status = icsp_detect_chip(&chip);
    if (status != ICSP_OK) {
        return status;
    }

    /* 2. 整片擦除 */
    status = icsp_bulk_erase();
    if (status != ICSP_OK) {
        return status;
    }
    icsp_delay_ms(10U);

    /* 3. 逐行写入程序存储器 */
    uint16_t num_rows = (uint16_t)(DEFAULT_FW_WORD_COUNT / PIC16F1704_ROW_WORDS);
    if ((DEFAULT_FW_WORD_COUNT % PIC16F1704_ROW_WORDS) != 0U) {
        num_rows++;
    }

    for (uint16_t r = 0U; r < num_rows; r++) {
        uint16_t addr = (uint16_t)(r * PIC16F1704_ROW_WORDS);
        uint8_t count = PIC16F1704_ROW_WORDS;
        if ((addr + count) > DEFAULT_FW_WORD_COUNT) {
            count = (uint8_t)(DEFAULT_FW_WORD_COUNT - addr);
        }

        status = icsp_write_row(addr, &default_fw_words[addr], count);
        if (status != ICSP_OK) {
            return status;
        }
    }

    /* 4. 写配置字 */
    status = icsp_write_config_word(PIC16F1704_ADDR_CONFIG1, DEFAULT_FW_CONFIG1);
    if (status != ICSP_OK) {
        return status;
    }

    status = icsp_write_config_word(PIC16F1704_ADDR_CONFIG2, DEFAULT_FW_CONFIG2);
    if (status != ICSP_OK) {
        return status;
    }

    /* 5. 校验 Flash */
    uint16_t err_addr = 0U;
    uint16_t read_val = 0U;
    status = icsp_verify_flash(0U, default_fw_words, DEFAULT_FW_WORD_COUNT,
                               &err_addr, &read_val);
    if (status != ICSP_OK) {
        return status;
    }

    /* 6. 校验配置字 */
    pic_chip_info_t verify_chip;
    status = icsp_read_configs(&verify_chip);
    if (status != ICSP_OK) {
        return status;
    }

    if ((verify_chip.config1 != (DEFAULT_FW_CONFIG1 & 0x3FFFU)) ||
        (verify_chip.config2 != (DEFAULT_FW_CONFIG2 & 0x3FFFU))) {
        return ICSP_ERR_VERIFY_FAILED;
    }

    /* 完成, 释放芯片运行 */
    icsp_exit_progmode();
    return ICSP_OK;
}
