# Antminer S19 Hydro 固件 (.bmu) 解包报告

> 目标文件：`Antminer-S19-Hydro-release-202212170935.bmu`
> 大小：17,989,023 字节（0x1127D9F）
> SHA-256：`a96ca601e7b9e360cb884401072579d23b74579b5f7578d0dd24b6c02cb04dc8`
> MD5：`cb4fb75d3792531c8802b74cc4292338`

---

## 1. 结论速览

这是一个 **Bitmain S19 系列（Hydro 151T）整机固件升级包**，内部是一个带 RSA-2048/SHA-256
签名链的多部件容器，包含：

| 部件 | 内容 |
|---|---|
| `BOOT.bin` | Zynq-7000 引导镜像：FSBL + PL bitstream + U-Boot 2016.07 |
| `devicetree.dtb` | Linux 设备树（8,014 字节） |
| `uImage` | Linux 4.6.0-xilinx 内核（zImage，解压后 vmlinux 11.75 MB） |
| `minerfs.image.gz` | 主根文件系统：gzip(uImage(ext2 32 MB))，Buildroot 2019.02.7 |
| `update.image.gz` | 升级/恢复用最小根文件系统（含 `FileParser`、`Update.sh`） |
| `crl.tar.gz` | `crl` + `crl.sig`（Bitmain 控制板/矿机吊销列表） |
| `miner.btm.tar.gz` | `miner.btm` + `miner.btm.sig` |

平台特征：**Xilinx Zynq-7000 XC7Z007S**（bitstream IDCODE `0x03723093`），
ARMv7 双核 Cortex-A9，NAND 启动，Linux 4.6.0-xilinx，Buildroot 2019.02.7 / BusyBox 1.29.3。

---

## 2. 容器整体结构

所有偏移均为 `.bmu` 文件内绝对偏移；组件边界已用尾部签名逐一验证。

| 偏移 | 大小 | 组件 | 说明 |
|---:|---:|---|---|
| `0x000000` | 24 | BMU header | 魔数 `0x2601`（大端）+ `"S19"` |
| `0x000018` | 451 | `miner.pem` | RSA-2048 公钥（PEM 文本），被 root key 签名 |
| `0x0001DB` | 0x23D | 零填充 | 对齐到 `0x418` |
| `0x000418` | 256 | `miner.pem.sig` | root key 对 `miner.pem` 的 RSA 签名 |
| `0x000518` | 744 | 部件表 | 7 个部件的长度表（见 §3.2） |
| `0x000800` | 2,788,160 | **`BOOT.bin`** | Zynq 引导镜像（0x2A8B40 字节） |
| `0x02A9340` | 8,014 | **`devicetree.dtb`** | FDT，totalsize 0x1F4E |
| `0x02AB28E` | 4,057,312 | **`uImage`** | Linux 内核（legacy uImage，payload=zImage） |
| `0x0689B6E` | 6,852,621 | **`minerfs.image.gz`** | 主根文件系统（uImage 包装，payload=gzip ext2） |
| `0x0D12B7B` | 4,277,263 | **`update.image.gz`** | 升级根文件系统（同上） |
| `0x1126F8A` | 552 | **`crl.tar.gz`** | gzip tar（crl、crl.sig） |
| `0x11271B2` | 1,005 | **`miner.btm.tar.gz`** | gzip tar（miner.btm、miner.btm.sig） |
| `0x112759F` | 2,048 | 签名区 | 8 × 256 字节 RSA 签名 |

> 注意：`minerfs.image.gz` / `update.image.gz` 是**带 64 字节 uImage 头**的 ramdisk
> （uImage type=3 ramdisk，comp=1 gzip），并非裸 gzip 流。

---

## 3. 头部与签名体系

### 3.1 24 字节 BMU 头（大端）

| 偏移 | 字段 | 值 | 说明 |
|---:|---|---|---|
| 0x00 | magic | `0x2601` | 固定 |
| 0x02 | model | `"S19"` | 机型 |
| 0x06 | u16 | 0 | 保留 |
| 0x08 | u32 | 510 (`0x1FE`) | 推测为内容位图/标志（未完全确认） |
| 0x0C | u32 | 0 | 未知 |
| 0x10 | u32 | 0 | 未知 |
| 0x14 | u32 | 451 (`0x1C3`) | `miner.pem` 长度 |

