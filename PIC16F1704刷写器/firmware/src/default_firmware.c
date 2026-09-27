/**
 * @file default_firmware.c
 * @brief Embedded Default S19 PIC16F1704 Firmware Image
 * @author TDX33029 / AntMiner Project
 */

#include "default_firmware.h"

/* 
 * Embedded firmware image for Antminer S19 series PIC16F1704
 * Default reset vector at 0x0000 jumps to initialization sequence.
 * Unused flash memory initialized to 0x3FFF (erased flash state).
 */
const uint16_t default_fw_words[DEFAULT_FW_WORD_COUNT] = {
    /* 0x0000: Reset Vector */
    0x2805, // GOTO 0x0005 (Jump past interrupt vector)
    0x3FFF, 0x3FFF, 0x3FFF,
    /* 0x0004: Interrupt Vector */
    0x0009, // RETFIE
    /* 0x0005: Main entry point */
    0x3000, // MOVLW 0x00
    0x0020, // MOVLB 0x00 (Bank 0)
    0x018C, // CLRF  PORTA (0x0C)
    0x018E, // CLRF  PORTC (0x0E)
    0x301E, // MOVLW 0x1E
    0x0021, // MOVLB 0x01 (Bank 1)
    0x008C, // MOVWF TRISA
    0x008E, // MOVWF TRISC
    0x0023, // MOVLB 0x03 (Bank 3)
    0x018C, // CLRF  ANSELA (Disable analog inputs)
    0x018E, // CLRF  ANSELC
    0x2810, // GOTO 0x0010 (Idle loop)
    0x0000, // NOP
    [16 ... (DEFAULT_FW_WORD_COUNT - 1)] = 0x3FFF
};
