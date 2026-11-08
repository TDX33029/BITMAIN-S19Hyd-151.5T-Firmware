#!/usr/bin/env python3
"""Analyze raw ARM blobs (FSBL/U-Boot): capstone function scan, string map, Ghidra ELF wrapper."""
import struct, os, sys
from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_MODE_THUMB

OUTDIR = r"D:\Document\tempPrj\BITMAIN-S19Hyd-151T-Firmware\Firmware2\S21\Unpacked\zynq7007_HHB70801\Unpacked\analysis"

BLOBS = [
    ("fsbl", r"D:\Document\tempPrj\BITMAIN-S19Hyd-151T-Firmware\Firmware2\S21\Unpacked\zynq7007_HHB70801\Unpacked\fsbl.bin", 0x00000000),
    ("uboot", r"D:\Document\tempPrj\BITMAIN-S19Hyd-151T-Firmware\Firmware2\S21\Unpacked\zynq7007_HHB70801\Unpacked\uboot.bin", 0x04000000),
]

def find_strings(data, base, minlen=6):
    strs = []
    cur = b""
    start = 0
    for i, c in enumerate(data):
        if 32 <= c < 127 or c in (9, 10, 13):
            if not cur:
                start = i
            cur += bytes([c])
        else:
            if len(cur) >= minlen:
                strs.append((base + start, cur.decode("ascii", "replace")))
            cur = b""
    return strs

def scan_functions(data, base):
    """Heuristic function-start scan: ARM push {...,lr} (0xE92Dxxxx) + Thumb push {..,lr} (0xB5xx)."""
    starts = []
    n = len(data)
    # ARM mode, 4-aligned
    i = 0
    while i + 4 <= n:
        w = struct.unpack_from("<I", data, i)[0]
        if (w & 0xFFFFF000) == 0xE92D0000 and (w & 0x4000) and (w & 0x0FF0):
            starts.append((base + i, "arm"))
        i += 4
    # Thumb 32-bit push, 2-aligned (skip odd)
    i = 0
    while i + 4 <= n:
        w = struct.unpack_from("<I", data, i)[0]
        if (w & 0xFFFF0000) == 0xE92D0000 and (w & 0x4000) and (w & 0x0FF0):
            starts.append((base + i + 1, "thumb"))
        i += 2
    # Thumb 16-bit push {...,lr}: 0xB5xx (bit8 = lr)
    i = 0
    while i + 2 <= n:
        h = struct.unpack_from("<H", data, i)[0]
        if (h & 0xFF00) == 0xB500 and (h & 0x0100):
            starts.append((base + i + 1, "thumb16"))
        i += 2
    starts = sorted(set(starts))
    return starts

def write_elf_wrapper(blob, base, out, machine_flags=0x5000400):
    """Minimal ARM32 ELF EXEC wrapper: one PT_LOAD covering the blob."""
    ei = b"\x7fELF" + bytes([1, 1, 1, 0]) + b"\x00" * 8
    eh = ei + struct.pack("<HHIIIIIHHHHHH", 2, 40, 1, base, 52, 0, machine_flags,
                          52, 32, 1, 0, 0, 0)
    ph = struct.pack("<8I", 1, 0, base, base, len(blob), len(blob), 7, 0x1000)
    assert len(eh) == 52
    with open(out, "wb") as f:
        f.write(eh + ph + blob)

def main():
    os.makedirs(os.path.join(OUTDIR, "ghidra"), exist_ok=True)
    os.makedirs(os.path.join(OUTDIR, "strings"), exist_ok=True)
    for name, path, base in BLOBS:
        data = open(path, "rb").read()
        print(f"== {name}: {len(data):,} B @0x{base:08x}")
        starts = scan_functions(data, base)
        # dedupe & sort; estimate sizes as gap to next start
        starts = sorted(set(starts))
        with open(os.path.join(OUTDIR, "strings", f"{name}.functions.txt"), "w", encoding="utf-8", newline="\n") as f:
            f.write(f"# {name}: {len(starts)} candidate function starts (push {{...,lr}} prologue heuristic)\n")
            addrs = [a for a, m in starts]
            for k, (a, m) in enumerate(starts):
                end = addrs[k+1] if k+1 < len(addrs) else base + len(data)
                f.write(f"{a:08x}  {m:7s} sz~{end-a}\n")
        print(f"   function prologues: {len(starts)}")
        strs = find_strings(data, base)
        with open(os.path.join(OUTDIR, "strings", f"{name}.strings.txt"), "w", encoding="utf-8", newline="\n") as f:
            for a, s in strs:
                f.write(f"{a:08x}  {s}\n")
        print(f"   strings: {len(strs)}")
        wrap = os.path.join(OUTDIR, "ghidra", f"{name}.elf")
        write_elf_wrapper(data, base, wrap)
        print(f"   ghidra wrapper -> {wrap}")

if __name__ == "__main__":
    main()
