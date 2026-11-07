# -*- coding: utf-8 -*-
"""
Unpack S21e Hydro firmware: FR-1.42(251016-S21e Hyd.).bmu

Outer container (little-endian, 'ABABABAB' magic):
    0x00  u32 0xABABABAB
    0x04  u32 0
    0x08  u32 table offset (0x24)
    0x0C  u32 entry count (2)
    0x10  u32 entry size (0xAC)
    0x14  u32 image data offset (0x4000)
    0x18  u32 checksum?
    0x24  entries: name / platform / model / offset / size

Each entry points to an embedded S19-style signed .bmu:
    0x00  u16 0x2601 (BE)
    0x02  8 B build id / version
    0x0A  u16 flags
    0x0D  8 B build date "YYYYMMDD"
    0x16  u16 pubkey length (BE, 0x1C3)
    0x18  miner.pem
    0x418 RSA signature over miner.pem (root key)
    0x518 part table: u32 count LE, then count x (u16 index LE + u24 size BE) at +5
    0x800 components
    end   (count+1) x 256 B component signatures
"""
import gzip
import hashlib
import io
import json
import os
import re
import struct
import sys
import tarfile
import zlib

HERE = os.path.dirname(os.path.abspath(__file__))
S21 = os.path.dirname(HERE)
FW = os.path.dirname(S21)
S19 = os.path.join(FW, "S19")
SRC = os.path.join(S21, "FR-1.42(251016-S21e Hyd.).bmu")
OUT = os.path.join(S21, "Unpacked")

COMP_NAMES = ["BOOT.bin", "devicetree.dtb", "uImage", "minerfs.image.gz",
              "update.image.gz", "crl.tar.gz", "miner.btm.tar.gz"]


def u16be(d, o): return struct.unpack_from(">H", d, o)[0]
def u24be(d, o): return int.from_bytes(d[o:o + 3], "big")
def u32le(d, o): return struct.unpack_from("<I", d, o)[0]


def sha256(b):
    return hashlib.sha256(b).hexdigest()


def write(rel, data):
    p = os.path.join(OUT, rel)
    os.makedirs(os.path.dirname(p), exist_ok=True)
    with open(p, "wb") as f:
        f.write(data)
    return len(data)


def string_at(block, off, maxlen=64):
    end = block.find(b"\x00", off)
    if end < 0 or end - off > maxlen:
        end = off + maxlen
    return block[off:end].decode("latin1", "replace")


def parse_outer(d):
    count = u32le(d, 0x0C)
    ent_size = u32le(d, 0x10)
    data_off = u32le(d, 0x14)
    base = u32le(d, 0x08)
    entries = []
    for i in range(count):
        b = d[base + i * ent_size: base + (i + 1) * ent_size]
        strings = re.findall(rb"[\x20-\x7e]{4,}", b)
        off = size = None
        for j in range(0, len(b) - 7, 4):
            o, s = struct.unpack_from("<II", b, j)
            if 0x1000 <= o < len(d) and 0 < s <= len(d) - o and d[o:o + 2] == b"\x26\x01":
                off, size = o, s
                break
        entries.append({
            "index": i,
            "offset": off, "size": size,
            "strings": [x.decode("latin1") for x in strings],
        })
    return {"magic": hex(u32le(d, 0)), "count": count, "entry_size": ent_size,
            "data_offset": data_off, "entries": entries}


def parse_bmu(img):
    if img[:2] != b"\x26\x01":
        raise ValueError("not an embedded bmu")
    pub_len = u16be(img, 0x16)
    pem = img[0x18:0x18 + pub_len]
    sig = img[0x418:0x518]
    count = u32le(img, 0x518)
    p = 0x51D
    parts = []
    for _ in range(count):
        parts.append((struct.unpack_from("<H", img, p)[0], u24be(img, p + 2)))
        p += 5
    return {
        "build_id": img[2:10].hex(),
        "field_0a": hex(u16be(img, 0x0A)),
        "build_date": img[0x0D:0x15].decode("latin1"),
        "pem": pem, "signature": sig,
        "parts": parts,
        "components_offset": 0x800,
        "trailer_size": (count + 1) * 0x100,
    }


