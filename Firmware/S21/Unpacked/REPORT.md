# Antminer S21e Hyd 固件（FR-1.42）解包报告

> 目标文件：`FR-1.42(251016-S21e Hyd.).bmu`
> 大小：31,518,194 字节（0x1E0EEF2）
> SHA-256：`4c8343588ec93ce2395f0ea2fd2cb1d40d2cb88ff222d4d9f91f556a443ba660`
> MD5：`684efb616a07f67730a423c773a5881c`

---

## 1. 结论速览

这个包和 S19 的**单层 `.bmu` 不同**，是一个 **“双控制板”外层容器**，内部装了两套
互相独立的固件：

| 外层条目 | 平台标识 | 机型 | 内容 |
|---|---|---|---|
| 0 | `zynq7007_HHB70801` | Antminer S21e Hyd. | Zynq-7000 控制板固件，**S19 式签名容器**，7 个部件 |
| 1 | `AMLCtrl_H6HB70801` | Antminer S21e Hyd. | Amlogic 控制板固件，**Android boot image**，单部件 |

也就是说：同一份 S21e Hyd 升级包同时适用于 Zynq 控制板和 AML 控制板，设备按自身
平台选择对应镜像。

Zynq 镜像的签名链**完整可验证**（S21 的 root key → miner.pem → 7/7 部件），
解包后得到内核、两套根文件系统、BOOT.bin 等全部内容；AML 镜像是加密/私有压缩的
Android 启动镜像，目前只拆到 kernel/ramdisk 原始块，尚未解出文件系统。

---

## 2. 外层容器

`ABABABAB` 魔数，小端字段：

| 偏移 | 类型 | 值 | 说明 |
|---:|---|---:|---|
| 0x00 | u32 | `0xABABABAB` | 魔数 |
| 0x04 | u32 | 0 | 保留 |
| 0x08 | u32 | 0x24 | 条目表偏移 |
| 0x0C | u32 | 2 | 条目数 |
| 0x10 | u32 | 0xAC | 单条目大小 |
| 0x14 | u32 | 0x4000 | 镜像数据起始偏移 |
| 0x18 | u32 | `0x7CD937DE` | 未知（校验/版本） |
| 0x24 | — | — | 条目 0 |
| 0xD0 | — | — | 条目 1 |

每个条目内含：`update.bmu` 名称、平台串、机型串、镜像偏移、镜像大小。
解析时按“偏移+大小”扫描（两条目的字段位置相差 4 字节，不是完全定长布局）。

| 条目 | 偏移 | 大小 | 结束 |
|---|---:|---:|---:|
| 0（Zynq） | `0x004000` | `0x11541F2` | `0x11581F2` |
| 1（AML） | `0x11581F2` | `0xCB6C00` | `0x1E0EDF2` |
| 尾部 | `0x1E0EDF2` | 256 | 文件末尾 |

> 文件最后 256 字节是外层附加数据（高熵）。用 S19/S21 的 root key 都无法验证为
> RSA 签名，用途待确认。

---

## 3. Zynq 镜像（条目 0）

### 3.1 头部（与 S19 同构，字段有变化）

| 相对偏移 | 内容 | 值 |
|---:|---|---|
| 0x00 | 魔数 | `0x2601`（大端） |
| 0x02 | 构建 ID | `2FB476588C1039D0` |
| 0x0A | 标志 | `0x01FE` |
| 0x0D | 构建日期 | `20251016` |
| 0x16 | 公钥长度 | `0x01C3`（451） |
| 0x18 | `miner.pem` | RSA-2048 公钥 |
| 0x418 | 公钥签名 | 由 root key 签发 |
| 0x518 | 部件表 | 7 项 |
| 0x800 | 部件数据 | 见 §3.3 |
| 末尾 | 部件签名 | 8 × 256 字节 |

### 3.2 签名链（已全部验证）

```
/etc/bitmain.pub（root key，SHA-256 00b72c28…，与 S19 相同）
   └─ 验证 0x418 签名 → miner.pem                      ✔
        └─ 验证 7 × 256 部件签名 → 7 个部件             ✔ 7/7
```

- **root key 与 S19 完全相同**（`/etc/bitmain.pub` 的 SHA-256 前缀均为 `00b72c28…`）。
- 签名算法仍为 RSA-2048 / SHA-256 / PKCS#1 v1.5。

### 3.3 部件表

