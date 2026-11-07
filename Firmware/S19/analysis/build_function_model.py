# -*- coding: utf-8 -*-
"""Build the comprehensive FunctionModel for S19/S21 Zynq firmware.

Usage:
  python -I build_function_model.py S19
  python -I build_function_model.py S21

Reads the full Ghidra dumps under <fw>/analysis/reverse/full* and writes
Firmware/FunctionModel/<fw>/.
"""
import csv
import os
import re
import shutil
import sys

FW_ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
# FW_ROOT = .../Firmware
FIRMWARE = FW_ROOT
OUT_ROOT = os.path.join(FIRMWARE, "FunctionModel")

BLOCKS = [
    ("00_imports_thunks", "导入符号 / Thunk", "PLT thunk 与外部导入符号，不含实际实现；列在此处便于查依赖。"),
    ("01_boot_upgrade", "固件升级与启动",
     "BOOT.bin/BootROM、U-Boot 环境、mtd/ubi 分区、升级包解包与落盘、升级守护进程。"),
    ("02_power_psu", "电源 / PSU 控制",
     "PSU 的 I²C 命令、电压设定与回读、电源类型识别、上电时序与保护。"),
    ("03_pic_ctrl", "PIC 控制",
     "链上 PIC 的复位、心跳、DCDC 使能、版本读取与 1704 升级。"),
    ("04_asic_chain", "ASIC / 算力链",
     "链存在检测、ASIC 数量扫描、UART/FPGA/AXI 访问、nonce 读取、PLL 下发。"),
    ("05_freq_voltage", "频率 / 电压调节",
     "频率计划生成、EEPROM 扫描结果、增量升频、调频线程、温度分档调压。"),
    ("06_thermal_fan", "温度 / 风扇",
     "温度传感器读取、风扇 PWM/PID、过温保护与降额。"),
    ("07_mining_pool", "矿池 / Stratum",
     "矿池连接、订阅/授权、任务下发、share 提交与难度处理。"),
    ("08_network", "网络",
     "IP/DHCP/DNS/网关/主机名/MAC、网络配置读写。"),
    ("09_web_api", "WebUI / API",
     "lighttpd CGI、cgminer-api、登录鉴权、配置页面与状态接口。"),
    ("10_config_eeprom", "配置 / EEPROM",
     "topol.conf/cgminer.conf/network.conf 解析，EEPROM 校准数据与 CRC。"),
    ("11_log_monitor", "日志 / 监控 / 看门狗",
     "日志分级、syslog、心跳、看门狗、IPSIG/录音按键监控。"),
    ("12_crypto", "加密 / 签名",
     "RSA/SHA/AES、公钥与证书、固件签名校验、CRL。"),
    ("13_os_service", "系统服务 / 线程",
     "init/daemon、线程创建、定时器、NTP、重启/关机。"),
    ("99_unclassified", "未分类", "未能通过字符串或人工种子归类的函数。"),
]

BLOCK_DESC = {b[0]: b[2] for b in BLOCKS}

