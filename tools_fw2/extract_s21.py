#!/usr/bin/env python3
"""Full extraction of S21e Hydro bmu: zynq7007 sub-fw + AMLCtrl sub-fw."""
import os, json, hashlib, gzip, io, tarfile, struct, shutil

BASE = r"D:\Document\tempPrj\BITMAIN-S19Hyd-151T-Firmware\Firmware2\S21\Unpacked"
Z = os.path.join(BASE, "zynq7007_HHB70801")
A = os.path.join(BASE, "AMLCtrl_H6HB70801")

manifest = {"zynq": {"entries": []}, "aml": {"entries": []}}

def cut(root, rel, blob, start, note=""):
    p = os.path.join(root, rel)
    os.makedirs(os.path.dirname(p), exist_ok=True)
    with open(p, "wb") as f:
        f.write(blob)
    e = {"name": rel, "offset": start, "size": len(blob),
         "sha256": hashlib.sha256(blob).hexdigest(), "md5": hashlib.md5(blob).hexdigest()}
    if note:
        e["note"] = note
    return e

# ---------------- ZYNQ sub-firmware ----------------
data = open(os.path.join(Z, "update.bmu"), "rb").read()
N = len(data)
ZO = os.path.join(Z, "Unpacked")
if os.path.isdir(ZO):
    shutil.rmtree(ZO)
os.makedirs(ZO)
print(f"== ZYNQ sub-fw: {N:,} B")
m = manifest["zynq"]
m["size"] = N
m["sha256"] = hashlib.sha256(data).hexdigest()
cuts = [
    ("header.bin", 0, 0x200, "BMU header: 2601 + nonce8 + 0x01FE + date 20251016 + pubkey_len 451"),
    ("miner_pubkey.pem", 0x18, 0x18 + 0x1C3, "RSA-2048 public key PEM"),
    ("sig_top.bin", 0x418, 0x518, "RSA-2048 signature"),
    ("section_table.bin", 0x518, 0x540, "8 x {u8 id, u32 BE size}"),
    ("bootimg_header.bin", 0x800, 0xA00, "Zynq BootROM header AA995566/XLNX, FSBL@+0x1700"),
    ("fsbl.bin", 0x1F00, 0x22630, "FSBL + config blocks"),
    ("bitstream_top.bin", 0x22630, 0x21F1A0, "FPGA bitstream IDCODE 0x03723093 XC7Z007S"),
    ("param_blob.bin", 0x21F1C0, 0x21F880, "ver 1.1.0.0 + 0x6C0 B high-entropy blob"),
    ("uboot.bin", 0x21F880, 0x28F990, "U-Boot ARM base 0x04000000, contains embedded small bitstream"),
    ("dtb1.dtb", 0x28F990, 0x2A9480, "device tree #1 (totalsize 8990)"),
    ("dtb2.dtb", 0x2A9480, 0x2AB3CE, "device tree #2 (totalsize 8014 = section id1)"),
]
for rel, a, b, note in cuts:
    e = cut(ZO, rel, data[a:b], a, note)
    m["entries"].append(e)
    print(f"  {rel:28s} 0x{a:08x}-0x{b:08x} ({b-a:>9,} B)")

uimgs = [("uImage_kernel.img", 0x2AB3CE, 4057256, "Linux-4.6.0-xilinx-g03c746f7 comp=none load 0x8000"),
         ("uImage_ramdisk1.img", 0x689CB6, 7030480, "ramdisk #1 gzip"),
         ("uImage_ramdisk2.img", 0xD3E3C6, 4280279, "ramdisk #2 gzip")]
raw_r = {}
for rel, off, size, note in uimgs:
    blob = data[off:off + 64 + size]
    e = cut(ZO, rel, blob, off, note)
    m["entries"].append(e)
    print(f"  {rel:28s} 0x{off:08x} ({len(blob):>9,} B)")
    if "ramdisk" in rel:
        raw_r[rel] = blob[64:]