| # | 部件 | 大小 | 说明 |
|---:|---|---:|---|
| 0 | `BOOT.bin` | 0x2A8C80 | FSBL + PL bitstream + U-Boot |
| 1 | `devicetree.dtb` | 0x1F4E | 8,014 B |
| 2 | `uImage` | 0x3DE8E8 | Linux 内核 |
| 3 | `minerfs.image.gz` | 0x6B4710 | 主根文件系统 |
| 4 | `update.image.gz` | 0x415017 | 升级根文件系统 |
| 5 | `crl.tar.gz` | 0x228 | 吊销列表 |
| 6 | `miner.btm.tar.gz` | 0x3ED | miner.btm |

### 3.4 `BOOT.bin` 拆分

| 段 | 偏移 | 大小 | 特征 |
|---|---:|---:|---|
| FSBL | 0x1700 | 131,088 | ARM 向量表；`Xilinx First Stage Boot Loader` |
| PL bitstream | 0x21E20 | 2,085,472（0x1FD260） | 前导 `BB000000 44002211`，7 系列 |
| U-Boot | 0x21F080 | 564,224（0x89C00） | `U-Boot 2016.07-g4c04e6f-dirty` |
| U-Boot 控制 DTB | 0x28F190 | 8,990 | FDT magic |

> BOOT.bin 内还嵌有第二段 bitstream 前导（`0x27AB88`）和 `system.bit` 字符串，
> 属于 U-Boot 内的 FIT/备份镜像，不是独立分区。

### 3.5 内核

| 字段 | 值 |
|---|---|
| uImage 名称 | `Linux-4.6.0-xilinx-g03c746f7` |
| 版本串 | `Linux version 4.6.0-xilinx-g03c746f7 ...` |
| vmlinux | 11,750,816 B |
| 内核配置 | 114,247 B（IKCONFIG，gzip 压缩） |
| 关键项 | `CONFIG_ARCH_ZYNQ=y`、`SMP=y`、`PREEMPT=y`、`BLK_DEV_INITRD=y` |

与 S19 的 vmlinux 大小、配置大小完全一致，说明 Zynq 侧仍沿用同一套 4.6 内核基线。

### 3.6 根文件系统

| 项 | 主系统 | 升级系统 |
|---|---:|---:|
| ext2 镜像 | 32 MB（32,768 × 1 KiB） | 32 MB |
| inode 数 | 10,016 | 10,016 |
| 文件 / 符号链接 | 399 / 225 | 80 / 187 |
| 解出字节 | 15,728,547 | 8,956,100 |

- 构建时间：`Thu Oct 16 17:27:17 CST 2025`
- 版本文件：`Antminer S21e Hyd.` / `Release`
- 矿机程序：`bmminer` **655,256 B**（S19 为 429,356 B）、`cgminer` 297,676 B、
  `FileParser`、`cgminer-api`
- `bmminer` 支持的机型串：`S21 Pro Hyd.`、`S21 XP Hyd.`、`S21e Hyd.`、`S21e XP Hyd.`，
  板型串 `H6HB70801`
- Web UI 与 S19 同结构，但 CGI 从 22 个增加到 **28 个**，新增：
  `get_adjustment_params`、`pool_protect`、`ulog_en`、`ulog_zh`、`warning`、`T23Hyd_log`

### 3.7 NAND 布局

`update.d/rootfs/etc/init.d/Update.sh` 与 S19 完全一致：

| MTD | 偏移 | 内容 |
|---|---:|---|
| mtd0 | 0x0 / 0x800000 / 0x1000000 | `BOOT.bin`（主 + 2 备份） |
| mtd0 | 0x1A00000 | `devicetree.dtb` |
| mtd0 | 0x2000000 | `uImage` |
| mtd1 | 0x0 | `minerfs.image.gz` |
| mtd3 | 0x0 / 0x100000 | `sigImage`（2 份） |
| mtd5 | 0x0 | `update.image.gz` |

---

## 4. AML 镜像（条目 1）

### 4.1 头部

| 相对偏移 | 内容 | 值 |
|---:|---|---|
| 0x00 | 魔数 | `0x2601` |
| 0x02 | 构建 ID | `2643E757487F797D` |
| 0x0A | 标志 | `0x0102`（与 Zynq 的 `0x01FE` 不同） |
| 0x0D | 构建日期 | `20251016` |
| 0x18 | 公钥 | 独立 RSA-2048 公钥（头部声明 451 B） |
| 0x418 | 公钥签名 | **无法用 S19/S21 root key 验证** |
| 0x518 | 部件表 | 1 项：index=9，size=0xCB6200 |
| 0x800 | 部件 | Android boot image |

- AML 公钥自洽：其部件签名用该公钥可以验证通过（1/1）。
- 但公钥本身没有链接到 S19 或 S21 的 `/etc/bitmain.pub`，也没有链接到
  `/etc/bitmain-adv.pub`。可能使用独立的 AML 根密钥，属于待确认项。

### 4.2 Android boot image