# (block, weight, regex)
RULES = [
    ("01_boot_upgrade", 3, r"\bupgrade\b"),
    ("01_boot_upgrade", 4, r"\bupdate\.bmu\b"),
    ("01_boot_upgrade", 3, r"\bbmu\b"),
    ("01_boot_upgrade", 4, r"\bsigimage\b"),
    ("01_boot_upgrade", 3, r"\bmtd\d*\b"),
    ("01_boot_upgrade", 3, r"\bubi\w*\b"),
    ("01_boot_upgrade", 3, r"\bflash(_erase)?\b"),
    ("01_boot_upgrade", 4, r"\bboot\.bin\b"),
    ("01_boot_upgrade", 3, r"\bfirmware\b"),
    ("01_boot_upgrade", 3, r"\bbootm\b"),
    ("01_boot_upgrade", 2, r"\bcrl\b"),
    ("01_boot_upgrade", 3, r"\bupgrade_clear\b"),
    ("01_boot_upgrade", 2, r"\breboot\b"),

    ("02_power_psu", 5, r"\bpsu\b"),
    ("02_power_psu", 5, r"\bpower supply\b"),
    ("02_power_psu", 4, r"\bvoltage\b"),
    ("02_power_psu", 3, r"\bvol\b"),
    ("02_power_psu", 5, r"\b(set|get|read)_voltage\b"),
    ("02_power_psu", 3, r"\bi2c\b"),
    ("02_power_psu", 4, r"\bpower_(on|off|init|open|close|get|type|mode)\b"),
    ("02_power_psu", 4, r"\b(dc|ac)_voltage\b"),
    ("02_power_psu", 1, r"\bpower\b"),

    ("03_pic_ctrl", 5, r"\bpic\b"),
    ("03_pic_ctrl", 5, r"\bheartbeat\b"),
    ("03_pic_ctrl", 5, r"\bdcdc\b"),
    ("03_pic_ctrl", 5, r"\b1704\b"),
    ("03_pic_ctrl", 5, r"\bpic_(reset|open|version|enable|disable|get)\b"),
    ("03_pic_ctrl", 5, r"\bseek_1704\b"),

    ("04_asic_chain", 3, r"\basic\b"),
    ("04_asic_chain", 3, r"\bchain\b"),
    ("04_asic_chain", 4, r"\bdomain\b"),
    ("04_asic_chain", 3, r"\bnonce\b"),
    ("04_asic_chain", 3, r"\buart\b"),
    ("04_asic_chain", 4, r"\bfpga\b"),
    ("04_asic_chain", 4, r"\baxi\b"),
    ("04_asic_chain", 3, r"\bbaud\b"),
    ("04_asic_chain", 3, r"\bpll\b"),
    ("04_asic_chain", 4, r"\bscanhash\b|\bscan_hash\b"),
    ("04_asic_chain", 4, r"\bchain_(scan|detect|present|power|cmd)\b"),

    ("05_freq_voltage", 5, r"\bfreq"),
    ("05_freq_voltage", 5, r"\bfrequency\b"),
    ("05_freq_voltage", 5, r"\btuning\b"),
    ("05_freq_voltage", 5, r"\bpostdiv\b"),
    ("05_freq_voltage", 4, r"\bhashrate\b"),
    ("05_freq_voltage", 5, r"\binc_freq\b"),
    ("05_freq_voltage", 5, r"\bfreq_level\b"),

    ("06_thermal_fan", 3, r"\btemp"),
    ("06_thermal_fan", 4, r"\btemperature\b"),
    ("06_thermal_fan", 5, r"\bfan\b"),
    ("06_thermal_fan", 5, r"\bpwm\b"),
    ("06_thermal_fan", 5, r"\bthermal\b"),
    ("06_thermal_fan", 5, r"\boverheat\b"),
    ("06_thermal_fan", 3, r"\bcool\b"),
    ("06_thermal_fan", 5, r"\bpid_target\b"),

    ("07_mining_pool", 3, r"\bpool\b"),
    ("07_mining_pool", 4, r"\bstratum\b"),
    ("07_mining_pool", 3, r"\bjob\b"),
    ("07_mining_pool", 3, r"\bshare\b"),
    ("07_mining_pool", 3, r"\bdiff\b"),
    ("07_mining_pool", 3, r"\bworker\b"),
    ("07_mining_pool", 3, r"\bsubscribe\b"),
    ("07_mining_pool", 2, r"\bnotify\b"),
    ("07_mining_pool", 3, r"\bmining\b"),
    ("07_mining_pool", 4, r"\bpool\.json\b"),

    ("08_network", 4, r"\bnetmask\b"),
    ("08_network", 4, r"\bgateway\b"),
    ("08_network", 3, r"\bdns\b"),
    ("08_network", 5, r"\bdhcp\b"),
    ("08_network", 3, r"\bnetwork\b"),
    ("08_network", 4, r"\bhostname\b"),
    ("08_network", 5, r"\bwifi\b"),
    ("08_network", 4, r"\bmac address\b|\bmac_addr\b"),
    ("08_network", 3, r"\bip address\b|\bipaddr\b"),
    ("08_network", 3, r"\broute\b"),

    ("09_web_api", 4, r"\bhttp\b"),
    ("09_web_api", 5, r"\bcgi\b"),
    ("09_web_api", 3, r"\bsession\b"),
    ("09_web_api", 3, r"\btoken\b"),
    ("09_web_api", 3, r"\bpassword\b"),
    ("09_web_api", 3, r"\blogin\b"),
    ("09_web_api", 3, r"\bcookie\b"),
    ("09_web_api", 3, r"\bweb\b"),
    ("09_web_api", 5, r"\bcgminer-api\b"),
    ("09_web_api", 5, r"\blighttpd\b"),
    ("09_web_api", 1, r"\bapi\b"),

    ("10_config_eeprom", 5, r"\beeprom\b"),
    ("10_config_eeprom", 5, r"\btopol\b"),
    ("10_config_eeprom", 5, r"\bcgminer\.conf\b"),
    ("10_config_eeprom", 2, r"\bconfig\b"),
    ("10_config_eeprom", 3, r"\bparameter\b"),
    ("10_config_eeprom", 3, r"\bcrc\b"),
    ("10_config_eeprom", 2, r"\bconf\b"),
    ("10_config_eeprom", 2, r"\bini\b"),

    ("11_log_monitor", 1, r"\blog\b"),
    ("11_log_monitor", 2, r"\bdebug\b"),
    ("11_log_monitor", 4, r"\bsyslog\b"),
    ("11_log_monitor", 5, r"\bwatchdog\b"),
    ("11_log_monitor", 3, r"\bmonitor\b"),
    ("11_log_monitor", 3, r"\balarm\b"),
    ("11_log_monitor", 3, r"\bwarning\b"),
    ("11_log_monitor", 3, r"\bassert\b"),

    ("12_crypto", 5, r"\brsa\b"),
    ("12_crypto", 5, r"\bsha256\b|\bsha-256\b"),
    ("12_crypto", 4, r"\bsha1\b"),
    ("12_crypto", 5, r"\baes\b"),
    ("12_crypto", 5, r"\bsignature\b"),
    ("12_crypto", 3, r"\bverify\b"),
    ("12_crypto", 5, r"\bpubkey\b"),
    ("12_crypto", 4, r"\bpem\b"),
    ("12_crypto", 4, r"\bcert\b"),
    ("12_crypto", 3, r"\bmd5\b"),
    ("12_crypto", 5, r"\bencrypt\b|\bdecrypt\b"),

    ("13_os_service", 1, r"\binit\b"),
    ("13_os_service", 3, r"\bdaemon\b"),
    ("13_os_service", 2, r"\bshutdown\b"),
    ("13_os_service", 3, r"\bntp\b"),
    ("13_os_service", 3, r"\bpthread_create\b"),
    ("13_os_service", 1, r"\bsleep\b"),
]
RULES = [(b, w, re.compile(p, re.I)) for b, w, p in RULES]

