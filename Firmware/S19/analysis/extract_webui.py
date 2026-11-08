# -*- coding: utf-8 -*-
"""Extract WebUI CGI shell functions and endpoint references from a rootfs.

Usage: python -I extract_webui.py <rootfs> <outdir> <tag>
"""
import csv
import os
import re
import shutil
import sys

FUNC_RE = re.compile(r"^\s*(?:function\s+)?([A-Za-z_][A-Za-z0-9_]*)\s*\(\s*\)\s*\{?\s*$")
CMD_RE = re.compile(r"(?:^|[|;&]\s*|\$\(\s*)([A-Za-z_][A-Za-z0-9_.-]*)")
FILE_RE = re.compile(r"(/(?:config|etc|tmp|var|usr|sbin|bin|dev|proc|sys)/[A-Za-z0-9_./-]+)")
KNOWN_CMDS = {
    "cgminer-api", "jq", "cat", "echo", "sed", "awk", "grep", "tr", "cut",
    "printf", "read", "mkdir", "rm", "cp", "mv", "sync", "daemonc", "daemons",
    "reboot", "ifconfig", "udhcpc", "passwd", "chpasswd", "lighttpd", "killall",
    "pidof", "sleep", "date", "wc", "truncate", "dd", "mtd_debug", "flash_erase",
    "ubiformat", "nandwrite", "mount", "umount", "insmod", "rmmod", "mknod",
    "i2cget", "i2cset", "i2cdetect", "gpio", "devmem", "nanddump", "ubiattach",
    "ubimkvol", "ubirmvol", "ubidetach", "fw_setenv", "fw_printenv",
}


def parse_shell(path):
    try:
        lines = open(path, encoding="utf-8", errors="replace").read().splitlines()
    except OSError:
        return [], set(), set()
    funcs, cmds, files = [], set(), set()
    i = 0
    while i < len(lines):
        line = lines[i]
        m = FUNC_RE.match(line)
        if m:
            name = m.group(1)
            start = i + 1
            depth = line.count("{") - line.count("}")
            j = i
            if "{" not in line:
                # body starts on a following line
                j += 1
                while j < len(lines) and not lines[j].strip():
                    j += 1
                if j < len(lines):
                    depth += lines[j].count("{") - lines[j].count("}")
            while depth > 0 and j + 1 < len(lines):
                j += 1
                depth += lines[j].count("{") - lines[j].count("}")
            funcs.append({"name": name, "start": start, "end": j + 1})
            i = j + 1
            continue
        i += 1
    for line in lines:
        code = line.split("#", 1)[0]
        for m in CMD_RE.finditer(code):
            tok = m.group(1)
            if tok in KNOWN_CMDS:
                cmds.add(tok)
        for m in FILE_RE.finditer(code):
            files.add(m.group(1).rstrip("."))
    return funcs, cmds, files


def main():
    rootfs, out, tag = sys.argv[1], sys.argv[2], sys.argv[3]
    cgi_dir = os.path.join(rootfs, "www", "pages", "cgi-bin")
    www = os.path.join(rootfs, "www", "pages")
    os.makedirs(out, exist_ok=True)
    cgi_out = os.path.join(out, "cgi-bin")
    os.makedirs(cgi_out, exist_ok=True)

    rows = []
    for name in sorted(os.listdir(cgi_dir)):
        src = os.path.join(cgi_dir, name)
        if not os.path.isfile(src):
            continue
        shutil.copy2(src, os.path.join(cgi_out, name))
        funcs, cmds, files = parse_shell(src)
        for f in funcs:
            rows.append({
                "file": name, "function": f["name"], "start": f["start"],
                "end": f["end"], "lines": f["end"] - f["start"] + 1,
                "commands": ";".join(sorted(cmds)), "files": ";".join(sorted(files)),
            })
        if not funcs:
            rows.append({
                "file": name, "function": "(top-level)", "start": 1,
                "end": len(open(src, encoding="utf-8", errors="replace").read().splitlines()),
                "lines": len(open(src, encoding="utf-8", errors="replace").read().splitlines()),
                "commands": ";".join(sorted(cmds)), "files": ";".join(sorted(files)),
            })

    with open(os.path.join(out, "functions.csv"), "w", newline="", encoding="utf-8") as fh:
        w = csv.DictWriter(fh, fieldnames=["file", "function", "start", "end", "lines", "commands", "files"])
        w.writeheader()
        w.writerows(rows)

    endpoints = {}
    for dp, dn, fn in os.walk(www):
        for f in fn:
            if not f.endswith((".js", ".html")):
                continue
            p = os.path.join(dp, f)
            try:
                text = open(p, encoding="utf-8", errors="replace").read()
            except OSError:
                continue
            for m in re.finditer(r"(?:/)?cgi-bin/([A-Za-z0-9_]+\.cgi)", text):
                ep = m.group(1)
                rel = os.path.relpath(p, www).replace(os.sep, "/")
                endpoints.setdefault(ep, set()).add(rel)
    with open(os.path.join(out, "endpoints.csv"), "w", newline="", encoding="utf-8") as fh:
        w = csv.writer(fh)
        w.writerow(["endpoint", "referenced_in", "cgi_exists"])
        for ep in sorted(endpoints):
            w.writerow([ep, ";".join(sorted(endpoints[ep])),
                        "yes" if os.path.exists(os.path.join(cgi_dir, ep)) else "no"])

    # init scripts
    init_dir = os.path.join(rootfs, "etc", "init.d")
    init_out = os.path.join(out, "init_scripts")
    os.makedirs(init_out, exist_ok=True)
    init_rows = []
    if os.path.isdir(init_dir):
        for name in sorted(os.listdir(init_dir)):
            src = os.path.join(init_dir, name)
            if not os.path.isfile(src):
                continue
            shutil.copy2(src, os.path.join(init_out, name))
            funcs, cmds, files = parse_shell(src)
            init_rows.append({
                "file": name, "functions": ";".join(f["name"] for f in funcs),
                "commands": ";".join(sorted(cmds)), "files": ";".join(sorted(files)),
            })
    with open(os.path.join(out, "init_scripts.csv"), "w", newline="", encoding="utf-8") as fh:
        w = csv.DictWriter(fh, fieldnames=["file", "functions", "commands", "files"])
        w.writeheader()
        w.writerows(init_rows)

    print("%s: cgi=%d, shell-functions=%d, endpoints=%d, init-scripts=%d"
          % (tag, len(os.listdir(cgi_out)), len(rows), len(endpoints), len(init_rows)))


if __name__ == "__main__":
    main()
