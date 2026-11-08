#!/usr/bin/env python3
"""Minimal FDT (device tree) dumper."""
import struct, sys

def dump(path, out=None):
    d = open(path, "rb").read()
    magic, totalsize, off_struct, off_strings, off_memrsv, version, last_comp, boot_cpu, size_strings, size_struct = struct.unpack_from(">10I", d, 0)
    assert magic == 0xD00DFEED, "not FDT"
    lines = [f"{path}: totalsize={totalsize} version={version} struct@0x{off_struct:x} strings@0x{off_strings:x}"]
    pos = off_struct
    depth = 0

    def readname(off):
        e = d.index(b"\0", off)
        return d[off:e].decode("utf-8", "replace"), e + 1

    while True:
        tok = struct.unpack_from(">I", d, pos)[0]
        pos += 4
        if tok == 1:  # BEGIN_NODE
            name, pos = readname(pos)
            pos = (pos + 3) & ~3
            lines.append("  " * depth + f"/{name}" if name else "  " * depth + "/")
            depth += 1
        elif tok == 2:
            depth -= 1
        elif tok == 3:  # PROP
            plen, nameoff = struct.unpack_from(">II", d, pos)
            pos += 8
            name, _ = readname(off_strings + nameoff)
            val = d[pos:pos + plen]
            pos += (plen + 3) & ~3
            if name == "compatible" or name in ("model", "status", "reg", "stdout-path", "serial-number"):
                if name == "compatible":
                    parts = [x.decode() for x in val.split(b"\0") if x]
                    v = ", ".join(parts)
                elif name == "reg":
                    words = struct.unpack(f">{plen//4}I", val)
                    v = " ".join(f"0x{w:x}" for w in words)
                else:
                    v = val.rstrip(b"\0").decode("utf-8", "replace")
            elif plen == 4:
                v = f"0x{struct.unpack_from('>I', val)[0]:08x}"
            elif plen <= 32:
                v = val.rstrip(b"\0").decode("utf-8", "replace") if b"@" not in val and val[:1].isalpha() or val[:1] in b"/0123456789" else val.hex()[:48]
            else:
                v = val.hex()[:48] + ("..." if plen > 24 else "")
            lines.append("  " * depth + f"{name} = {v}")
        elif tok == 4:
            continue
        elif tok == 9:
            lines.append("(end)")
            break
        else:
            lines.append(f"(unknown token {tok} @0x{pos-4:x})")
            break
    text = "\n".join(lines)
    if out:
        with open(out, "w", encoding="utf-8", newline="\n") as f:
            f.write(text)
    print(text[:3000])

if __name__ == "__main__":
    dump(sys.argv[1], sys.argv[2] if len(sys.argv) > 2 else None)
