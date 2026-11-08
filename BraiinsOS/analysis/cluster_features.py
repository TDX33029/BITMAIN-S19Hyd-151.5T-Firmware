"""Phase 2: cluster all decompiled functions into functional blocks for LEARNING.

Inputs : analysis/out/all_decomp/all_functions_index.csv + *.c (call graph from FUN_ refs)
         analysis/out/voltage/source_locations.json + BraiinsOS/bosminer_modules.txt
Output : analysis/out/kb/
         feature_clusters.csv   (function -> feature, evidence, call stats)
         kb_stats.txt
         graph_edges.csv        (caller,callee for feature propagation audit)
"""
import csv, os, re, json
from collections import defaultdict, deque

HERE = os.path.dirname(os.path.abspath(__file__))
SRC = os.path.join(HERE, 'out', 'all_decomp')
OUT = os.path.join(HERE, 'out', 'kb')
os.makedirs(OUT, exist_ok=True)

# ---------- load index ----------
funcs = {}   # addr(int) -> dict
with open(os.path.join(SRC, 'all_functions_index.csv'), encoding='utf-8') as fh:
    for row in csv.DictReader(fh):
        a = int(row['address'], 16)
        funcs[a] = {
            'addr': a, 'size': int(row['size']), 'name': row['name'],
            'nout': int(row['ncalls_out']), 'nin': int(row['ncalls_in']),
            'thunk': row['is_thunk'] == '1', 'strings': row['strings'] or '',
        }
print(f'functions: {len(funcs)}')

# ---------- call graph from decompiled C ----------
edges = set()
cref = re.compile(r'FUN_([0-9a-fA-F]{8})')
for a, f in funcs.items():
    p = os.path.join(SRC, f'{a:08x}.c')
    if not os.path.exists(p):
        continue
    try:
        txt = open(p, encoding='utf-8', errors='replace').read()
    except OSError:
        continue
    for m in cref.finditer(txt):
        b = int(m.group(1), 16)
        if b in funcs and b != a:
            edges.add((a, b))
adj = defaultdict(list)
radj = defaultdict(list)
for a, b in edges:
    adj[a].append(b)
    radj[b].append(a)
print(f'call graph edges: {len(edges)}')

# ---------- keyword -> feature rules ----------
FEATURES = {
    'autotuning': r'autotun|tune[_ ]|stage[0-9]|gradient|profile_grid|experiment|tuning|ramp',
    'dps': r'\bdps\b|dps[_.]|power_target|hashrate_target|power_step|shutdown_duration|quick_ramp|power_scaling',
    'voltage_power': r'voltage|vdd|dcdc|dc_dc|TPS6287|regulator|psu|set_v|vcom|power_cmd|vbat',
    'thermal_fan': r'\bfan|cooling|\btemp|preheat|defrost|pid|water|pump|hydro|immersion|overheat',
    'eeprom': r'eeprom|x19_j|x21|xxtea|chip_id|hashboard_id|aes_key',
    'stratum_v2': r'stratum2|stratum_v2|sv2|job_declaration|sri|noise|framing',
    'stratum_v1': r'stratum|subscribe|authorize|mining\.notify|submit',
    'work_engine': r'midstate|work_solver|job_id|merkle|nonce|difficulty|hashrate',
    'api_cgminer': r'cgminer|api_command|stats\||devdetails',
    'grpc_boser': r'boser|grpc|tonic|prost|h2_|protobuf',
    'telemetry': r'telemetry|braa|metrics|monitor|heartbeat',
    'license_devfee': r'license|devfee|attribution|contract',
    'config': r'toml|bosminer\.toml|config_file|deserialize|serialize|serde',
    'upgrade_recovery': r'upgrade|sysupgrade|recovery|rollback|factory_reset|first_boot',
    'hardware_uart_i2c': r'uart|tty|i2c|/dev/|gpio|spi|sysfs',
    'model_detect': r'model|detect|eeprom-parse|platform|S19|S21|S9',
    'crypto_hash': r'sha256|blake|chacha|aes_|hmac|pbkdf|xxhash|crc32|midstate',
    'pool_mgmt': r'pool_url|pool_group|quota|failover|stratum\+tcp',
}
KW_RE = {k: re.compile(v, re.I) for k, v in FEATURES.items()}

def evidence(f):
    """feature -> score from strings"""
    sc = defaultdict(float)
    s = f['strings']
    if not s: return sc
    for feat, rex in KW_RE.items():
        m = rex.findall(s)
        if m: sc[feat] += min(len(m), 6) * 1.0
    # strong boosts
    sl = s.lower()
    if 'gradient' in sl or 'stage' in sl: sc['autotuning'] += 3
    if 'tps6287' in sl: sc['voltage_power'] += 4
    if 'xxtea' in sl: sc['eeprom'] += 4
    if 'tps' in sl and 'i2c' in sl: sc['voltage_power'] += 2
    return sc

# ---------- propagation ----------
score = {a: evidence(f) for a, f in funcs.items()}
# seed with name hints (Ghidra names are FUN_*; skip) — do 3 rounds of neighbor propagation
for rounds in range(3):
    delta = defaultdict(lambda: defaultdict(float))
    for a, sc in score.items():
        if not sc: continue
        for feat, v in sc.items():
            w = v * 0.3
            for b in adj[a]:
                if not score[b].get(feat):
                    delta[b][feat] += w
            for b in radj[a]:
                if not score[b].get(feat):
                    delta[b][feat] += w * 0.6
    for a, d in delta.items():
        for feat, v in d.items():
            score[a][feat] = score[a].get(feat, 0) + v

def best_feature(a):
    sc = score.get(a)
    if not sc: return 'unknown', 0.0
    feat, v = max(sc.items(), key=lambda kv: kv[1])
    return (feat, v) if v >= 1.0 else ('weak_' + feat, v)

rows = []
feat_stats = defaultdict(lambda: [0, 0])
for a, f in funcs.items():
    feat, conf = best_feature(a)
    f['feature'] = feat
    f['conf'] = round(conf, 2)
    feat_stats[feat][0] += 1
    feat_stats[feat][1] += f['size']
    rows.append(f)

with open(os.path.join(OUT, 'feature_clusters.csv'), 'w', newline='', encoding='utf-8') as fh:
    w = csv.writer(fh)
    w.writerow(['address', 'size', 'feature', 'confidence', 'ncalls_in', 'ncalls_out', 'strings'])
    for f in sorted(rows, key=lambda x: (x['feature'], -x['conf'])):
        w.writerow([f'{f["addr"]:08x}', f['size'], f['feature'], f['conf'], f['nin'], f['nout'], f['strings'][:260]])

with open(os.path.join(OUT, 'graph_edges.csv'), 'w', newline='') as fh:
    w = csv.writer(fh)
    for a, b in sorted(edges):
        w.writerow([f'{a:08x}', f'{b:08x}'])

with open(os.path.join(OUT, 'kb_stats.txt'), 'w', encoding='utf-8') as fh:
    fh.write(f'functions: {len(funcs)}  edges: {len(edges)}\n\nfeature blocks:\n')
    for feat, (n, b) in sorted(feat_stats.items(), key=lambda kv: -kv[1][0]):
        fh.write(f'  {feat:18s} {n:6d} functions  {b/1024:9.1f} KiB\n')

print('feature blocks:')
for feat, (n, b) in sorted(feat_stats.items(), key=lambda kv: -kv[1][0]):
    print(f'  {feat:18s} {n:6d} functions  {b/1024:9.1f} KiB')