def verify_chain(img, meta, root_key, label):
    from Crypto.Signature import pkcs1_15
    from Crypto.Hash import SHA256
    res = {"pubkey_signed_by_root": False, "components": []}
    try:
        pkcs1_15.new(root_key).verify(SHA256.new(meta["pem"]), meta["signature"])
        res["pubkey_signed_by_root"] = True
    except Exception:
        pass
    key = None
    if res["pubkey_signed_by_root"]:
        from Crypto.PublicKey import RSA
        key = RSA.import_key(meta["pem"])
    trailer = len(img) - meta["trailer_size"]
    off = meta["components_offset"]
    for i, (idx, size) in enumerate(meta["parts"]):
        blob = img[off:off + size]
        ok = False
        if key is not None:
            try:
                pkcs1_15.new(key).verify(SHA256.new(blob),
                                        img[trailer + i * 0x100: trailer + (i + 1) * 0x100])
                ok = True
            except Exception:
                pass
        res["components"].append({"index": idx, "size": size,
                                  "offset": off, "verified": ok})
        off += size
    res["components_end"] = off
    return res


def parse_uimage(b):
    magic, hcrc, tm, size, load, ep, dcrc, os_, arch, typ, comp = struct.unpack_from(">7I4B", b, 0)
    return {"magic": hex(magic), "data_size": size, "load": hex(load), "entry": hex(ep),
            "os": os_, "arch": arch, "type": typ, "comp": comp,
            "name": b[32:64].rstrip(b"\x00").decode("latin1")}


def gunzip(b):
    o = zlib.decompressobj(31)
    return o.decompress(b), o.unused_data


def extract_ext2(img_path, outdir, label):
    sys.path.insert(0, os.path.join(S19, "analysis"))
    from extract_ext2 import Ext2
    fs = Ext2(img_path)
    os.makedirs(outdir, exist_ok=True)
    stats = {"files": 0, "links": 0, "bytes": 0}
    fs.walk(2, "", outdir, stats)
    return {"blocks": fs.blocks_count, "block_size": fs.block_size,
            "inodes": fs.inodes_count, "files": stats["files"],
            "links": stats["links"], "bytes": stats["bytes"]}


def split_boot(boot, outdir):
    """Split the Zynq bootgen image (offsets detected, S19-compatible layout)."""
    info = {}
    fsbl_off, fsbl_len = 0x1700, 0x20010
    write(os.path.join(outdir, "fsbl.bin"), boot[fsbl_off:fsbl_off + fsbl_len])
    info["fsbl"] = {"offset": fsbl_off, "size": fsbl_len}

    bs_off = boot.find(b"\xbb\x00\x00\x00\x44\x00\x22\x11")
    ub_off = None
    dead = boot.find(b"\xef\xbe\xad\xde", 0x100000)
    if dead > 0:
        ub_off = dead - 0x3C
    else:
        i = boot.find(b"\xb8\x00\x00\xea", 0x21F000)
        if i > 0:
            ub_off = i
    if ub_off is not None:
        # strip 0xFF padding before u-boot
        end = ub_off
        while end > bs_off and boot[end - 1] == 0xFF:
            end -= 1
        if bs_off >= 0:
            write(os.path.join(outdir, "bitstream.bin"), boot[bs_off:end])
            info["bitstream"] = {"offset": bs_off, "size": end - bs_off}
        write(os.path.join(outdir, "uboot.bin"), boot[ub_off:])
        info["uboot"] = {"offset": ub_off, "size": len(boot) - ub_off,
                         "version": (re.search(rb"U-Boot 20[^\x00]{0,40}", boot)
                                     or [b""])[0].decode("latin1", "replace")}
    dtb = boot.find(b"\xd0\x0d\xfe\xed")
    if dtb >= 0:
        tot = struct.unpack_from(">I", boot, dtb + 4)[0]
        write(os.path.join(outdir, "uboot_control.dtb"), boot[dtb:dtb + tot])
        info["uboot_control_dtb"] = {"offset": dtb, "size": tot}
    return info


