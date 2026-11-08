# Antminer S19 Hydro 固件解包报告 (BMU: Antminer-S19-Hydro-release-202212170935)

**源文件**: Antminer-S19-Hydro-release-202212170935.bmu — 17,989,023 B
**SHA-256**: `a96ca601e7b9e360cb884401072579d23b74579b5f7578d0dd24b6c02cb04dc8`

## 结论摘要

- 封装格式为 Bitmain BMU 升级包 (魔数 `26 01`),RSA-2048 验签,明文存储无整体加密。
- 目标 SoC: **XC7Z007S** (bitstream IDCODE `0x03723093`;rootfs `/etc/topol.conf` 亦明确 `"processor": {"type": "ZYNQ7007"}`),机型 **HHB28601**。
- ASIC: **BM1398P** × 4 链 × 104 颗 (8×13 阵列),每链带 PIC16F1704 (I2C 0x20) + AT24C02D EEPROM + 6× NCT218 温感;整机 4 风扇,电源板 AWP11 (I2C 0x10)。
- 引导链: BootROM → FSBL (QSPI) → 加载 XC7Z007S 全量 bitstream → U-Boot 2016.07 (基址 0x04000000,U-Boot 内嵌第二段小型 bitstream 用于 hashboard 初始化) → Linux-4.6.0 内核 + ramdisk。

## 文件布局

| 文件 | 偏移 | 大小 | 内容 |
|---|---|---|---|
| header.bin | 0x000000 | 512 B | BMU 头: 魔数 `26 01`, 平台 "S19", 公钥长度 0x1C3 |
| miner_pubkey.pem | 0x000018 | 451 B | RSA-2048 升级验签公钥 (PEM) |
| sig_top.bin | 0x000418 | 256 B | RSA-2048 签名 (头部/清单) |
| section_table.bin | 0x000518 | 40 B | 8 × {u8 id, u32 BE size}: id0..6 + 结束标记 |
| bootimg_header.bin | 0x000800 | 512 B | Zynq-7000 BootROM 头 (AA995566/XLNX, FSBL@+0x1700, 未加密) |
| fsbl.bin | 0x001F00 | 132,912 B | FSBL (代码 + 配置块 @+0x1B280(SD0 0xE0100000,100MHz) + 18KB 数据表) |
| bitstream_top.bin | 0x022630 | 2,083,696 B | **FPGA 全量 bitstream, IDCODE 0x03723093 = XC7Z007S**, FDRI 520,352 字 |
| param_blob.bin | 0x021F1C0 | 1,728 B | 版本头 0x01010000 + 高熵数据 (加密参数块) |
| uboot.bin | 0x021F880 | 458,656 B | U-Boot 2016.07-gdb5d44e-dirty, 链接基址 0x04000000; 内嵌小型 bitstream (BB000000 44002211 + sync @+0x5BB08) |
| dtb1.dtb | 0x028F820 | 105,248 B* | 设备树 #1: `xlnx,zynq-microzed` (实际 FDT 9,092 B + 填充), QSPI/SD0 节点 |
| dtb2.dtb | 0x02A9340 | 8,014 B | 设备树 #2: `xlnx,zynq-7000`, UART1 控制台, GEM0 以太网 (内核用) |
| uImage_kernel.img | 0x02AB28E | 4,057,312 B | uImage: **Linux-4.6.0-xilinx-g03c746f7**, 未压缩 ARM32 Image, load 0x8000 |
| uImage_ramdisk1.img | 0x0689B6E | 6,852,621 B | uImage ramdisk #1 (gzip) → 32 MB ext2 → **rootfs1/** (完整系统) |
| uImage_ramdisk2.img | 0x0D12B7B | 4,277,263 B | uImage ramdisk #2 (gzip) → 32 MB ext2 → **rootfs2/** (精简/恢复系统) |
| crl.tar.gz | 0x1126F8A | 552 B | crl (10,240 B) + crl.sig (256 B) → crl.d/ |
| miner_btm.tar.gz | 0x11271B2 | 1,005 B | miner.btm (2,048 B, 高熵) + miner.btm.sig → miner_btm.d/ |
| sig_bottom.bin | 0x112759F | 2,048 B | RSA-2048 签名 (文件尾部) |

\* dtb1.dtb 尾部为填充,实际 FDT 头记录 totalsize=9,092。

### section_table 内容 (与实际完全吻合)

| id | 大小 | 覆盖范围 |
|---|---|---|
| 0 | 0x2A8B40 (2,787,136) | 0x800-0x2A9340: BootROM头+FSBL+bitstream+U-Boot+内嵌bitstream+DTB#1 |
| 1 | 0x1F4E (8,014) | 0x2A9340-0x2AB28E: DTB#2 |
| 2 | 0x3DE8E0 (4,057,312) | kernel uImage (头64B+负载) |
| 3 | 0x68900D (6,852,621) | ramdisk1 uImage |
| 4 | 0x41440F (4,277,263) | ramdisk2 uImage |
| 5 | 0x228 (552) | crl.tar.gz |
| 6 | 0x3ED (1,005) | miner_btm.tar.gz |
| 7 | 0 | 结束标记 |


## 校验值

