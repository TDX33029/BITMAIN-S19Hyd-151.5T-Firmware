/**
 * @file pic16f1704_icsp.h
 * @brief PIC16F1704 Low-Voltage ICSP (In-Circuit Serial Programming) Driver
 * @author TDX33029 / AntMiner Project
 * @note Hardware Target: STM32F103C8T6 (72MHz)
 */

#ifndef __PIC16F1704_ICSP_H
#define __PIC16F1704_ICSP_H

#include <stdint.h>
#include <stdbool.h>
#include "stm32f1xx.h"

/* ========================================================================= */
/*                              Pin Definitions                              */
/* ========================================================================= */
/* 
 * Pin mapping on STM32F103C8T6:
 *  PA0 -> PIC_MCLR / VPP  (Push-Pull Output)
 *  PA1 -> PIC_DAT  / PGD  (Bidirectional: Push-Pull Output / Input with Pull-up)
 *  PA2 -> PIC_CLK  / PGC  (Push-Pull Output)
 *  PA3 -> PIC_VDD_EN      (Push-Pull Output, optional power control)
 *  PC13 -> LED_STATUS     (Push-Pull Output, Active LOW onboard LED)
 *  PB9  -> KEY_TRIG       (Input with Pull-Up, One-Key Offline Trigger)
 */

#define ICSP_PORT           GPIOA
#define PIN_MCLR            0   // PA0
#define PIN_DAT             1   // PA1
#define PIN_CLK             2   // PA2
#define PIN_VDD_EN          3   // PA3

#define LED_PORT            GPIOC
#define PIN_LED             13  // PC13

#define KEY_PORT            GPIOB
#define PIN_KEY             9   // PB9

/* Fast bit manipulation macros */
#define MCLR_HIGH()         (ICSP_PORT->BSRR = (1 << PIN_MCLR))
#define MCLR_LOW()          (ICSP_PORT->BRR  = (1 << PIN_MCLR))

#define CLK_HIGH()          (ICSP_PORT->BSRR = (1 << PIN_CLK))
#define CLK_LOW()           (ICSP_PORT->BRR  = (1 << PIN_CLK))

#define DAT_HIGH()          (ICSP_PORT->BSRR = (1 << PIN_DAT))
#define DAT_LOW()           (ICSP_PORT->BRR  = (1 << PIN_DAT))
#define DAT_READ()          ((ICSP_PORT->IDR & (1 << PIN_DAT)) != 0)

#define LED_ON()            (LED_PORT->BRR  = (1 << PIN_LED))
#define LED_OFF()           (LED_PORT->BSRR = (1 << PIN_LED))
#define LED_TOGGLE()        (LED_PORT->ODR ^= (1 << PIN_LED))

#define KEY_IS_PRESSED()    ((KEY_PORT->IDR & (1 << PIN_KEY)) == 0)

/* ========================================================================= */
/*                       PIC16F1704 Specifications                           */
/* ========================================================================= */
#define PIC16F1704_DEVID_MASK       0x3FE0
#define PIC16F1704_DEVID            0x3040  // Base ID for PIC16F1704
#define PIC16LF1704_DEVID           0x3040  // Or 0x3045 for LF variant
#define PIC16F1705_DEVID            0x3050  // PIC16F1705 (8K words)
#define PIC16F1708_DEVID            0x3040  // PIC16F1708 (4K words)

#define PIC16F1704_FLASH_WORDS      4096    // 4K words (0x0000 - 0x0FFF)
#define PIC16F1704_ROW_WORDS        32      // 32 words per row latch write
#define PIC16F1704_NUM_ROWS         (PIC16F1704_FLASH_WORDS / PIC16F1704_ROW_WORDS) // 128 rows