### 3.2 部件长度表（`0x518`）

格式（逆向自 `FileParser` 行为并逐项核对）：

```
u32 count = 7                     (小端)
然后 count 条: u16 index (小端) + u24 size (大端)
```

| index | size | 对应部件 |
|---:|---:|---|
| 0 | `0x2A8B40` | `BOOT.bin` |
| 1 | `0x001F4E` | `devicetree.dtb` |
| 2 | `0x3DE8E0` | `uImage` |
| 3 | `0x68900D` | `minerfs.image.gz` |
| 4 | `0x41440F` | `update.image.gz` |
| 5 | `0x000228` | `crl.tar.gz` |
| 6 | `0x0003ED` | `miner.btm.tar.gz` |

### 3.3 签名链（已验证）

```
/etc/bitmain.pub (root, 固化在根文件系统)
   └─ 验证 miner.pem.sig  →  miner.pem           ✔ 验证通过
        └─ 验证 8×256 签名区 → 各组件            ✔ 7/7 验证通过
```

- 算法：RSA-2048 + SHA-256，PKCS#1 v1.5。
- 签名区第 0..6 槽分别对应 `BOOT.bin`、`devicetree.dtb`、`uImage`、
  `minerfs.image.gz`、`update.image.gz`、`crl.tar.gz`、`miner.btm.tar.gz`。
- 第 7 槽（最后一 256 字节）未能匹配任何容器内文件，推测对应 NAND 上的
  `sigImage`/`7kreserve` 预留槽。
- `crl`/`miner.btm` 内部还各带一份独立的 `*.sig`（由 root key 验证，见 `Update.sh`）。

---

## 4. `BOOT.bin` 内部结构

`BOOT.bin` 是一个 **Xilinx Zynq-7000 bootgen 引导镜像**（Bitmain 定制），基址 `0x800`：

| 相对偏移 | 绝对偏移 | 内容 | 证据 |
|---:|---:|---|---|
| `0x0000` | `0x0800` | Xilinx 引导头 | 宽检测字 `0xAA995566` @+0x20，标识 `XNLX`，校验和 `~sum=0xFC154520` 自洽 |
| `0x08C0` / `0x0C80` | `0x10C0` / `0x1480` | bootgen 表 | 镜像头表、分区头表（含 `Zynq7007_miner.elf/.bit`、`u-boot.elf` 名称） |
| `0x1700` | `0x1F00` | **FSBL**（131,088 字节） | ARM 异常向量表；`Xilinx First Stage Boot Loader` 字符串 |
| `0x21740` | `0x21F40` | bitstream 分区包装头 | 结构 `{0x101, 0x6C0, ...}`，长 0x6C0 |
| `0x21E20` | `0x22620` | **PL bitstream** | 前导 `BB000000 44002211 FFFFFFFF×2 AA995566`；IDCODE `0x03723093`(=XC7Z007S)；结束于绝对 `0x21EB54` 的 CMD DESYNC，之后为 NOOP/FF 填充 |
| `0x219C0` | `0x21F1C0` | u-boot 分区包装头 | 同 0x6C0 结构 |
| `0x21880` | `0x21F880` | **U-Boot 2016.07** | 异常向量表 @+0（`0xEA0000B8`），`0xDEADBEEF` @+0x3C，版本串 `U-Boot 2016.07-gdb5d44e-dirty` |
| `0x28F020` | `0x28F820` | U-Boot 控制 DTB | FDT magic，totalsize 9,092 |

U-Boot 默认环境（节选）：

```
bootcmd=run $modeboot          bootdelay=2      baudrate=115200
kernel_load_address=0x2000000  devicetree_load_address=0x3000000
ramdisk_load_address=0x4000000 boot_size=0xF00000
boot_image=BOOT.bin            bitstream_image=system.bit.bin
rsa_nandboot=... nand read 0x100000 0x0 ${boot_size} && zynqrsa 0x100000 &&
             bootm 0x2000000 0x4000000 0x3000000
```

U-Boot 内置 Bitmain 的 `zynqrsa` 校验流程，对内核/设备树/文件系统/CRL/miner.btm
分别校验（字符串：`KERNEL rsa verify`、`FDT rsa verify`、`CRL rsa verify`、
`MINER BTM rsa verify`）。

