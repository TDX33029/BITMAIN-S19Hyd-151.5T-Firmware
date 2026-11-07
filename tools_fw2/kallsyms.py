#!/usr/bin/env python3
"""Extract kallsyms (all kernel function/symbol names) from a raw ARM32 Linux Image. v2"""
import struct, sys, re

def find_token_index_candidates(img):
    n = len(img)
    cands = []
    for o in range(0x1000, n - 512, 4):
        vals = struct.unpack_from("<256H", img, o)
        if vals[0] != 0:
            continue
        span = vals[255]
        if span < 128 or span > 0x2000:
            continue
        ok = True
        for i in range(1, 256):
            if vals[i] < vals[i-1]:
                ok = False
                break
        if not ok:
            continue
        # locate table start: last token length unknown, try all
        for lastlen in range(1, 24):
            T = o - span - lastlen
            if T < 0 or img[o-1] != 0:
                continue
            good = True
            zero_len = 0
            lowish = 0
            for k in range(256):
                s = T + vals[k]
                e = img.find(b"\0", s, s + 24)
                if e < 0 or e - s > 20:
                    good = False
                    break
                end_next = (T + vals[k + 1]) if k < 255 else o
                if e != end_next - 1:
                    good = False
                    break
                ln = e - s
                if ln == 0:
                    zero_len += 1
                seg = img[s:e]
                lowish += sum(1 for c in seg if 97 <= c <= 122 or c == 95)
            if not good or zero_len > 8:
                continue
            tbl = img[T:o]
            printable = sum(1 for c in tbl if 32 <= c < 127 or c == 0)
            if printable < len(tbl) * 0.95 or lowish < span * 0.5:
                continue
            cands.append((o, T))
            break
    return cands

def expand(img, T, idx_vals, data):
    out = bytearray()
    for t in data:
        s = T + idx_vals[t]
        e = img.index(b"\0", s)
        out += img[s:e]
    return out

def try_parse_names(img, ti_off, T):
    idx_vals = struct.unpack_from("<256H", img, ti_off)
    for p in range(ti_off - 0x500000, 0x1000, -4):
        N = struct.unpack_from("<I", img, p)[0]
        if not (2000 <= N <= 300000):
            continue
        pos = p + 4
        ok = True
        names = []
        end = ti_off
        for k in range(N):
            if pos + 1 > end:
                ok = False
                break
            ln = img[pos]
            pos += 1
            if pos + ln > end:
                ok = False
                break
            names.append(img[pos:pos+ln])
            pos += ln
        if not ok or pos > end:
            continue
        gap = T - pos
        if gap < 0 or gap % 4 != 0 or gap > 4 * ((N + 255) // 256) + 128:
            continue
        # decode sample
        sample_ok = 0
        total = 0
        for d in names[::max(1, N // 80)]:
            total += 1
            try:
                dec = expand(img, T, idx_vals, d)
            except Exception:
                ok = False
                break
            if dec and all(32 <= c < 127 for c in dec):
                sample_ok += 1
        if not ok or sample_ok < total * 0.85:
            continue
        return p, N, pos, idx_vals
    return None

def parse(path):
    img = open(path, "rb").read()
    cands = find_token_index_candidates(img)
    print(f"kallsyms: {len(cands)} token-table candidates")
    for ti_off, T in cands:
        print(f"  try token_index @0x{ti_off:x} table @0x{T:x}")
        r = try_parse_names(img, ti_off, T)
        if not r:
            print("    names not resolved")
            continue
        p, N, names_end, idx_vals = r
        # addresses: try base-relative then absolute
        syms = None
        mode = None
        for kind in ("rel", "abs"):
            if kind == "rel":
                rb = struct.unpack_from("<I", img, p - 4)[0]
                offs = struct.unpack_from(f"<{N}i", img, p - 4 - N * 4)
                addrs = [(rb + o) & 0xFFFFFFFF for o in offs]
            else:
                base = p - N * 4
                if base < 0:
                    continue
                addrs = list(struct.unpack_from(f"<{N}I", img, base))
            if all(addrs[i] <= addrs[i+1] for i in range(N - 1)) and addrs[0] >= 0x100:
                syms = addrs
                mode = kind
                break
        if syms is None:
            print("    address table not resolved")
            continue
        out = []
        for k in range(N):
            nm = expand(img, T, idx_vals, names[k])
            out.append((syms[k], chr(nm[0]) if nm else "?", nm[1:].decode("ascii", "replace")))
        print(f"  OK: num_syms={N}, layout={mode}, first=0x{syms[0]:08x}, last=0x{syms[-1]:08x}")
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
