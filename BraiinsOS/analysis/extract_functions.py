"""Extract all functions from unpacked bosminer-plus-tuner (ARM32 Rust, musl static).

Outputs (in analysis/out/):
  functions_all.csv       start,size,feature,module,line,nrefs,first_strings
  feature_summary.csv     feature,module,path_prefix,n_functions,n_bytes
"""
import csv, os, re, struct, sys
from collections import defaultdict
from elftools.elf.elffile import ELFFile
import capstone

HERE = os.path.dirname(os.path.abspath(__file__))
BIN = os.path.join(HERE, '..', 'unpacked', 'bosminer-plus-tuner')
OUT = os.path.join(HERE, 'out')
os.makedirs(OUT, exist_ok=True)

f = open(BIN, 'rb')
elf = ELFFile(f)
secs = {}
for s in elf.iter_sections():
    if s['sh_addr'] and s['sh_size']:
        secs[s.name] = (s['sh_addr'], s['sh_size'], s.data())

def read_vaddr(va, n):
    for name, (addr, size, data) in secs.items():
        if addr <= va < addr + size:
            off = va - addr
            return data[off:off+n]
    return b''

text_addr, text_size, text = secs['.text']
rodata_addr, rodata_size, rodata = secs['.rodata']
str1_addr, str1_size, str1 = secs['.rodata.str1.1']
str4_addr, str4_size, str4 = secs['.rodata.str1.4']

# ---- 1. function table from .ARM.exidx (PREL31 offsets) ----
exidx_addr, exidx_size, exidx = secs['.ARM.exidx']
n_entries = exidx_size // 8
def sext31(x):
    return x - (1 << 31) if x & (1 << 31) else x
starts = []
for i in range(n_entries):
    w0 = struct.unpack_from('<I', exidx, i * 8)[0]
    starts.append(exidx_addr + i * 8 + sext31(w0))
starts.sort()
# extents: next start; last -> end of .text
text_end = text_addr + text_size
funcs = []
for i, st in enumerate(starts):
    if not (text_addr <= st < text_end):
        continue
    end = starts[i + 1] if i + 1 < len(starts) else text_end
    if end <= st:
        end = st + 4
    funcs.append([st, min(end, text_end) - st])
# dedupe / clip overlapping
clean = []
for st, sz in funcs:
    if clean and st < clean[-1][0] + clean[-1][1]:
        clean[-1][1] = st - clean[-1][0]
    if sz > 0:
        clean.append([st, sz])
funcs = clean
print(f'functions from .ARM.exidx: {len(funcs)}')

# ---- 2. find Rust panic Location structs in .data.rel.ro / .rodata ----
# struct: { ptr:&str, len:u32, line:u32, col:u32 }
def str_at(va):
    b = read_vaddr(va, 512)
    if not b:
        return None
    end = b.find(b'\x00')
    return b[:end] if end > 0 else b

DR_addr, DR_size, DR = secs['.data.rel.ro']
locations = {}   # struct_vaddr -> (path, line)

def scan_locations(name):
    addr, size, data = secs[name]
    n = size // 4
    if n < 4:
        return
    words = struct.unpack(f'<{n}I', data[:n * 4])
    found = 0
    for i in range(n - 3):
        p, l, line, col = words[i], words[i+1], words[i+2], words[i+3]
        if not (0x200000 < p < 0x5b5100) or not (0 < l < 300) or not (0 < line < 200000) or not (0 < col < 500):
            continue
        s = read_vaddr(p, l)
        if len(s) == l and s.endswith(b'.rs') and b'/' in s:
            locations[addr + i * 4] = (s.decode('ascii', 'replace'), line)
            found += 1
    print(f'  {name}: {found} Location structs')

for secname in ['.rodata', '.rodata.cst16', '.rodata.cst32', '.rodata.cst8', '.rodata.cst4', '.data.rel.ro', '.data']:
    if secname in secs:
        scan_locations(secname)
print(f'panic Location structs total: {len(locations)}')
loc_set = set(locations)

# ---- 3. linear sweep .text with capstone, collect literal-pool refs ----
md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_THUMB)  # binary is Thumb-2 (e_flags EABI5, thumb entry)
md.detail = True

func_idx = 0
nfuncs = len(funcs)
fn_module = [None] * nfuncs     # (path, line) per function
fn_strings = [[] for _ in range(nfuncs)]  # referenced string literals (few)
fn_nrefs = [0] * nfuncs

# helper: is va a string literal?
STR_SECS = [(str1_addr, str1, ), (str4_addr, str4,), (rodata_addr, rodata,)]
def try_string(va):
    for addr, data in STR_SECS:
        if addr <= va < addr + len(data):
            off = va - addr
            chunk = data[off:off + 200]
            if len(chunk) < 4:
                return None
            end = chunk.find(b'\x00')
            s = chunk[:end if end != -1 else 0]
            if 4 <= len(s) <= 120 and all(32 <= c < 127 for c in s):
                return s.decode('ascii')
    return None

