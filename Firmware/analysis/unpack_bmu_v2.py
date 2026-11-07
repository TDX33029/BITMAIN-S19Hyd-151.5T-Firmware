# -*- coding: utf-8 -*-
"""
Unpack Bitmain .bmu firmware  --  Antminer-S19-Hydro-release-202212170935.bmu

The component list and exact byte boundaries were recovered from:
  * static analysis of the container,
  * the on-device updater /usr/bin/FileParser (S19),
  * /etc/init.d/Update.sh (which names every component),
  * RSA-2048/SHA-256 verification of the 8 x 256-byte signature trailer.

Container layout (all offsets absolute in the .bmu):

    0x000000  24-byte BMU header  (magic 0x2601BE, "S19", big-endian u32 fields)
    0x000018  miner.pem            RSA-2048 public key, PEM (451 bytes)
    0x0001DB  0x23 zero padding
    0x000418  miner.pem.sig        RSA-2048 signature over miner.pem (root key)
    0x000518  part table           7 x {u16 index, u24 BE size} + 5-byte header
    0x000800  BOOT.bin             0x2A8B40 bytes (FSBL + PL bitstream + u-boot)
    0x02A9340 devicetree.dtb       0x001F4E bytes
    0x02AB28E uImage               0x3DE8E0 bytes (Linux 4.6 zImage)
    0x0689B6E minerfs.image.gz     0x68900D bytes (gzip'd ext2 rootfs)
    0x0D12B7B update.image.gz      0x41440F bytes (gzip'd ext2 upgrade ramdisk)
    0x1126F8A crl.tar.gz           0x000228 bytes (gzip tar: crl + crl.sig)
    0x11271B2 miner.btm.tar.gz     0x0003ED bytes (gzip tar: miner.btm + .sig)
    0x112759F signatures           8 x 256 bytes (component signatures)

Inside BOOT.bin (Zynq-7000 boot image, base 0x800):
    0x0000    Xilinx boot header (width 0xAA995566, ident "XNLX")
    0x08C0    image header table / 0x0C80 partition header table (bootgen)
    0x1700    FSBL flat binary, 0x20010 bytes (vector table @ +0)
    0x21740   Bitmain partition wrapper for the bitstream (0x6C0 bytes)
    0x21E20   PL bitstream (7-series, IDCODE 0x03723093, CMD DESYNC @ +0x21E354)
    0x219C0   Bitmain partition wrapper for u-boot (0x6C0 bytes)
    0x21880   u-boot 2016.07 binary (exception vector table @ +0, 0xDEADBEEF @ +0x3C)
"""
import hashlib
import io
import json
import os
import re
import struct
import tarfile
import zlib

SRC = r"Antminer-S19-Hydro-release-202212170935.bmu"
OUT = r"Unpacked"

# top-level components (offset, size) -- verified by signature trailer
COMPONENTS = [
    ("BOOT.bin",           0x000800, 0x2A8B40),
    ("devicetree.dtb",     0x2A9340, 0x001F4E),
    ("uImage",             0x2AB28E, 0x3DE8E0),
    ("minerfs.image.gz",   0x689B6E, 0x68900D),
    ("update.image.gz",    0xD12B7B, 0x41440F),
    ("crl.tar.gz",         0x1126F8A, 0x000228),
    ("miner.btm.tar.gz",   0x11271B2, 0x0003ED),
]

# BOOT.bin internals (absolute offsets)
OFF_FSBL   = 0x1F00
LEN_FSBL   = 0x20010
OFF_BS_HDR = 0x21F40
OFF_BS     = 0x22620
OFF_BS_DESYNC = 0x21EB54
OFF_BS_PAD_END = 0x21F1A0
OFF_UB_HDR = 0x21F1C0
OFF_UB     = 0x21F880

OFF_SIGBLOCK = 0x112759F


def sha256(b):
    return hashlib.sha256(b).hexdigest()


def write(rel, data):
    full = os.path.join(OUT, rel)
    os.makedirs(os.path.dirname(full), exist_ok=True)
    open(full, "wb").write(data)
    return len(data)


def parse_uimage(b):
    magic, hcrc, tm, size, load, ep, dcrc, os_, arch, typ, comp = struct.unpack_from(">7I4B", b, 0)
    return dict(magic=hex(magic), hcrc=hex(hcrc), time=tm, size=size, load=hex(load),
                ep=hex(ep), dcrc=hex(dcrc), os=os_, arch=arch, type=typ, comp=comp,
                name=b[32:64].rstrip(b"\x00").decode("latin1"))