| 字段 | 值 |
|---|---:|
| magic | `ANDROID!` |
| kernel_size | 6,031,360 |
| kernel_addr | `0x01080000` |
| ramdisk_size | 7,264,256 |
| ramdisk_addr | `0x01000000` |
| second_size | 30,720 |
| second_addr | `0x00F00000` |
| tags_addr | `0x100` |
| page_size | 2,048 |
| cmdline | `init=/sbin/init` |
| 头部+负载 | 13,328,384 B |
| 部件内剩余 | 512 B |

### 4.3 负载现状

`kernel.bin`、`ramdisk.bin`、`second.bin` 的起始字节均为高熵数据：

```
kernel.bin   2b 5e f7 90 6b ac 96 75 ...
ramdisk.bin  48 e2 f8 8a c1 f6 75 34 ...
second.bin   36 5f 84 4d f3 2b 35 81 ...
```

不是 gzip / LZ4 / ARM64 Image / cpio 等常见格式，判断为**加密或 Amlogic 私有封装**。
本次只做到按 Android 头切出三段原始负载，文件系统尚未解出。

---

## 5. 解包产物

```
S21/
├─ FR-1.42(251016-S21e Hyd.).bmu
├─ analysis/
│   └─ unpack_s21.py                 外层 + 内层解析、验签、解压、ext2 提取
└─ Unpacked/
    ├─ outer_header.bin              外层头 0x4000
    ├─ manifest.json                 全部偏移/大小/哈希/验签结果
    ├─ REPORT.md
    ├─ zynq/
    │   ├─ image.bmu                 内嵌 Zynq 固件
    │   ├─ header.bin  miner.pem  miner.pem.sig
    │   ├─ BOOT.bin + BOOT.bin.d/{fsbl,bitstream,uboot,uboot_control.dtb}
    │   ├─ devicetree.dtb
    │   ├─ uImage + uImage.d/{zImage,vmlinux.bin,kernel_config.txt}
    │   ├─ minerfs.image.gz + minerfs.d/{ramdisk.ext2,rootfs/}
    │   ├─ update.image.gz + update.d/{ramdisk.ext2,rootfs/}
    │   ├─ crl.tar.gz + crl.d/  miner.btm.tar.gz + miner_btm.d/
    │   └─ signatures.bin
    └─ aml/
        ├─ image.bmu
        ├─ header.bin  miner.pem  miner.pem.sig
        ├─ android_boot.img
        └─ android.d/{kernel.bin,ramdisk.bin,second.bin,header.json}
```

复现：

```bash
cd D:/Document/tempPrj/BITMAIN-S19Hyd-151T-Firmware/Firmware/S21
python -I analysis/unpack_s21.py
```

依赖：Python 3 + pycryptodome；ext2 提取复用 `S19/analysis/extract_ext2.py`。

---

## 6. 与 S19 的主要差异

| 项 | S19 Hydro | S21e Hyd |
|---|---|---|
| 容器 | 单层 `.bmu` | 外层双镜像 + 内层 `.bmu` |
| 控制板 | Zynq7007 | Zynq7007 **或** AMLCtrl |
| root key | `00b72c28…` | 同一把 |
| 构建日期 | 2022-12-17 | 2025-10-16 |
| 内核 | 4.6.0-xilinx | 4.6.0-xilinx（同基线） |
| bmminer | 429,356 B | 655,256 B（支持 4 个 S21 机型） |
| WebUI CGI | 22 | 28 |
| NAND 布局 | 见 S19 报告 | 相同 |

---

## 7. 未解决项

1. **AML 镜像的密钥链**：其公钥未被该 root key 签名，需在 AML 侧或
   U-Boot/安全启动流程中找对应根密钥。
2. **AML kernel/ramdisk 加密格式**：高熵，未识别算法；需要 Amlogic 侧工具或
   在设备上抓取解密后镜像。
3. **外层尾部 256 字节**：用途未确认（可能是外层签名/校验，但不匹配现有密钥）。
4. **外层头 0x18 字段** `0x7CD937DE`：怀疑是 CRC/版本，未验证。
5. AML 镜像 `0x0A=0x0102` 与 Zynq `0x01FE` 的语义差异未确认。

---

## 8. 下一步建议

- 若目标是改 S21e Hyd 的 Zynq 控制板：可直接使用 `zynq/` 下的 rootfs 和 bmminer，
  方法与 S19 相同（Ghidra 导入 + 函数定位）。
- 若目标是 AML 控制板：先解决 §7.2 的加密格式，否则只能做整包替换，无法改文件系统。
- 两套镜像的 NAND 布局相同，说明 AML 方案是“同板型换主控”，升级脚本可复用。
