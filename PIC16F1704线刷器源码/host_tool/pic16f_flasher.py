#!/usr/bin/env python3
"""
PIC16F1704 ICSP Flasher CLI & Engine (Host Tool for STM32F103)
Author: TDX33029 / AntMiner Project
"""

import sys
import time
import struct
import argparse
from typing import Optional, Tuple, Dict, List, Callable
import serial
import serial.tools.list_ports

from intel_hex import IntelHex

# Protocol Constants
SYNC_REQ = bytes([0xAA, 0x55])
SYNC_RSP = bytes([0x55, 0xAA])

CMD_PING         = 0x01
CMD_DETECT       = 0x02
CMD_ERASE        = 0x03
CMD_WRITE_ROW    = 0x04
CMD_READ_FLASH   = 0x05
CMD_WRITE_CFG    = 0x06
CMD_READ_CFG     = 0x07
CMD_RESET_TARGET = 0x08
CMD_ONEKEY_BURN  = 0x09

STATUS_OK         = 0x00
STATUS_ERR_CHIP   = 0x01
STATUS_ERR_ERASE  = 0x02
STATUS_ERR_WRITE  = 0x03
STATUS_ERR_VERIFY = 0x04
STATUS_ERR_PARAM  = 0x05
STATUS_ERR_CRC    = 0x06

def calc_crc16(data: bytes) -> int:
    crc = 0xFFFF
    for b in data:
        crc ^= (b << 8)
        for _ in range(8):
            if crc & 0x8000:
                crc = ((crc << 1) ^ 0x1021) & 0xFFFF
            else:
                crc = (crc << 1) & 0xFFFF
    return crc