NOISE_RE = [
    re.compile(r"^(hhb|bhb|h6hb|s19|s21|bm\d|zynq|amlogic)", re.I),
    re.compile(r"^%[-0-9.]*[sdulxXf]+$"),
    re.compile(r"^0x[0-9a-f]+$", re.I),
    re.compile(r"^[0-9a-f]{8,}$", re.I),
    re.compile(r"^(error|failed|success|null|true|false|none|ok)$", re.I),
    re.compile(r"^[\s\d.,:;%()\-]*$"),
]

AUX_DEFAULT = {
    "FileParser": "10_config_eeprom",
    "update-daemon": "01_boot_upgrade",
    "monitor-ipsig": "11_log_monitor",
    "monitor-recobtn": "11_log_monitor",
    "antlogin": "09_web_api",
    "cgminer-api": "09_web_api",
    "id2mac": "08_network",
    "cgminer": "07_mining_pool",
    "bitmain_axi.ko": "04_asic_chain",
    "fpga_mem_driver.ko": "04_asic_chain",
}

S21_SEEDS = {
    0x4ebd0: ("inc_freq", ["05_freq_voltage"]),
    0x27460: ("tuning_frequency", ["05_freq_voltage"]),
    0x2d6b0: ("set_freq_pll", ["05_freq_voltage", "04_asic_chain"]),
    0x25da0: ("pll_calc", ["05_freq_voltage"]),
    0x259c0: ("freq_check", ["05_freq_voltage"]),
    0x3ffbc: ("tuning_freq_thread", ["05_freq_voltage", "06_thermal_fan"]),
    0x40ca8: ("create_tuning_thread", ["05_freq_voltage"]),
    0x26ac0: ("set_chain_freq_matrix", ["05_freq_voltage"]),
    0x2500c: ("set_chain_freq", ["05_freq_voltage", "04_asic_chain"]),
    0x25b38: ("build_freq_plan", ["05_freq_voltage", "10_config_eeprom"]),
    0x24f98: ("chain_freq_minmax", ["05_freq_voltage"]),
    0x282a4: ("inc_all_chain_freq", ["05_freq_voltage"]),
    0x26ce8: ("set_freq_by_plan", ["05_freq_voltage"]),
    0x12c78: ("parse_strategy", ["10_config_eeprom", "05_freq_voltage"]),
    0x152cc: ("parse_adjust_strategy", ["10_config_eeprom"]),
    0x513a0: ("mode_init", ["10_config_eeprom", "13_os_service"]),
    0x55518: ("freq_voltage_main_init", ["05_freq_voltage", "02_power_psu"]),
    0x30750: ("api_get_miner_freq_adjust_info", ["09_web_api", "05_freq_voltage"]),
    0x1c934: ("eeprom_get_max_freq", ["10_config_eeprom", "05_freq_voltage"]),
    0x1d4fc: ("eeprom_get_sweep_result", ["10_config_eeprom", "05_freq_voltage"]),
    0x246cc: ("set_voltage", ["02_power_psu"]),
    0x4e344: ("power_get_max_voltage_eeprom", ["02_power_psu", "10_config_eeprom"]),
    0x17004: ("fan_pid_init", ["06_thermal_fan"]),
    0x16de0: ("fan_control", ["06_thermal_fan"]),
    0x18aa0: ("read_max_chip_temp", ["06_thermal_fan"]),
    0x18a2c: ("read_board_temp", ["06_thermal_fan"]),
}