---

## 5. 内核

`uImage`（legacy uImage，64 字节头）：

| 字段 | 值 |
|---|---|
| name | `Linux-4.6.0-xilinx-g03c746f7` |
| load / entry | `0x8000` / `0x8000` |
| os / arch / type / comp | Linux(5) / ARM(2) / kernel(2) / none(0) |
| 构建 | `#1 SMP PREEMPT Wed Nov 30 20:14:07 CST 2022`，Linaro GCC 7.2.1 |

- payload 为自解压 zImage；zImage 内偏移 `0x3F93` 处为 gzip 压缩的 vmlinux。
- 解压后 `vmlinux.bin` 11,750,816 字节，内嵌 **IKCONFIG**，已导出
  `kernel_config.txt`（114,247 字节）。
- 关键配置：`CONFIG_ARCH_ZYNQ`、`SMP`、`PREEMPT`、`MTD_NAND`、`MTD_UBI`、
  `BLK_DEV_INITRD`、`GPIO_ZYNQ`、`SPI_ZYNQ_QSPI`、`XILINX_WATCHDOG` 等。

---

## 6. 根文件系统

### 6.1 `minerfs.image.gz`（主系统）

- uImage ramdisk → gzip → **ext2，32 MB（32,768 × 1 KiB，10,016 inode，卷标 `linux`）**
- 解包后：**382 个文件 / 219 个符号链接 / 14.2 MB**，完整目录树已导出到
  `minerfs.d/rootfs/`。

系统组成：

| 类别 | 内容 |
|---|---|
| 发行版 | Buildroot 2019.02.7-gdd076742 |
| BusyBox | v1.29.3（2022-12-17 构建） |
| 矿机程序 | `/usr/bin/bmminer`、`/usr/bin/cgminer`、`cgminer-api` |
| 加密 | OpenSSL 1.1.1d、`/etc/bitmain.pub`（root 公钥）、`/etc/bitmain_category.conf` |
| 服务 | lighttpd 1.4.32（Web UI）、dropbear 2018.76（SSH）、ntpd、avahi、syslogd |
| 启动 | `/etc/inittab` → `/etc/init.d/rcS` → `S37bitmainer_setup`、`S70cgminer` 等 |
| Web UI | `/www/pages/`（index/dashboard/miner/pools/update 等 + `cgi-bin/*.cgi`） |
| 挂载 | `/miner`、`/config` 等为 UBIFS 挂载点（`S37bitmainer_setup` 中 `ubiattach`/`mount -t ubifs`） |

### 6.2 `update.image.gz`（升级系统）

- 同样是 gzip'd ext2 32 MB，但只含 **79 个文件 / 187 个符号链接 / 8.4 MB**。
- 关键文件：`/usr/bin/FileParser`（.bmu 解析/验签/拆分工具）、
  `/etc/init.d/Update.sh`（升级主流程）、`nandwrite`、`flash_erase`、
  `ubiformat`、`mtdinfo` 等 MTD 工具。

`Update.sh` 揭示了完整的 NAND 写入布局：

| MTD | 偏移 | 内容 |
|---|---:|---|
| mtd0 | `0x0000000` / `0x0800000` / `0x1000000` | `BOOT.bin`（主 + 两份备份） |
| mtd0 | `0x1A00000` | `devicetree.dtb` |
| mtd0 | `0x2000000` | `uImage` |
| mtd1 | `0x0` | `minerfs.image.gz` |
| mtd3 | `0x0` / `0x100000` | `sigImage`（签名镜像，2 份） |
| mtd5 | `0x0` | `update.image.gz` |

升级流程：`FileParser -s S19 <bmu> /etc/bitmain.pub` 拆分 → 逐项验签（`openssl dgst -sha256 -verify`）
→ 从 NAND 读出旧 `sigImage` → 重新组装 `sigImage` → 写入各分区。

---

## 7. `crl` 与 `miner.btm`

- `crl`（10,240 字节）：Bitmain 的吊销/黑名单数据（内容含规律填充，非标准 X.509 CRL DER），
  由 `crl.sig`（256 字节）签名。