| 文件 | SHA-256 (前16) | MD5 (前12) |
|---|---|---|
| header.bin | `528e77703e0edd71` | `da48a342786b` |
| miner_pubkey.pem | `2dab0504d7c2f083` | `1fd2ae74c501` |
| sig_top.bin | `7b4df8873c09a219` | `260b1d29e4f0` |
| section_table.bin | `2a47a424101cfbde` | `2535a89f7e1c` |
| bootimg_header.bin | `271cb17727e60a20` | `9182fa6d4dd2` |
| fsbl.bin | `4bf484768a73fede` | `7cbae15c74d2` |
| bitstream_top.bin | `a249a15d7cf98ecd` | `522da5ecdc84` |
| param_blob.bin | `6111ec4a1af4b4f9` | `e7e5bf8b1660` |
| uboot.bin | `0da5e3190e517bf1` | `1e51a77dc293` |
| dtb1.dtb | `094f1d8e0cabc067` | `e4028b77a9de` |
| dtb2.dtb | `47e56969ce80ae9b` | `ad826c24ff83` |
| uImage_kernel.img | `b887ec69adc7fcd9` | `47a18e358ace` |
| uImage_ramdisk1.img | `af466383f02d69c6` | `03db3c18a52a` |
| uImage_ramdisk2.img | `2c98a387a7c299e5` | `9f2b5f344b87` |
| crl.tar.gz | `ae7e69ea8c7cfe41` | `48b3f74aaf61` |
| miner_btm.tar.gz | `db8fc594b151db91` | `08c1e0fbfea1` |
| sig_bottom.bin | `c2d1615c83e6131f` | `ce504112d2f7` |
| ramdisk1.img | `f61a19eaab44c46a` | `ef4e67f02e40` |
| ramdisk2.img | `16072624ba9051ad` | `456e54438a1d` |

## rootfs 内容

### rootfs1 (主系统, 381 文件 / 15.2 MB / ext2 rev0)
- 典型 Antminer 完整系统: BusyBox、glibc 2.25、openssl 1.1、lighttpd + www 页面 (echarts)、dropbear、sudo、ntpd、avahi
- 挖矿: `usr/bin/bmminer` (429 KB) + `usr/bin/cgminer`; 日志走 zlog (zlog.conf 规则见 etc/)
- 配置: `etc/topol.conf` (整机拓扑,见下), `etc/bitmain_category.conf`, `etc/bitmain.pub`, `etc/cgminer.conf.factory`, `etc/levels.json`
- 启动: etc/init.d/ (S37bitmainer_setup, S52miner_act, S65monitor-ipsig, S66monitor-recobtn 恢复按钮, S67update-daemon, S70cgminer, S38iptables...)

### rootfs2 (精简系统, 78 文件 / 9.0 MB / ext2 rev0)
- BusyBox (412 KB) + dd/gunzip/su 等,推断为恢复/刷机用最小 root (配合 S66monitor-recobtn)

## topol.conf 关键信息 (HHB28601)

```
machine HHB28601, hw_version 1.0, sw_version 0.2
processor: ZYNQ7007
power:     AWP11, i2c 0x10, gpio 907
fan:       4 (2上出风, 2下进风)
asic:      BM1398P (0x1398), 156 core + 623 small core, 1 domain
chain:     4 链 × 104 ASIC (8×13), 每链 52 domain × 2 ASIC
  pic:     PIC1704, i2c 0x20, 板载 2× LM75A (0x48/0x49)
  eeprom:  AT24C02D, i2c 0x50
  sensor:  6× NCT218 (绑定 asic 0/12/24/79/91/103)
```

## 其他备注

- BootROM 头 word10 = 0 → 未启用加密启动;两段 RSA 签名可用 miner_pubkey.pem 验证 (算法: RSA PKCS#1, 具体填充方式待验证)。
- fsbl.bin 尾部两个配置块: 0x1D180 (192 B, `01 01 00 00` 版本头, SD0 0xE0100000 + 100 MHz 等) 与 0x1DF00-0x22630 (18 KB 规律表, 值 = 0x15DE6 + k×0x100000, 用途待定)。
- param_blob.bin (1,728 B): 头 `{u32 ver=0x01010000, u32 len=0x6C0}` + 高熵数据, 疑为加密参数/防克隆数据 (与 FSBL 尾部配置块同款版本头)。
- uboot 内嵌小型 bitstream (83,096 B, BB000000 44002211 包装 + sync): 开头无常规 prelude,为 Bitmain 自有格式,推断运行时经 PCAP (xdevcfg) 加载做 hashboard 初始化。
- kernel uImage 负载为未压缩 ARM32 Image (开头 `mov r0,r0` ×8),load/entry 0x8000。
- 两个 DTB: dtb1 (MicroZED, 供 FSBL/U-Boot) 与 dtb2 (zynq-7000, UART1 console + GEM0, 供内核)。

## 解包目录结构

```
Unpacked/
├── header.bin / miner_pubkey.pem / sig_top.bin / section_table.bin
├── bootimg_header.bin / fsbl.bin
├── bitstream_top.bin (XC7Z007S)
├── param_blob.bin / uboot.bin
├── dtb1.dtb / dtb2.dtb (+ .dts.txt 文本化)
├── uImage_kernel.img / uImage_ramdisk1.img / uImage_ramdisk2.img
├── ramdisk1.img / ramdisk2.img (32 MB ext2 原像)
├── rootfs1/ + rootfs1.listing.txt (+ .symlinks.txt)   ← 主系统
├── rootfs2/ + rootfs2.listing.txt (+ .symlinks.txt)   ← 恢复系统
├── crl.d/ (crl, crl.sig)
├── miner_btm.d/ (miner.btm, miner.btm.sig)
├── sig_bottom.bin
└── manifest.json (逐文件 sha256/md5)
```
