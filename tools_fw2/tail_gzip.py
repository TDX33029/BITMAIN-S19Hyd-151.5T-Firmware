#!/usr/bin/env python3
"""Decompress the two small gzip blobs in the bmu tail; dump manifest."""
import gzip, io, sys

SRC = r"D:\Document\tempPrj\BITMAIN-S19Hyd-151T-Firmware\Firmware2\S19\Antminer-S19-Hydro-release-202212170935.bmu"
data = open(SRC, "rb").read()

# try every gzip magic in the tail region
start = 0x1126f00
for probe in [0x1126f8a, 0x11271c0]:
    d = gzip.decompress(data[probe:]) if False else None
    # use decompressobj to stop at end of member
    import zlib
    o = zlib.decompressobj(16 + zlib.MAX_WBITS)
    out = o.decompress(data[probe:])
    print(f"== gzip @0x{probe:x}: {len(out)} bytes decompressed")
    try:
        print(out.decode("utf-8", "replace"))
    except Exception as e:
        print("binary:", out[:200].hex())
    print("-" * 60)
