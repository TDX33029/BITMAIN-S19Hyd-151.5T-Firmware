"""v2: extract all functions from bosminer-plus-tuner with per-function ARM/Thumb mode
detection and string-evidence collection (same methodology as S19 bmminer analysis).

Outputs analysis/out/:
  functions_all.csv      start,size,mode,keywords,strings
  keyword_functions.csv  keyword,start,size,strings
  feature_stats.txt      summary
"""
import csv, os, re, struct, sys
from collections import defaultdict
from elftools.elf.elffile import ELFFile
import capstone

HERE = os.path.dirname(os.path.abspath(__file__))
BIN = os.path.join(HERE, '..', 'unpacked', 'bosminer-plus-tuner')
OUT = os.path.join(HERE, 'out')
os.makedirs(OUT, exist_ok=True)

elf = ELFFile(open(BIN, 'rb'))
secs = {}
for s in elf.iter_sections():
    if s['sh_addr'] and s['sh_size']:
        secs[s.name] = (s['sh_addr'], s['sh_size'], s.data())

def sec_of(va):
    for name, (addr, size, data) in secs.items():
        if addr <= va < addr + size:
            return name, addr, data
    return None, None, None

def read4(va):
    name, addr, data = sec_of(va)
    if name is None: return None
    off = va - addr
    return struct.unpack_from('<I', data, off)[0] if off + 4 <= len(data) else None

t_addr, t_size, T = secs['.text']
t_end = t_addr + t_size

