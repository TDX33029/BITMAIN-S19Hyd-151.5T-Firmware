#!/usr/bin/env python3
"""Second pass: LE magic scan + uImage header parse."""
import sys, struct

data = open(sys.argv[1], "rb").read()

def scan(pat, name, limit=40, mod=1):
    offs = []
    start = 0
    while len(offs) < limit:
        i = data.find(pat, start)
        if i < 0:
            break
        if mod == 1 or i % mod == 0:
            offs.append(i)
        start = i + 1
    print(f"{name:22s} [{len(offs):3d}] " + " ".join(f"0x{o:x}" for o in offs[:limit]))

print("== LE magics ==")
scan(b"\x66\x55\x99\xaa", "bitstream-sync")
scan(b"\xed\xfe\x0d\xd0", "fdt-magic")
scan(b"\xef\x53", "ext2-sb(+0x438)", 40)
scan(b"\x7f\x45\x4c\x46", "ELF", 40)
scan(b"\x1f\x8b", "gzip", 40)
scan(b"hsqs", "squashfs", 40)
scan(b"\x27\x05\x19\x56", "uImage", 40)
scan(b"070701", "cpio-newc", 20)
scan(b"-----BEGIN", "PEM", 10)
scan(b"\x00\x00\x00\x00\x0b\xb0\x00\x00", "zstd-skippable?", 5)

print("\n== uImage headers ==")
start = 0
seen = set()
while True:
    i = data.find(b"\x27\x05\x19\x56", start)
    if i < 0:
        break
    start = i + 1
    try:
        hcrc, tim, size, load, ep, dcrc = struct.unpack_from(">6I", data, i + 4)
        os_, arch, typ, comp = struct.unpack_from(">4B", data, i + 28)
        name = data[i + 32:i + 64].split(b"\0")[0].decode("ascii", "replace")
    except Exception:
        continue
    if not (0 < size < 0x2000000):
        continue
    if typ == 0 or typ > 15:
        continue
    key = (i, size, name)
    if key in seen:
        continue
    seen.add(key)
    print(f"  uImage @0x{i:08x}: size=0x{size:x}({size}) load=0x{load:08x} ep=0x{ep:08x} os={os_} arch={arch} type={typ} comp={comp} name={name!r}")
