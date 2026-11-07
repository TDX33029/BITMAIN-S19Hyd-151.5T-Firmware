#!/usr/bin/env python3
"""kallsyms FINAL: verified layout for S21e kernel Image.
[num_syms 0x790da0][names 0x790da7 (16 empty records)][markers 0x838130][token_table 0x8384b0][token_index 0x838840]
offsets table [0x759650, 0x790d90), relbase @0x790d90 = 0xC0008000"""
import struct, sys

def main(path, out):
    img = open(path, "rb").read()
    N = struct.unpack_from("<I", img, 0x790DA0)[0]
    assert N == 56768, N
    idx_vals = struct.unpack_from("<256H", img, 0x838840)
    T = 0x8384B0

    # parse names
    pos = 0x790DB0
    names = []
    for k in range(N):
        ln = img[pos]
        pos += 1
        assert ln > 0, (k, pos)
        names.append(img[pos:pos+ln])
        pos += ln
    names_end = pos
    print(f"names: {N} records, end @0x{names_end:x}")

    def expand(d):
        if not d:
            return b""
        out = bytearray()
        for t in d:
            s = T + idx_vals[t]
            e = img.index(b"\0", s)
            out += img[s:e]
        return out

    # decode sample check
    bad = 0
    for d in names[::500]:
        dec = expand(d)
        if dec and not all(32 <= c < 127 for c in dec):
            bad += 1
    print(f"decode check bad={bad}")

    offs = struct.unpack_from(f"<{N}I", img, 0x759650)
    rb = 0xC0008000
    addrs = [(rb + o) & 0xFFFFFFFF for o in offs]

    syms = []
    for k in range(N):
        nm = expand(names[k])
        if nm:
            syms.append((addrs[k], chr(nm[0]), nm[1:].decode("ascii", "replace")))
        else:
            syms.append((addrs[k], "?", "(stripped)"))
    with open(out, "w", encoding="utf-8", newline="\n") as f:
        for a, t, n in syms:
            f.write(f"{a:08x} {t} {n}\n")
    fcnt = sum(1 for _, t, _ in syms if t in "tTwW")
    print(f"total symbols: {len(syms)}, text/functions: {fcnt}")
    # sanity: symbol at Image+0x1093c0 (branch target of word0)?
    tgt = 0xC0008000 + 0x1093C0
    for a, t, n in syms:
        if abs(a - tgt) <= 8:
            print(f"anchor: word0 branch target 0x{tgt:08x} ~= symbol {n} ({t}) @0x{a:08x}")
    # show first/last few
    for a, t, n in syms[:8]:
        print(f"  {a:08x} {t} {n}")
    print("  ...")
    for a, t, n in syms[-5:]:
        print(f"  {a:08x} {t} {n}")

if __name__ == "__main__":
    main(sys.argv[1], sys.argv[2])