# ---------- function boundaries from .ARM.exidx ----------
ex_a, ex_s, EX = secs['.ARM.exidx']
def sext31(x): return x - (1 << 31) if x & (1 << 31) else x
starts = sorted(ex_a + i * 8 + sext31(struct.unpack_from('<I', EX, i * 8)[0]) for i in range(ex_s // 8))
funcs = []
for i, st in enumerate(starts):
    if not (t_addr <= st < t_end): continue
    end = starts[i+1] if i + 1 < len(starts) else t_end
    if end <= st: end = st + 4
    funcs.append([st, min(end, t_end) - st])
clean = []
for st, sz in funcs:
    if clean and st < clean[-1][0] + clean[-1][1]:
        clean[-1][1] = st - clean[-1][0]
    if sz > 0: clean.append([st, sz])
funcs = clean
print(f'functions: {len(funcs)}', file=sys.stderr)

# ---------- string lookup ----------
def get_str(va, maxlen=160):
    name, addr, data = sec_of(va)
    if name is None or not name.startswith('.rodata'): return None
    off = va - addr
    chunk = data[off:off+maxlen]
    end = chunk.find(b'\x00')
    s = chunk[:end if end >= 0 else 0]
    if 4 <= len(s) <= 150 and all(32 <= c < 127 for c in s):
        return s.decode('ascii')
    return None

md_arm = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
md_thm = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_THUMB)

def sweep(blob, va, mode):
    """disassemble with error-skipping; return (literal_values, n_decoded)"""
    md = md_arm if mode == 'A' else md_thm
    step = 4 if mode == 'A' else 2
    lits = []
    decoded = 0
    off = 0
    n = len(blob)
    while off < n - 3:
        got = False
        for ins in md.disasm(blob[off:off+4], va + off):
            got = True
            decoded += 1
            op = ins.op_str
            if ins.mnemonic.startswith('ldr') and '[pc' in op and off + 4 <= n:
                m = re.search(r'#(-?0x[0-9a-fA-F]+|-?\d+)', op)
                if m:
                    base = ((va + off) + (8 if mode == 'A' else 4)) & ~3
                    lit = base + int(m.group(1), 0)
                    v = read4(lit)
                    if v is not None:
                        lits.append(v)
            size = ins.size
            break
        off += ins.size if got else step
    return lits, decoded

def detect_mode(blob, va):
    la, da = sweep(blob[:64], va, 'A')
    lt, dt = sweep(blob[:64], va, 'T')
    # prefer the mode that decodes more; require it to also find some literals or flow
    if dt > da * 1.15: return 'T'
    if da > dt * 1.15: return 'A'
    # tie-break: Thumb if plausible thumb push prologue
    if len(blob) >= 2 and (blob[1] & 0xfe) == 0xb4 or blob[:2] in (b'\x2d\xe9',) or blob[0] == 0xb5:
        return 'T'
    return 'A' if da >= dt else 'T'

# ---------- keyword table ----------
KEYWORDS = {
    'autotuning': r'autotun|tune[_ ]|stage[0-9]+|gradient|profile_grid|experiment',
    'dps': r'\bdps\b|dps[_\.]|power_target|hashrate_target|power_step|shutdown_duration',
    'stratum_v2': r'stratum2|stratum_v2|sri|job_declaration|noise|framing',
    'stratum_v1': r'stratum|mining\.(subscribe|authorize|notify|submit)',
    'eeprom': r'eeprom|x19_j|x21|xxtea|aes_|chip_id|hashboard_id',
    'license': r'license|licence|contract|activation',
    'devfee': r'devfee|dev_fee|donation|attribution',
    'cooling': r'fan|cooling|temp|water|pump|hydro|immersion|defrost',
    'power': r'power|voltage|psu|dcdc|regulator',
    'pool': r'pool|url|stratum\+tcp',
    'api_cgminer': r'cgminer|api_command|stats\b',
    'grpc_boser': r'boser|grpc|tonic|h2|proto',
    'telemetry': r'telemetry|braa|monitor|metrics',
    'recovery': r'recovery|rollback|first_boot|factory',
    'upgrade': r'upgrade|sysupgrade|firmware',
    'eeprom_crypto': r'xxtea|chacha|aes_gcm|pbkdf|sha256|hmac',
}
KW_RE = {k: re.compile(v, re.I) for k, v in KEYWORDS.items()}

rows = []
kw_hits = defaultdict(list)
feat_count = defaultdict(int)
mode_count = defaultdict(int)
for fi, (st, sz) in enumerate(funcs):
    off = st - t_addr
    blob = T[off:off + sz]
    mode = detect_mode(blob, st)
    mode_count[mode] += 1
    lits, decoded = sweep(blob, st, mode)
    strs = []
    for v in lits:
        s = get_str(v)
        if s: strs.append(s)
    joined = ' | '.join(strs)
    kws = set()
    for kw, rex in KW_RE.items():
        if rex.search(joined):
            kws.add(kw)
            kw_hits[kw].append((st, sz, joined[:200]))
    for k in kws: feat_count[k] += 1
    rows.append((st, sz, mode, ','.join(sorted(kws)), joined[:300]))
    if fi % 4000 == 0:
        print(f'  {fi}/{len(funcs)}', file=sys.stderr)

with open(os.path.join(OUT, 'functions_all.csv'), 'w', newline='', encoding='utf-8') as fh:
    w = csv.writer(fh)
    w.writerow(['start', 'size', 'mode', 'keywords', 'string_evidence'])
    for st, sz, mode, kws, ev in rows:
        w.writerow([f'0x{st:08x}', sz, mode, kws, ev])

with open(os.path.join(OUT, 'keyword_functions.csv'), 'w', newline='', encoding='utf-8') as fh:
    w = csv.writer(fh)
    w.writerow(['keyword', 'start', 'size', 'evidence'])
    for kw in sorted(kw_hits):
        for st, sz, ev in kw_hits[kw]:
            w.writerow([kw, f'0x{st:08x}', sz, ev])

with open(os.path.join(OUT, 'feature_stats.txt'), 'w', encoding='utf-8') as fh:
    fh.write(f'functions total: {len(funcs)}\n')
    fh.write(f'modes: {dict(mode_count)}\n')
    fh.write('functions per keyword:\n')
    for k in sorted(feat_count, key=lambda x: -feat_count[x]):
        fh.write(f'  {k:15s} {feat_count[k]:6d}\n')

print('modes:', dict(mode_count), file=sys.stderr)
print('keyword hits:', dict(feat_count), file=sys.stderr)
print('DONE', file=sys.stderr)