class PIC16F1704Programmer:
    def __init__(self, port: Optional[str] = None, baudrate: int = 115200, timeout: float = 2.0):
        self.port = port
        self.baudrate = baudrate
        self.timeout = timeout
        self.ser: Optional[serial.Serial] = None
        self.seq = 0

    def connect(self, port: Optional[str] = None) -> bool:
        if port:
            self.port = port
        if not self.port:
            self.port = self.auto_detect_port()
            if not self.port:
                raise ConnectionError("No STM32 PIC Programmer found on any COM/serial port.")

        try:
            self.ser = serial.Serial(self.port, self.baudrate, timeout=self.timeout)
            time.sleep(0.05)
            self.ser.reset_input_buffer()
            self.ser.reset_output_buffer()
            # Send ping to test connection
            return self.ping()
        except Exception as e:
            if self.ser and self.ser.is_open:
                self.ser.close()
            raise ConnectionError(f"Failed to open port {self.port}: {e}")

    def disconnect(self):
        if self.ser and self.ser.is_open:
            self.ser.close()
        self.ser = None

    @staticmethod
    def list_ports() -> List[str]:
        return [p.device for p in serial.tools.list_ports.comports()]

    @classmethod
    def auto_detect_port(cls) -> Optional[str]:
        for p in serial.tools.list_ports.comports():
            try:
                prog = cls(p.device, timeout=0.3)
                prog.ser = serial.Serial(p.device, 115200, timeout=0.3)
                time.sleep(0.05)
                prog.ser.reset_input_buffer()
                if prog.ping():
                    prog.disconnect()
                    return p.device
                prog.disconnect()
            except Exception:
                pass
        return None

    def _send_cmd(self, cmd: int, addr: int = 0, payload: bytes = b'',
                  len_override: Optional[int] = None) -> Tuple[int, bytes]:
        """
        Send a request frame and read the CRC-checked response.
        len_override: put a value into the header Len field while sending an
        empty payload (used by CMD_READ_FLASH where Len carries a word count).
        """
        if not self.ser or not self.ser.is_open:
            raise ConnectionError("Serial port not connected.")

        self.seq = (self.seq + 1) & 0xFF
        hdr_len = len(payload) if len_override is None else len_override
        header = struct.pack('<2sBBHH', SYNC_REQ, cmd, self.seq, addr, hdr_len)
        data_to_crc = header + payload
        crc = calc_crc16(data_to_crc)
        frame = data_to_crc + struct.pack('<H', crc)

        self.ser.write(frame)

        # Read response header: [SYNC 2B] [CMD 1B] [SEQ 1B] [STATUS 1B] [LEN 2B]
        rsp_hdr = self.ser.read(7)
        if len(rsp_hdr) < 7:
            raise TimeoutError("Programmer response timeout.")

        sync, r_cmd, r_seq, status, r_len = struct.unpack('<2sBBBH', rsp_hdr)
        if sync != SYNC_RSP:
            raise ValueError(f"Invalid response sync bytes: {sync.hex()}")
        if r_cmd != cmd:
            raise ValueError(f"Command mismatch: expected {cmd:#x}, got {r_cmd:#x}")

        rsp_payload = b''
        if r_len > 0:
            rsp_payload = self.ser.read(r_len)
            if len(rsp_payload) < r_len:
                raise TimeoutError("Incomplete payload received.")

        rx_crc_bytes = self.ser.read(2)
        if len(rx_crc_bytes) < 2:
            raise TimeoutError("Missing response CRC.")
        rx_crc = struct.unpack('<H', rx_crc_bytes)[0]

        calc = calc_crc16(rsp_hdr + rsp_payload)
        if rx_crc != calc:
            raise ValueError(f"Response CRC mismatch: received {rx_crc:#06x}, calc {calc:#06x}")

        return status, rsp_payload

    def ping(self) -> bool:
        try:
            status, payload = self._send_cmd(CMD_PING)
            return status == STATUS_OK and payload == b'PONG'
        except Exception:
            return False

    # DS40001683B Table 3-1: full Device-ID word -> part name
    CHIP_NAMES = {
        0x3043: "PIC16F1704",  0x3045: "PIC16LF1704",
        0x3042: "PIC16F1708",  0x3044: "PIC16LF1708",
        0x3055: "PIC16F1705",  0x3057: "PIC16LF1705",
        0x3054: "PIC16F1709",  0x3056: "PIC16LF1709",
    }

    def detect_chip(self) -> Dict:
        status, payload = self._send_cmd(CMD_DETECT)
        if status != STATUS_OK or len(payload) < 17:
            return {'connected': False, 'status': status}
        # Firmware v2 replies 19 bytes (adds cp_on/lvp_on); v1 replies 17/18.
        if len(payload) >= 19:
            dev_id, rev_id, cfg1, cfg2, u0, u1, u2, u3, is_valid, cp_on, lvp_on = \
                struct.unpack('<HHHHHHHH??', payload[:19])
        else:
            dev_id, rev_id, cfg1, cfg2, u0, u1, u2, u3, is_valid = \
                struct.unpack('<HHHHHHHH?', payload[:17])
            cp_on = lvp_on = None
        chip_name = self.CHIP_NAMES.get(dev_id, None)
        if chip_name is None:
            chip_name = ("PIC16F170x" if (dev_id & 0x3FE0) == 0x3040
                         else ("PIC16F17xx" if (dev_id & 0x3FE0) in (0x3060, 0x3040)
                               else "Unknown"))
        return {
            'connected': True,
            'is_valid': is_valid,
            'chip_name': chip_name,
            'dev_id': dev_id,
            'rev_id': rev_id,
            'config1': cfg1,
            'config2': cfg2,
            'userids': [u0, u1, u2, u3],
            'cp_on': cp_on,
            'lvp_on': lvp_on,
        }

    def bulk_erase(self) -> bool:
        status, _ = self._send_cmd(CMD_ERASE)
        return status == STATUS_OK

    def write_row(self, row_addr: int, words: List[int]) -> bool:
        payload = bytearray()
        for w in words:
            payload.extend(struct.pack('<H', w & 0x3FFF))
        status, _ = self._send_cmd(CMD_WRITE_ROW, addr=row_addr, payload=bytes(payload))
        return status == STATUS_OK

    def read_flash(self, start_addr: int, count: int) -> List[int]:
        # Up to 64 words per read packet (Len field carries the word count)
        result = []
        curr = start_addr
        rem = count
        while rem > 0:
            batch = min(rem, 64)
            status, payload = self._send_cmd(CMD_READ_FLASH, addr=curr, len_override=batch)
            if status != STATUS_OK:
                raise RuntimeError(f"Read flash failed at address {curr:#06x}")
            for i in range(batch):
                w = payload[i*2] | (payload[i*2 + 1] << 8)
                result.append(w)
            curr += batch
            rem -= batch
        return result

    def write_config_word(self, addr: int, val: int) -> bool:
        payload = struct.pack('<HH', addr, val & 0x3FFF)
        status, _ = self._send_cmd(CMD_WRITE_CFG, payload=payload)
        return status == STATUS_OK

    def read_configs(self) -> Dict:
        status, payload = self._send_cmd(CMD_READ_CFG)
        if status != STATUS_OK:
            raise RuntimeError("Read configs failed.")
        dev_id, rev_id, cfg1, cfg2, u0, u1, u2, u3, is_valid = struct.unpack('<HHHHHHHH?', payload[:17])
        return {
            'config1': cfg1,
            'config2': cfg2,
            'userids': [u0, u1, u2, u3],
            'dev_id': dev_id,
            'rev_id': rev_id
        }

    def reset_target(self) -> bool:
        status, _ = self._send_cmd(CMD_RESET_TARGET)
        return status == STATUS_OK

    def onekey_burn(self) -> bool:
        status, _ = self._send_cmd(CMD_ONEKEY_BURN)
        return status == STATUS_OK

    def flash_hex(self, hex_path: str, verify: bool = True, progress_cb: Optional[Callable[[int, int, str], None]] = None) -> bool:
        """Full automated flashing workflow: Detect -> Erase -> Write -> Verify -> Run."""
        if progress_cb: progress_cb(0, 100, "Reading and parsing HEX file...")
        hex_data = IntelHex(hex_path)
        flash_words, configs = hex_data.extract_pic16f1704_firmware()

        # 1. Detect Chip
        if progress_cb: progress_cb(5, 100, "Detecting target PIC16F1704...")
        chip = self.detect_chip()
        if not chip.get('connected'):
            raise RuntimeError("Target PIC not detected! Please check ICSP wiring, 3.3V power, and GND.")
        print(f"[*] Detected: {chip['chip_name']} (DevID: {chip['dev_id']:#06x}, Rev: {chip['rev_id']:#04x})")
        if chip.get('cp_on'):
            print("[*] Chip is code-protected (CP=ON); Bulk Erase will clear it.")

        # 2. Bulk Erase
        if progress_cb: progress_cb(10, 100, "Erasing target Flash & Configuration...")
        if not self.bulk_erase():
            raise RuntimeError("Bulk erase failed!")
        time.sleep(0.02)

        # 3. Write Flash Memory (128 rows of 32 words)
        total_rows = 128
        for r in range(total_rows):
            row_addr = r * 32
            row_words = flash_words[row_addr : row_addr + 32]

            # Skip all-0x3FFF rows (blank/erased flash optimization)
            if all(w == 0x3FFF for w in row_words):
                continue

            if not self.write_row(row_addr, row_words):
                raise RuntimeError(f"Writing row at address {row_addr:#06x} failed!")

            pct = 15 + int((r / total_rows) * 55)
            if progress_cb and r % 8 == 0:
                progress_cb(pct, 100, f"Writing Flash row {r+1}/{total_rows} ({pct}%)...")

        # 4. Write Configuration Words (skip when the HEX carries none)
        if configs.get('has_config'):
            if progress_cb: progress_cb(72, 100, "Writing Configuration words...")
            self.write_config_word(0x8007, configs['config1'])
            self.write_config_word(0x8008, configs['config2'])

            for i in range(4):
                self.write_config_word(0x8000 + i, configs[f'userid{i}'])
        else:
            print("[WARN] HEX has no CONFIG words: chip left with erased config!")

        # 5. Verify Flash & Config
        if verify:
            if progress_cb: progress_cb(75, 100, "Verifying Program Flash...")
            for r in range(total_rows):
                row_addr = r * 32
                expected_row = flash_words[row_addr : row_addr + 32]
                status, read_row = self._send_cmd(CMD_READ_FLASH, addr=row_addr, len_override=32)
                if status != STATUS_OK:
                    raise RuntimeError(f"Read back failed at row {row_addr:#06x}")

                for i in range(32):
                    actual_val = (read_row[i*2] | (read_row[i*2+1] << 8)) & 0x3FFF
                    exp_val = expected_row[i] & 0x3FFF
                    if actual_val != exp_val:
                        raise RuntimeError(f"Verify failed at word {row_addr + i:#06x}: expected {exp_val:#06x}, read {actual_val:#06x}")

                pct = 75 + int((r / total_rows) * 20)
                if progress_cb and r % 8 == 0:
                    progress_cb(pct, 100, f"Verifying Flash {pct}%...")

            # Verify Config
            read_cfg = self.read_configs()
            if (read_cfg['config1'] & 0x3FFF) != (configs['config1'] & 0x3FFF):
                raise RuntimeError(f"CONFIG1 mismatch: exp {configs['config1']:#06x}, read {read_cfg['config1']:#06x}")
            if (read_cfg['config2'] & 0x3FFF) != (configs['config2'] & 0x3FFF):
                raise RuntimeError(f"CONFIG2 mismatch: exp {configs['config2']:#06x}, read {read_cfg['config2']:#06x}")

        # 6. Release Target
        if progress_cb: progress_cb(98, 100, "Resetting target to run mode...")
        self.reset_target()

        if progress_cb: progress_cb(100, 100, "Flashing & Verification Complete 100%!")
        return True

    def dump_hex(self, output_path: str, progress_cb: Optional[Callable[[int, int, str], None]] = None) -> None:
        """Dump entire 4096 words Flash and Config words to an Intel HEX file."""
        if progress_cb: progress_cb(5, 100, "Connecting and detecting chip...")
        chip = self.detect_chip()
        if not chip.get('connected'):
            raise RuntimeError("Target PIC not detected.")

        flash_words = []
        total_rows = 128
        for r in range(total_rows):
            row_addr = r * 32
            status, payload = self._send_cmd(CMD_READ_FLASH, addr=row_addr, len_override=32)
            if status != STATUS_OK:
                raise RuntimeError(f"Read failed at row {row_addr:#06x}")
            for i in range(32):
                w = (payload[i*2] | (payload[i*2+1] << 8)) & 0x3FFF
                flash_words.append(w)

            pct = 10 + int((r / total_rows) * 80)
            if progress_cb and r % 8 == 0:
                progress_cb(pct, 100, f"Reading Flash {pct}%...")

        if progress_cb: progress_cb(92, 100, "Reading Configuration words...")
        cfg = self.read_configs()
        configs = {
            'userid0': cfg['userids'][0],
            'userid1': cfg['userids'][1],
            'userid2': cfg['userids'][2],
            'userid3': cfg['userids'][3],
            'config1': cfg['config1'],
            'config2': cfg['config2']
        }

        hex_file = IntelHex()
        hex_file.save_hex(output_path, flash_words, configs)
        self.reset_target()
        if progress_cb: progress_cb(100, 100, f"Dump saved to {output_path}")