def is_noise(s):
    if len(s) < 4:
        return True
    for r in NOISE_RE:
        if r.search(s):
            return True
    return False


def load_program(base, program):
    fdir = os.path.join(base, program)
    functions = []
    with open(os.path.join(fdir, "functions.csv"), encoding="utf-8", errors="replace") as fh:
        for r in csv.DictReader(fh):
            r["program"] = program
            functions.append(r)
    strings = {}
    with open(os.path.join(fdir, "strings.csv"), encoding="utf-8", errors="replace") as fh:
        for r in csv.DictReader(fh):
            if not r.get("func_addr"):
                continue
            s = r["string"]
            if is_noise(s):
                continue
            strings.setdefault(r["func_addr"], set()).add(s[:240])
    calls = {}
    cpath = os.path.join(fdir, "calls.csv")
    if os.path.exists(cpath):
        with open(cpath, encoding="utf-8", errors="replace") as fh:
            for r in csv.DictReader(fh):
                calls.setdefault(r["caller_addr"], set()).add(r["callee_name"])
    return functions, strings, calls


def score_function(ss):
    scores = {}
    evidence = {}
    for block, w, rx in RULES:
        hits = [s for s in ss if rx.search(s)]
        if hits:
            scores[block] = scores.get(block, 0) + w
            evidence[block] = hits[:6]
    return scores, evidence


def pick_labels(scores, seed_labels=None):
    if not scores:
        return list(seed_labels or [])
    ranked = sorted(scores.items(), key=lambda x: -x[1])
    top = ranked[0][1]
    if seed_labels:
        labels = list(seed_labels)
        for b, sc in ranked:
            if b not in labels and sc >= 8 and sc >= top * 0.8:
                labels.append(b)
        return labels[:4]
    return [b for b, sc in ranked[:3] if sc >= 3 and sc >= top * 0.5]


def find_cfile(program_dir, addr, name):
    h = format(int(addr, 16), "x")
    d = os.path.join(program_dir, "decompiled")
    if not os.path.isdir(d):
        return None
    for f in os.listdir(d):
        if f.startswith(h + "_") and f.endswith(".c"):
            return os.path.join(d, f)
    return None


def link_or_copy(src, dst):
    os.makedirs(os.path.dirname(dst), exist_ok=True)
    if os.path.exists(dst):
        return
    try:
        os.link(src, dst)
    except OSError:
        shutil.copy2(src, dst)


