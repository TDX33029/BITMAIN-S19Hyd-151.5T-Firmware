#!/usr/bin/env python3
"""Inventory all ELF binaries in the S21 rootfs: defined functions, imports, libs."""
import os, sys, json
from elftools.elf.elffile import ELFFile

ROOTS = sys.argv[1:3] if len(sys.argv) > 2 else [
    r"D:\Document\tempPrj\BITMAIN-S19Hyd-151T-Firmware\Firmware2\S21\Unpacked\zynq7007_HHB70801\Unpacked\rootfs1",
    r"D:\Document\tempPrj\BITMAIN-S19Hyd-151T-Firmware\Firmware2\S21\Unpacked\zynq7007_HHB70801\Unpacked\rootfs2",
]
OUTDIR = sys.argv[3] if len(sys.argv) > 3 else r"D:\Document\tempPrj\BITMAIN-S19Hyd-151T-Firmware\Firmware2\S21\Unpacked\zynq7007_HHB70801\Unpacked\analysis"

def analyze(path):
    try:
        with open(path, "rb") as f:
            elf = ELFFile(f)
            if not elf.header["e_machine"] in ("EM_ARM",):
                return None
            info = {"type": elf.header["e_type"], "entry": elf.header["e_entry"],
                    "defined_funcs": [], "imports": [], "libs": [], "symtab_funcs": 0}
            for sec in elf.iter_sections():
                if sec.header["sh_type"] == "SHT_DYNAMIC":
                    for tag in sec.iter_tags():
                        if tag.entry.d_tag == "DT_NEEDED":
                            info["libs"].append(tag.needed)
                if sec.header["sh_type"] not in ("SHT_SYMTAB", "SHT_DYNSYM"):
                    continue
                is_dyn = sec.header["sh_type"] == "SHT_DYNSYM"
                for sym in sec.iter_symbols():
                    if sym["st_info"]["type"] != "STT_FUNC":
                        continue
                    name = sym.name
                    if not name:
                        continue
                    if sym["st_shndx"] == "SHN_UNDEF":
                        if is_dyn:
                            info["imports"].append(name)
                    else:
                        addr = sym["st_value"]
                        sz = sym["st_size"]
                        if is_dyn:
                            info["defined_funcs"].append((addr, sz, name))
                        else:
                            info["symtab_funcs"] += 1
            return info
    except Exception as e:
        return {"error": str(e)}

def main():
    rows = []
    for root in ROOTS:
        for dirpath, _, files in os.walk(root):
            for fn in sorted(files):
                p = os.path.join(dirpath, fn)
                try:
                    with open(p, "rb") as f:
                        magic = f.read(4)
                    if magic != b"\x7fELF":
                        continue
                except OSError:
                    continue
                rel = os.path.relpath(p, root)
                info = analyze(p)
                if info is None:
                    continue
                info["path"] = rel
                info["size"] = os.path.getsize(p)
                rows.append(info)
    os.makedirs(os.path.join(OUTDIR, "elf_funcs"), exist_ok=True)
    # master csv
    with open(os.path.join(OUTDIR, "elf_funcs", "MASTER_INVENTORY.csv"), "w", encoding="utf-8", newline="\n") as f:
        f.write("path,size,type,defined_funcs,dynsym_funcs,symtab_funcs,imports,libs\n")
        for r in sorted(rows, key=lambda x: x["path"]):
            f.write(f'{r["path"]},{r["size"]},{r["type"]},{len(r.get("defined_funcs", []))},'
                    f'{len(r.get("defined_funcs", []))},{r.get("symtab_funcs", 0)},'
                    f'{len(r.get("imports", []))},{",".join(r.get("libs", []))}\n')
    # per binary function lists
    for r in rows:
        if not r.get("defined_funcs"):
            continue
        safe = r["path"].replace("\\", "_").replace("/", "_")
        with open(os.path.join(OUTDIR, "elf_funcs", safe + ".funcs.txt"), "w", encoding="utf-8", newline="\n") as f:
            f.write(f"# {r['path']}  ({r['size']} B)  libs: {', '.join(r.get('libs', []))}\n")
            for addr, sz, name in sorted(r["defined_funcs"]):
                f.write(f"{addr:08x}  sz={sz:<6} {name}\n")
    # summary
    tot_df = sum(len(r.get("defined_funcs", [])) for r in rows)
    tot_imp = sum(len(r.get("imports", [])) for r in rows)
    print(f"ELF binaries: {len(rows)}; total exported functions: {tot_df}; imports: {tot_imp}")
    for r in sorted(rows, key=lambda x: -len(x.get("defined_funcs", [])))[:15]:
        print(f'  {r["path"]:44s} funcs={len(r.get("defined_funcs", [])):4d} imports={len(r.get("imports", [])):3d} libs={",".join(r.get("libs", []))[:40]}')

if __name__ == "__main__":
    main()