- `miner.btm`（2,048 字节）：高熵二进制块，由 `miner.btm.sig`（256 字节）签名；
  U-Boot 启动时执行 `MINER BTM rsa verify`。
- 两者签名均由固件内 root key `/etc/bitmain.pub` 验证。

---

## 8. 解包产物

```
Firmware/
├─ Antminer-S19-Hydro-release-202212170935.bmu   原始固件
├─ analysis/                                     分析/解包脚本
│   ├─ unpack_bmu_v2.py                          容器拆分 + 验签 + 解压
│   └─ extract_ext2.py                           纯 Python ext2 只读提取器
└─ Unpacked/                                     解包结果
    ├─ bmu_header.bin  miner.pem  miner.pem.sig  part_table.bin
    ├─ BOOT.bin
    │   └─ BOOT.bin.d/{fsbl.bin, bitstream.bin, uboot.bin,
    │                  uboot_control.dtb, part_wrapper_*.bin}
    ├─ devicetree.dtb
    ├─ uImage
    │   └─ uImage.d/{zImage, vmlinux.bin, kernel_config.txt}
    ├─ minerfs.image.gz
    │   └─ minerfs.d/{ramdisk.ext2, rootfs/...}
    ├─ update.image.gz
    │   └─ update.d/{ramdisk.ext2, rootfs/...}
    ├─ crl.tar.gz           + crl.d/{crl, crl.sig}
    ├─ miner.btm.tar.gz     + miner_btm.d/{miner.btm, miner.btm.sig}
    ├─ signatures.bin       + signatures/signature_map.json
    └─ manifest.json        全部偏移、大小、SHA-256、验签结果
```

复现：

```bash
cd D:/Document/tempPrj/BITMAIN-S19Hyd-151T-Firmware/Firmware
python -I analysis/unpack_bmu_v2.py
python -I analysis/extract_ext2.py Unpacked/minerfs.d/ramdisk.ext2 Unpacked/minerfs.d/rootfs
python -I analysis/extract_ext2.py Unpacked/update.d/ramdisk.ext2 Unpacked/update.d/rootfs
```

依赖：Python 3 + `pycryptodome`（验签）。ext2 提取器是自实现的只读解析器，不依赖
root/loop 挂载或 e2fsprogs。

---

## 9. 尚未完全解析的点

1. BMU 头 `0x08=0x1FE`、`0x0C`、`0x10` 三个字段的语义（疑为内容位图/版本/时间戳）。
2. 签名区第 8 槽（最后 256 字节）的签名对象未在包内找到，疑为 NAND `sigImage` 预留。
3. bootgen 表（`0x10C0` 镜像头表、`0x1480` 分区头表）中 Bitmain 扩展字段的完整语义；
   分区实际边界已由签名与代码特征确认，不影响解包。
4. `crl` 的条目格式未进一步逆向（非标准 X.509 DER）。

---

## 10. 逆向改造基线

针对"修改功能以适配器件"的目标，已在 `Firmware/analysis/reverse/` 下建立逆向基线：

| 文件 | 内容 |
|---|---|
| `README.md` | 分层结论、bmminer 控制面函数表（PIC/电压/温度/ADC/风扇/UART/API）、WebUI 改造路径、打补丁方式 |
| `bmminer_functions.json` | 969 个函数：地址/大小/引用字符串/BL 调用目标 |
| `bmminer_strings_by_function.md` | 按函数聚合的字符串视图 |
| `cgminer_functions.json` | 441 个函数（从 ext2 镜像内存读取） |
| `cgminer_strings_by_function.md` | 同上 |

关键结论：

- Web UI 前端（HTML/JS）与 22 个 CGI（全为 shell）属**源码级**，可直接修改。
- 算力板控制在 `/usr/bin/bmminer`（ARM32，已 strip）。核心控制面集中在
  `0x4b–0x50` 段（PIC/电压/ADC）、`0x18dcc`/`0x171b4`（温度）、
  `0x46a84`–`0x4782c`（链上 UART）、`0x21368`–`0x22798`（API 字段）。
- `bmminer` 是 cgminer 分支，非驱动层可对照公开 cgminer 源码；需要逆向的
  只是 Bitmain 私有驱动层。
- `cgminer` 仅含 `bitmain_c5`（S9 世代）驱动，S19 Hydro 逻辑不在其中。
