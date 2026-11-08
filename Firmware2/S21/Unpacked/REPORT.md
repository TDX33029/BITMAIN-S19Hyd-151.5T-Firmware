# Antminer S21e Hydro 固件解包报告 (BMU: FR-1.42(251016-S21e Hyd.).bmu)

**源文件**: FR-1.42(251016-S21e Hyd.).bmu — 31,518,194 B
**SHA-256**: `4c8343588ec93ce2395f0ea2fd2cb1d40d2cb88ff222d4d9f91f556a443ba660`

## 结论摘要

- 外层是新式 Bitmain 多芯片升级容器(魔数 `AB AB AB AB`):**2 个条目,两颗主控芯片**,每条目 = {flags, "update.bmu", 芯片名, 机型, offset, size},条目 172 B。
- **主控 #1: `zynq7007_HHB70801`** — Xilinx **XC7Z007S**(bitstream IDCODE 0x03723093),与 S19 Hydro 同架构同构建体系(同为 Linux-4.6.0-xilinx,内核/ramdisk 结构一致,U-Boot 2016.07)。
- **主控 #2: `AMLCtrl_H6HB70801`** — **Amlogic 方案**控制器(ANDROID! bootimg + AMLSECU! 安全容器)。**内容全量加密**(kernel/ramdisk/second 均为高熵密文,密钥在 SoC eFuse 中,离线不可解),仅能结构化解包。
- 机型证据链: rootfs `/etc/subtype` = `zynq7007_HHB70801`;`/etc/topol.conf` machine = **H6HB70801**、`"processor": "ZYNQ7007"`、电源 **APW11**、ASIC **BM1370** ×3 链×85 颗(17 域×5)。
- 两个子固件各自是独立的 BMU 包(魔数 2601,各有自己的 RSA-2048 公钥与签名,内头含日期 20251016)。

## 外层容器布局

| 偏移 | 大小 | 内容 |
|---|---|---|
| 0x000000 | 0x24 | 容器头: `ABABABAB`, 条目表@0x24(2 × 172 B), @0x18 CRC |
| 0x024 (entry0) | 0xAC | flags=0x1211000A, "update.bmu", chip=`zynq7007_HHB70801`, model="Antminer S21e Hyd.", **off=0x4000, size=0x11541F2** |
| 0x0D0 (entry1) | 0xAC | 同上, chip=`AMLCtrl_H6HB70801`, **off=0x11581F2, size=0xCB6C00** |
| 0x004000-0x11581F2 | 18,170,354 B | Zynq 子固件 (update.bmu) |
| 0x11581F2-0x1E0EDF2 | 13,331,456 B | AML 子固件 (update.bmu) |

## 子固件 A: zynq7007_HHB70801 (Zynq XC7Z007S)

结构与 S19 Hydro 完全同构(同样的 8 条目分区表与 id 语义,链条闭合到尾部 2048 B RSA 签名):

