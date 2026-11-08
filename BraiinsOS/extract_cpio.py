"""Extract cpio newc archive (initramfs style) into a directory."""
import os, sys, stat

src, out = sys.argv[1], sys.argv[2]
os.makedirs(out, exist_ok=True)
data = open(src, 'rb').read()
pos = 0
count = 0
while pos < len(data):
    if data[pos:pos+6] != b'070701':
        # try next 4-byte aligned position (padding)
        pos += 1
        continue
    hdr = data[pos:pos+110]
    if len(hdr) < 110:
        break
    f = lambda i: int(hdr[6+i*8:6+(i+1)*8], 16)
    ino, mode, uid, gid, nlink, mtime, fsize = f(0), f(1), f(2), f(3), f(4), f(5), f(6)
    namesize = f(11)
    name = data[pos+110:pos+110+namesize-1].decode('utf-8', 'replace')
    nameend = pos + 110 + namesize
    filestart = (nameend + 3) & ~3
    if name == 'TRAILER!!!':
        break
    content = data[filestart:filestart+fsize]
    dest = os.path.join(out, name)
    fmode = mode & 0o170000
    if fmode == 0o040000:                       # directory
        os.makedirs(dest, exist_ok=True)
    elif fmode == 0o120000:                     # symlink
        target = content.decode('utf-8', 'replace')
        os.makedirs(os.path.dirname(dest), exist_ok=True)
        try:
            if not os.path.lexists(dest):
                os.symlink(target, dest)
        except OSError:
            open(dest + '.symlink.txt', 'w', encoding='utf-8').write(target)
    elif fmode == 0o100000:                     # regular file
        os.makedirs(os.path.dirname(dest), exist_ok=True)
        with open(dest, 'wb') as fh:
            fh.write(content)
        os.chmod(dest, (mode & 0o777) | 0o400)
    else:                                        # devices/fifos: record as text
        open(dest + '.dev.txt', 'w').write(f'mode={oct(mode)} uid={uid} gid={gid}')
    pos = (filestart + fsize + 3) & ~3
    count += 1
print(f'extracted {count} entries -> {out}')
