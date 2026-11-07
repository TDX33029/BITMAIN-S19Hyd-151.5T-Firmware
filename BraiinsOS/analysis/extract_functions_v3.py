"""v3: dual-mode (ARM+Thumb) sweep per function; mode chosen by string-hit count.
Outputs analysis/out/: functions_all.csv, keyword_functions.csv, feature_stats.txt
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

_ro_secs = [(a, d) for n, (a, sz, d) in secs.items() if n.startswith('.rodata')]
def get_str(va, maxlen=160):
    for addr, data in _ro_secs:
        if addr <= va < addr + len(data):
            off = va - addr
            chunk = data[off:off+maxlen]
            end = chunk.find(b'\x00')
            s = chunk[:end if end >= 0 else 0]
            if 4 <= len(s) <= 150 and all(32 <= c < 127 for c in s):
                return s.decode('ascii')
            return None
    return None

def read4(va):
    for name, (addr, size, data) in secs.items():
        if addr <= va < addr + size:
            off = va - addr
            if off + 4 <= len(data):
                return struct.unpack_from('<I', data, off)[0]
    return None

t_addr, t_size, T = secs['.text']
t_end = t_addr + t_size
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

md_arm = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
md_thm = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_THUMB)

def sweep(blob, va, mode):
    md = md_arm if mode == 'A' else md_thm
    step = 4 if mode == 'A' else 2
    lits = []
    off = 0
    n = len(blob)
    while off < n - 3:
        got = False
        for ins in md.disasm(blob[off:off+4], va + off):
            got = True
            op = ins.op_str
            if ins.mnemonic.startswith('ldr') and '[pc' in op:
                m = re.search(r'#(-?0x[0-9a-fA-F]+|-?\d+)', op)
                if m:
                    base = ((va + off) + (8 if mode == 'A' else 4)) & ~3
                    v = read4(base + int(m.group(1), 0))
                    if v is not None:
                        lits.append(v)
            off += ins.size
            break
        if not got:
            off += step
    return lits

KEYWORDS = {
    'autotuning': r'autotun|tune[_ ]|stage[0-9]|gradient|profile_grid|experiment|tuning',
    'dps': r'\bdps\b|dps[_.]|power_target|hashrate_target|power_step|shutdown_duration|quick_ramp',
    'stratum_v2': r'stratum2|stratum_v2|sri|job_declaration|noise|framing|sv2',
    'stratum_v1': r'stratum|mining\.(subscribe|authorize|notify|submit)',
    'eeprom': r'eeprom|x19_j|x21|chip_id|hashboard_id',
    'eeprom_crypto': r'xxtea|chacha|aes_|pbkdf|sha256|hmac|blake|keccak',
    'license': r'license|licence|contract_key|activation',
    'devfee': r'devfee|dev_fee|attribution|donation',
    'cooling': r'\bfan|cooling|\btemp|water|pump|hydro|immersion|defrost',
    'power': r'power|voltage|psu|dcdc|regulator|vbat',
    'pool': r'pool_url|stratum\+tcp|pool_group',
    'api_cgminer': r'cgminer|api_command',
    'grpc': r'boser|grpc|tonic|h2_|prost',
    'telemetry': r'telemetry|braa|metrics|monitor',
    'recovery': r'recovery|rollback|first_boot|factory_reset',
    'upgrade': r'upgrade|sysupgrade|firmware_version',
    'error': r'error_codes|source_location|panic',
}

rows = []
kw_hits = defaultdict(list)
feat_count = defaultdict(int)
mode_count = defaultdict(int)
for fi, (st, sz) in enumerate(funcs):
    off = st - t_addr
    blob = T[off:off + sz]
    lits_a = sweep(blob, st, 'A')
    lits_t = sweep(blob, st, 'T')
    strsa = [s for s in (get_str(v) for v in lits_a) if s]
    strst = [s for s in (get_str(v) for v in lits_t) if s]
    # mode = more string evidence; tie -> more literals; tie -> ARM
    if len(strst) > len(strsa): mode, strs = 'T', strst
    elif len(strsa) > len(strst): mode, strs = 'A', strsa
    elif len(lits_t) > len(lits_a): mode, strs = 'T', strst
    else: mode, strs = 'A', strsa
    mode_count[mode] += 1
    joined = ' | '.join(strs)
    kws = set()
    for kw, pat in KEYWORDS.items():
        if re.search(pat, joined, re.I):
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
    fh.write(f'functions total: {len(funcs)}\nmodes: {dict(mode_count)}\nfunctions per keyword:\n')
    for k in sorted(feat_count, key=lambda x: -feat_count[x]):
        fh.write(f'  {k:15s} {feat_count[k]:6d}\n')

print('modes:', dict(mode_count), file=sys.stderr)
print('keyword hits:', dict(feat_count), file=sys.stderr)
print('DONE', file=sys.stderr)
