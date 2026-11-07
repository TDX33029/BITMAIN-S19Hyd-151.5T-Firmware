#!/usr/bin/env python3
"""Full extraction of Antminer-S19-Hydro .bmu into Unpacked/ with manifest.json."""
import os, json, hashlib, gzip, io, tarfile, struct, shutil

SRC = r"D:\Document\tempPrj\BITMAIN-S19Hyd-151T-Firmware\Firmware2\S19\Antminer-S19-Hydro-release-202212170935.bmu"
OUT = r"D:\Document\tempPrj\BITMAIN-S19Hyd-151T-Firmware\Firmware2\S19\Unpacked"

data = open(SRC, "rb").read()
N = len(data)

# clean slate
if os.path.isdir(OUT):
    shutil.rmtree(OUT)
os.makedirs(OUT)

manifest = {"source": os.path.basename(SRC), "size": N,
            "sha256": hashlib.sha256(data).hexdigest(), "entries": []}

def cut(name, start, end, note=""):
    blob = data[start:end]
    p = os.path.join(OUT, name)
    os.makedirs(os.path.dirname(p), exist_ok=True) if os.path.dirname(p) != OUT else None
    with open(p, "wb") as f:
        f.write(blob)
    e = {"name": name, "offset": start, "end": end, "size": end - start,
         "sha256": hashlib.sha256(blob).hexdigest(), "md5": hashlib.md5(blob).hexdigest()}
    if note:
        e["note"] = note
    manifest["entries"].append(e)
    print(f"  {name:36s} 0x{start:08x}-0x{end:08x} ({end-start:>9} B)")
    return blob

print("== top-level ==")
cut("header.bin", 0, 0x200, "BMU header: magic 0x2601, platform S19, pubkey_len=0x1C3")
cut("miner_pubkey.pem", 0x18, 0x18 + 0x1C3, "RSA-2048 public key PEM")
cut("sig_top.bin", 0x418, 0x518, "RSA-2048 signature (over header/manifest?)")
cut("section_table.bin", 0x518, 0x540, "8 x {u8 id, u32 BE size}")

print("== boot image ==")
cut("bootimg_header.bin", 0x800, 0xA00, "Zynq BootROM header: AA995566/XLNX, FSBL@+0x1700, no encryption")
cut("fsbl.bin", 0x1F00, 0x22630, "FSBL (code + config blocks @0x1d180/0x1df00), runs from QSPI")
cut("bitstream_top.bin", 0x22630, 0x21F1A0, "FPGA bitstream XC7Z007S (IDCODE 0x03723093), full config")
cut("param_blob.bin", 0x21F1C0, 0x21F880, "ver 1.1.0.0 + 0x6C0 B high-entropy blob (encrypted params?)")
cut("uboot.bin", 0x21F880, 0x28F820, "U-Boot ARM, link base 0x04000000, contains embedded small bitstream")
cut("dtb1.dtb", 0x28F820, 0x2A9340, "device tree blob #1 (inside boot partition id0)")
cut("dtb2.dtb", 0x2A9340, 0x2AB28E, "device tree blob #2 (section id1)")

print("== uImages ==")
k = cut("uImage_kernel.img", 0x2AB28E, 0x2AB2CE + 4057248, "Linux-4.6.0-xilinx-g03c746f7, comp=none, load 0x8000")
r1 = cut("uImage_ramdisk1.img", 0x689B6E, 0x689BAE + 6852557, "ramdisk #1 gzip")
r2 = cut("uImage_ramdisk2.img", 0xD12B7B, 0xD12BBB + 4277199, "ramdisk #2 gzip")

print("== auxiliary ==")
crl_tgz = cut("crl.tar.gz", 0x1126F8A, 0x11271B2, "crl + crl.sig")
btm_tgz = cut("miner_btm.tar.gz", 0x11271B2, 0x112759F, "miner.btm + miner.btm.sig")
cut("sig_bottom.bin", 0x112759F, N, "RSA-2048 signature trailer (2048 B)")

# extract tar members
for arc, sub in [(crl_tgz, "crl.d"), (btm_tgz, "miner_btm.d")]:
    d = os.path.join(OUT, sub)
    os.makedirs(d, exist_ok=True)
    with tarfile.open(fileobj=io.BytesIO(arc)) as tf:
        for m in tf.getmembers():
            f = tf.extractfile(m)
            b = f.read() if f else b""
            with open(os.path.join(d, m.name.replace("/", "_")), "wb") as g:
                g.write(b)
            print(f"  {sub}/{m.name} ({len(b)} B)")

# gunzip ramdisks
print("== ramdisks ==")
for tag, blob in [("ramdisk1", r1[64:]), ("ramdisk2", r2[64:])]:
    raw = gzip.decompress(blob)
    with open(os.path.join(OUT, f"{tag}.img"), "wb") as f:
        f.write(raw)
    magic = raw[:16].hex()
    print(f"  {tag}: {len(blob)} -> {len(raw)} B, head={magic}")
    manifest["entries"].append({"name": f"{tag}.img", "size": len(raw),
                                "sha256": hashlib.sha256(raw).hexdigest(),
                                "md5": hashlib.md5(raw).hexdigest(),
                                "note": f"gunzip of uImage payload"})

with open(os.path.join(OUT, "manifest.json"), "w", encoding="utf-8") as f:
    json.dump(manifest, f, indent=2, ensure_ascii=False)
print("\nmanifest.json written")
