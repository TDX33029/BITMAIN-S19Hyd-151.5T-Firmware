"""Extract dynamic voltage regulation (动态调压) functions from unpacked bosminer-plus-tuner.

Method:
 1. find voltage-related strings in .rodata*
 2. single pass over .text word stream to find literal-pool slots pointing at those strings
 3. map pool slots -> containing function via .ARM.exidx boundaries
 4. per function: detect mode (ARM/Thumb) by string-hit success, dump disassembly
 5. correlate with module paths (pll.rs / voltage.rs / power_target) from panic-location evidence

Outputs: analysis/out/voltage/
  voltage_strings.csv     string -> VA(s)
  voltage_functions.csv   function -> hits, strings, mode, size
  disasm/<start>.asm      full disassembly per function
"""
import bisect, os, re, struct, sys
from collections import defaultdict
from elftools.elf.elffile import ELFFile
import capstone

HERE = os.path.dirname(os.path.abspath(__file__))
BIN = os.path.join(HERE, '..', 'unpacked', 'bosminer-plus-tuner')
OUT = os.path.join(HERE, 'out', 'voltage')
os.makedirs(os.path.join(OUT, 'disasm'), exist_ok=True)

elf = ELFFile(open(BIN, 'rb'))
secs = []
for s in elf.iter_sections():
    if s['sh_addr'] and s['sh_size']:
        secs.append((s.name, s['sh_addr'], s['sh_size'], s.data()))

def sec_at(va):
    for name, addr, size, data in secs:
        if addr <= va < addr + size:
            return name, addr, data
    return None, None, None

def read4(va):
    name, addr, data = sec_at(va)
    if name is None: return None
    off = va - addr
    return struct.unpack_from('<I', data, off)[0] if off + 4 <= len(data) else None

def get_str(va, maxlen=200):
    """string at va; tolerate UTF-8"""
    name, addr, data = sec_at(va)
    if name is None or not name.startswith('.rodata'): return None
    off = va - addr
    chunk = data[off:off+maxlen]
    end = chunk.find(b'\x00')
    raw = chunk[:end if end >= 0 else 0]
    if len(raw) < 3 or len(raw) > 160: return None
    try:
        s = raw.decode('utf-8')
    except UnicodeDecodeError:
        return None
    if sum(1 for c in s if c.isprintable()) < len(s) * 0.8: return None
    return s

