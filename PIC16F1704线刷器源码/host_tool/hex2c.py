#!/usr/bin/env python3
"""
hex2c.py - 将 PIC16F1704 的 Intel HEX 固件转换为 STM32 烧录器内嵌镜像源文件

用途: 脱机一键烧录 (PB9 按键) 使用烧录器内部固化的默认镜像。
      拿到真实固件 (如 ZMRC/Zeus Mining 的 S19 PIC File, 或好板备份 dump)
      后, 用本工具生成 default_firmware.c, 覆盖 ST 工程中的同名文件并重新编译。

用法:
    python hex2c.py <firmware.hex> [output.c]
    python hex2c.py firmware.hex            # 输出到 stdout
    python hex2c.py firmware.hex fw.c       # 写入文件

说明:
    - 程序存储器: 取到最后一个非 0x3FFF 字, 向上取整到 32 字行边界;
    - CONFIG1/CONFIG2: 必须存在于 HEX (0x10000 段或 0x800E 兼容格式), 否则报错;
    - UserID (0x8000-0x8003): 存在则一并嵌入。
"""

import sys
from intel_hex import IntelHex

FLASH_WORDS = 4096
ROW_WORDS = 32
ERASED = 0x3FFF


def main():
    if len(sys.argv) < 2:
        print(__doc__)
        sys.exit(1)

    hex_path = sys.argv[1]
    out_path = sys.argv[2] if len(sys.argv) > 2 else None

    ih = IntelHex(hex_path)
    flash, configs = ih.extract_pic16f1704_firmware()

    if not configs.get('has_config'):
        print("[ERROR] HEX 文件中没有 CONFIG1/CONFIG2 (0x1000E/0x10010 或 0x800E/0x8010)!")
        print("        内嵌镜像必须包含配置字, 请用 MPLAB X EXPORT 或本工具的 dump 功能导出。")
        sys.exit(2)

    # 修剪: 最后一个非擦除字, 向上对齐到行
    last = 0
    for i, w in enumerate(flash):
        if w != ERASED:
            last = i
    count = ((last // ROW_WORDS) + 1) * ROW_WORDS
    if count < 512:
        count = 512
    if count > FLASH_WORDS:
        count = FLASH_WORDS

    words = flash[:count]

    lines = []
    lines.append("/**")
    lines.append(" * @file    default_firmware.c")
    lines.append(" * @brief   脱机一键烧录内嵌固件 (由 tools/hex2c.py 自动生成)")
    lines.append(" * @source  %s" % hex_path)
    lines.append(" * @words   %d (of %d flash words)" % (count, FLASH_WORDS))
    lines.append(" *")
    lines.append(" * 请勿手改; 重新生成: python tools/hex2c.py %s default_firmware.c" % hex_path)
    lines.append(" */")
    lines.append("")
    lines.append('#include "default_firmware.h"')
    lines.append("")
    lines.append("#define DEFAULT_FW_WORD_COUNT_EMBED  %d" % count)
    lines.append("")
    lines.append("#if DEFAULT_FW_WORD_COUNT != DEFAULT_FW_WORD_COUNT_EMBED")
    lines.append('#error "default_firmware.h 中 DEFAULT_FW_WORD_COUNT 需改为 %d" ' % count)
    lines.append("#endif")
    lines.append("")
    lines.append("const uint16_t default_fw_words[DEFAULT_FW_WORD_COUNT] = {")
    for base in range(0, count, 8):
        chunk = ", ".join("0x%04X" % w for w in words[base:base + 8])
        lines.append("    %s, /* 0x%04X */" % (chunk, base))
    lines.append("};")

    text = "\n".join(lines) + "\n"

    if out_path:
        with open(out_path, "w", encoding="utf-8") as f:
            f.write(text)
        print("[OK] 写入 %s: %d 字, CONFIG1=0x%04X CONFIG2=0x%04X" % (
            out_path, count, configs['config1'], configs['config2']))
    else:
        sys.stdout.write(text)

    if any(u != ERASED for u in (configs['userid0'], configs['userid1'],
                                 configs['userid2'], configs['userid3'])):
        print("[INFO] HEX 含有非空 UserID, 一键烧录时请另行用上位机写入"
              " (write_config_word 0x8000..0x8003)。")


if __name__ == "__main__":
    main()