def main():
    parser = argparse.ArgumentParser(description="AntMiner PIC16F1704 Flasher Tool (STM32F103)")
    parser.add_argument("-p", "--port", type=str, help="Serial port (e.g. COM3, /dev/ttyUSB0). Auto-detects if omitted.")
    parser.add_argument("-b", "--baud", type=int, default=115200, help="Baud rate (default 115200)")
    parser.add_argument("-d", "--detect", action="store_true", help="Detect PIC16F1704 chip info")
    parser.add_argument("-e", "--erase", action="store_true", help="Bulk erase target PIC")
    parser.add_argument("-w", "--write", type=str, metavar="FILE.hex", help="Write Intel HEX file to PIC")
    parser.add_argument("-r", "--read", type=str, metavar="OUT.hex", help="Read/Dump PIC firmware to Intel HEX file")
    parser.add_argument("--reset", action="store_true", help="Release MCLR and run target PIC")
    parser.add_argument("--onekey", action="store_true", help="Trigger one-key offline burn of embedded firmware")
    parser.add_argument("-l", "--list-ports", action="store_true", help="List available serial ports")

    args = parser.parse_args()

    if args.list_ports:
        ports = PIC16F1704Programmer.list_ports()
        print("Available serial ports:", ports if ports else "None found")
        return

    prog = PIC16F1704Programmer(args.port, args.baud)

    print("[*] Connecting to STM32 PIC Programmer...")
    try:
        prog.connect()
        print(f"[+] Connected successfully on {prog.port}!")
    except Exception as e:
        print(f"[-] Connection error: {e}")
        sys.exit(1)

    try:
        if args.detect:
            info = prog.detect_chip()
            if info.get('connected'):
                print(f"[+] PIC Detected: {info['chip_name']}")
                print(f"    Device ID:  {info['dev_id']:#06x} (Revision: {info['rev_id']:#04x})")
                print(f"    CONFIG1:    {info['config1']:#06x}")
                print(f"    CONFIG2:    {info['config2']:#06x}")
                print(f"    User IDs:   {['0x%04X' % u for u in info['userids']]}")
            else:
                print("[-] Target PIC not detected or not responding.")

        elif args.erase:
            print("[*] Erasing PIC16F1704...")
            if prog.bulk_erase():
                print("[+] Bulk Erase OK!")
            else:
                print("[-] Bulk Erase Failed!")

        elif args.write:
            print(f"[*] Flashing {args.write} to PIC16F1704...")
            def log_progress(pct, total, msg):
                print(f"    [{pct:3d}%] {msg}")
            prog.flash_hex(args.write, verify=True, progress_cb=log_progress)
            print("[+] Success! Firmware flashed and verified.")

        elif args.read:
            print(f"[*] Dumping PIC16F1704 to {args.read}...")
            def log_progress(pct, total, msg):
                print(f"    [{pct:3d}%] {msg}")
            prog.dump_hex(args.read, progress_cb=log_progress)
            print(f"[+] Dump completed and saved to {args.read}!")

        elif args.reset:
            prog.reset_target()
            print("[+] Target PIC reset to normal run mode.")

        elif args.onekey:
            print("[*] Triggering One-Key Offline Burn...")
            if prog.onekey_burn():
                print("[+] One-Key Offline Burn Succeeded!")
            else:
                print("[-] One-Key Offline Burn Failed!")
        else:
            # Default: detect chip info
            info = prog.detect_chip()
            if info.get('connected'):
                print(f"[+] Target Connected: {info['chip_name']} (DevID {info['dev_id']:#06x})")
                print("    Use -w <file.hex> to flash, -r <file.hex> to dump, or -h for help.")
            else:
                print("[-] Connected to STM32 programmer, but no PIC16F1704 target detected.")
                print("    Please check wiring between STM32 and PIC16F1704.")

    finally:
        prog.disconnect()

if __name__ == "__main__":
    main()
