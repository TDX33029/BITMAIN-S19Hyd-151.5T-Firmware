/**
 * @file    icsp.h
 * @brief   PIC16F1704 低压 ICSP (LVP) 驱动 - 寄存器级位bang实现
 * @author  TDX33029 / AntMiner Project
 *
 * 协议依据: Microchip "PIC16(L)F170X Memory Programming Specification"
 *           DS40001683B (覆盖 PIC16F1704/1705/1708/1709 等)
 * 器件手册: "PIC16(L)F1704/8 Data Sheet" DS40001715D
 *
 * 命令集 (DS40001683B Table 4-1, 6bit, LSb 先发, MSb 无关):
 *   0x00 Load Configuration          0x08 Begin Internally Timed Programming
 *   0x02 Load Data For Program Mem   0x09 Bulk Erase Program Memory
 *   0x04 Read Data From Program Mem  0x0A End Externally Timed Programming
 *   0x06 Increment Address           0x11 Row Erase Program Memory
 *   0x16 Reset Address               0x18 Begin Externally Timed Programming
 *
 * 数据帧: 16 个时钟 = Start(0) + 14bit 数据(LSb先) + Stop(0), TDLY >= 1us
 * 进模:   MCLR 拉低 >= TENTH(250us), 32bit 密钥 "MCHP"=0x4D434850 LSb 先发,
 *         时序图 8-8/8-9 标注共 33 个时钟(32位密钥 + 1个额外时钟)
 *
 * 时序 (Table 8-1): TCKL/TCKH>=100ns, TDS/TDH>=100ns, TDLY>=1us,
 *   TPINT: 程序字 2.5ms / 配置字 5ms (max), TERAB<=5ms, TERAR<=2.5ms
 */

#ifndef __ICSP_H
#define __ICSP_H

#include <stdint.h>
#include <stdbool.h>
#include "stm32f1xx.h"

/* ========================================================================= */
/*                              引脚定义 (与 firmware/ 旧版保持一致)          */
/* ========================================================================= */
/*
 * STM32F103C8T6 引脚映射:
 *  PA0 -> PIC_MCLR / VPP  (推挽输出)
 *  PA1 -> PIC_DAT  / PGD  (双向: 推挽输出 / 输入上拉)
 *  PA2 -> PIC_CLK  / PGC  (推挽输出)
 *  PA3 -> PIC_VDD_EN      (推挽输出, 可选目标供电使能)
 *  PC13 -> LED_STATUS     (推挽输出, 板载LED低电平有效)
 *  PB9  -> KEY_TRIG       (输入上拉, 脱机一键烧录触发)
 *
 * 目标 PIC16F1704 (14脚封装):
 *  Pin 1  VDD      Pin 4  RA3/MCLR/VPP   Pin 10 RB7/ICSPDAT
 *  Pin 11 RB6/ICSPCLK   Pin 14 VSS
 *  注意: ICSPDAT/ICSPCLK 固定在 RB7/RB6 (10/11脚), 与封装无关。
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

/* 快速位操作宏 */
#define MCLR_HIGH()         (ICSP_PORT->BSRR = (1U << PIN_MCLR))
#define MCLR_LOW()          (ICSP_PORT->BRR  = (1U << PIN_MCLR))

#define CLK_HIGH()          (ICSP_PORT->BSRR = (1U << PIN_CLK))
#define CLK_LOW()           (ICSP_PORT->BRR  = (1U << PIN_CLK))

#define DAT_HIGH()          (ICSP_PORT->BSRR = (1U << PIN_DAT))
#define DAT_LOW()           (ICSP_PORT->BRR  = (1U << PIN_DAT))
#define DAT_READ()          ((ICSP_PORT->IDR & (1U << PIN_DAT)) != 0U)

#define LED_ON()            (LED_PORT->BRR  = (1U << PIN_LED))
#define LED_OFF()           (LED_PORT->BSRR = (1U << PIN_LED))
#define LED_TOGGLE()        (LED_PORT->ODR ^= (1U << PIN_LED))

#define KEY_IS_PRESSED()    ((KEY_PORT->IDR & (1U << PIN_KEY)) == 0U)

/* ========================================================================= */
/*                           PIC16F1704 存储器规格                            */
/* ========================================================================= */
#define PIC16F1704_DEVID_MASK       0x3FE0U /* 器件ID位, 低5位为版本号      */
#define PIC16F1704_DEVID            0x3040U /* PIC16F1704 掩码基值          */

/* DS40001683B Table 3-1: 完整器件ID字 (掩码前) */
#define DEVID_PIC16F1704            0x3043U
#define DEVID_PIC16LF1704           0x3045U
#define DEVID_PIC16F1708            0x3042U
#define DEVID_PIC16LF1708           0x3044U
#define DEVID_PIC16F1705            0x3055U
#define DEVID_PIC16LF1705           0x3057U
#define DEVID_PIC16F1709            0x3054U
#define DEVID_PIC16LF1709           0x3056U

#define PIC16F1704_FLASH_WORDS      4096    /* 4K 字 (0x0000 - 0x0FFF)      */
#define PIC16F1704_ROW_WORDS        32      /* 32字/行 (擦除行=写闩锁数)    */
#define PIC16F1704_NUM_ROWS         (PIC16F1704_FLASH_WORDS / PIC16F1704_ROW_WORDS)

