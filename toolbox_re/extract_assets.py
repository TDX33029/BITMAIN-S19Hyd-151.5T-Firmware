"""Extract embedded web assets (rust-embed style [name][content] store) from braiins-toolbox.exe. v2"""
import re, os

HERE = os.path.dirname(os.path.abspath(__file__))
SRC = os.path.join(HERE, '..', 'braiins-toolbox.exe')
OUT = os.path.join(HERE, 'assets')

data = open(SRC, 'rb').read()

# no \b: content may start with a word char (e.g. .css + "a,abbr", .woff2 + "wOF2")
NAME_RE = re.compile(rb'[\w/.-]{4,150}?\.(html|js|css|png|svg|woff2|woff|ttf|otf|ico|json|map)')

def sig_ok(ext, b):
    b = b[:16]
    if ext == b'html': return b.startswith(b'<!doctype') or b.startswith(b'<!')
    if ext == b'js':   return b[:6] in (b'(()=>{', b'(self.', b'!funct') or b.startswith(b'(()=>')
    if ext == b'css':  return bool(re.match(rb'[a-zA-Z.#:@*\[]', b[:1]))
    if ext == b'png':  return b.startswith(b'\x89PNG')
    if ext == b'ttf':  return b.startswith(b'\x00\x01\x00\x00')
    if ext == b'otf':  return b.startswith(b'OTTO')
    if ext == b'woff': return b.startswith(b'wOFF')
    if ext == b'woff2':return b.startswith(b'wOF2')
    if ext == b'svg':  return b.startswith(b'<svg') or b.startswith(b'<?xml')
    if ext == b'ico':  return b.startswith(b'\x00\x00\x01\x00')
    return False

cands = []
for m in NAME_RE.finditer(data):
    name, ext = m.group(), m.group(1)
    p = m.end()
    pre = data[m.start()-1:m.start()]
    if pre and pre in b'"\'(/':   # URL/reference inside content, not a store boundary
        continue
    if sig_ok(ext, data[p:p+16]):
        cands.append((p - len(name), name.decode()))
cands = sorted(set(cands))

# whitelist: real store names are webpack-hashed chunks, assets/ paths, or known files
import re as _re
WL = _re.compile(r'^(\d{1,4}\.[0-9a-f]{16}\.(?:js|css)|app\.[0-9a-f]{16}\.(?:js|css)|assets/[\w/.-]+\.(?:svg|ttf|woff2?|otf|png)|braiins-toolbox-[a-z-]+\.[0-9a-f]{16}\.js|icon\.png|index\.html|ping\.png)$')
filtered = []
for off, name in cands:
    if WL.match(name):
        filtered.append((off, name))
    else:
        s = name.lstrip('0123456789"\'();,= ')  # strip leading junk byte from prev content
        if WL.match(s):
            filtered.append((off, s))
cands = filtered
print(f'{len(cands)} candidates')

# chain walk: next candidate must come after current name ends; drop nested false positives
chain = []
for off, name in cands:
    if chain and off < chain[-1][0] + len(chain[-1][1]) + 4:
        continue
    chain.append((off, name))

os.makedirs(OUT, exist_ok=True)
total = 0
for idx, (off, name) in enumerate(chain):
    nend = off + len(name)
    if idx + 1 < len(chain):
        end = chain[idx + 1][0]
    else:
        # last asset: cut at PNG IEND if png, else +4MB window with sig fallback
        end = nend + 4*1024*1024
        e = data.find(b'IEND\xaeB`\x82', nend)
        if e != -1:
            end = e + 8
    content = data[nend:end]
    rel = os.path.join(OUT, name.replace('\\', '/'))
    os.makedirs(os.path.dirname(rel), exist_ok=True)
    open(rel, 'wb').write(content)
    total += len(content)
    print(f'{name:60s} {len(content):>10,d} bytes  @0x{off:x}')
print(f'TOTAL {total:,} bytes -> {OUT}')
