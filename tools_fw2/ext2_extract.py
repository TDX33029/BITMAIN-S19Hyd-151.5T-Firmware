#!/usr/bin/env python3
"""Minimal ext2 (rev 0/1) extractor: superblock, GDs, recursive dir walk, file output."""
import os, sys, struct, json, hashlib

FT = {1: "reg", 2: "dir", 3: "chrdev", 4: "blkdev", 5: "fifo", 6: "sock", 7: "lnk"}

class Ext2:
    def __init__(self, path):
        self.data = open(path, "rb").read()
        sb = 1024
        d = self.data
        self.inodes_count, self.blocks_count = struct.unpack_from("<II", d, sb)
        self.bs = 1024 << struct.unpack_from("<I", d, sb + 24)[0]
        self.blocks_per_group = struct.unpack_from("<I", d, sb + 32)[0]
        self.inodes_per_group = struct.unpack_from("<I", d, sb + 40)[0]
        self.magic = struct.unpack_from("<H", d, sb + 56)[0]
        self.rev = struct.unpack_from("<I", d, sb + 76)[0]
        self.first_ino = struct.unpack_from("<I", d, sb + 84)[0] if self.rev >= 1 else 11
        self.inode_size = struct.unpack_from("<H", d, sb + 88)[0] if self.rev >= 1 else 128
        self.vol = d[sb + 120:sb + 136].split(b"\0")[0].decode("ascii", "replace")
        assert self.magic == 0xEF53, "not ext2"
        self.ngroups = (self.blocks_count - (1 if self.bs == 1024 else 0) + self.blocks_per_group - 1) // self.blocks_per_group
        gdt_block = (self.bs // 1024) + 1 if self.bs == 1024 else 1
        self.gdt_off = gdt_block * self.bs
        self.bcache = {}

    def block(self, n):
        b = self.bcache.get(n)
        if b is None:
            b = self.data[n * self.bs:(n + 1) * self.bs]
            if len(self.bcache) < 64:
                self.bcache[n] = b
        return b

    def gd(self, g):
        o = self.gdt_off + g * 32
        blk, inode_table = struct.unpack_from("<II", self.data, o + 8)[0], struct.unpack_from("<II", self.data, o + 8 - 4)[0]
        # layout: bg_block_bitmap lo@0, bg_inode_bitmap lo@4, bg_inode_table lo@8
        block_bitmap, inode_bitmap, inode_table = struct.unpack_from("<III", self.data, o)
        return block_bitmap, inode_bitmap, inode_table

    def inode(self, ino):
        g = (ino - 1) // self.inodes_per_group
        idx = (ino - 1) % self.inodes_per_group
        _, _, itab = self.gd(g)
        off = itab * self.bs + idx * self.inode_size
        d = self.data
        mode = struct.unpack_from("<H", d, off)[0]
        size_lo = struct.unpack_from("<I", d, off + 4)[0]
        nblk = struct.unpack_from("<I", d, off + 28)[0]
        blocks = list(struct.unpack_from("<12I", d, off + 40))
        i_ind, i_dind, i_tind = struct.unpack_from("<3I", d, off + 40 + 48)
        return {"mode": mode, "size": size_lo, "blocks": blocks, "ind": i_ind, "dind": i_dind, "tind": i_tind,
                "nblk512": nblk}

    def file_blocks(self, node, want=None):
        """yield block numbers of a file (data blocks only), following indirections"""
        got = 0
        per = self.bs // 4
        for b in node["blocks"]:
            if b == 0:
                if want is not None and got >= want:
                    return
                got += 1
                yield 0
                continue
            yield b
            got += 1
        def ind(blk, depth):
            if depth == 0:
                yield blk
                return
            if blk == 0:
                for _ in range(per ** depth):
                    yield 0
                return
            tbl = struct.unpack_from(f"<{per}I", self.block(blk))
            for b in tbl:
                yield from ind(b, depth - 1)
        yield from ind(node["ind"], 1)
        yield from ind(node["dind"], 2)
        yield from ind(node["tind"], 3)

    def read_file(self, ino, cap=64 * 1024 * 1024):
        node = self.inode(ino)
        size = min(node["size"], cap)
        out = bytearray()
        for b in self.file_blocks(node):
            if len(out) >= size:
                break
            if b == 0:
                out += b"\x00" * min(self.bs, size - len(out))
            else:
                blk = self.block(b)
                out += blk[:min(self.bs, size - len(out))]
        return bytes(out[:size]), node

    def readdir(self, ino):
        raw, node = self.read_file(ino, cap=8 * 1024 * 1024)
        ents = []
        off = 0
        while off + 8 <= len(raw):
            ino2, rec, nl, ft = struct.unpack_from("<IHBB", raw, off)
            if rec < 8 or off + rec > len(raw):
                break
            if ino2:
                name = raw[off + 8:off + 8 + nl]
                ents.append((ino2, name.decode("utf-8", "replace"), ft))
            off += rec
        return ents

def extract(fs, out_root, list_path):
    listing = []
    symlinks = []
    specials = []
    stats = {"files": 0, "dirs": 0, "bytes": 0}

    def walk(ino, rel):
        for ino2, name, ft in fs.readdir(ino):
            if name in (".", ".."):
                continue
            node = fs.inode(ino2)
            fmt = node["mode"] & 0xF000
            r = (rel + "/" + name).lstrip("/")
            if fmt == 0x4000:
                stats["dirs"] += 1
                listing.append((r + "/", "dir", 0, oct(node["mode"] & 0xFFF)))
                os.makedirs(os.path.join(out_root, r), exist_ok=True)
                walk(ino2, r)
            elif fmt == 0x8000:
                data, _ = fs.read_file(ino2)
                p = os.path.join(out_root, r)
                os.makedirs(os.path.dirname(p), exist_ok=True)
                with open(p, "wb") as f:
                    f.write(data)
                stats["files"] += 1
                stats["bytes"] += len(data)
                listing.append((r, "file", len(data), oct(node["mode"] & 0xFFF)))
            elif fmt == 0xA000:
                if node["size"] <= 60:
                    # fast symlink: target stored inline in i_block
                    tgt = b"".join(struct.pack("<I", b) for b in node["blocks"])[:node["size"]].decode("utf-8", "replace")
                else:
                    data, _ = fs.read_file(ino2)
                    tgt = data.decode("utf-8", "replace")
                symlinks.append((r, tgt))
                listing.append((r, "symlink", node["size"], tgt))
            else:
                specials.append((r, FT.get(ft, f"mode{node['mode']:#o}")))
                listing.append((r, "special", 0, FT.get(ft, "?")))

    walk(2, "")
    with open(list_path, "w", encoding="utf-8", newline="\n") as f:
        for path, kind, size, extra in sorted(listing):
            f.write(f"{kind:8s} {size:>10} {extra:8s} {path}\n")
    with open(list_path + ".symlinks.txt", "w", encoding="utf-8", newline="\n") as f:
        for r, t in symlinks:
            f.write(f"{r} -> {t}\n")
    return stats, symlinks, specials

def main():
    img, out_root = sys.argv[1], sys.argv[2]
    fs = Ext2(img)
    print(f"{img}: ext2 rev{fs.rev} bs={fs.bs} blocks={fs.blocks_count} inodes={fs.inodes_count} vol={fs.vol!r} groups={fs.ngroups}")
    stats, symlinks, specials = extract(fs, out_root, out_root.rstrip("/\\") + ".listing.txt")
    print(f"  extracted {stats['files']} files ({stats['bytes']} B), {stats['dirs']} dirs, {len(symlinks)} symlinks, {len(specials)} specials")

if __name__ == "__main__":
    main()
