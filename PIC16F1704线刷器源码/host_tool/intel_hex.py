"""
Intel HEX file parser and generator for PIC16 microcontrollers.
Author: TDX33029 / AntMiner Project
"""

import sys
from typing import Dict, Tuple, Optional

class IntelHex:
    def __init__(self, filename: Optional[str] = None):
        self.data: Dict[int, int] = {}  # Byte address -> byte value
        if filename:
            self.load_hex(filename)

    def load_hex(self, filename: str) -> None:
        """Parse Intel HEX file into memory dict."""
        self.data.clear()
        base_address = 0

        with open(filename, 'r', encoding='utf-8', errors='ignore') as f:
            for line_no, line in enumerate(f, 1):
                line = line.strip()
                if not line or not line.startswith(':'):
                    continue

                try:
                    byte_count = int(line[1:3], 16)
                    address = int(line[3:7], 16)
                    record_type = int(line[7:9], 16)
                    payload = bytes.fromhex(line[9:9 + byte_count * 2])
                    checksum = int(line[9 + byte_count * 2:11 + byte_count * 2], 16)

                    # Verify checksum
                    calc_sum = (byte_count + (address >> 8) + (address & 0xFF) + record_type + sum(payload)) & 0xFF
                    calc_checksum = (0x100 - calc_sum) & 0xFF
                    if calc_checksum != checksum:
                        raise ValueError(f"Line {line_no}: Checksum mismatch (calc {calc_checksum:02X} != read {checksum:02X})")

                    if record_type == 0:  # Data Record
                        effective_addr = base_address + address
                        for i, b in enumerate(payload):
                            self.data[effective_addr + i] = b
                    elif record_type == 1:  # EOF Record
                        break
                    elif record_type == 2:  # Extended Segment Address
                        base_address = int(line[9:13], 16) * 16
                    elif record_type == 4:  # Extended Linear Address
                        base_address = int(line[9:13], 16) << 16
                except Exception as e:
                    raise ValueError(f"Error parsing {filename} line {line_no}: {e}")

    def get_word(self, word_addr: int) -> int:
        """Get 14-bit PIC word at word address (Intel Hex byte addr = 2 * word_addr)."""
        byte_addr = word_addr * 2
        lo = self.data.get(byte_addr, 0xFF)
        hi = self.data.get(byte_addr + 1, 0x3F)
        return (lo | (hi << 8)) & 0x3FFF

    def set_word(self, word_addr: int, word_val: int) -> None:
        """Set 14-bit PIC word at word address."""
        byte_addr = word_addr * 2
        self.data[byte_addr] = word_val & 0xFF
        self.data[byte_addr + 1] = (word_val >> 8) & 0x3F

    def extract_pic16f1704_firmware(self) -> Tuple[list, dict]:
        """
        Extract Flash program memory (0x0000 - 0x0FFF, 4096 words)
        and Configuration space (0x8000 - 0x8008).

        Config-space conventions (DS40001683B section 7.0):
          - Standard INHX32 (MPLAB X): config/UserID words live in the
            0x10000 extended-linear-address segment, byte addr = 2 * word_addr
            (UserID @0x10000-0x10007, CONFIG1 @0x1000E, CONFIG2 @0x10010).
          - Some third-party tools store them at plain byte 0x8000/0x800E.
        Both are tried; 'has_config' reports whether CONFIG words were found.
        """
        flash_words = []
        for w_addr in range(4096):
            flash_words.append(self.get_word(w_addr))

        def cfg_word(word_addr: int) -> Optional[int]:
            # 标准 INHX32 绝对字节地址: word_addr * 2 (例如 0x8007*2 = 0x1000E)
            base = word_addr * 2
            lo = self.data.get(base)
            if lo is not None:
                hi = self.data.get(base + 1, 0x3F)
                return (lo | (hi << 8)) & 0x3FFF
            # 兼容低 16 位相对地址: (word_addr & 0x7FFF) * 2 (例如 0x000E)
            base = (word_addr & 0x7FFF) * 2
            lo = self.data.get(base)
            if lo is not None:
                hi = self.data.get(base + 1, 0x3F)
                return (lo | (hi << 8)) & 0x3FFF
            return None

        raw = {k: cfg_word(a) for k, a in (
            ('userid0', 0x8000), ('userid1', 0x8001),
            ('userid2', 0x8002), ('userid3', 0x8003),
            ('config1', 0x8007), ('config2', 0x8008))}

        has_config = raw['config1'] is not None or raw['config2'] is not None
        if not has_config:
            print("[WARN] HEX file contains no CONFIG words "
                  "(CONFIG1/CONFIG2). Chip config will be left erased!")

        configs = {k: (0x3FFF if v is None else v) for k, v in raw.items()}
        configs['has_config'] = has_config
        return flash_words, configs

    def save_hex(self, filename: str, flash_words: list, configs: dict) -> None:
        """Export flash words and configuration words into a standard Intel HEX file."""
        lines = []

        # 1. Flash Program Memory (0x0000 - 0x1FFF bytes)
        # Write in 16-byte chunks (8 words per line)
        for byte_addr in range(0, len(flash_words) * 2, 16):
            chunk = []
            for b in range(16):
                w_idx = (byte_addr + b) // 2
                w_val = flash_words[w_idx] if w_idx < len(flash_words) else 0x3FFF
                if (byte_addr + b) % 2 == 0:
                    chunk.append(w_val & 0xFF)
                else:
                    chunk.append((w_val >> 8) & 0x3F)

            rec_len = len(chunk)
            rec_addr = byte_addr & 0xFFFF
            rec_type = 0
            chk = (rec_len + (rec_addr >> 8) + (rec_addr & 0xFF) + rec_type + sum(chunk)) & 0xFF
            chk = (0x100 - chk) & 0xFF
            hex_data = "".join(f"{b:02X}" for b in chunk)
            lines.append(f":{rec_len:02X}{rec_addr:04X}{rec_type:02X}{hex_data}{chk:02X}")

        # 2. Configuration Space (Upper address 0x0001, Base 0x10000)
        lines.append(":020000040001F9")  # Extended linear address = 0x00010000

        # User IDs at 0x0000 (0x10000): 4 words = 8 bytes
        uid_bytes = []
        for i in range(4):
            u_val = configs.get(f'userid{i}', 0x3FFF)
            uid_bytes.extend([u_val & 0xFF, (u_val >> 8) & 0x3F])
        chk = (8 + 0x00 + 0x00 + 0 + sum(uid_bytes)) & 0xFF
        chk = (0x100 - chk) & 0xFF
        lines.append(f":08000000{''.join(f'{b:02X}' for b in uid_bytes)}{chk:02X}")

        # CONFIG1 (0x8007 -> 0x1000E) and CONFIG2 (0x8008 -> 0x10010): 4 bytes
        c1 = configs.get('config1', 0x3F84)
        c2 = configs.get('config2', 0x1C13)
        cfg_bytes = [c1 & 0xFF, (c1 >> 8) & 0x3F, c2 & 0xFF, (c2 >> 8) & 0x3F]
        chk = (4 + 0x00 + 0x0E + 0 + sum(cfg_bytes)) & 0xFF
        chk = (0x100 - chk) & 0xFF
        lines.append(f":04000E00{''.join(f'{b:02X}' for b in cfg_bytes)}{chk:02X}")

        # 3. End of File
        lines.append(":00000001FF\n")

        with open(filename, 'w', encoding='utf-8') as f:
            f.write("\n".join(lines))
