/**
 * @file pic16f1704_icsp.c
 * @brief PIC16F1704 Low-Voltage ICSP Driver Implementation
 * @author TDX33029 / AntMiner Project
 */

#include "pic16f1704_icsp.h"
#include "default_firmware.h"

/* ========================================================================= */
/*                              Delay System                                 */
/* ========================================================================= */
static uint32_t cpu_hz = 72000000;

void icsp_delay_init(void) {
    /* Enable DWT Cycle Counter on Cortex-M3 */
    CoreDebug->DEMCR |= CoreDebug_DEMCR_TRCENA_Msk;
    DWT->CTRL |= DWT_CTRL_CYCCNTENA_Msk;
    DWT->CYCCNT = 0;
    cpu_hz = SystemCoreClock ? SystemCoreClock : 72000000;
}

void icsp_delay_us(uint32_t us) {
    uint32_t start = DWT->CYCCNT;
    uint32_t ticks = us * (cpu_hz / 1000000);
    while ((DWT->CYCCNT - start) < ticks);
}

void icsp_delay_ms(uint32_t ms) {
    while (ms--) {
        icsp_delay_us(1000);
    }
}

/* ========================================================================= */
/*                           GPIO Pin Control                                */
/* ========================================================================= */
void icsp_pins_release_hiz(void) {
    /* PA1(DAT), PA2(CLK) 设为浮空输入模式 (0x4), 高阻态不拉低目标板总线 */
    GPIOA->CRL = (GPIOA->CRL & ~0x00000FF0) | 0x00000440;
}

void icsp_pins_claim_outputs(void) {
    /* PA1(DAT), PA2(CLK) 设为推挽输出 50MHz (0x3) */
    GPIOA->CRL = (GPIOA->CRL & ~0x00000FF0) | 0x00000330;
}

void icsp_gpio_init(void) {
    /* Enable GPIOA, GPIOB, GPIOC clocks */
    RCC->APB2ENR |= RCC_APB2ENR_IOPAEN | RCC_APB2ENR_IOPBEN | RCC_APB2ENR_IOPCEN;

    /* 
     * Configure GPIOA:
     * PA0: Output Push-Pull 50MHz (MCLR)  -> CRL[3:0]   = 0x3
     * PA1: Floating Input (DAT)           -> CRL[7:4]   = 0x4 (空闲高阻态)
     * PA2: Floating Input (CLK)           -> CRL[11:8]  = 0x4 (空闲高阻态)
     * PA3: Output Push-Pull 50MHz (VDD_EN)-> CRL[15:12] = 0x3
     */
    GPIOA->CRL &= ~0x0000FFFF;
    GPIOA->CRL |=  0x00003443;

    /* Default state: MCLR=1 (not in reset), VDD_EN=1 (target powered), DAT/CLK floating Hi-Z */
    MCLR_HIGH();
    GPIOA->BSRR = (1 << PIN_VDD_EN); // Enable target VDD

    /* Configure PC13 (Status LED): Output Push-Pull 2MHz -> CRH[23:20] = 0x2 */
    GPIOC->CRH &= ~(0xF << ((PIN_LED - 8) * 4));
    GPIOC->CRH |=  (0x2 << ((PIN_LED - 8) * 4));
    LED_OFF();

    /* Configure PB9 (KEY_TRIG): Input with pull-up -> CRH[7:4] = 0x8 */
    GPIOB->CRH &= ~(0xF << ((PIN_KEY - 8) * 4));
    GPIOB->CRH |=  (0x8 << ((PIN_KEY - 8) * 4));
    GPIOB->BSRR = (1 << PIN_KEY); // Pull-up
}

void icsp_dat_set_output(void) {
    /* PA1: Output 50MHz Push-Pull -> CRL[7:4] = 0x3 */
    GPIOA->CRL = (GPIOA->CRL & ~(0xF << (PIN_DAT * 4))) | (0x3 << (PIN_DAT * 4));
}

void icsp_dat_set_input(void) {
    /* PA1: Input with Pull-Up -> CRL[7:4] = 0x8, ODR=1 */
    GPIOA->CRL = (GPIOA->CRL & ~(0xF << (PIN_DAT * 4))) | (0x8 << (PIN_DAT * 4));
    GPIOA->BSRR = (1 << PIN_DAT); // Enable pull-up
}

