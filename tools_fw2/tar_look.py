#!/usr/bin/env python3
"""Inspect the two tar files extracted from the tail."""
import tarfile, io, hashlib, os

OUT = r"D:\Document\tempPrj\BITMAIN-S19Hyd-151T-Firmware\Firmware2\S19\Unpacked"
for name in ["tail_gzip_0.bin", "tail_gzip_1.bin"]:
    p = os.path.join(OUT, name)
    print(f"== {name} ({os.path.getsize(p)} bytes)")
    with tarfile.open(p) as tf:
        for m in tf.getmembers():
            f = tf.extractfile(m)
            data = f.read() if f else b""
            print(f"   {m.name:20s} size={m.size:6d} mode={oct(m.mode)} type={m.type} "
                  f"md5={hashlib.md5(data).hexdigest()[:16]}")
            if m.size < 4096:
                head = data[:600]
                try:
                    print("      text:", head.decode("utf-8", "replace")[:600])
                except Exception:
                    print("      hex:", head[:200].hex())
            else:
                print("      head:", data[:64].hex())
