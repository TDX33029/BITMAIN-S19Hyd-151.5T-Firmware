# Braiins OS 26.10 固件提取报告（S21e XP Hyd 研究基线）

日期：2026-11-08　输出：`BraiinsOS/`

## 1. 固件获取路径（可复现）

Braiins 公开发行索引：`https://downloads.braiins.com/braiins-os/`（HTML，317KB，含全部历史版本直链）
包体直链域：`https://feeds.braiins-os.com/<platform>/firmware_<日期>-<序号>-<git>-<版本>-plus_<arch>.tar`

平台目录（10 个）：`am1-s9` / `am2-s17` / `am3-aml` / `am3-bbb` / `cvitek-bm1-am2` /
`stm32mp15-ii1-am2` / `stm32mp15-ii2-am2` / `stm32mp157c-ii2-bmm1` / `zynq-bm3-am2`（+bcb）

## 2. 已下载并解包（Braiins OS 26.10-plus，2026-10-19, git 46be68fe）

| 平台 | 包 | 结构 |
|---|---|---|
| **zynq-bm3-am2**（S21e XP Hyd 用这个） | `firmware_..._arm_cortex-a9_neon.tar` | rootfs.img=**uImage头+squashfs**、kernel(2.8MB)、**fpga(259KB 比特流)**、uboot(466KB)、nand_env、COMMAND |
| **am3-aml**（对照） | `firmware_..._aarch64_armv8-a.tar` | rootfs.img=**uImage头+gzip+cpio(newc)**、nand_env、COMMAND（无独立 kernel/uboot） |

解包产物：`zynq_rootfs/`（1022 文件）、`aml_rootfs/`（1208 文件），均为 nix store 布局（35/33 包，
busybox 1.37 musl armv7l、dropbear 2026.91、boser、braa、fwtool、mtd-utils）。

S21e XP Hyd = Bitmain 内部代号 **U3S21EXPH**（3U 860T / 2U 430T），S21 水冷家族控制板 = **Zynq**。

## 2.5 补充下载：S21 Hyd 安装套件（transitional，股票→BOS）

`braiins-os_zynq-bm3-am2_ssh_2026-10-19-0-46be68fe-26.10-plus.tar.gz`（27.9MB）→ `zynq_install/firmware/`
内容：`install.sh`（22KB 完整安装逻辑）、`common.sh`（NAND 布局常量）、`uImage.itb`（FIT 内核镜像）、
`system.bit.gz`（FPGA 比特流）、`kernel`、`rootfs.img`、`miner_cfg.bin/.config`、
`nandwrite/nanddump/flash_erase/fw_setenv/ubidetach`（NAND 工具链）、`bos-tools`

**S21 Hyd. 支持已验证**：解壳 bosminer 中有显示名 `Antminer S21 Hyd.`、代号 `S21Hydro`，
水冷家族全在：S21Hydro / S21PlusHydro(Hv) / S21eHydro / S21XPHydro(Hv)，传感器拓扑 WaterInlet/WaterOutlet/PsuSensor。

## 3.1 NAND 分区图（Zynq 平台权威布局，出自 common.sh）

| 偏移 | 内容 |
|---|---|
| 0x1880000 / 0x18a0000 | miner_cfg（MAC/hwid/network，冗余双份，各 0x20000） |
| 0x2000000 | BOS U-Boot FIT（覆盖写入；旧版在 uboot+0x700000，LEDE 兼容位） |
| 0x5300000 (len 0x800000) | **股票固件备份**（U-Boot recover_to_stock 用它回滚） |
| 0x7000000 | BOS kernel |
| 0x7800000 | BOS squashfs rootfs（mkimage ramdisk） |
| 0xB410000 | RO env tar（股票配置+工厂配置） |
| 0xB810000 (max 10.4MB) | post-install tar |
| 0xC200000 | nand_env |
| 0xC300000 | RW flags（恢复标志 INSTALLED/FIRST_BOOT） |
| fpga1+fpga2 | FPGA 比特流（偏移在 install.sh 内） |

## 3.2 两阶段安装 + 自动恢复设计（install.sh 头注释，原文语义）