#define PIC16F1704_ADDR_USERID0     0x8000
#define PIC16F1704_ADDR_USERID1     0x8001
#define PIC16F1704_ADDR_USERID2     0x8002
#define PIC16F1704_ADDR_USERID3     0x8003
#define PIC16F1704_ADDR_REVID       0x8005
#define PIC16F1704_ADDR_DEVID       0x8006
#define PIC16F1704_ADDR_CONFIG1     0x8007
#define PIC16F1704_ADDR_CONFIG2     0x8008

/* 32-bit LVP Entry Key: "MCHP" = 0x4D434850 */
#define ICSP_LVP_KEY_BYTE0          0x50    // 'P'
#define ICSP_LVP_KEY_BYTE1          0x48    // 'H'
#define ICSP_LVP_KEY_BYTE2          0x43    // 'C'
#define ICSP_LVP_KEY_BYTE3          0x4D    // 'M'

/* ICSP 6-bit Commands (Clocked LSb first) */
#define CMD_LOAD_CONFIG             0x00    // 000000
#define CMD_LOAD_PROG_DATA          0x02    // 000010
#define CMD_READ_PROG_DATA          0x04    // 000100
#define CMD_INC_ADDRESS             0x06    // 000110
#define CMD_BEGIN_PROG              0x08    // 001000 (Internally timed programming)
#define CMD_BULK_ERASE              0x09    // 001001 (Bulk erase program memory)
#define CMD_RESET_ADDRESS           0x16    // 010110 (Reset PC to 0)

/* ========================================================================= */
/*                             Status / Return Codes                         */
/* ========================================================================= */
typedef enum {
    ICSP_OK = 0,
    ICSP_ERR_NOT_CONNECTED,
    ICSP_ERR_WRONG_CHIP,
    ICSP_ERR_ERASE_FAILED,
    ICSP_ERR_WRITE_FAILED,
    ICSP_ERR_VERIFY_FAILED,
    ICSP_ERR_TIMEOUT,
    ICSP_ERR_PARAM
} icsp_status_t;

typedef struct {
    uint16_t dev_id;
    uint16_t rev_id;
    uint16_t config1;
    uint16_t config2;
    uint16_t userid[4];
    bool is_valid_pic16f1704;
} pic_chip_info_t;

/* ========================================================================= */
/*                           Function Declarations                           */
/* ========================================================================= */
/* System & Delay */
void icsp_delay_init(void);
void icsp_delay_us(uint32_t us);
void icsp_delay_ms(uint32_t ms);

/* Low Level Pin Control */
void icsp_gpio_init(void);
void icsp_dat_set_output(void);
void icsp_dat_set_input(void);
void icsp_send_bits(uint32_t data, uint8_t nbits);
uint32_t icsp_read_bits(uint8_t nbits);

/* Low Level ICSP Protocol */
void icsp_send_cmd(uint8_t cmd);
void icsp_load_payload(uint16_t word);
uint16_t icsp_read_payload(void);

/* Mid Level Operations */
icsp_status_t icsp_enter_progmode(void);
void icsp_exit_progmode(void);
void icsp_reset_pointer(void);
void icsp_load_config(void);
void icsp_inc_pointer(uint16_t steps);
uint16_t icsp_read_word(void);

/* High Level PIC16F1704 Flashing Operations */
icsp_status_t icsp_detect_chip(pic_chip_info_t *info);
icsp_status_t icsp_bulk_erase(void);
icsp_status_t icsp_read_flash(uint16_t start_addr, uint16_t *buf, uint16_t count);
icsp_status_t icsp_write_row(uint16_t row_addr, const uint16_t *words, uint8_t count);
icsp_status_t icsp_write_config_word(uint16_t addr, uint16_t value);
icsp_status_t icsp_read_configs(pic_chip_info_t *info);
icsp_status_t icsp_verify_flash(uint16_t start_addr, const uint16_t *expected, uint16_t count, uint16_t *err_addr, uint16_t *read_val);

/* Offline Flashing Execution */
icsp_status_t icsp_burn_default_firmware(void);

#endif /* __PIC16F1704_ICSP_H */
