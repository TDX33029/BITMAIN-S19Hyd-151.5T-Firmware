#!/usr/bin/env python3
"""Fine-grained map of sub-blocks inside a byte range of a file."""
import sys

path = sys.argv[1]
start = int(sys.argv[2], 0)
end = int(sys.argv[3], 0)
G = int(sys.argv[4], 0) if len(sys.argv) > 4 else 1024
data = open(path, "rb").read()[start:end]
gr = 64
runs = []
cur = None
zerorun = 0
for idx in range(len(data) // gr + 1):
    nz = any(data[idx*gr:(idx+1)*gr])
    if nz:
        if cur is None:
            cur = idx
        zerorun = 0
    else:
        if cur is not None:
            zerorun += 1
            if zerorun * gr >= G:
                runs.append((cur*gr, (idx - zerorun + 1)*gr))
                cur = None
                zerorun = 0
if cur is not None:
    runs.append((cur*gr, len(data)))
for a, b in runs:
    print(f"0x{start+a:08x} - 0x{start+b:08x}  ({b-a} bytes)")
