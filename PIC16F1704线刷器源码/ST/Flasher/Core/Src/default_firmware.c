/**
 * @file    default_firmware.c
 * @brief   内嵌默认固件镜像 (演示占位)
 * @author  TDX33029 / AntMiner Project
 *
 * !!! 演示占位固件: 仅把端口初始化为输出后空转, 不是 Bitmain S19Hyd 原厂固件 !!!
 * 请参阅 default_firmware.h 中的替换方法。
 */

#include "default_firmware.h"

/* 16 个擦除态字/组, 前 16 字显式给出, 其余 496 字 = 31 组填充 */
#define FW_FILL16   0x3FFF,0x3FFF,0x3FFF,0x3FFF,0x3FFF,0x3FFF,0x3FFF,0x3FFF, \
                    0x3FFF,0x3FFF,0x3FFF,0x3FFF,0x3FFF,0x3FFF,0x3FFF,0x3FFF

/*
 * 0x0000: 复位向量跳过中断向量
 * 0x0004: 中断向量 RETFIE
 * 0x0005: 入口 - 关模拟功能, 端口清零后空转
 * 其余填充擦除态 0x3FFF
 */
const uint16_t default_fw_words[DEFAULT_FW_WORD_COUNT] = {
    /* 0x0000: 复位向量 */
    0x2805, /* GOTO 0x0005 */
    0x3FFF, 0x3FFF, 0x3FFF,
    /* 0x0004: 中断向量 */
    0x0009, /* RETFIE */
    /* 0x0005: 主入口 */
    0x3000, /* MOVLW 0x00 */
    0x0020, /* MOVLB 0x00 (Bank 0) */
    0x018C, /* CLRF  PORTA */
    0x018E, /* CLRF  PORTC */
    0x301E, /* MOVLW 0x1E */
    0x0021, /* MOVLB 0x01 (Bank 1) */
    0x008C, /* MOVWF TRISA */
    0x008E, /* MOVWF TRISC */
    0x0023, /* MOVLB 0x03 (Bank 3) */
    0x018C, /* CLRF  ANSELA (关模拟) */
    0x018E, /* CLRF  ANSELC */
    /* 0x0010 起填充擦除态 (0x3FFF = NOP, 空转落点) */
    FW_FILL16, FW_FILL16, FW_FILL16, FW_FILL16, FW_FILL16, FW_FILL16,
    FW_FILL16, FW_FILL16, FW_FILL16, FW_FILL16, FW_FILL16, FW_FILL16,
    FW_FILL16, FW_FILL16, FW_FILL16, FW_FILL16, FW_FILL16, FW_FILL16,
    FW_FILL16, FW_FILL16, FW_FILL16, FW_FILL16, FW_FILL16, FW_FILL16,
    FW_FILL16, FW_FILL16, FW_FILL16, FW_FILL16, FW_FILL16, FW_FILL16,
    FW_FILL16
};
