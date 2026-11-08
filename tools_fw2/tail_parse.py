#!/usr/bin/env python3
"""Parse bmu tail: enumerate gzip members, dump structure and payloads."""
import zlib, os, struct

SRC = r"D:\Document\tempPrj\BITMAIN-S19Hyd-151T-Firmware\Firmware2\S19\Antminer-S19-Hydro-release-202212170935.bmu"
OUT = r"D:\Document\tempPrj\BITMAIN-S19Hyd-151T-Firmware\Firmware2\S19\Unpacked"
os.makedirs(OUT, exist_ok=True)
data = open(SRC, "rb").read()
N = len(data)
tail_start = 0x1126f8a

pos = tail_start
idx = 0
while pos < N - 2:
    if data[pos:pos+2] != b"\x1f\x8b":
        # skip to next gzip magic
        nxt = data.find(b"\x1f\x8b", pos)
        if nxt < 0:
            break
        gap = data[pos:nxt]
        nz = gap.strip(b"\x00")
        if nz:
            print(f"-- gap 0x{pos:x}-0x{nxt:x} ({nxt-pos}B): {nz[:48].hex()}  (ascii: {nz[:32]!r})")
        else:
            print(f"-- gap 0x{pos:x}-0x{nxt:x} ({nxt-pos}B): zeros")
        pos = nxt
        continue
    o = zlib.decompressobj(16 + zlib.MAX_WBITS)
    out = o.decompress(data[pos:])
    used = len(data) - pos - len(o.unused_data)
    print(f"gzip member @0x{pos:x}: comp {used}B -> raw {len(out)}B, unused {len(o.unused_data)}B")
    with open(os.path.join(OUT, f"tail_gzip_{idx}.bin"), "wb") as f:
        f.write(out)
    idx += 1
    pos = pos + used
print(f"end of parsing at 0x{pos:x}, file size 0x{N:x}, trailing {N-pos}B")
if pos < N:
    tr = data[pos:]
    print("trailing hex:", tr[:64].hex(), "..." if len(tr) > 64 else "")
