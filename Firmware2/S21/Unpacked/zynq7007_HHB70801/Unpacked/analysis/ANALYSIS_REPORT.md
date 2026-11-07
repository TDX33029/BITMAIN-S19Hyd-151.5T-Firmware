# S21e Hydro (Zynq7007_HHB70801) 固件函数/功能块全量提取报告

构建: FR-1.42 (2025-10-16, jenkins@nomd-nomd-fwc-bj, gcc 7.2.1 Linaro)

## 一、提取成果总览

| 层 | 内容 | 函数/条目数 | 产物 |
|---|---|---|---|
| Linux 内核 | Image.bin (11.75 MB, vmlinux 二进制) | **56,768 符号 / 28,282 个函数** (kallsyms 全量) | `analysis/kernel/kallsyms.txt` |
| 用户态 | rootfs1+rootfs2 全部 258 个 ELF | **39,024 个导出函数** + 12,672 个导入符号 | `analysis/elf_funcs/` (每二进制一个 .funcs.txt) |
| U-Boot | 459 KB 裸二进制 @0x04000000 | 1,351 个函数入口(push-prologue 启发式) | `analysis/strings/uboot.functions.txt` |
| FSBL | 132 KB 裸二进制 (Thumb) @0x00000000 | 288 个函数入口 | `analysis/strings/fsbl.functions.txt` |
| FPGA | XC7Z007S bitstream (IDCODE 0x03723093) | 完整 PCAP 包走查 (prelude/CRC/FAR/FDRI 520,352 字/DESYNC) | `analysis/bitstream/pcap_report.txt` |
| busybox | 131 个 applet | `analysis/strings/busybox.applets.txt` |
| web UI | 14 页面 + 28 个 CGI 脚本 | `analysis/strings/www.pages.txt` |
| 挖矿程序 | bmminer (429 KB) / cgminer | 功能串分类清单 | `analysis/strings/bmminer.functions.txt` 等 |

## 二、Linux 内核 (Linux-4.6.0-xilinx-g03c746f7)

- kallsyms 完整提取: `analysis/kernel/kallsyms.txt` — 每行 `地址 类型 符号名`,类型 T/t=代码函数, D/d=数据。
- relbase = 0xC0008000 (_text),地址即运行时虚拟地址(未启用加密,全部明文)。
- 前 16 个符号位于 _text 同址(head.S 别名),首个递增符号在 _text+0xF8000。
- 采样确认: `zynq_slcr_*`(平台)、`zynq_efuse_cpu_state`、`zynq_slcr_init_preload_fpga` 等平台函数齐全。
- 内核自带压缩 ramdisk 之外的全部驱动均为内建(11.75MB 体量)。

## 三、引导链 (BootROM → FSBL → U-Boot → kernel)

1. **BootROM 头** (QSPI/NAND @0x800): AA995566/XLNX, 未加密, FSBL 数据在 +0x1700。
2. **FSBL** (132 KB Thumb): 标准 Xilinx FSBL 流程 — 解析分区头("Image Word Len/Partition Header Offset"), CRC 校验("Partition DataChecksum"), **经 PCAP 下载 bitstream**("PCAP Bitstream Download"), 加载 U-Boot。字符串含 Multiboot/Reboot status 支持。
3. **U-Boot 2016.07-g4c04e6f-dirty** (作者标记 zhiqiang.liu@bitmain.com):
   - 默认环境: `bootcmd=run $modeboot`; `nandboot`: kernel@nand0x2000000 → RAM, dtb@0x1a00000, ramdisk@0x2800000, `bootm`
   - **升级通道**: "find upgrade marker!"(mtd0 @0x1B00000 标记) → 从 nand 0x6000000 读 16MB 升级 ramdisk(rootfs2) 启动 → 执行 Update.sh 分发固件
   - **FPGA 运行时加载**: `zynq_validate_bitstream / zynq_load / zynq_loadfs / zynq_dma_transfer` — U-Boot 内嵌的第二段小型 bitstream(BB000000 44002211 包装 + sync @uboot+0x5BB80)经 PCAP 加载(hashboard 初始化)
   - 全套 Xilinx 备用启动模式 (qspiboot/sdboot/norboot/jtagboot/rsa_* 验签启动/DFU)
4. **param_blob** (0x21F1C0, 1728B): ver 1.1.0.0 + 高熵数据(未解)。

## 四、U-Boot 命令与环境

- 启动模式变量: nandboot/nandboot_sd/qspiboot/sdboot/usbboot/norboot/jtagboot + rsa_* 验签变体
- 1,351 个函数入口地址清单见 `analysis/strings/uboot.functions.txt`; 全部字符串见 `uboot.strings.txt` (含命令名/usage/help, 可与函数地址交叉引用)

## 五、用户态功能块 (rootfs1 = minerfs 主系统)

关键二进制(完整清单见 `analysis/elf_funcs/MASTER_INVENTORY.csv`):