def parse_android(img, outdir):
    """Parse an Android boot image (v0 header)."""
    if img[:8] != b"ANDROID!":
        return None
    (k_size, k_addr, r_size, r_addr, s_size, s_addr, tags, page) = \
        struct.unpack_from("<8I", img, 8)
    outdir = os.path.join(outdir, "android.d")
    hdr = {"kernel_size": k_size, "kernel_addr": hex(k_addr),
           "ramdisk_size": r_size, "ramdisk_addr": hex(r_addr),
           "second_size": s_size, "second_addr": hex(s_addr),
           "tags_addr": hex(tags), "page_size": page,
           "cmdline": img[0x40:0x40 + 512].split(b"\x00")[0].decode("latin1")}
    pos = page
    kern = img[pos:pos + k_size]
    write(os.path.join(outdir, "kernel.bin"), kern)
    pos += (k_size + page - 1) // page * page
    rd = img[pos:pos + r_size]
    write(os.path.join(outdir, "ramdisk.bin"), rd)
    pos += (r_size + page - 1) // page * page
    if s_size:
        write(os.path.join(outdir, "second.bin"), img[pos:pos + s_size])
        pos += (s_size + page - 1) // page * page
    hdr["consumed"] = pos
    hdr["extra"] = len(img) - pos
    for name, blob in (("kernel", kern), ("ramdisk", rd)):
        if blob[:2] == b"\x1f\x8b":
            try:
                raw, _ = gunzip(blob)
                write(os.path.join(outdir, name + ".gz"), blob)
                write(os.path.join(outdir, name + ".unpacked"), raw)
                hdr[name + "_decompressed"] = len(raw)
            except Exception:
                pass
    write(os.path.join(outdir, "header.json"), json.dumps(hdr, indent=2).encode())
    return hdr


