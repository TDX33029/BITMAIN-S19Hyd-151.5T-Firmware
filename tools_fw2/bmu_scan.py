#!/usr/bin/env python3
"""Scan a Bitmain .bmu package for embedded container magics."""
import sys, struct

MAGICS = [
    (b"\x1f\x8b", "gzip"),
    (b"BZh", "bzip2"),
    (b"\xfd7zXZ\x00", "xz"),
    (b"\x04\x22\x4d\x18", "lz4"),
    (b"PK\x03\x04", "zip"),
    (b"hsqs", "squashfs LE"),
    (b"sqsh", "squashfs BE"),
    (b"\x53\xef", "ext2-magic(@+0x438)"),
    (b"\x27\x05\x19\x56", "u-boot legacy image"),
    (b"\xaa\x99\x55\x66", "Zynq boot ROM id"),
    (b"\x58\x4c\x4e\x58", "XLNX"),
    (b"070701", "cpio newc"),
    (b"\x7fELF", "ELF"),
    (b"ustar", "tar"),
    (b"-----BEGIN", "PEM"),
    (b"{", "json-brace"),
    (b"\xd3\xb3\xb1\x08", "cramfs?"),
    (b"BMU1", "bmu-magic?"),
    (b"\x26\x01", "bmu-hdr-magic"),
]

def main(path):
    data = open(path, "rb").read()
    print(f"file: {path}  size: {len(data)} (0x{len(data):x})")
    # header words
    for off in range(0, 0x20, 4):
        w = struct.unpack(">I", data[off:off+4])[0]
        w2 = struct.unpack("<I", data[off:off+4])[0]
        print(f"  hdr 0x{off:04x}: BE=0x{w:08x}  LE=0x{w2:08x}  raw={data[off:off+4].hex()}")
    hits = {}
    for m, name in MAGICS:
        start = 0
        count = 0
        while count < 60:
            i = data.find(m, start)
            if i < 0:
                break
            # for ext magic only count at +0x438 alignment
            if name.startswith("ext2") and (i % 512) != 0:
                start = i + 1
                continue
            hits.setdefault(name, []).append(i)
            start = i + 1
            count += 1
    print("\n-- magic hits (offset : count shown) --")
    for name, offs in sorted(hits.items(), key=lambda kv: kv[1][0]):
        shown = ", ".join(f"0x{o:x}" for o in offs[:25])
        more = f" ... (+{len(offs)-25})" if len(offs) > 25 else ""
        print(f"  {name:24s} [{len(offs):3d}] {shown}{more}")

if __name__ == "__main__":
    main(sys.argv[1])