import bisect
fstarts = [fu[0] for fu in funcs]

addr2fi = {}
cur = 0
pos = text_addr
code = text
for fi, (st, sz) in enumerate(funcs):
    off = st - text_addr
    blob = code[off:off + sz]
    try:
        insns = list(md.disasm(blob, st))
    except Exception:
        insns = []
    locs = set()
    strs = []
    nref = 0
    for ins in insns:
        if ins.mnemonic.startswith('ldr') and 'pc' in ins.op_str:  # ldr / ldr.w
            # Thumb-2: PC reads as (instruction address + 4) aligned to 4
            try:
                m = re.search(r'\[pc, #(-?0x[0-9a-fA-F]+|-?\d+)\]', ins.op_str)
                if not m:
                    continue
                lit_addr = ((ins.address + 4) & ~3) + int(m.group(1), 0)
                val = struct.unpack('<I', read_vaddr(lit_addr, 4))[0]
            except Exception:
                continue
            if val in loc_set and len(locs) < 64:
                locs.add(val)
                nref += 1
            elif len(strs) < 6:
                s = try_string(val)
                if s:
                    strs.append(s)
                    nref += 1
    fn_nrefs[fi] = nref
    if locs:
        # majority module
        mods = defaultdict(int)
        for a in locs:
            mods[locations[a]] += 1
        fn_module[fi] = max(mods.items(), key=lambda kv: kv[1])[0]
    fn_strings[fi] = strs
    if fi % 4000 == 0:
        print(f'  swept {fi}/{nfuncs}...', file=sys.stderr)

# ---- 4. feature classification ----
RULES = [
    (r'tune/', 'AUTOTUNING'),
    (r'dps', 'DPS'),
    (r'eeprom', 'EEPROM'),
    (r'pll', 'PLL'),
    (r'stratum_v2', 'STRATUM_V2'),
    (r'stratum_v1', 'STRATUM_V1'),
    (r'client/', 'POOL_CLIENT'),
    (r'work/|hub', 'WORK_ENGINE'),
    (r'api/rpc', 'CGMINER_API'),
    (r'devel_api', 'DEVEL_API'),
    (r'license', 'LICENSE'),
    (r'devfee', 'DEVFEE'),
    (r'bos_mgmt', 'MGMT_TELEMETRY'),
    (r'braa', 'BRAA_AGENT'),
    (r'miner/antminer|hashboard', 'HARDWARE_MINER'),
    (r'miner/model|platform', 'MODEL_DETECT'),
    (r'hal|sysfs', 'HAL'),
    (r'persistence', 'PERSISTENCE'),
    (r'pool_groups', 'POOL_GROUPS'),
    (r'metrics', 'METRICS'),
    (r'mining', 'MINING_CORE'),
]
def classify(path):
    for pat, feat in RULES:
        if re.search(pat, path):
            return feat
    if path.startswith('core/') or path.startswith('alloc/') or path.startswith('std'):
        return 'RUST_LIB'
    if re.search(r'library/|rustc|cargo', path):
        return 'RUST_LIB'
    return 'OTHER'

os.makedirs(OUT, exist_ok=True)
with open(os.path.join(OUT, 'functions_all.csv'), 'w', newline='', encoding='utf-8') as fh:
    w = csv.writer(fh)
    w.writerow(['start', 'size', 'feature', 'module', 'line', 'n_string_refs', 'sample_strings'])
    for i, (st, sz) in enumerate(funcs):
        mod, line = fn_module[i] if fn_module[i] else ('', '')
        feat = classify(mod) if mod else 'UNKNOWN'
        w.writerow([f'0x{st:08x}', sz, feat, mod, line, fn_nrefs[i], ' | '.join(fn_strings[i])[:300]])

agg = defaultdict(lambda: [0, 0])
for i, (st, sz) in enumerate(funcs):
    mod, line = fn_module[i] if fn_module[i] else ('<no-panic-xref>', '')
    feat = classify(mod) if mod else 'UNKNOWN'
    agg[(feat, mod)][0] += 1
    agg[(feat, mod)][1] += sz
with open(os.path.join(OUT, 'feature_summary.csv'), 'w', newline='', encoding='utf-8') as fh:
    w = csv.writer(fh)
    w.writerow(['feature', 'module', 'n_functions', 'total_bytes'])
    for (feat, mod), (n, b) in sorted(agg.items(), key=lambda kv: (-kv[1][0])):
        w.writerow([feat, mod, n, b])

print(f'DONE. attributed modules: {sum(1 for m in fn_module if m)}/{nfuncs} functions')