| 二进制 | 大小 | 导出函数 | 功能 |
|---|---|---|---|
| usr/bin/bmminer | 429 KB | 见 funcs 文件 | 挖矿主程序: Stratum 池协议、频率/电压调谐(183 个相关串)、链/芯片管理(UART 经 FPGA)、水冷监测(水温/水流/反向流告警)、zlog 日志、31 个 `api_miner_*` API 命令 |
| usr/bin/cgminer | 297 KB | | 兼容 cgminer 接口/监控 |
| bin/busybox | 384 KB | 131 applets | 基础命令 |
| usr/bin/FileParser | 24 KB | | BMU 解析/验签/拆包 (-f/-s/-p/-x/-n/-q) |
| usr/sbin/update-daemon + updateporc.sh | | | 升级接收链 |
| usr/sbin/lighttpd + www/pages | | 28 CGI | web 管理 UI |
| usr/sbin/dropbear / ntpd / sudo / openssl / jq | | | 系统服务 |
| libcrypto.so.1.1 | 2.0 MB | 4,241 | OpenSSL 1.1 加密库 |
| libc-2.25.so / libstdc++.so.6.0.24 | | 2,126 / 4,015 | glibc 2.25 / GCC 5+ ABI |

### bmminer 功能面(详见 bmminer.functions.txt)
- **API 命令** (31): api_miner_chain_{asic_num,asic_status,eeprom,frequency,hw,nonce,num,rate_array,rate_ideal,rate_real,sn,temp_chip,temp_pcb,temp_pic}, api_miner_{fan_num,fan_speed,id,inited,power_jt,rate_30m,rate_5s,rate_avg,rate_ideal,rate_unit,real_miner_type,version,asic_tpl,info,freq_adjust_info}, api_get_miner_freq_adjust_info, api_miner_fan_speed
- **频率调谐**: --bitmain-freq/--bitmain-voltage/--bitmain-tuning-freq-level/--bitmain-tuning-voltage-floor/--bitmain-high-voltage/--bitmain-voltage-compensate 等 183 个串; 分 basic/fine 两级调谐, 结果写 /config/scanfreqdone
- **水冷**: get_water_permit、水温上下限(25°C 检查)、进出水温差、水流反向告警("please swap the water pipes")
- **硬件访问**: uart%d 经 FPGA FIFO (check_how_many_uart_data_in_fpga/clear_uart_*)、i2c eeprom、PIC 温度

### rootfs2 = update.image.gz (恢复/升级系统)
- BusyBox(412KB, 131 applets 含 dd/gunzip/su) + Update.sh: FileParser -s S19 拆包 → 两级验签(miner.pem) → writeToNand(mtd0/1/3/5) → sigImage 重建
- etc/bitmain.pub + bitmain-adv.pub = 平台根公钥

## 六、FPGA (XC7Z007S)

- 全量 bitstream: prelude(TIMER/WBSTAR/RCRC/BOOTSTS/COR0=0x02003FE5/COR1/IDCODE=0x03723093/MASK/CTL=0x501/WAKEUP) → Type2 FDRI 520,352 字 → CRC(0xF388A8CF) → CMD 0x0A/0x03/0x05 → FAR=0x03BE0000 → CRC(0xE3AD7EA5) → DESYNC
- CTL=0x501: bit0+bit8+bit10 — bit10 与压缩/安全模式相关(待查)
- 完整寄存器写序列见 `analysis/bitstream/pcap_report.txt`

## 七、Ghidra 分析入口

- `analysis/ghidra/uboot.elf` — 已包装 ELF32 ARM, 基址 0x04000000, 直接 File→Import
- `analysis/ghidra/fsbl.elf` — 基址 0x00000000 (OCM, Thumb)
- 内核: `analysis/kernel/Image.bin` 以 Raw Binary 加载, 基址 0xC0008000, ARM32 Thumb/ARM 混合; 函数名对照 `kallsyms.txt` (或用 Ghidra 脚本按 kallsyms 打标签)

## 八、产物文件树

```
analysis/
├── kernel/    Image.bin, zImage.bin, kallsyms.txt (56768 符号)
├── elf_funcs/ MASTER_INVENTORY.csv + 每二进制 .funcs.txt (39024 函数)
├── strings/   uboot.strings/functions, fsbl.strings/functions,
│              bmminer.functions, cgminer.functions, FileParser.strings,
│              busybox.applets (131), www.pages (14+28)
├── bitstream/ pcap_report.txt
└── ghidra/    uboot.elf, fsbl.elf (Ghidra 可加载)
```

## 九、未解项

- miner.btm (2 KB, 高熵) — 用途/加密待解 (S19 同款)
- param_blob 1728 B 高熵数据
- crl 二进制格式(证书吊销列表, 有 crl.sig)
- bmminer 内部函数级逆向(有 Ghidra + 全符号导出表, 可按需深入)
