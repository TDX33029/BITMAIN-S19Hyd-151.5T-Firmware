# -*- coding: utf-8 -*-
"""Wrap the patched ext2 rootfs into a legacy uImage (gzip), same format as
the stock minerfs.image.gz (os=Linux, arch=ARM, type=ramdisk, comp=gzip).

Usage: python -I make_image.py <ext2> <out-uImage> [name]
"""
import gzip
import hashlib
import struct
import sys
import time
import zlib

IH_MAGIC = 0x27051956
OS_LINUX, ARCH_ARM, TYPE_RAMDISK, COMP_GZIP = 5, 2, 3, 2


def build_header(size, dcrc, timestamp, name):
    def pack(hcrc):
        return struct.pack(
            ">7I4B", IH_MAGIC, hcrc, timestamp, size, 0, 0, dcrc,
            OS_LINUX, ARCH_ARM, TYPE_RAMDISK, COMP_GZIP,
        ) + name.encode("ascii").ljust(32, b"\x00")

    hdr = pack(0)
    hcrc = zlib.crc32(hdr) & 0xFFFFFFFF
    return pack(hcrc)


def main():
    src, out = sys.argv[1], sys.argv[2]
    name = sys.argv[3] if len(sys.argv) > 3 else "ramdisk"
    raw = open(src, "rb").read()
    gz = gzip.compress(raw, compresslevel=9, mtime=0)
    ts = int(time.time())
    hdr = build_header(len(gz), zlib.crc32(gz) & 0xFFFFFFFF, ts, name)
    with open(out, "wb") as f:
        f.write(hdr)
        f.write(gz)
    print("ext2      %d bytes  sha256=%s" % (len(raw), hashlib.sha256(raw).hexdigest()[:16]))
    print("gzip      %d bytes" % len(gz))
    print("uImage    %d bytes  (header 64 + payload)" % (64 + len(gz)))
    print("header    magic=%08x hcrc=%08x dcrc=%08x size=%#x" % (
        IH_MAGIC, struct.unpack_from(">I", hdr, 4)[0],
        struct.unpack_from(">I", hdr, 24)[0], len(gz)))


if __name__ == "__main__":
    main()