def gunzip(b):
    o = zlib.decompressobj(31)
    out = o.decompress(b)
    return out, o.unused_data


def main():
    root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    global OUT
    OUT = os.path.join(root, OUT)
    d = open(os.path.join(root, SRC), "rb").read()
    m = {"source": os.path.basename(SRC), "size": len(d), "size_hex": hex(len(d))}

    # ---- header ----
    write("bmu_header.bin", d[:0x518])
    pem = d[0x18:0x18 + 0x1C3]
    write("miner.pem", pem)
    msig = d[0x418:0x518]
    write("miner.pem.sig", msig)
    write("part_table.bin", d[0x518:0x800])
    m["header"] = {
        "magic": hex(struct.unpack_from(">H", d, 0)[0]), "model": d[2:5].decode(),
        "field_0x06": struct.unpack_from(">H", d, 6)[0],
        "field_0x08": struct.unpack_from(">I", d, 8)[0],
        "field_0x0c": struct.unpack_from(">I", d, 0x0C)[0],
        "field_0x10": struct.unpack_from(">I", d, 0x10)[0],
        "pubkey_len": struct.unpack_from(">I", d, 0x14)[0],
        "pubkey_offset": 0x18, "signature_offset": 0x418, "signature_len": 0x100,
        "signature_algorithm": "RSA-2048 / SHA-256 PKCS#1 v1.5 over miner.pem",
    }
    # part table: u32 count LE, then 7 x (u16 index LE, u24 size BE)
    count = struct.unpack_from("<I", d, 0x518)[0]
    entries = []
    p = 0x518 + 5
    for i in range(count):
        idx = struct.unpack_from("<H", d, p)[0]
        size = int.from_bytes(d[p + 2:p + 5], "big")
        entries.append({"index": idx, "size": size, "size_hex": hex(size)})
        p += 5
    m["part_table"] = {"count": count, "entries": entries}

    # ---- components ----
    comps = {}
    for name, off, size in COMPONENTS:
        blob = d[off:off + size]
        comps[name] = blob
        write(name, blob)
        print("%-20s off=%#09x size=%8d sha256=%s" % (name, off, size, sha256(blob)[:16]))

    # ---- signature trailer ----
    sigs = d[OFF_SIGBLOCK:OFF_SIGBLOCK + 2048]
    write("signatures.bin", sigs)
    m["signature_trailer"] = {"offset": OFF_SIGBLOCK, "count": 8, "slot_size": 256}

    # ---- BOOT.bin internals ----
    boot = comps["BOOT.bin"]
    boot_abs = 0x800
    bh = {
        "ident": boot[0x24:0x28].decode("latin1"),
        "width_word": hex(struct.unpack_from("<I", boot, 0x20)[0]),
        "enc_status": struct.unpack_from("<I", boot, 0x28)[0],
        "version": hex(struct.unpack_from("<I", boot, 0x2C)[0]),
        "fsbl_src": struct.unpack_from("<I", boot, 0x30)[0],
        "fsbl_len": struct.unpack_from("<I", boot, 0x34)[0],
        "total_len": struct.unpack_from("<I", boot, 0x40)[0],
        "qspi_cfg": struct.unpack_from("<I", boot, 0x44)[0],
    }
    words = [struct.unpack_from("<I", boot, 0x20 + 4 * i)[0] for i in range(10)]
    bh["checksum_stored"] = hex(struct.unpack_from("<I", boot, 0x48)[0])
    bh["checksum_ok"] = bh["checksum_stored"] == hex((~sum(words)) & 0xFFFFFFFF)
    m["BOOT.bin_header"] = bh

    fsbl = boot[OFF_FSBL - boot_abs:OFF_FSBL - boot_abs + LEN_FSBL]
    write("BOOT.bin.d/fsbl.bin", fsbl)
    m["fsbl"] = {"offset": OFF_FSBL, "size": len(fsbl), "sha256": sha256(fsbl)}

    bs = boot[OFF_BS - boot_abs:OFF_BS_PAD_END - boot_abs]
    write("BOOT.bin.d/bitstream.bin", bs)
    idcode = None
    q = bs.find(b"\x01\x80\x01\x30")
    if q >= 0:
        idcode = hex(struct.unpack_from("<I", bs, q + 4)[0])
    m["bitstream"] = {"offset": OFF_BS, "size": len(bs), "sha256": sha256(bs),
                      "preamble": bs[:20].hex(), "idcode": idcode,
                      "desync_offset": OFF_BS_DESYNC}
    write("BOOT.bin.d/part_wrapper_bitstream.bin", boot[OFF_BS_HDR - boot_abs:OFF_BS_HDR - boot_abs + 0x6C0])
    write("BOOT.bin.d/part_wrapper_uboot.bin", boot[OFF_UB_HDR - boot_abs:OFF_UB_HDR - boot_abs + 0x6C0])

    ub = boot[OFF_UB - boot_abs:]
    write("BOOT.bin.d/uboot.bin", ub)
    ver = ub.find(b"U-Boot 20")
    m["uboot"] = {"offset": OFF_UB, "size": len(ub), "sha256": sha256(ub),
                  "vector_0": hex(struct.unpack_from("<I", ub, 0)[0]),
                  "marker_deadbeef": hex(struct.unpack_from("<I", ub, 0x3C)[0]),
                  "version": ub[ver:ver + 40].split(b"\x00")[0].decode("latin1") if ver >= 0 else None}
    # u-boot control FDT is embedded at absolute 0x28F820
    ctl = d[0x28F820:0x28F820 + 9092]
    write("BOOT.bin.d/uboot_control.dtb", ctl)

    # ---- devicetree ----
    dtb = comps["devicetree.dtb"]
    tot = struct.unpack_from(">I", dtb, 4)[0]
    m["devicetree"] = {"size": len(dtb), "fdt_totalsize": tot, "sha256": sha256(dtb)}

    # ---- signed payload signatures (verified map) ----
    import Crypto.PublicKey.RSA as RSA
    from Crypto.Signature import pkcs1_15
    from Crypto.Hash import SHA256
    key = RSA.import_key(pem)
    verify_map = {}
    for i, (name, _o, _s) in enumerate(COMPONENTS):
        ok = False
        try:
            pkcs1_15.new(key).verify(SHA256.new(comps[name]), sigs[i * 256:(i + 1) * 256])
            ok = True
        except Exception:
            pass
        verify_map[i] = {"component": name, "verified": ok}
    m["signature_verification"] = verify_map
    write("signatures/signature_map.json", json.dumps(verify_map, indent=2).encode())

    # ---- uImage / kernel ----
    u = comps["uImage"]
    info = parse_uimage(u)
    write("uImage.d/zImage", u[64:])
    j = u.find(b"\x1f\x8b\x08")
    if j >= 0:
        vmlinux, _ = gunzip(u[j:])
        write("uImage.d/vmlinux.bin", vmlinux)
        pos = vmlinux.find(b"Linux version")
        info["vmlinux_size"] = len(vmlinux)
        info["vmlinux_sha256"] = sha256(vmlinux)
        info["linux_version"] = vmlinux[pos:pos + 150].split(b"\x00")[0].decode("latin1", "replace") if pos >= 0 else None
    m["uImage"] = info

    # ---- ramdisks (stored as legacy uImage wrappers, gzip payload) ----
    for tag, name in (("minerfs", "minerfs.image.gz"), ("update", "update.image.gz")):
        blob = comps[name]
        ui = parse_uimage(blob)
        img, _ = gunzip(blob[64:64 + ui["size"]])
        write("%s.d/ramdisk.ext2" % tag, img)
        sb = img[1024:2048]
        m[tag] = {
            "uimage": ui,
            "compressed_size": len(blob), "image_size": len(img),
            "image_sha256": sha256(img),
            "ext2_magic": hex(struct.unpack_from("<H", img, 0x438)[0]),
            "blocks": struct.unpack_from("<I", sb, 0x4)[0],
            "inodes": struct.unpack_from("<I", sb, 0x0)[0],
            "volume": sb[0x78:0x88].rstrip(b"\x00").decode("latin1"),
        }
        print("%-20s uImage %8d -> ext2 %d bytes vol=%s" % (name, len(blob), len(img), m[tag]["volume"]))

    # ---- tars ----
    for tag, name in (("crl", "crl.tar.gz"), ("miner_btm", "miner.btm.tar.gz")):
        blob = comps[name]
        raw, _ = gunzip(blob)
        write("%s.d/%s.tar" % (tag, name.replace(".tar.gz", "")), raw)
        tf = tarfile.open(fileobj=io.BytesIO(raw))
        for mem in tf.getmembers():
            data = tf.extractfile(mem).read()
            write("%s.d/%s" % (tag, mem.name), data)
            print("  tar %-10s %-12s %6d bytes" % (name, mem.name, len(data)))

    write("manifest.json", json.dumps(m, indent=2).encode())
    print("\nDone ->", OUT)


if __name__ == "__main__":
    main()
