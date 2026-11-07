#!/usr/bin/env python3
"""Generate ANALYSIS_REPORT.md for S19 Hydro Zynq firmware."""
import os, re

UNP = r"D:\Document\tempPrj\BITMAIN-S19Hyd-151T-Firmware\Firmware2\S19\Unpacked"
A = os.path.join(UNP, "analysis")

ksyms = open(os.path.join(A, "kernel/kallsyms.txt"), encoding="utf-8").read().splitlines()
t_cnt = sum(1 for l in ksyms if re.match(r"^[0-9a-f]{8} [tTwW] ", l))
inv = open(os.path.join(A, "elf_funcs/MASTER_INVENTORY.csv"), encoding="utf-8").read().splitlines()[1:]
applets = [l.strip() for l in open(os.path.join(A, "strings/busybox.applets.txt"), encoding="utf-8").read().splitlines() if l.strip() and not l.startswith("#")]

rep = f"""# Antminer S19 Hydro 固件函数/功能块全量提取报告 (zynq7007 侧)

构建: Antminer-S19-Hydro-release-202212170935 (内头日期字段为空,平台名 "S19"; 内核构建 jenkins@nomd-nomd-fwc-bj)

## 一、提取成果总览

| 层 | 内容 | 函数/条目数 | 产物 |
|---|---|---|---|
| Linux 内核 | Image.bin (11.75 MB, vmlinux 二进制) | **56,768 符号 / 28,282 个函数** (kallsyms 全量) | `analysis/kernel/kallsyms.txt` |
| 用户态 | rootfs1+rootfs2 全部 253 个 ELF | **38,901 个导出函数** + 12,434 个导入符号 | `analysis/elf_funcs/` |
| U-Boot | 458.7 KB 裸二进制 @0x04000000 | 1,352 个函数入口(启发式) | `analysis/strings/uboot.functions.txt` |
| FSBL | 132.9 KB 裸二进制 (Thumb) @0x00000000 | 307 个函数入口 | `analysis/strings/fsbl.functions.txt` |
| FPGA | XC7Z007S bitstream (IDCODE 0x03723093) | 完整 PCAP 走查 | `analysis/bitstream/pcap_report.txt` |
| busybox | 131 applets | `analysis/strings/busybox.applets.txt` |
| web UI | 14 页面 + 22 个 CGI 脚本 | `analysis/strings/www.pages.txt` |
| 挖矿程序 | bmminer (429 KB) / cgminer (297 KB) | 功能串分类清单 | `analysis/strings/bmminer.functions.txt` 等 |

> 注: S19 与 S21e 的内核为**同一构建**(Image 尺寸相同 0xB34DA0,仅 143 字节差异且全部位于 kallsyms 区域外 —— banner/时间戳/少量数据),kallsyms 符号表逐字节一致。

## 二、引导链 (BootROM → FSBL → U-Boot → kernel)

1. **BootROM 头** (BMU 内 @0x800): AA995566/XLNX, 未加密, FSBL 数据 @+0x1700 (文件 0x1F00)。
2. **FSBL** (Thumb, 307 函数入口): 标准 Xilinx 流程 — 分区头解析/CRC/PCAP bitstream 下载/加载 U-Boot; 支持 Multiboot/Reboot status。
3. **U-Boot 2016.07-gdb5d44e-dirty**:
   - `bootcmd=run $modeboot`; `nandboot`: kernel@nand0x2000000 → RAM, dtb@0x1a00000, ramdisk@0x2800000 → `bootm`
   - "find upgrade marker!" 升级标记 → 引导升级 ramdisk (rootfs2) 执行 Update.sh
   - `zynq_validate_bitstream/zynq_load/zynq_dma_transfer`: U-Boot 内嵌小型 bitstream (BB000000 44002211 包装 + sync @uboot+0x5BB08) 经 PCAP 加载
   - 全套 Xilinx 备用启动模式 (qspiboot/sdboot/norboot/jtagboot + rsa_* 验签启动 + DFU)
4. **param_blob** (0x21F1C0, 1728B): ver 1.1.0.0 + 高熵(未解)。
5. **FSBL 尾部**: 0x1D180 配置块 (SD0 0xE0100000/100MHz) + 0x1DF00-0x22630 18KB 规律表 (0x15DE6+k*0x100000, 待解)。

## 三、Linux 内核

- `analysis/kernel/kallsyms.txt`: `地址 类型 符号名`, relbase 0xC0008000, 56,768 符号 (T/t=函数, 28,282 个)。
- 与 S21e 内核符号完全一致 → 逆向成果可直接互相引用。

## 四、用户态功能块 (rootfs1 = minerfs 主系统, 381 文件)

| 二进制 | 大小 | 导出函数 | 功能 |
|---|---|---|---|
| usr/bin/bmminer | 429 KB | 见 funcs 文件 | 挖矿主程序: Stratum 池、频率/电压调谐、链/芯片管理(UART 经 FPGA)、水冷监测(water flow/水温)、zlog、**25 个 api_miner_* 命令** |
| usr/bin/cgminer | 297 KB | | cgminer 接口/监控 |
| bin/busybox | 384 KB | 131 applets | 基础命令 |
| usr/bin/FileParser | 24 KB | | BMU 解析/验签/拆包 |
| usr/sbin/lighttpd + www/pages | | 22 CGI | web UI |
| usr/bin/openssl / jq / sudo / dropbear / ntpd | | | 系统服务 |
| libcrypto.so.1.1 / libc-2.25 / libstdc++ 6.0.24 | | 4,241 / 2,126 / 4,015 | 基础库 |

### bmminer 功能面(详见 bmminer.functions.txt)
- API (25): api_miner_chain_{{asic_num,asic_status,eeprom,frequency,hw,nonce,num,rate_array,rate_ideal,rate_real,sn,temp_chip,temp_pcb,temp_pic}}, api_miner_{{fan_num,fan_speed,id,inited,rate_30m,rate_5s,rate_avg,rate_ideal,rate_unit,real_miner_type,version}}, api_get_miner_freq_adjust_info
- 频率/电压调谐: --bitmain-freq/--bitmain-voltage/--bitmain-tuning-* 系列
- 水冷: get_water_permit、进出水温、水流反向告警
- 硬件: uart%d 经 FPGA FIFO、i2c eeprom、PIC 温度 ("too hot water temperature pic temp")

### S19 vs S21e bmminer 差异
- S21e 多 6 个 API: api_miner_power_jt / api_miner_asic_tpl(+r=%d,c=%d 坐标查询) / api_get_miner_freq_adjust_info 变体 —— 对应 BM1370 的 4 域结构和 jt_target
- S21e topol.conf 无 PIC 条目; S19 每链 PIC1704

### rootfs2 = update.image.gz (恢复系统)
- Update.sh: FileParser -s S19 → 两级验签 → writeToNand(mtd0/1/3/5) → sigImage 重建 (与 S21e 逐字相同)

## 五、FPGA (XC7Z007S)

- PCAP: prelude(TIMER/WBSTAR/RCRC/BOOTSTS/COR0=0x02003FE5/IDCODE=0x03723093/MASK/CTL=0x501/WAKEUP) → Type2 FDRI 520,352 字 → CRC(0x1C63A84F) → CMD 0x0A/0x03/0x05 → FAR=0x03BE0000 → CRC(0xE3AD7EA5) → DESYNC
- 帧数据 2,081,408 B, 序列与 S21e 完全同构(仅 CRC 值不同 → 位流内容本身有差异, 设备同为 7007S)

## 六、Ghidra 分析入口

- `analysis/ghidra/uboot.elf` — 基址 0x04000000
- `analysis/ghidra/fsbl.elf` — 基址 0x00000000 (OCM, Thumb)
- 内核: Image.bin Raw Binary @0xC0008000 + `kallsyms.txt` 打标签

## 七、产物文件树

```
analysis/
├── kernel/    Image.bin, zImage.bin, kallsyms.txt (56768 符号)
├── elf_funcs/ MASTER_INVENTORY.csv + 逐二进制 .funcs.txt (38901 函数)
├── strings/   uboot/fsbl strings+functions, bmminer.functions,
│              cgminer.functions, FileParser.strings, busybox.applets (131), www.pages (14+22)
├── bitstream/ pcap_report.txt
└── ghidra/    uboot.elf, fsbl.elf
```

## 八、未解项

- miner.btm (2 KB, 高熵) — 推断含 hashboard PIC16F1704 固件, 加密待解
- param_blob 1728 B 高熵
- FSBL 尾部 18KB 规律表 (0x15DE6+k*0x100000, 4608 项) — 用途待定
- crl 二进制格式
"""
out = os.path.join(A, "ANALYSIS_REPORT.md")
with open(out, "w", encoding="utf-8", newline="\n") as f:
    f.write(rep)
print("S19 ANALYSIS_REPORT.md:", len(rep), "chars")