- **Stage 1（安全，股票仍可启动）**：停股票守护进程 → 备份股票 uImage 裸镜像到 0x5300000 → 写比特流到
  fpga1+fpga2 → 写 miner_cfg → 写内核 FIT + squashfs rootfs → 股票/工厂配置写入 env tar 区 →
  post-install 包、nand_env 备份、INSTALLED 恢复标志；overlay 区留空（首次 BOS 启动时 UBI 格式化）
- **Stage 2（不可回退点，bos-tools daemonize 保活）**：BOS U-Boot FIT 写到 0x2000000 覆盖股票 uImage →
  写 BOS 环境 → 重启
- **首启失败自动回滚**：恢复标志停留 FIRST_BOOT → BOS U-Boot 用 0x5300000 备份恢复股票 uImage 并擦除
  BOS（mtd1 股票 ramfs 全程未动）→ 机器回到股票固件，仅需重装 BOS
- 注释明确 "same recover-to-stock semantics as AML" —— AML 平台同样机制

## 4. 关键发现

### 3.1 刷写流程完全公开（COMMAND 脚本）
- `UPGRADE_FW_REQUIRE="22.08-plus"`：跨大版本有门槛，per-partes 升级逐级过渡
- NAND 布局：block size 0x20000，rootfs 分区 72MiB（AML），NAND_BLOCK_COUNT=320
- `nand_env` = 要写入的 U-Boot 环境变量（NAND 启动配置）
- 降级限制：只能在大版本内降级，跨版本需 factory reset

### 3.2 矿机守护进程（金矿）
`/nix/store/...-bosminer-plus-tuner.../bin/bosminer-plus-tuner`（10.9MB，**UPX 加壳**，两个平台哈希相同 → 平台无关，运行时探测硬件）
UPX 解壳后（23.8MB）字符串还原出：
- **型号表**：`S21eHydro / S21XPHydro(Hv) / S21PlusHydro(Hv) / S19eXPHydro / S19XPPlusHydro / T19ProHydro / U3S21EXPH` 等
- **控制板驱动源码路径**：`bosminer/bosminer-am2-s17/src/hardware/antminer/controlboard/{zynq,cvitek,bbb,aml}.rs` —— 一个二进制带全部 4 种控制板驱动
- EEPROM 解析器：`x19_J EEPROM parser`、`x21_aes EEPROM parser`
- 传感器拓扑：`WaterInlet / WaterOutlet / PsuSensor`（水冷温度体系）
- 测试板定义：`TestBoard1362_1x1 / Bm1362_4x1 / MiniBMM100/101`
- nix 构建溯源：rev `46be68fe60bbbd4e45148f8073dca1d0a9f461cb`

### 3.3 与你们 S19 Hydro 基线的对接点
- ZYNQ 包结构与你们 `Firmware/Unpacked/BOOT.bin.d/` 同源（fsbl/bitstream/uboot 体系）
- `fpga` 比特流可直接对比 S19 Hydro 的 bitstream.bin（hash board 配置逻辑差异）
- `COMMAND`+`nand_env` 就是 NAND 分区布局的权威文档

## 4. 工具链（本次搭建，可复用）
- `extract_cpio.py` — cpio newc 提取器（Python）
- `sqpkg/usr/bin/unsquashfs.exe` — msys2 squashfs-tools 4.7.5（需 msys-lzo2-2.dll，已就位）
- `upx/upx-5.0.2-win64/` — UPX 解壳

## 5. 待办研究方向
1. 从解壳的 bosminer 提取 S21eHydro 的调温/调频 profile（温度阈值、电压域、芯片时序）
2. BOS zynq rootfs ↔ 股票 S19 Hydro rootfs 逐目录 diff（找 Bitmain 闭源组件 vs 开源组件边界）
3. `fpga` 比特流与 S19 Hydro bitstream 的寄存器级对比
4. `nand_env` 解析 → 完整 NAND 分区表 → 制作 eMMC/NAND 全盘备份模板
5. 索引页 317KB 含全部历史版本 SHA-256，可作为固件库完整性数据库