/* ========================================================================= */
/*                          Low Level Bit Banging                            */
/* ========================================================================= */
void icsp_send_bits(uint32_t data, uint8_t nbits) {
    icsp_dat_set_output();
    for (uint8_t i = 0; i < nbits; i++) {
        if (data & 1) {
            DAT_HIGH();
        } else {
            DAT_LOW();
        }
        icsp_delay_us(1);
        CLK_HIGH();
        icsp_delay_us(1);
        CLK_LOW();
        data >>= 1;
    }
    DAT_LOW();
}

uint32_t icsp_read_bits(uint8_t nbits) {
    uint32_t val = 0;
    icsp_dat_set_input();
    icsp_delay_us(1);

    for (uint8_t i = 0; i < nbits; i++) {
        CLK_HIGH();
        icsp_delay_us(1);
        if (DAT_READ()) {
            val |= (1UL << i);
        }
        CLK_LOW();
        icsp_delay_us(1);
    }

    icsp_dat_set_output();
    DAT_LOW();
    return val;
}

void icsp_send_cmd(uint8_t cmd) {
    icsp_send_bits(cmd & 0x3F, 6);
    icsp_delay_us(1);
}

void icsp_load_payload(uint16_t word) {
    /* 16-bit format: Start bit (0) + 14-bit data + Stop bit (0) */
    uint32_t payload = ((uint32_t)(word & 0x3FFF)) << 1;
    icsp_send_bits(payload, 16);
    icsp_delay_us(1);
}

uint16_t icsp_read_payload(void) {
    /* 16-bit format: Bit0=Start(0), Bits1..14=Data, Bit15=Stop(0) */
    uint32_t raw = icsp_read_bits(16);
    return (uint16_t)((raw >> 1) & 0x3FFF);
}

/* ========================================================================= */
/*                         Mid Level ICSP Functions                          */
/* ========================================================================= */
icsp_status_t icsp_enter_progmode(void) {
    /* 
     * Low-Voltage Programming (LVP) Entry:
     * 1. MCLR goes LOW
     * 2. Wait >= 300us
     * 3. Send 32-bit key "MCHP" (0x4D434850) LSb first: 0x50, 0x48, 0x43, 0x4D
     * 4. Send 33rd bit (0)
     * 5. Wait >= 300us
     */
    /* 1. 先拉低 MCLR, 让目标 PIC 立即进入硬件复位状态 (所有引脚变为高阻输入, 防止冲突) */
    MCLR_LOW();
    icsp_delay_us(50);

    /* 2. 目标 PIC 处于复位态后, 占用 CLK 和 DAT 引脚为推挽输出 0V */
    icsp_pins_claim_outputs();
    CLK_LOW();
    DAT_LOW();

    /* 3. 等待 >= TENTH (250us) */
    icsp_delay_us(300);

    /* 4. 发送 32bit 进模密钥 "MCHP" (LSb 先发) + 第 33 个时钟 */
    icsp_send_bits(ICSP_LVP_KEY_BYTE0, 8); // 'P'
    icsp_send_bits(ICSP_LVP_KEY_BYTE1, 8); // 'H'
    icsp_send_bits(ICSP_LVP_KEY_BYTE2, 8); // 'C'
    icsp_send_bits(ICSP_LVP_KEY_BYTE3, 8); // 'M'
    icsp_send_bits(0, 1);                  // 33rd clock bit

    icsp_delay_us(350);
    return ICSP_OK;
}

void icsp_exit_progmode(void) {
    /* 1. 退出前先释放 CLK 和 DAT 为浮空输入高阻态, 避免在目标 PIC 运行时拉低目标总线 */
    icsp_pins_release_hiz();

    /* 2. Release reset: MCLR = HIGH */
    MCLR_HIGH();
    icsp_delay_ms(15);
}

void icsp_reset_pointer(void) {
    icsp_send_cmd(CMD_RESET_ADDRESS);
    icsp_delay_us(2);
}

void icsp_load_config(void) {
    icsp_send_cmd(CMD_LOAD_CONFIG);
    icsp_load_payload(0x0000);
    icsp_delay_us(2);
}

void icsp_inc_pointer(uint16_t steps) {
    while (steps--) {
        icsp_send_cmd(CMD_INC_ADDRESS);
        icsp_delay_us(1);
    }
}

uint16_t icsp_read_word(void) {
    icsp_send_cmd(CMD_READ_PROG_DATA);
    return icsp_read_payload();
}

