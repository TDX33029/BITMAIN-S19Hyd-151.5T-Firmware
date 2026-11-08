#!/usr/bin/env python3
"""Parse a Zynq-7000 BOOT.bin: locate image header table + partition headers via ACC checksum."""
import sys, struct

def u32le(b, o):
    return struct.unpack_from("<I", b, o)[0]

def parse(path, base=0):
    data = open(path, "rb").read()
    n = len(data)
    if base:
        data = data[base:]
        n = len(data)
    print(f"== {path} (scan base 0x{base:x}, len 0x{n:x})")
    if u32le(data, 0x20) != 0xAA995566:
        print("  not a zynq boot image (no AA995566 at 0x20)")
        return
    print(f"  word9 XLNX: {u32le(data,0x24):#x}  enc: {u32le(data,0x28):#x}  w11: {u32le(data,0x2c):#x}")
    print(f"  w12: {u32le(data,0x30):#x}  w13: {u32le(data,0x34):#x}  w14(chk): {u32le(data,0x38):#x}")
    # checksum of boot header: sum words 0..13 excluding 8,9 then negate
    s = 0
    for i in range(14):
        if i not in (8, 9):
            s = (s + u32le(data, i*4)) & 0xFFFFFFFF
    print(f"  boot hdr chk expected: {0xFFFFFFFF - s & 0xFFFFFFFF:#x} (stored {u32le(data,0x38):#x})")

    # scan for partition headers: w4 == 0xFFFFFFFF - (w0+w1+w2+w3+w5+w6+w7)
    print("  -- partition header candidates --")
    found = []
    for off in range(0, min(n, 0x40000) - 32, 4):
        w = struct.unpack_from("<8I", data, off)
        s = (w[0] + w[1] + w[2] + w[3] + w[5] + w[6] + w[7]) & 0xFFFFFFFF
        if w[4] == ((0xFFFFFFFF - s) & 0xFFFFFFFF):
            if w[0] == 0 and w[1] == 0 and w[2] == 0:
                continue
            found.append((off, w))
    for off, w in found:
        print(f"  PHDR @0x{base+off:06x}: start_w=0x{w[0]:x} len_w=0x{w[1]:x} tot_w=0x{w[2]:x} attr=0x{w[3]:08x} chk=0x{w[4]:08x} exec=0x{w[5]:08x} end=0x{w[6]:08x} rsv=0x{w[7]:x}")
        print(f"        -> data @0x{base + w[0]*4:06x}, len 0x{w[1]*4:x} (total 0x{w[2]*4:x})")

if __name__ == "__main__":
    parse(sys.argv[1], int(sys.argv[2], 0) if len(sys.argv) > 2 else 0)