#define PIC16F1704_ADDR_USERID0     0x8000U
#define PIC16F1704_ADDR_DEVID       0x8006U
#define PIC16F1704_ADDR_CONFIG1     0x8007U
#define PIC16F1704_ADDR_CONFIG2     0x8008U
/* 注意: 0x8009起为出厂校准字, 不参与擦除, 严禁编程/擦除 */

/* CONFIG1 bit7 = CP (代码保护, 0=保护); CONFIG2 bit0 = LVP (1=允许LVP进模) */
#define CFG1_CP_BIT                 0x0080U
#define CFG2_LVP_BIT                0x0001U

/* 32bit LVP 进模密钥 "MCHP" = 0x4D434850, 按字节LSb先发 */
#define ICSP_LVP_KEY_BYTE0          0x50U   /* 'P' */
#define ICSP_LVP_KEY_BYTE1          0x48U   /* 'H' */
#define ICSP_LVP_KEY_BYTE2          0x43U   /* 'C' */
#define ICSP_LVP_KEY_BYTE3          0x4DU   /* 'M' */

/* ICSP 6bit 命令 (DS40001683B Table 4-1, LSb先发, 发送时取低6位) */
#define CMD_LOAD_CONFIG             0x00U
#define CMD_LOAD_PROG_DATA          0x02U
#define CMD_READ_PROG_DATA          0x04U
#define CMD_INC_ADDRESS             0x06U
#define CMD_RESET_ADDRESS           0x16U
#define CMD_BEGIN_PROG              0x08U   /* 内部定时编程               */
#define CMD_BULK_ERASE              0x09U   /* 整片擦除(程序+配置+UserID) */

/* 时序常量 (us), 取规范上限的1.2~2.5倍裕量 */
#define ICSP_TENTH_US               350U    /* MCLR低后密钥前保持 >=250us  */
#define ICSP_TCK_US                 1U      /* 时钟半周期 >=100ns          */
#define ICSP_TDLY_US                2U      /* 命令/数据间延时 >=1us       */
#define ICSP_TPINT_WORD_MS          4U      /* 行写(32闩锁) >=2.5ms       */
#define ICSP_TPINT_CFG_MS           6U      /* 配置字写 >=5ms              */
#define ICSP_TERAB_MS               12U     /* 整片擦除 >=5ms              */
#define ICSP_EXIT_MS                15U     /* 退出后让PIC起振运行         */

/* ========================================================================= */
/*                             状态 / 返回码                                 */
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
    uint16_t dev_id;                /* 原始器件ID字 (含版本号)          */
    uint16_t rev_id;                /* 版本号 (低5位)                   */
    uint16_t config1;               /* CONFIG1 @0x8007                  */
    uint16_t config2;               /* CONFIG2 @0x8008                  */
    uint16_t userid[4];             /* User ID @0x8000..0x8003          */
    bool     is_valid_pic16f1704;   /* 是否为F1704/05/08/09家族         */
    uint8_t  cp_on;                 /* CONFIG1.CP==0 时代码保护开启     */
    uint8_t  lvp_on;                /* CONFIG2.LVP==1 时允许LVP进模     */
} pic_chip_info_t;

/* ========================================================================= */
/*                           函数声明                                        */
/* ========================================================================= */
/* 系统与延时 (DWT周期计数器) */
void icsp_delay_init(void);
void icsp_delay_us(uint32_t us);
void icsp_delay_ms(uint32_t ms);

/* 底层引脚控制 */
void icsp_gpio_init(void);
void icsp_dat_set_output(void);
void icsp_dat_set_input(void);
void icsp_send_bits(uint32_t data, uint8_t nbits);
uint32_t icsp_read_bits(uint8_t nbits);

/* 底层 ICSP 协议 */
void icsp_send_cmd(uint8_t cmd);
void icsp_load_payload(uint16_t word);
uint16_t icsp_read_payload(void);

/* 中层操作 */
icsp_status_t icsp_enter_progmode(void);
void icsp_exit_progmode(void);
void icsp_reset_pointer(void);
void icsp_load_config(void);
void icsp_inc_pointer(uint16_t steps);
uint16_t icsp_read_word(void);

/* 高层烧录操作 */
icsp_status_t icsp_detect_chip(pic_chip_info_t *info);
icsp_status_t icsp_bulk_erase(void);
icsp_status_t icsp_read_flash(uint16_t start_addr, uint16_t *buf, uint16_t count);
icsp_status_t icsp_write_row(uint16_t row_addr, const uint16_t *words, uint8_t count);
icsp_status_t icsp_write_config_word(uint16_t addr, uint16_t value);
icsp_status_t icsp_read_configs(pic_chip_info_t *info);
icsp_status_t icsp_verify_flash(uint16_t start_addr, const uint16_t *expected,
                                uint16_t count, uint16_t *err_addr, uint16_t *read_val);

/* 脱机一键烧录 (内嵌默认固件) */
icsp_status_t icsp_burn_default_firmware(void);

/* 工具: 根据原始器件ID字返回型号名 ("Unknown" 表示未知) */
const char *icsp_devid_name(uint16_t raw_id);

#endif /* __ICSP_H */