t_name, t_addr, t_size, T = [(n,a,s,d) for n,a,s,d in secs if n == '.text'][0]
t_end = t_addr + t_size
ex = [(a,s,d) for n,a,s,d in secs if n == '.ARM.exidx'][0]
ex_a, EX = ex[0], ex[2]
def sext31(x): return x - (1 << 31) if x & (1 << 31) else x
starts = sorted(ex_a + i*8 + sext31(struct.unpack_from('<I', EX, i*8)[0]) for i in range(len(EX)//8))
starts = [s for s in starts if t_addr <= s < t_end]

# ---- 1. voltage strings ----
VOLT_RE = re.compile(r'(voltage|vdd|dcdc|dc_dc|regulator|vbat|set_v|vcom|avs\b|psu_(min|max)_voltage|voltage_(table|offset|limit|feedback|step))', re.I)
vstr = {}   # va -> string
for name, addr, size, data in secs:
    if not name.startswith('.rodata'): continue
    # scan null-terminated printable strings
    for m in re.finditer(rb'[\x20-\x7e]{5,200}\x00', data):
        s = m.group()[:-1]
        try: txt = s.decode('ascii')
        except UnicodeDecodeError: continue
        if VOLT_RE.search(txt):
            vstr[addr + m.start()] = txt
print(f'voltage-related strings: {len(vstr)}', file=sys.stderr)

# dedupe: many are prefix-shared; keep all VAs
import csv
with open(os.path.join(OUT, 'voltage_strings.csv'), 'w', newline='', encoding='utf-8') as fh:
    w = csv.writer(fh); w.writerow(['va', 'string'])
    for va in sorted(vstr): w.writerow([f'0x{va:08x}', vstr[va]])

# ---- 2. scan .text word stream for pool slots ----
hit_funcs = defaultdict(set)   # func_start -> set of (string_va)
hit_strings = defaultdict(set)
n_words = len(T) // 4
words = memoryview(T).cast('I') if False else None
# iterate aligned dwords
probe = set(vstr)
for off in range(0, len(T) - 3, 4):
    v = struct.unpack_from('<I', T, off)[0]
    if v in probe:
        fi = bisect.bisect_right(starts, t_addr + off) - 1
        if fi >= 0:
            fstart = starts[fi]
            hit_funcs[fstart].add(v)
            hit_strings[fstart].add(vstr[v])
print(f'functions referencing voltage strings: {len(hit_funcs)}', file=sys.stderr)

# ---- 3. disassemble each function (mode by string evidence) ----
md_arm = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
md_thm = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_THUMB)

def sweep_strings(blob, va, mode):
    md = md_arm if mode == 'A' else md_thm
    step = 4 if mode == 'A' else 2
    found = []
    off = 0
    n = len(blob)
    while off < n - 3:
        got = False
        for ins in md.disasm(blob[off:off+4], va + off):
            got = True
            if ins.mnemonic.startswith('ldr') and '[pc' in ins.op_str:
                m = re.search(r'#(-?0x[0-9a-fA-F]+|-?\d+)', ins.op_str)
                if m:
                    base = ((va + off) + (8 if mode == 'A' else 4)) & ~3
                    v = read4(base + int(m.group(1), 0))
                    if v is not None and v in probe:
                        found.append((va + off, v))
            off += ins.size
            break
        if not got:
            off += step
    return found

def disasm_file(blob, va, mode, path):
    md = md_arm if mode == 'A' else md_thm
    step = 4 if mode == 'A' else 2
    with open(path, 'w', encoding='utf-8') as fh:
        off = 0
        while off < len(blob) - 1:
            got = False
            for ins in md.disasm(blob[off:off+4], va + off):
                fh.write(f'0x{ins.address:08x}: {ins.mnemonic:<10s} {ins.op_str}\n')
                off += ins.size; got = True; break
            if not got:
                fh.write(f'0x{va+off:08x}: <data {blob[off:off+2].hex()}>\n')
                off += step

rows = []
for fstart in sorted(hit_funcs):
    fi = bisect.bisect_right(starts, fstart)
    fend = starts[fi] if fi < len(starts) else t_end
    if fend <= fstart: fend = fstart + 0x100
    sz = min(fend, t_end) - fstart
    off = fstart - t_addr
    blob = T[off:off + sz]
    la = sweep_strings(blob, fstart, 'A')
    lt = sweep_strings(blob, fstart, 'T')
    # score: direct hits on voltage strings via instruction-level load
    mode, direct = ('A', la) if len(la) >= len(lt) else ('T', lt)
    if len(la) != len(lt) and max(len(la), len(lt)) == 0:
        direct = []
    strs = sorted({vstr[v] for _, v in direct}) if direct else sorted(hit_strings[fstart])[:5]
    disasm_file(blob, fstart, mode, os.path.join(OUT, 'disasm', f'{fstart:08x}_{mode}.asm'))
    rows.append((fstart, sz, mode, len(direct), ' | '.join(strs)[:250]))

with open(os.path.join(OUT, 'voltage_functions.csv'), 'w', newline='', encoding='utf-8') as fh:
    w = csv.writer(fh)
    w.writerow(['function_start', 'size', 'mode', 'direct_voltage_refs', 'voltage_strings'])
    for r in sorted(rows, key=lambda x: -x[3]):
        w.writerow([f'0x{r[0]:08x}', r[1], r[2], r[3], r[4]])

print(f'exported {len(rows)} functions -> {OUT}', file=sys.stderr)
top = sorted(rows, key=lambda x: -x[3])[:12]
for st, sz, mode, d, s in top:
    print(f'  0x{st:08x} sz={sz:6d} {mode} refs={d} {s[:90]}', file=sys.stderr)