| 文件 | 偏移(子固件内) | 大小 | 内容 |
|---|---|---|---|
| header.bin | 0x0 | 512 B | `2601` + 8B nonce + `01FE` + 日期"20251016" + 公钥长度 451 |
| miner_pubkey.pem | 0x18 | 451 B | RSA-2048 公钥 (与 S19 的不同) |
| sig_top.bin | 0x418 | 256 B | RSA-2048 签名 |
| section_table.bin | 0x518 | 40 B | 8 × {u8 id, u32 BE size}: id0=0x2A8C80(boot区) / id1=0x1F4E(DTB#2) / id2=kernel / id3=ramdisk1 / id4=ramdisk2 / id5=0x228(crl) / id6=0x3ED(miner_btm) / id7=0(标记) |
| bootimg_header.bin | 0x800 | 512 B | Zynq BootROM 头, FSBL@+0x1700, 未加密 |
| fsbl.bin | 0x1F00 | 132,912 B | FSBL + 配置块 (SD0 0xE0100000/100MHz 等) |
| bitstream_top.bin | 0x22630 | 2,083,696 B | **XC7Z007S 全量 bitstream** (IDCODE 0x03723093, FDRI 520,352 字, DESYNC@0x21EB54) |
| param_blob.bin | 0x21F1C0 | 1,728 B | ver 1.1.0.0 + 高熵 (同 S19) |
| uboot.bin | 0x21F880 | 459,024 B | **U-Boot 2016.07-g4c04e6f-dirty**, 基址 0x04000000, 内嵌小型 bitstream (sync@0x27B400) |
| dtb1.dtb | 0x28F990 | 105,200 B* | FDT#1 totalsize=8990, `xlnx,zynq-microzed` |
| dtb2.dtb | 0x2A9480 | 8,014 B | FDT#2, `xlnx,zynq-7000`, UART1 console + GEM0 (内核用) |
| uImage_kernel.img | 0x2AB3CE | 4,057,320 B | **Linux-4.6.0-xilinx-g03c746f7** (未压缩 ARM32, load 0x8000; 比 S19 的多 8 B) |
| uImage_ramdisk1.img | 0x689CB6 | 7,030,544 B | ramdisk#1 gzip → 32 MB ext2 → **rootfs1/** (398 文件, 15.7 MB) |
| uImage_ramdisk2.img | 0xD3E3C6 | 4,280,343 B | ramdisk#2 gzip → 32 MB ext2 → **rootfs2/** (79 文件) |
| crl.tar.gz | 0x11533DD | 552 B | crl + crl.sig (大小与 S19 完全相同) |
| miner_btm.tar.gz | 0x1153605 | 1,005 B | miner.btm + sig (大小与 S19 完全相同) |
| sig_bottom.bin | 0x11539F2 | 2,048 B | RSA-2048 签名尾部 |

\* dtb1.dtb 含填充,实际 FDT 8,990 B。

### rootfs1 要点
- 同 S19 的完整 Antminer 系统 (busybox/glibc 2.25/openssl 1.1/lighttpd+www/dropbear/bmminer+cgminer)
- `etc/topol.conf`: machine **H6HB70801**, sw 0.1, power_target 5270 W, jt_target 15.00
- ASIC **BM1370**: 128 core + 2040 small core (16/core), 4 域; 链: **3 链 × 85 颗** (17 域 × 5)
- 电源 **APW11** (i2c 0x10, gpio 907); eeprom AT24C02D; 拓扑中**无 PIC** 条目 (与 S19 不同)
- bmminer 内置机型族: H6HB70501 / 70601 / 70602 / **70801** / 70802
- `usr/sbin/updateporc.sh` 揭示升级流程: FileParser(bitmain.pub 验签) → 版本防回滚 (fw_version vs isolate_time=20251015) → 写入 **UBIFS (mtd6, ubi1_0)** → `flash_erase /dev/mtd0 0x1B00000` 打标记, 重启后生效
- `etc/subtype` = `zynq7007_HHB70801` (即外层容器按芯片分发的键)

## 子固件 B: AMLCtrl_H6HB70801 (Amlogic 方案)

整个子固件 = **一个 Android bootimg** (页大小 2048) + BMU 包装:

| 文件 | 偏移 | 大小 | 内容 |
|---|---|---|---|
| header.bin / pubkey / sig / table | 0x0-0x540 | — | 同款 BMU 头 (公钥与 Zynq 侧不同), 40 B 表内容待解 (crc 样值 0x0FF30341/0x208ED760 + count=1) |
| boot.img | 0x800 | 13,329,408 B | 完整 Android bootimg (cmdline `init=/sbin/init`) |
| amlsecu_desc.bin | 0xC00 | 1,024 B | **AMLSECU!** 容器: ver 0x905, **3 条目**, 时间戳 2025101618113324; 描述符 start 链 0x800→0x5C1000→0xCAE800 与 kernel/ramdisk/second 精确对应; 每条目带同一 32 B 哈希 `5dc75d64…25e8` |
| kernel.enc | 0x1000 | 6,031,360 B | **加密**内核 (load 0x01080000) |
| ramdisk.enc | 0x5C1800 | 7,264,256 B | **加密** ramdisk (load 0x01000000) |
| second.enc | 0xCAF000 | 30,720 B | **加密** second (0x00F00000; 疑为 DTB) |

- **加密状态**: 三个 blob 均无任何可识别魔数/字符串 (高熵), Amlogic 安全启动 (AVB/AMLSECU) 用 eFuse 密钥加密, 离线不可解。
- **SoC 具体型号无法从密文确认**; 由 bootimg 结构 (kernel 0x01080000/ramdisk 0x01000000/second 0x00F00000, Amlogic 经典地址) + "AMLCtrl" 命名推断为 Amlogic S905 系/AXG 系控制器方案。
- bootimg 头 name 字段为空, 无明文 DTB/字符串可参考。

## 两颗主控的分工 (已由更新链证据确认)

- **Zynq XC7Z007S** = 水冷主控板 (HHB70801): bmminer 挖矿、算力板 UART(经 FPGA)、I2C、水温/水流监测、web/升级。水冷监控(bmminer 内 water flow/水温逻辑)全在这颗上。
- **AMLCtrl (Amlogic)** = **不是水冷机的部件**: 水冷机的完整更新链 (updateporc.sh → 恢复系统 rootfs2/etc/init.d/Update.sh → writeToNand) 只拆分/写入 Zynq 侧文件 (BOOT.bin/dtb/uImage/minerfs/update.image.gz/crl/miner.btm → mtd0/1/3/5), **从不写、从不推送、从不引用 AML 条目**; Zynq 侧所有二进制/脚本中无任何 AML 引用。
- 板号佐证: 水冷 Zynq 板 = `HHB70801` (与 /etc/subtype 一致), AML 条目 = `AMLCtrl_H6HB70801`, 属 **H6HB 族** (bmminer 内置族谱 H6HB70501/70601/70602/70801/70802); S19 代 bmminer 族谱为 HHB28601/28602。H6HB 族 = S21 代整机家族 (含风冷型号), 风冷 S21e 的控制板即 AMLCtrl 方案。
- 外层容器是**发布包式**设计: 同一 release 把所有主控板固件打进一个容器, 各机型取自己的条目。水冷机升级时 AML 条目为惰性载荷 (条目 model 字段 "Antminer S21e Hyd." 是 release 元数据, 被构建工具复制到每个条目)。
- 佐证: S19 Hydro 固件 (同款水冷控制板家族, 2022) 为纯单芯片 BMU, 无 AML 成分; 零售渠道水冷主控板 (C59/C89) 一个 SKU 覆盖 S19 Hydro → S23 Hydro。

## 校验值

| 文件 | SHA-256 (前16) |
|---|---|
| 整包 FR-1.42(251016-S21e Hyd.).bmu | `4c8343588ec93ce2` |
| zynq 子固件 update.bmu | `2c63387f2d5980f6` |
| AML 子固件 update.bmu | `8e43272e96d49d35` |
| zynq/header.bin | `e606c9894033402b` |
| zynq/miner_pubkey.pem | `2dab0504d7c2f083` |
| zynq/sig_top.bin | `7b4df8873c09a219` |
| zynq/section_table.bin | `1d07277e1e2748d0` |
| zynq/bootimg_header.bin | `271cb17727e60a20` |
| zynq/fsbl.bin | `872a7a8333e31cac` |
| zynq/bitstream_top.bin | `22794c531117c50a` |
| zynq/param_blob.bin | `4e704ee01572788d` |
| zynq/uboot.bin | `fbbdc0edd62b7b71` |
| zynq/dtb1.dtb | `883bbd31126094a2` |
| zynq/dtb2.dtb | `47e56969ce80ae9b` |
| zynq/uImage_kernel.img | `01b7afef7dfd5d5d` |
| zynq/uImage_ramdisk1.img | `9adc5f6f0f466831` |
| zynq/uImage_ramdisk2.img | `17bc2303b274f656` |
| zynq/crl.tar.gz | `ae7e69ea8c7cfe41` |
| zynq/miner_btm.tar.gz | `db8fc594b151db91` |
| zynq/sig_bottom.bin | `4147e41b43fe028a` |
| zynq/ramdisk1.img | `83e11b10178b6c8d` |
| zynq/ramdisk2.img | `491ad68fef50726c` |
| aml/bootimg_header_page.bin | `d7018b70ed636257` |
| aml/amlsecu_desc.bin | `392ec2eae949f4a2` |
| aml/kernel.enc | `6dd8f871c55987c4` |
| aml/ramdisk.enc | `7345048d184eec37` |
| aml/second.enc | `aaf9c452ee1910e5` |

## 解包目录结构

```
Unpacked/
├── outer_manifest.json                  ← 外层 2 条目表
├── zynq7007_HHB70801/
│   ├── update.bmu                       ← 原始子固件
│   └── Unpacked/                        ← 全部分区 + manifest.json + REPORT 同款布局
│       ├── rootfs1/ (398 文件) rootfs2/ (79 文件) + .listing.txt
│       └── crl.d/ miner_btm.d/ dtb*.dts.txt
└── AMLCtrl_H6HB70801/
    ├── update.bmu
    └── Unpacked/                        ← bootimg 结构化解包 + manifest.json
        ├── boot.img / amlsecu_desc.bin
        └── kernel.enc / ramdisk.enc / second.enc (加密)
```