for rel, a, b, note in [("crl.tar.gz", 0x11533DD, 0x1153605, "crl + crl.sig"),
                        ("miner_btm.tar.gz", 0x1153605, 0x11539F2, "miner.btm + sig")]:
    blob = data[a:b]
    e = cut(ZO, rel, blob, a, note)
    m["entries"].append(e)
    sub = "crl.d" if "crl" in rel else "miner_btm.d"
    d = os.path.join(ZO, sub)
    os.makedirs(d, exist_ok=True)
    with tarfile.open(fileobj=io.BytesIO(blob)) as tf:
        for mm in tf.getmembers():
            f = tf.extractfile(mm)
            b2 = f.read() if f else b""
            open(os.path.join(d, mm.name.replace("/", "_")), "wb").write(b2)
    print(f"  {rel:28s} 0x{a:08x} ({len(blob):>9,} B) -> {sub}/")

e = cut(ZO, "sig_bottom.bin", data[0x11539F2:], 0x11539F2, "RSA-2048 signature trailer")
m["entries"].append(e)

for tag, blob in raw_r.items():
    raw = gzip.decompress(blob)
    rel = tag.replace("uImage_", "").replace(".img", "") + ".img"
    e = cut(ZO, rel, raw, 0, f"gunzip of {tag} payload")
    e["offset"] = None
    m["entries"].append(e)
    magic = struct.unpack_from("<H", raw, 1024 + 56)[0]
    print(f"  {rel:28s} {len(raw):,} B, ext2 magic @1024: {magic:#x}")

with open(os.path.join(ZO, "manifest.json"), "w", encoding="utf-8") as f:
    json.dump(m, f, indent=2)

# ---------------- AML sub-firmware ----------------
data = open(os.path.join(A, "update.bmu"), "rb").read()
N = len(data)
AO = os.path.join(A, "Unpacked")
if os.path.isdir(AO):
    shutil.rmtree(AO)
os.makedirs(AO)
print(f"\n== AML sub-fw: {N:,} B")
m = manifest["aml"]
m["size"] = N
m["sha256"] = hashlib.sha256(data).hexdigest()

ksize, kaddr, rsize, raddr, ssize, saddr, tags, page = struct.unpack_from("<8I", data, 0x808)
print(f"  bootimg: kernel {ksize:,} @0x{kaddr:08x} | ramdisk {rsize:,} @0x{raddr:08x} | second {ssize:,} @0x{saddr:08x} | page {page}")
cmdline = data[0x840:0x840+64].split(b"\0")[0].decode()
print(f"  cmdline: {cmdline!r}")

hdr = data[0x800:0x800 + page]
e = cut(AO, "bootimg_header_page.bin", hdr, 0x800, "Android bootimg page0 with embedded AMLSECU blocks")
m["entries"].append(e)
m["bootimg"] = {"kernel_size": ksize, "kernel_addr": kaddr, "ramdisk_size": rsize,
                "ramdisk_addr": raddr, "second_size": ssize, "second_addr": saddr,
                "page_size": page, "cmdline": cmdline}

k0 = 0x800 + page
r0 = k0 + ksize
s0 = r0 + rsize
e = cut(AO, "boot.img", data[0x800:], 0x800, "entire Android bootimg incl AMLSECU (whole sub-fw payload)")
m["entries"].append(e)
for rel, a, b, note in [
    ("amlsecu_desc.bin", 0xC00, 0x1000, "3 x 0x100 AMLSECU! descriptors (same 32B hash each)"),
    ("kernel.enc", k0, r0, f"encrypted kernel ({ksize:,} B)"),
    ("ramdisk.enc", r0, s0, f"encrypted ramdisk ({rsize:,} B)"),
    ("second.enc", s0, s0 + ssize, f"encrypted second ({ssize:,} B)")]:
    e = cut(AO, rel, data[a:b], a, note)
    m["entries"].append(e)
    print(f"  {rel:28s} 0x{a:08x}-0x{b:08x} ({b-a:>9,} B)")

with open(os.path.join(AO, "manifest.json"), "w", encoding="utf-8") as f:
    json.dump(m, f, indent=2)
print("\ndone")
