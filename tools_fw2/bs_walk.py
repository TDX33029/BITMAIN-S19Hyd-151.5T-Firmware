#!/usr/bin/env python3
"""Walk Xilinx 7-series bitstream packets from a sync word; report structure and end."""
import struct, sys

REGS = {0: "CRC", 1: "FAR", 2: "FDRI", 3: "FDRO", 4: "CMD", 5: "CTL", 6: "MASK", 7: "STAT",
        8: "LOUT", 9: "COR0", 0xA: "MFWR", 0xB: "CBC", 0xC: "IDCODE", 0xD: "AXSS", 0xE: "COR1",
        0x10: "WBSTAR", 0x11: "TIMER", 0x13: "BOOTSTS", 0x16: "CTL1"}
CMDS = {0: "NULL", 1: "WAKEUP", 2: "RSTCRC", 3: "DGHIGH", 4: "CAPTURE", 5: "RCFG?", 7: "RCRC",
        8: "IPROG?", 9: "START?", 0xA: "?", 0xB: "END?", 0xD: "DESYNC", 0xE: "DESCRAMBLE?", 0xF: "IPROG"}

def walk(data, start, verbose_limit=40):
    pos = start
    n = len(data)
    assert data[pos:pos+4] == b"\x66\x55\x99\xaa", "no sync"
    print(f"sync @0x{start:x}")
    pos += 4
    log = []
    dri_words = 0
    last_far = None
    shown = 0
    while pos + 4 <= n:
        w = struct.unpack_from("<I", data, pos)[0]
        t = w >> 29
        if w == 0x20000000 or w == 0:
            pos += 4
            continue
        if t == 1:  # type1 (0x2xxx read/noop, 0x3xxx write)
            cnt = w & 0x7FF
            write = bool(w & 0x10000000)
            reg = (w >> 13) & 0x3FF
            name = REGS.get(reg, f"reg{reg:#x}")
            if not write:
                log.append(f"@0x{pos:x} T1-READ {name} cnt={cnt}")
                pos += 4 + (4 if cnt else 0)  # reads may reserve a word
                continue
            if cnt == 0:
                pos += 4
                continue
            payload = struct.unpack_from(f"<{cnt}I", data, pos + 4)
            if name == "FDRI":
                dri_words += cnt
                if len(log) < verbose_limit:
                    log.append(f"@0x{pos:x} T1 FDRI +{cnt} words")
            elif cnt == 1:
                v = payload[0]
                extra = ""
                if name == "CMD":
                    extra = f" ({CMDS.get(v, '?')})"
                if name == "IDCODE":
                    extra = f" (device 0x{v:08x})"
                if len(log) < verbose_limit:
                    log.append(f"@0x{pos:x} T1 write {name} = 0x{v:08x}{extra}")
            else:
                if len(log) < verbose_limit:
                    log.append(f"@0x{pos:x} T1 write {name} cnt={cnt} first=0x{payload[0]:08x}")
            if name == "FAR":
                last_far = payload[0]
            pos += 4 + cnt * 4
        elif t == 2:  # type2 (0x4/0x5): count in header bits[26:0], data follows
            cnt = w & 0x07FFFFFF
            write = bool(w & 0x10000000)
            reg = (w >> 13) & 0x3FF
            name = REGS.get(reg, f"reg{reg:#x}")
            if write and name == "FDRI":
                dri_words += cnt
                if len(log) < verbose_limit:
                    log.append(f"@0x{pos:x} T2 FDRI +{cnt} words (0x{cnt*4:x} bytes)")
            else:
                if len(log) < verbose_limit:
                    log.append(f"@0x{pos:x} T2 {'write' if write else 'read'} {name} cnt={cnt}")
            pos += 4 + cnt * 4
        else:
            log.append(f"@0x{pos:x} STOP non-packet word 0x{w:08x} (t={t})")
            break
    end = pos
    for l in log[:verbose_limit]:
        print("   ", l)
    if len(log) > verbose_limit:
        print(f"    ... ({len(log)-verbose_limit} more)")
    print(f"    => walked to 0x{end:x}, FDRI total {dri_words} words = {dri_words*4} bytes")
    return end, dri_words

data = open(sys.argv[1], "rb").read()
starts = [int(x, 0) for x in sys.argv[2:]] or [0x22630]
for s in starts:
    try:
        walk(data, s)
    except AssertionError as e:
        print("skip:", e)
    except struct.error as e:
        print("struct error:", e)
    print("-" * 50)