def main():
    d = open(SRC, "rb").read()
    m = {"source": os.path.basename(SRC), "size": len(d),
         "size_hex": hex(len(d)), "sha256": sha256(d)}
    os.makedirs(OUT, exist_ok=True)
    write("outer_header.bin", d[:0x4000])

    # root key from S19 rootfs (same trust root for the zynq image)
    from Crypto.PublicKey import RSA
    root_key = RSA.import_key(open(os.path.join(
        S19, "Unpacked/minerfs.d/rootfs/etc/bitmain.pub"), "rb").read())

    outer = parse_outer(d)
    m["outer"] = outer
    print("outer entries:")
    for e in outer["entries"]:
        print("  [%d] off=%#x size=%#x %s" % (e["index"], e["offset"], e["size"], e["strings"]))

    for e, tag in zip(outer["entries"], ("zynq", "aml")):
        if e["offset"] is None:
            print("  ! entry without offset, skip")
            continue
        img = d[e["offset"]:e["offset"] + e["size"]]
        write("%s/image.bmu" % tag, img)
        meta = parse_bmu(img)
        info = {"outer_entry": e, "size": len(img), "sha256": sha256(img),
                "header": {k: v for k, v in meta.items() if k not in ("pem", "signature")}}
        write("%s/header.bin" % tag, img[:0x800])
        write("%s/miner.pem" % tag, meta["pem"])
        write("%s/miner.pem.sig" % tag, meta["signature"])
        info["pubkey_verify_root"] = None
        info["parts"] = [{"index": i, "size": s, "offset": meta["components_offset"] +
                          sum(x[1] for x in meta["parts"][:n])}
                         for n, (i, s) in enumerate(meta["parts"])]

        if tag == "zynq":
            info["chain"] = verify_chain(img, meta, root_key, tag)
            for i, (idx, size) in enumerate(meta["parts"]):
                name = COMP_NAMES[i] if i < len(COMP_NAMES) else "part%d" % idx
                blob = img[meta["components_offset"] + sum(x[1] for x in meta["parts"][:i]):
                           meta["components_offset"] + sum(x[1] for x in meta["parts"][:i + 1])]
                write("zynq/" + name, blob)
            z = "zynq"
            boot = open(os.path.join(OUT, z, "BOOT.bin"), "rb").read()
            info["boot"] = split_boot(boot, os.path.join(OUT, z, "BOOT.bin.d"))

            ui = open(os.path.join(OUT, z, "uImage"), "rb").read()
            uinfo = parse_uimage(ui)
            write(z + "/uImage.d/zImage", ui[64:])
            j = ui.find(b"\x1f\x8b\x08")
            if j >= 0:
                vmlinux, _ = gunzip(ui[j:])
                write(z + "/uImage.d/vmlinux.bin", vmlinux)
                pos = vmlinux.find(b"Linux version")
                if pos >= 0:
                    uinfo["linux_version"] = vmlinux[pos:pos + 140].split(b"\x00")[0].decode("latin1", "replace")
                # IKCONFIG
                ik = vmlinux.find(b"IKCFG_ST")
                if ik >= 0:
                    kend = vmlinux.find(b"IKCFG_ED", ik)
                    if kend > 0:
                        cfg = vmlinux[ik + 8:kend]
                        if cfg[:2] == bytes([0x1f, 0x8b]):
                            try:
                                cfg, _ = gunzip(cfg)
                            except Exception:
                                pass
                        write(z + "/uImage.d/kernel_config.txt", cfg)
                        uinfo["config_size"] = len(cfg)
                uinfo["vmlinux_size"] = len(vmlinux)
            info["uImage"] = uinfo

            for name in ("minerfs", "update"):
                blob = open(os.path.join(OUT, z, name + ".image.gz"), "rb").read()
                ui2 = parse_uimage(blob)
                raw, _ = gunzip(blob[64:64 + ui2["data_size"]])
                write("%s/%s.d/ramdisk.ext2" % (z, name), raw)
                sb = raw[1024:2048]
                info[name] = {"uimage": ui2, "image_size": len(raw),
                              "ext2_magic": hex(struct.unpack_from("<H", raw, 0x438)[0]),
                              "inodes": struct.unpack_from("<I", sb, 0)[0],
                              "blocks": struct.unpack_from("<I", sb, 4)[0]}
                info[name]["extract"] = extract_ext2(
                    os.path.join(OUT, z, name + ".d/ramdisk.ext2"),
                    os.path.join(OUT, z, name + ".d/rootfs"), name)

            for nm, fn in (("crl", "crl.tar.gz"), ("miner_btm", "miner.btm.tar.gz")):
                blob = open(os.path.join(OUT, z, fn), "rb").read()
                raw, _ = gunzip(blob)
                write("%s/%s.d/%s.tar" % (z, nm, nm), raw)
                tf = tarfile.open(fileobj=io.BytesIO(raw))
                for mem in tf.getmembers():
                    write("%s/%s.d/%s" % (z, nm, mem.name), tf.extractfile(mem).read())
        else:
            # aml image: single component, Android boot image
            idx, size = meta["parts"][0]
            blob = img[meta["components_offset"]:meta["components_offset"] + size]
            write("aml/android_boot.img", blob)
            info["android"] = parse_android(blob, os.path.join(OUT, "aml"))

        m[tag] = info

    write("manifest.json", json.dumps(m, indent=2, ensure_ascii=False).encode())
    print("\nDone ->", OUT)


if __name__ == "__main__":
    main()