/* ========================================================================= */
/*                      High Level PIC16F1704 Operations                     */
/* ========================================================================= */
icsp_status_t icsp_detect_chip(pic_chip_info_t *info) {
    if (!info) return ICSP_ERR_PARAM;

    icsp_enter_progmode();
    icsp_reset_pointer();
    icsp_load_config();     // PC = 0x8000
    icsp_inc_pointer(6);    // PC = 0x8006 (Device ID)

    uint16_t raw_id = icsp_read_word();
    info->dev_id = raw_id & PIC16F1704_DEVID_MASK;
    info->rev_id = raw_id & 0x001F;

    /* Read CONFIG1 (0x8007) and CONFIG2 (0x8008) */
    icsp_inc_pointer(1); // 0x8007
    info->config1 = icsp_read_word();
    icsp_inc_pointer(1); // 0x8008
    info->config2 = icsp_read_word();

    /* Read User IDs (0x8000 - 0x8003) */
    icsp_reset_pointer();
    icsp_load_config(); // 0x8000
    for (int i = 0; i < 4; i++) {
        info->userid[i] = icsp_read_word();
        icsp_inc_pointer(1);
    }

    icsp_exit_progmode();

    /* Check if detected chip matches PIC16F1704 family */
    if (info->dev_id == PIC16F1704_DEVID || info->dev_id == 0x3040 || info->dev_id == 0x3050) {
        info->is_valid_pic16f1704 = true;
        return ICSP_OK;
    }

    info->is_valid_pic16f1704 = false;
    return (raw_id == 0x3FFF || raw_id == 0x0000) ? ICSP_ERR_NOT_CONNECTED : ICSP_ERR_WRONG_CHIP;
}

icsp_status_t icsp_bulk_erase(void) {
    icsp_enter_progmode();
    icsp_reset_pointer();
    icsp_load_config();     // PC = 0x8000
    icsp_send_cmd(CMD_BULK_ERASE);
    icsp_delay_ms(12);      // TERAB = 10ms typical
    icsp_exit_progmode();
    return ICSP_OK;
}

icsp_status_t icsp_read_flash(uint16_t start_addr, uint16_t *buf, uint16_t count) {
    if (!buf || (start_addr + count) > PIC16F1704_FLASH_WORDS) {
        return ICSP_ERR_PARAM;
    }

    icsp_enter_progmode();
    icsp_reset_pointer();
    if (start_addr > 0) {
        icsp_inc_pointer(start_addr);
    }

    for (uint16_t i = 0; i < count; i++) {
        buf[i] = icsp_read_word();
        icsp_inc_pointer(1);
    }

    icsp_exit_progmode();
    return ICSP_OK;
}

icsp_status_t icsp_write_row(uint16_t row_addr, const uint16_t *words, uint8_t count) {
    if (!words || count == 0 || count > PIC16F1704_ROW_WORDS) {
        return ICSP_ERR_PARAM;
    }

    icsp_enter_progmode();
    icsp_reset_pointer();
    if (row_addr > 0) {
        icsp_inc_pointer(row_addr);
    }

    /* Load write latches */
    for (uint8_t i = 0; i < count; i++) {
        icsp_send_cmd(CMD_LOAD_PROG_DATA);
        icsp_load_payload(words[i]);

        if (i < (count - 1)) {
            icsp_send_cmd(CMD_INC_ADDRESS);
        }
    }

    /* Trigger internal programming of the row */
    icsp_send_cmd(CMD_BEGIN_PROG);
    icsp_delay_ms(4); // TPINT = 2.5ms typical, 4ms is safe margin
    icsp_send_cmd(CMD_INC_ADDRESS);

    icsp_exit_progmode();
    return ICSP_OK;
}

icsp_status_t icsp_write_config_word(uint16_t addr, uint16_t value) {
    icsp_enter_progmode();
    icsp_reset_pointer();
    icsp_load_config(); // PC = 0x8000

    if (addr > 0x8000) {
        icsp_inc_pointer(addr - 0x8000);
    }

    icsp_send_cmd(CMD_LOAD_CONFIG);
    icsp_load_payload(value & 0x3FFF);

    icsp_send_cmd(CMD_BEGIN_PROG);
    icsp_delay_ms(6); // TPINT for config words = 5ms typical

    icsp_exit_progmode();
    return ICSP_OK;
}

