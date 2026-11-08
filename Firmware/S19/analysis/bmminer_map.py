# -*- coding: utf-8 -*-
"""
Static baseline for the Antminer S19 Hydro user-space binaries.

Produces, for a stripped ARM ET_EXEC:
  * function boundaries (ARM `push {..., lr}` prologue heuristic)
  * string cross-references (.text literal words that point into .rodata)
  * call graph (BL targets that land on detected functions)
  * per-function string dumps

Usage:
  python -I bmminer_map.py <elf-file> <outdir>
  python -I bmminer_map.py --ext2 <ext2-image> <path-in-image> <outdir>
"""
import json
import os
import re
import struct
import sys

from elftools.elf.elffile import ELFFile

ARM_PUSH_LR = 0xE92D4000
MASK_PUSH = 0xFFFF4000      # push {.., lr}: cond=AL, opcode 0x92D, bit14 (lr) set
BL_MASK = 0x0F000000
BL_OPC = 0x0B000000


def load_elf(data):
    import io
    return ELFFile(io.BytesIO(data))


def section_bytes(e, name):
    s = e.get_section_by_name(name)
    if s is None:
        return None, 0
    return s.data(), s["sh_addr"]


def is_printable(bs):
    if len(bs) < 5:
        return None
    try:
        s = bs.split(b"\x00")[0].decode("latin1")
    except Exception:
        return None
    if len(s) < 5:
        return None
    good = sum(1 for c in s if 32 <= ord(c) < 127 or c in "\t\n")
    if good < len(s) * 0.9:
        return None
    return s


def analyze(data, outdir, label):
    e = load_elf(data)
    text, taddr = section_bytes(e, ".text")
    ro, raddr = section_bytes(e, ".rodata")
    rod = e.get_section_by_name(".rodata")
    if text is None or ro is None:
        raise SystemExit("no .text/.rodata")
    tend = taddr + len(text)
    rend = raddr + len(ro)

    # ---- function starts (ARM prologues) ----
    starts = []
    for i in range(0, len(text) - 3, 4):
        w = struct.unpack_from("<I", text, i)[0]
        if (w & MASK_PUSH) == ARM_PUSH_LR:
            starts.append(taddr + i)
    # de-dup / merge (a `push {lr}` inside a function's epilogue is rare at 4-byte align)
    starts = sorted(set(starts))
    bounds = list(zip(starts, starts[1:] + [tend]))
    start_set = set(starts)

    # ---- literal refs into .rodata ----
    func_strings = {a: [] for a in starts}
    starts_arr = starts

    def func_of(addr):
        lo, hi = 0, len(starts_arr) - 1
        best = starts_arr[0] if starts_arr else taddr
        while lo <= hi:
            mid = (lo + hi) // 2
            if starts_arr[mid] <= addr:
                best = starts_arr[mid]
                lo = mid + 1
            else:
                hi = mid - 1
        return best

    for i in range(0, len(text) - 3, 4):
        w = struct.unpack_from("<I", text, i)[0]
        if raddr <= w < rend:
            s = is_printable(ro[w - raddr: w - raddr + 200])
            if s:
                func_strings[func_of(taddr + i)].append(s)

    # ---- call graph ----
    calls = {}
    for i in range(0, len(text) - 3, 4):
        w = struct.unpack_from("<I", text, i)[0]
        if (w & BL_MASK) == BL_OPC:
            off = w & 0x00FFFFFF
            if off & 0x00800000:
                off -= 0x01000000
            tgt = taddr + i + 8 + off * 4
            if tgt in start_set:
                calls.setdefault(func_of(taddr + i), set()).add(tgt)

    # ---- report ----
    os.makedirs(outdir, exist_ok=True)
    funcs = []
    for a, b in bounds:
        funcs.append({
            "addr": hex(a), "size": b - a,
            "strings": sorted(set(func_strings.get(a, [])))[:80],
            "calls": sorted(hex(x) for x in calls.get(a, [])),
        })
    funcs.sort(key=lambda f: -len(f["strings"]))
    json.dump({"binary": label, "text": hex(taddr), "text_size": len(text),
               "rodata": hex(raddr), "rodata_size": len(ro),
               "functions": len(starts), "items": funcs},
              open(os.path.join(outdir, label + "_functions.json"), "w"), indent=1)

    lines = ["# %s 逆向基线\n" % label,
             "- .text: %#x (%d B)  .rodata: %#x (%d B)" % (taddr, len(text), raddr, len(ro)),
             "- 检测到函数: %d\n" % len(starts)]
    for f in funcs[:60]:
        if not f["strings"]:
            continue
        lines.append("## %s  (%d B)\n" % (f["addr"], f["size"]))
        for s in f["strings"][:18]:
            lines.append("- `%s`" % s.replace("`", "'"))
        lines.append("")
    open(os.path.join(outdir, label + "_strings_by_function.md"), "w", encoding="utf-8").write("\n".join(lines))
    print("%s: %d functions, %d string refs" % (label, len(starts), sum(len(v) for v in func_strings.values())))


def main():
    args = sys.argv[1:]
    if args and args[0] == "--ext2":
        img, inner, outdir = args[1], args[2], args[3]
        sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
        from extract_ext2 import Ext2
        fs = Ext2(img)

        def ino(path):
            i = 2
            for part in [p for p in path.split("/") if p]:
                n = fs.inode(i)
                nx = None
                for name, c, ft in fs.listdir(n):
                    if name == part:
                        nx = c
                        break
                i = nx
            return i
        data = fs.read_file(fs.inode(ino(inner)))
        analyze(data, outdir, os.path.basename(inner).replace(".", "_"))
    else:
        path, outdir = args[0], args[1]
        analyze(open(path, "rb").read(), outdir, os.path.splitext(os.path.basename(path))[0])


if __name__ == "__main__":
    main()
