/**
 * @file    default_firmware.h
 * @brief   脱机一键烧录的内嵌默认固件
 * @author  TDX33029 / AntMiner Project
 *
 * !!! 当前为演示占位固件(初始化端口后空转), 不是真实的 S19Hyd PIC 固件 !!!
 * 替换方法:
 *   1. 取得真实固件 hex (如 ZMRC/Zeus Mining 的 S19 PIC File 或备份的好板 dump);
 *   2. 运行 tools/hex2c.py firmware.hex > default_firmware.c;
 *   3. 用生成的文件覆盖本工程 Core/Src/default_firmware.c 后重新编译。
 * 真实固件也可以直接通过上位机 (-w xxx.hex) 在线刷写, 无需内嵌。
 */

#ifndef __DEFAULT_FIRMWARE_H
#define __DEFAULT_FIRMWARE_H

#include <stdint.h>

#define DEFAULT_FW_WORD_COUNT   512

/* CONFIG1: INTOSC, WDT OFF, PWRT OFF, MCLRE ON, CP OFF, BOREN ON, CLKOUT OFF */
#define DEFAULT_FW_CONFIG1      0x3F84

/* CONFIG2: WRT OFF, PLLEN ON, STVREN ON, BORV LO, LPBOR OFF, LVP ON */
#define DEFAULT_FW_CONFIG2      0x1C13

extern const uint16_t default_fw_words[DEFAULT_FW_WORD_COUNT];

#endif /* __DEFAULT_FIRMWARE_H */
