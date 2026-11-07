# -*- coding: utf-8 -*-
"""Minimal read-only ext2 extractor (1 KiB blocks, no extents) for the
Antminer S19 Hydro ramdisk images produced by unpack_bmu.py."""
import os
import struct
import sys
import time


class Ext2:
    def __init__(self, path):
        self.f = open(path, "rb")
        self.f.seek(1024)
        sb = self.f.read(1024)
        (self.inodes_count, self.blocks_count, _r_blocks, _free_blocks, _free_inodes,
         self.first_data_block, self.log_block_size, self.log_frag_size,
         self.blocks_per_group, self.frags_per_group, self.inodes_per_group,
         self.mtime, self.wtime, _mnt, _wnt, self.magic) = struct.unpack_from("<16I", sb, 0)
        self.block_size = 1024 << self.log_block_size
        self.inode_size = struct.unpack_from("<H", sb, 0x58)[0]
        if self.inode_size == 0:
            self.inode_size = 128
        self.groups = (self.blocks_count - self.first_data_block + self.blocks_per_group - 1) // self.blocks_per_group
        gd_off = (self.first_data_block + 1) * self.block_size
        self.f.seek(gd_off)
        gd = self.f.read(self.groups * 32)
        self.gd = []
        for i in range(self.groups):
            bg_block_bitmap, bg_inode_bitmap, bg_inode_table, free_b, free_i, used_dirs = struct.unpack_from("<6I", gd, i * 32)
            self.gd.append((bg_inode_table, used_dirs))

    def block(self, n):
        self.f.seek(n * self.block_size)
        return self.f.read(self.block_size)

    def inode(self, ino):
        g = (ino - 1) // self.inodes_per_group
        idx = (ino - 1) % self.inodes_per_group
        table = self.gd[g][0]
        self.f.seek(table * self.block_size + idx * self.inode_size)
        raw = self.f.read(self.inode_size)
        (mode, uid, size, atime, ctime, mtime, dtime, gid, links, blocks,
         flags, _os1) = struct.unpack_from("<HHIIIIHHIIII", raw, 0)
        ptrs = list(struct.unpack_from("<15I", raw, 40))
        return dict(ino=ino, mode=mode, uid=uid, gid=gid, size=size, mtime=mtime,
                    links=links, blocks=blocks, ptrs=ptrs)

    def _logical_blocks(self, pts, nblocks):
        """Yield the physical block number for every logical block (0 = sparse hole)."""
        per = self.block_size // 4
        produced = 0
        for i in range(12):  # direct
            if produced >= nblocks:
                return
            yield pts[i]
            produced += 1
        if produced >= nblocks:
            return
        ind = self.block(pts[12]) if pts[12] else None
        for p in struct.unpack("<%dI" % per, ind) if ind else [0] * per:
            if produced >= nblocks:
                return
            yield p
            produced += 1
        if produced >= nblocks:
            return
        ind = self.block(pts[13]) if pts[13] else None
        for p2 in struct.unpack("<%dI" % per, ind) if ind else [0] * per:
            if produced >= nblocks:
                return
            sub = self.block(p2) if p2 else None
            for p in struct.unpack("<%dI" % per, sub) if sub else [0] * per:
                if produced >= nblocks:
                    return
                yield p
                produced += 1
        if produced >= nblocks:
            return
        ind = self.block(pts[14]) if pts[14] else None
        for p3 in struct.unpack("<%dI" % per, ind) if ind else [0] * per:
            if produced >= nblocks:
                return
            sub2 = self.block(p3) if p3 else None
            for p2 in struct.unpack("<%dI" % per, sub2) if sub2 else [0] * per:
                if produced >= nblocks:
                    return
                sub = self.block(p2) if p2 else None
                for p in struct.unpack("<%dI" % per, sub) if sub else [0] * per:
                    if produced >= nblocks:
                        return
                    yield p
                    produced += 1

    def read_file(self, node):
        size = node["size"]
        pts = node["ptrs"]
        if node["mode"] & 0xF000 == 0xA000 and size < 60:  # fast symlink
            return struct.pack("<15I", *pts)[:size]
        bs = self.block_size
        out = bytearray()
        for p in self._logical_blocks(pts, (size + bs - 1) // bs):
            out += self.block(p) if p else b"\x00" * bs
        return bytes(out[:size])

    def listdir(self, node):
        data = self.read_file(node)
        i = 0
        while i + 8 <= len(data):
            ino, rec_len, name_len, ftype = struct.unpack_from("<IHBB", data, i)
            if rec_len == 0:
                break
            if ino:
                name = data[i + 8:i + 8 + name_len].decode("latin1")
                if name not in (".", ".."):
                    yield name, ino, ftype
            i += rec_len

    def walk(self, ino, path, outdir, stats):
        node = self.inode(ino)
        mode = node["mode"] & 0xF000
        p = os.path.join(outdir, path)
        if mode == 0x4000:  # dir
            os.makedirs(p, exist_ok=True)
            for name, child, ftype in self.listdir(node):
                self.walk(child, os.path.join(path, name), outdir, stats)
        elif mode == 0xA000:  # symlink
            target = self.read_file(node)
            os.makedirs(os.path.dirname(p) or outdir, exist_ok=True)
            if os.path.lexists(p):
                os.remove(p)
            try:
                os.symlink(target.decode("latin1"), p)
            except OSError:
                with open(p, "wb") as f:
                    f.write(target)
            stats["links"] += 1
        elif mode in (0x8000, 0x2000, 0x6000, 0x1000):  # regular/char/block/fifo
            data = self.read_file(node)
            os.makedirs(os.path.dirname(p) or outdir, exist_ok=True)
            with open(p, "wb") as f:
                f.write(data)
            stats["files"] += 1
            stats["bytes"] += len(data)


def main():
    img, outdir = sys.argv[1], sys.argv[2]
    fs = Ext2(img)
    print("ext2: %d blocks x %d, %d inodes, %d groups" % (fs.blocks_count, fs.block_size, fs.inodes_count, fs.groups))
    os.makedirs(outdir, exist_ok=True)
    stats = {"files": 0, "links": 0, "bytes": 0}
    fs.walk(2, "", outdir, stats)
    print("extracted: %d files, %d symlinks, %d bytes" % (stats["files"], stats["links"], stats["bytes"]))


if __name__ == "__main__":
    main()