def main():
    fw = sys.argv[1] if len(sys.argv) > 1 else "S19"
    fwdir = os.path.join(FIRMWARE, fw)
    rev = os.path.join(fwdir, "analysis", "reverse")
    out = os.path.join(OUT_ROOT, fw)
    os.makedirs(out, exist_ok=True)

    corpora = []
    bm = os.path.join(rev, "full", "bmminer")
    if os.path.isdir(bm):
        corpora.append((os.path.dirname(bm), "bmminer"))
    aux = os.path.join(rev, "full_aux")
    if os.path.isdir(aux):
        for p in sorted(os.listdir(aux)):
            if os.path.isdir(os.path.join(aux, p)):
                corpora.append((aux, p))
    mod = os.path.join(rev, "full_modules")
    if not os.path.isdir(mod):
        mod = os.path.join(FIRMWARE, "S19", "analysis", "reverse", "full_modules")
    if os.path.isdir(mod):
        for p in sorted(os.listdir(mod)):
            if os.path.isdir(os.path.join(mod, p)):
                corpora.append((mod, p))

    seeds = {}
    if fw == "S19":
        old_index = os.path.join(fwdir, "FunctionModel", "index.csv")
        if os.path.exists(old_index):
            blockmap = {"power": "02_power_psu", "pic": "03_pic_ctrl", "asic": "04_asic_chain"}
            with open(old_index, encoding="utf-8") as fh:
                for r in csv.DictReader(fh):
                    seeds[int(r["address"], 16)] = (r["inferred_name"], [blockmap[r["category"]]])
    else:
        seeds = S21_SEEDS

    all_rows = []
    per_block = {}
    stats = []
    for base, prog in corpora:
        functions, strings, calls = load_program(base, prog)
        stats.append((prog, len(functions)))
        for f in functions:
            addr = f["addr"]
            try:
                ai = int(addr, 16)
            except ValueError:
                continue
            is_thunk = (f.get("is_thunk") == "true") or (f.get("is_external") == "true")
            ss = set() if is_thunk else strings.get(addr, set())
            scores, evidence = ({}, {}) if is_thunk else score_function(ss)
            callees = calls.get(addr, set())
            if any(c.startswith(("pthread_create", "pthread_detach", "pthread_join")) for c in callees):
                scores["13_os_service"] = max(scores.get("13_os_service", 0), 4)
            if any(c in ("socket", "connect", "recv", "send", "recvfrom", "sendto", "getaddrinfo") for c in callees):
                scores["08_network"] = max(scores.get("08_network", 0), 2)
            if any(c.startswith(("RSA_", "SHA256_", "SHA1_", "EVP_", "X509_")) for c in callees):
                scores["12_crypto"] = max(scores.get("12_crypto", 0), 4)
            name = f["name"]
            seed_labels = []
            seeded = 0
            if prog == "bmminer" and ai in seeds:
                nm, labs = seeds[ai]
                name = nm
                seed_labels = labs
                seeded = 1
            labels = ["00_imports_thunks"] if is_thunk else pick_labels(scores, seed_labels)
            if not is_thunk and prog in AUX_DEFAULT and not labels:
                labels = [AUX_DEFAULT[prog]]
            if not labels:
                labels = ["99_unclassified"]
            cf = find_cfile(os.path.join(base, prog), addr, name)
            row = {
                "program": prog, "address": "0x" + format(ai, "x"), "name": name,
                "size": f["size"], "labels": ";".join(labels), "seed": seeded,
                "score": max(scores.values()) if scores else 0,
                "evidence": " | ".join((evidence.get(labels[0]) or [])[:4]),
                "source": os.path.relpath(cf, OUT_ROOT).replace(os.sep, "/") if cf else "",
            }
            all_rows.append(row)
            for b in labels:
                per_block.setdefault(b, []).append(row)

    all_rows.sort(key=lambda r: (r["program"], int(r["address"], 16)))
    with open(os.path.join(out, "index.csv"), "w", newline="", encoding="utf-8") as fh:
        w = csv.DictWriter(fh, fieldnames=["program", "address", "name", "size", "labels", "seed", "score", "evidence", "source"])
        w.writeheader()
        w.writerows(all_rows)

    for block, title, desc in BLOCKS:
        rows = per_block.get(block, [])
        bdir = os.path.join(out, block)
        os.makedirs(bdir, exist_ok=True)
        with open(os.path.join(bdir, "functions.csv"), "w", newline="", encoding="utf-8") as fh:
            w = csv.DictWriter(fh, fieldnames=["program", "address", "name", "size", "labels", "seed", "score", "evidence", "source"])
            w.writeheader()
            for r in sorted(rows, key=lambda x: (-int(x["seed"]), -int(x["score"]), -int(x["size"]))):
                w.writerow(r)
        # link decompiled files
        for r in rows:
            if not r["source"]:
                continue
            src = os.path.join(OUT_ROOT, r["source"].replace("/", os.sep))
            if os.path.exists(src):
                link_or_copy(src, os.path.join(bdir, "decompiled", r["program"], os.path.basename(src)))
        # README
        top = sorted(rows, key=lambda x: (-int(x["seed"]), -int(x["score"]), -int(x["size"])))[:20]
        lines = ["# %s %s" % (block, title), "", desc, "",
                 "| 项 | 值 |", "|---|---|",
                 "| 函数数（多标签） | %d |" % len(rows),
                 "| 程序 | %s |" % ", ".join(sorted({r["program"] for r in rows})),
                 "", "## 主要函数", "",
                 "| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |", "|---|---|---|---:|---:|---|"]
        for r in top:
            ev = r["evidence"].replace("|", "/")[:90]
            lines.append("| %s | %s | %s | %s | %s | %s |" % (r["program"], r["address"], r["name"], r["size"], r["score"], ev))
        lines += ["", "## 说明", "",
                  "- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。",
                  "- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。",
                  "- 函数清单与字符串证据见同目录 `functions.csv`。", ""]
        with open(os.path.join(bdir, "README.md"), "w", encoding="utf-8") as fh:
            fh.write("\n".join(lines))

    # attach WebUI and init scripts
    web = os.path.join(rev, "webui")
    if os.path.isdir(web):
        dst = os.path.join(out, "09_web_api", "webui")
        if os.path.isdir(dst):
            shutil.rmtree(dst)
        shutil.copytree(web, dst)
    init_src = os.path.join(web, "init_scripts") if os.path.isdir(web) else None
    if init_src and os.path.isdir(init_src):
        dst = os.path.join(out, "01_boot_upgrade", "init_scripts")
        if os.path.isdir(dst):
            shutil.rmtree(dst)
        shutil.copytree(init_src, dst)

    # top README
    total = len(all_rows)
    lines = ["# %s 全量功能模型（Zynq7007 水冷机）" % fw, "",
             "> 范围：%s 的 Zynq 侧固件；S21 的 AML 风冷镜像不纳入。" % fw, "",
             "## 语料统计", "", "| 程序 | 函数数 |", "|---|---:|"]
    for p, n in stats:
        lines.append("| %s | %d |" % (p, n))
    lines += ["| **合计** | **%d** |" % total, "",
              "## 功能块", "", "| 块 | 名称 | 函数数 |", "|---|---|---:|"]
    for b, t, d in BLOCKS:
        lines.append("| %s | %s | %d |" % (b, t, len(per_block.get(b, []))))
    lines += ["", "## 目录", "",
              "- `index.csv`：全部函数（程序/地址/名称/大小/标签/证据/源文件）",
              "- `<块>/functions.csv`：该块函数子集",
              "- `<块>/decompiled/<程序>/`：反编译 C 文件（硬链接）",
              "- `<块>/README.md`：块说明与主要函数",
              "- `09_web_api/webui/`：CGI 脚本、shell 函数索引、端点表",
              "- `01_boot_upgrade/init_scripts/`：启动脚本",
              "", "## 方法", "",
              "- 用 Ghidra 12.2 对每个程序做完整分析，导出全部函数（含 thunk/外部符号清单）。",
              "- 真实函数逐个反编译为 C；thunk/PLT 保留在清单中但不重复导出。",
              "- 功能块由字符串关键词规则 + 人工种子（已知关键函数）多标签判定。",
              "- 分类是启发式的，完整代码始终以 `index.csv` 和反编译目录为准。", ""]
    with open(os.path.join(out, "README.md"), "w", encoding="utf-8") as fh:
        fh.write("\n".join(lines))
    print("%s: functions=%d blocks=%s" % (fw, total, {b: len(per_block.get(b, [])) for b, _, _ in BLOCKS}))


if __name__ == "__main__":
    main()
