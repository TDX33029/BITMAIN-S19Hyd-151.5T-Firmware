#!/usr/bin/env python3
"""Extract the chained uImages from the S19 bmu + ELF info."""
import struct, os, sys, hashlib

SRC = r"D:\Document\tempPrj\BITMAIN-S19Hyd-151T-Firmware\Firmware2\S19\Antminer-S19-Hydro-release-202212170935.bmu"
OUT = r"D:\Document\tempPrj\BITMAIN-S19Hyd-151T-Firmware\Firmware2\S19\Unpacked"

data = open(SRC, "rb").read()
os.makedirs(OUT, exist_ok=True)

def sha256(b): return hashlib.sha256(b).hexdigest()
def md5(b): return hashlib.md5(b).hexdigest()

uimgs = []
for magic_off in [m for m in range(len(data) - 4) if data[m:m+4] == b"\x27\x05\x19\x56"]:
    try:
        _, _, size, load, ep, dcrc = struct.unpack_from(">6I", data, magic_off + 4)
        os_, arch, typ, comp = struct.unpack_from(">4B", data, magic_off + 28)
        name = data[magic_off + 32:magic_off + 64].split(b"\0")[0].decode()
    except Exception:
        continue
    if not (0 < size < 0x2000000) or typ == 0 or typ > 15 or not name:
        continue
    uimgs.append((magic_off, size, load, ep, typ, comp, name))

print(f"found {len(uimgs)} uImages")
prev_end = None
for off, size, load, ep, typ, comp, name in uimgs:
    payload = data[off + 64: off + 64 + size]
    safe = name.replace("/", "_").replace(" ", "_")
    fn = os.path.join(OUT, f"uImage_{safe}.img")
    with open(fn, "wb") as f:
        f.write(payload)
    end = off + 64 + size
    chain = ""
    if prev_end is not None:
        chain = "  (chains from prev: %s)" % ("YES" if prev_end == off else f"no (gap {off - prev_end})")
    print(f"  @0x{off:08x} hdr64 payload 0x{off+64:08x}-0x{end:08x} ({size}) {name!r} type={typ} comp={comp} "
          f"md5={md5(payload)[:12]}{chain}")
    prev_end = end

# ELF at 0x2237f4
elf_off = data.find(b"\x7fELF")
if elf_off >= 0:
    etype, machine = struct.unpack_from("<HH", data, elf_off + 16)
    entry, phoff = struct.unpack_from("<II", data, elf_off + 24)[0], struct.unpack_from("<I", data, elf_off + 28)[0]
    phnum, phentsize = struct.unpack_from("<HH", data, elf_off + 44)[0], struct.unpack_from("<HH", data, elf_off + 42)[0]
    print(f"\nELF @0x{elf_off:08x}: type={etype} machine={machine} entry=0x{entry:08x} phoff=0x{phoff:x} phnum={phnum} phentsize={phentsize}")
    for i in range(min(phnum, 12)):
        p = struct.unpack_from("<8I", data, elf_off + phoff + i * phentsize)
        print(f"    ph[{i}]: type={p[0]:#x} off=0x{p[1]:x} vaddr=0x{p[2]:08x} filesz=0x{p[4]:x} memsz=0x{p[5]:x} flags={p[6]:#x}")
    # crude upper bound of ELF: last section/program end
    maxend = 0
    for i in range(phnum):
        p = struct.unpack_from("<8I", data, elf_off + phoff + i * phentsize)
        maxend = max(maxend, p[1] + p[4])
    print(f"    file-span of segments: 0x{maxend:x} -> ends @0x{elf_off+maxend:08x}")