icsp_status_t icsp_read_configs(pic_chip_info_t *info) {
    if (!info) return ICSP_ERR_PARAM;

    icsp_enter_progmode();
    icsp_reset_pointer();
    icsp_load_config(); // 0x8000

    for (int i = 0; i < 4; i++) {
        info->userid[i] = icsp_read_word();
        icsp_inc_pointer(1);
    }

    icsp_inc_pointer(2); // Move to 0x8006
    uint16_t raw_id = icsp_read_word();
    info->dev_id = raw_id & PIC16F1704_DEVID_MASK;
    info->rev_id = raw_id & 0x001F;

    icsp_inc_pointer(1); // 0x8007
    info->config1 = icsp_read_word();

    icsp_inc_pointer(1); // 0x8008
    info->config2 = icsp_read_word();

    icsp_exit_progmode();
    return ICSP_OK;
}

icsp_status_t icsp_verify_flash(uint16_t start_addr, const uint16_t *expected, uint16_t count, uint16_t *err_addr, uint16_t *read_val) {
    if (!expected || (start_addr + count) > PIC16F1704_FLASH_WORDS) {
        return ICSP_ERR_PARAM;
    }

    icsp_enter_progmode();
    icsp_reset_pointer();
    if (start_addr > 0) {
        icsp_inc_pointer(start_addr);
    }

    for (uint16_t i = 0; i < count; i++) {
        uint16_t r = icsp_read_word();
        if (r != (expected[i] & 0x3FFF)) {
            if (err_addr) *err_addr = start_addr + i;
            if (read_val) *read_val = r;
            icsp_exit_progmode();
            return ICSP_ERR_VERIFY_FAILED;
        }
        icsp_inc_pointer(1);
    }

    icsp_exit_progmode();
    return ICSP_OK;
}

/* ========================================================================= */
/*                       Offline One-Key Flashing                            */
/* ========================================================================= */
icsp_status_t icsp_burn_default_firmware(void) {
    pic_chip_info_t chip;
    icsp_status_t status;

    /* 1. Detect chip */
    status = icsp_detect_chip(&chip);
    if (status != ICSP_OK) {
        return status;
    }

    /* 2. Bulk Erase */
    status = icsp_bulk_erase();
    if (status != ICSP_OK) {
        return status;
    }
    icsp_delay_ms(10);

    /* 3. Program Flash (Row by Row: 32 words/row) */
    uint16_t num_rows = DEFAULT_FW_WORD_COUNT / PIC16F1704_ROW_WORDS;
    if (DEFAULT_FW_WORD_COUNT % PIC16F1704_ROW_WORDS) num_rows++;

    for (uint16_t r = 0; r < num_rows; r++) {
        uint16_t addr = r * PIC16F1704_ROW_WORDS;
        uint8_t count = PIC16F1704_ROW_WORDS;
        if (addr + count > DEFAULT_FW_WORD_COUNT) {
            count = DEFAULT_FW_WORD_COUNT - addr;
        }

        status = icsp_write_row(addr, &default_fw_words[addr], count);
        if (status != ICSP_OK) {
            return status;
        }
    }

    /* 4. Program Configuration Words */
    status = icsp_write_config_word(PIC16F1704_ADDR_CONFIG1, DEFAULT_FW_CONFIG1);
    if (status != ICSP_OK) return status;

    status = icsp_write_config_word(PIC16F1704_ADDR_CONFIG2, DEFAULT_FW_CONFIG2);
    if (status != ICSP_OK) return status;

    /* 5. Verify Flash */
    uint16_t err_addr = 0, read_val = 0;
    status = icsp_verify_flash(0, default_fw_words, DEFAULT_FW_WORD_COUNT, &err_addr, &read_val);
    if (status != ICSP_OK) {
        return status;
    }

    /* 6. Verify Config Words */
    pic_chip_info_t verify_chip;
    status = icsp_read_configs(&verify_chip);
    if (status != ICSP_OK) return status;

    if (verify_chip.config1 != (DEFAULT_FW_CONFIG1 & 0x3FFF) ||
        verify_chip.config2 != (DEFAULT_FW_CONFIG2 & 0x3FFF)) {
        return ICSP_ERR_VERIFY_FAILED;
    }

    /* Flashing successfully finished, release chip */
    icsp_exit_progmode();
    return ICSP_OK;
}
