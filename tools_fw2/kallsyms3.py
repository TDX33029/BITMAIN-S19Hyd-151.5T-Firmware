#!/usr/bin/env python3
"""kallsyms v5: anchor on num_syms word; self-validate names/markers/token_table/token_index/offsets."""
import struct, sys

def expand(img, T, idx_vals, data):
    out = bytearray()
    for t in data:
        s = T + idx_vals[t]
        if s >= len(img):
            raise ValueError
        e = img.index(b"\0", s)
        out += img[s:e]
    return out

def parse(path):
    img = open(path, "rb").read()
    n = len(img)
    print("scanning num_syms anchors...")
    found = None
    w = 0x400
    while w < n // 4 - 16:
        N = struct.unpack_from("<I", img, w * 4)[0]
        if not (2000 <= N <= 400000):
            w += 1
            continue
        # names start: first nonzero byte within w*4+4 .. w*4+20
        ns = None
        for k in range(0, 6):
            off = w * 4 + 4 + k * 4
            if img[off] != 0 and img[off] < 0x40:
                ns = off
                break
        if ns is None:
            w += 1
            continue
        # parse names forward
        pos = ns
        names = []
        ok = True
        try:
            for k in range(N):
                ln = img[pos]
                pos += 1
                if ln == 0:
                    ok = False
                    break
                names.append(img[pos:pos+ln])
                pos += ln
        except IndexError:
            ok = False
        if not ok:
            w += 1
            continue
        names_end = pos
        # markers: find token_table after names_end (scan through the marker region)
        T = None
        for k in range(0, (N + 255) // 256 + 20):
            cand = names_end + k * 4
            if cand + 512 > n:
                break
            # try parse 256 contiguous strings here
            toffs = [0]
            p = cand
            good = True
            for kk in range(256):
                e = img.find(b"\0", p, p + 24)
                if e < 0 or e - p > 20:
                    good = False
                    break
                toffs.append(e + 1 - cand)
                p = e + 1
            if not good:
                continue
            idx_vals = tuple(toffs[:256])
            idx_chk = struct.unpack_from("<256H", img, p)
            if list(idx_chk) != list(idx_vals):
                continue
            # decode quality
            sample_ok = 0
            total = 0
            try:
                for d in names[::max(1, N // 100)]:
                    total += 1
                    dec = expand(img, cand, idx_vals, d)
                    if dec and all(32 <= c < 127 for c in dec):
                        sample_ok += 1
            except Exception:
                break
            if total and sample_ok >= total * 0.9:
                T = cand
                break
        if T is None:
            w += 1
            continue
        # relbase: search backward from names start for 0xC0-range word, table = N words ending at relbase pos
        rel_pos = None
        for back in range(1, 12):
            q = w * 4 - back * 4
            v = struct.unpack_from("<I", img, q)[0]
            if 0xC0000000 <= v < 0xC4000000:
                rel_pos = q
                break
        if rel_pos is None:
            w += 1
            continue
        tbl_start = rel_pos - N * 4
        if tbl_start < 0:
            w += 1
            continue
        offs = struct.unpack_from(f"<{N}I", img, tbl_start)
        rb = struct.unpack_from("<I", img, rel_pos)[0]
        addrs = [(rb + o2) & 0xFFFFFFFF for o2 in offs]
        if not all(addrs[i] <= addrs[i+1] for i in range(N - 1)):
            w += 1
            continue
        idx_vals = tuple(struct.unpack_from("<256H", img, T)[0:256]) if False else None
        found = (w * 4, N, ns, T, rel_pos, rb, offs, addrs, names)
        break
    if not found:
        return None
    ns_off, N, ns, T, rel_pos, rb, offs, addrs, names = found
    print(f"OK: num_syms={N} @0x{ns_off:x}, names @0x{ns:x}, token_table @0x{T:x}, relbase=0x{rb:08x} @0x{rel_pos:x}, offsets @0x{rel_pos - N*4:x}")
    idx_vals = []
    p = T
    for kk in range(256):
        e = img.index(b"\0", p)
        idx_vals.append(e + 1 - T)
        p = e + 1
    idx_vals = tuple(idx_vals)
    out = []
    for k in range(N):
        nm = expand(img, T, idx_vals, names[k])
        out.append((addrs[k], chr(nm[0]) if nm else "?", nm[1:].decode("ascii", "replace")))
    return out

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
