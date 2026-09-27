/**
 * @file default_firmware.h
 * @brief Embedded Default Firmware for Standalone One-Key Flashing
 * @author TDX33029 / AntMiner Project
 */

#ifndef __DEFAULT_FIRMWARE_H
#define __DEFAULT_FIRMWARE_H

#include <stdint.h>

#define DEFAULT_FW_WORD_COUNT   512

/* Configuration Words for Bitmain Antminer S19 PIC16F1704 */
/* CONFIG1: INTOSC, WDT OFF, PWRT OFF, MCLRE ON, CP OFF, BOREN ON, CLKOUT OFF */
#define DEFAULT_FW_CONFIG1      0x3F84

/* CONFIG2: WRT OFF, PLLEN ON, STVREN ON, BORV LO, LPBOR OFF, LVP ON */
#define DEFAULT_FW_CONFIG2      0x1C13

extern const uint16_t default_fw_words[DEFAULT_FW_WORD_COUNT];

#endif /* __DEFAULT_FIRMWARE_H */
