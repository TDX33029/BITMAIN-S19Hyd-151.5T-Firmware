#!/usr/bin/env python3
"""kallsyms v4: anchor on (relbase, num_syms) pair, walk offsets table backward. Layout: [offsets N][relbase][num_syms][names][markers][token_table][token_index]."""
import struct, sys

def expand(img, T, idx_vals, data):
    out = bytearray()
    for t in data:
        s = T + idx_vals[t]
        e = img.index(b"\0", s)
        out += img[s:e]
    return out

def parse(path):
    img = open(path, "rb").read()
    n = len(img)
    words = n // 4
    print("scanning for (relbase, num_syms) anchors...")
    results = []
    o = 0x400
    while o < words - 8:
        rb = struct.unpack_from("<I", img, o * 4)[0]
        if not (0xC0000000 <= rb < 0xC4000000):
            o += 1
            continue
        N = struct.unpack_from("<I", img, (o + 1) * 4)[0]
        if not (2000 <= N <= 300000):
            o += 1
            continue
        # walk backward: offsets table of N monotone u32s ending at o-1
        start = o - N
        if start < 0:
            o += 1
            continue
        ok = True
        prev = None
        for k in range(start, o):
            v = struct.unpack_from("<I", img, k * 4)[0]
            if v >= 0x40000000 or (prev is not None and v < prev):
                ok = False
                break
            prev = v
        if not ok:
            o += 1
            continue
        results.append((o * 4, N, rb))
        o += 2
    print(f"anchors: {[(hex(a), n, hex(r)) for a, n, r in results]}")

    for rel_off, N, rb in results:
        names_start = rel_off + 8
        pos = names_start
        names = []
        try:
            for k in range(N):
                ln = img[pos]
                pos += 1
                names.append(img[pos:pos+ln])
                pos += ln
        except IndexError:
            print(f"@0x{rel_off:x}: names overrun")
            continue
        names_end = pos
        nmark = (N + 255) // 256
        if names_end + nmark * 4 > n:
            continue
        T = names_end + nmark * 4
        toffs = [0]
        p = T
        ok = True
        for k in range(256):
            e = img.find(b"\0", p, p + 24)
            if e < 0:
                ok = False
                break
            toffs.append(e + 1 - T)
            p = e + 1
        if not ok:
            print(f"@0x{rel_off:x}: token_table parse failed @0x{T:x}")
            continue
        tok_end = p
        idx_vals = tuple(toffs[:256])
        idx_check = struct.unpack_from("<256H", img, p)
        if list(idx_check) != list(idx_vals):
            print(f"@0x{rel_off:x}: token_index mismatch @0x{p:x}")
            continue
        sample_ok = 0
        total = 0
        for d in names[::max(1, N // 80)]:
            total += 1
            dec = expand(img, T, idx_vals, d)
            if dec and all(32 <= c < 127 for c in dec):
                sample_ok += 1
        if sample_ok < total * 0.85:
            print(f"@0x{rel_off:x}: decode quality low ({sample_ok}/{total})")
            continue
        offs = struct.unpack_from(f"<{N}I", img, rel_off - N * 4)
        addrs = [(rb + o2) & 0xFFFFFFFF for o2 in offs]
        if not all(addrs[i] <= addrs[i+1] for i in range(N - 1)):
            print(f"@0x{rel_off:x}: addresses not monotone")
            continue
        out = []
        for k in range(N):
            nm = expand(img, T, idx_vals, names[k])
            out.append((addrs[k], chr(nm[0]) if nm else "?", nm[1:].decode("ascii", "replace")))
        print(f"OK @0x{rel_off:x}: N={N} relbase=0x{rb:08x} token_table@0x{T:x} first=0x{addrs[0]:08x} last=0x{addrs[-1]:08x}")
        return out
    return None

if __name__ == "__main__":
    syms = parse(sys.argv[1])
    if syms:
        with open(sys.argv[2], "w", encoding="utf-8", newline="\n") as f:
            for a, t, n in syms:
                f.write(f"{a:08x} {t} {n}\n")
        fcnt = sum(1 for _, t, _ in syms if t in "tTwW")
        print(f"total symbols: {len(syms)}, text/functions: {fcnt} -> {sys.argv[2]}")
    else:
        print("FAILED")
