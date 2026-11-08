#!/usr/bin/env python3
"""Generate curated feature maps: bmminer, cgminer, busybox applets, web pages, bitstream PCAP."""
import re, os, io, sys, glob, importlib.util
sys.path.insert(0, r"D:\Document\tempPrj\BITMAIN-S19Hyd-151T-Firmware\tools_fw2")
spec = importlib.util.spec_from_file_location("bswalk", r"D:\Document\tempPrj\BITMAIN-S19Hyd-151T-Firmware\tools_fw2\bs_walk.py")
# bs_walk executes at import; guard via manual exec of just the walk function
src = open(r"D:\Document\tempPrj\BITMAIN-S19Hyd-151T-Firmware\tools_fw2\bs_walk.py", encoding="utf-8").read()
src = src[:src.index("data = open(sys.argv[1]")]
ns = {}
exec(src, ns)
walk = ns["walk"]

UNP = r"D:\Document\tempPrj\BITMAIN-S19Hyd-151T-Firmware\Firmware2\S21\Unpacked\zynq7007_HHB70801\Unpacked"
OUT = os.path.join(UNP, "analysis")
os.makedirs(os.path.join(OUT, "bitstream"), exist_ok=True)

def strings_of(path, minlen=5):
    d = open(path, "rb").read()
    return [s.decode("ascii", "replace") for s in re.findall(rb"[ -~]{%d,}" % minlen, d)]

# 1. bmminer functional map
out = os.path.join(OUT, "strings", "bmminer.functions.txt")
s = strings_of(os.path.join(UNP, "rootfs1/usr/bin/bmminer"))
cats = {
    "API commands": r"^api_|^/api|cgminer-api",
    "Stratum/pool": r"stratum|pool|job_id|merkle|coinbase|notify|share",
    "Freq/voltage tuning": r"freq|voltage|volt|tuning",
    "Temp/fan/cooling": r"temp|fan|pwm|water|cool",
    "Chain/hardware": r"chain|asic|eeprom|pic|iic|i2c|uart",
    "Config files": r"^/config|^/etc|^/tmp|\.conf|\.json",
    "Logging (zlog)": r"zlog|\.log",
    "Power": r"power|awp|apw|psu",
}
with open(out, "w", encoding="utf-8", newline="\n") as f:
    f.write("# bmminer functional strings (curated)\n")
    for cat, pat in cats.items():
        hits = sorted(set(x for x in s if re.search(pat, x, re.I)))
        f.write(f"\n== {cat} ({len(hits)}) ==\n")
        for h in hits:
            f.write(h[:160] + "\n")
print("bmminer.functions.txt:", os.path.getsize(out), "B")

# 2. cgminer
out = os.path.join(OUT, "strings", "cgminer.functions.txt")
s = strings_of(os.path.join(UNP, "rootfs1/usr/bin/cgminer"))
with open(out, "w", encoding="utf-8", newline="\n") as f:
    f.write("# cgminer strings (all, >=5 chars)\n")
    for x in sorted(set(s)):
        f.write(x[:160] + "\n")
print("cgminer.functions.txt:", os.path.getsize(out), "B")

# 3. busybox applets (from symlinks listing of both rootfs)
apps = set()
for root, lst in [("rootfs1", "rootfs1.listing.txt.symlinks.txt"), ("rootfs2", "rootfs2.listing.txt.symlinks.txt")]:
    for line in open(os.path.join(UNP, lst), encoding="utf-8"):
        line = line.strip()
        if " -> " in line:
            dst, tgt = line.split(" -> ", 1)
            if "busybox" in tgt:
                apps.add(os.path.basename(dst.strip()))
out = os.path.join(OUT, "strings", "busybox.applets.txt")
with open(out, "w", encoding="utf-8", newline="\n") as f:
    f.write(f"# busybox applets (from symlinks): {len(apps)}\n")
    for a in sorted(apps):
        f.write(a + "\n")
print("busybox applets:", len(apps))

# 4. web pages
pages = sorted(os.listdir(os.path.join(UNP, "rootfs1/www/pages")))
cgi = sorted(os.listdir(os.path.join(UNP, "rootfs1/www/pages/cgi-bin")))
out = os.path.join(OUT, "strings", "www.pages.txt")
with open(out, "w", encoding="utf-8", newline="\n") as f:
    f.write(f"# www/pages ({len(pages)} entries), cgi-bin ({len(cgi)} scripts)\n")
    f.write("\n== pages ==\n" + "\n".join(pages) + "\n")
    f.write("\n== cgi-bin ==\n" + "\n".join(cgi) + "\n")
print("www pages:", len(pages), "cgi:", len(cgi))

# 5. bitstream PCAP walk report
data = open(os.path.join(UNP, "..", "update.bmu"), "rb").read()
with open(os.path.join(OUT, "bitstream", "pcap_report.txt"), "w", encoding="utf-8", newline="\n") as f:
    f.write("# FPGA bitstream PCAP walk (XC7Z007S, IDCODE 0x03723093)\n")
    f.write("# bitstream_top.bin: file offset 0x22630-0x21F1A0\n\n")
    import contextlib
    buf = io.StringIO()
    with contextlib.redirect_stdout(buf):
        walk(data, 0x22630, verbose_limit=60)
    f.write(buf.getvalue())
print("pcap_report.txt written")

# 6. FileParser usage text
s = strings_of(os.path.join(UNP, "rootfs1/usr/bin/FileParser"))
out = os.path.join(OUT, "strings", "FileParser.strings.txt")
with open(out, "w", encoding="utf-8", newline="\n") as f:
    for x in sorted(set(s)):
        f.write(x + "\n")
print("FileParser.strings.txt written")
