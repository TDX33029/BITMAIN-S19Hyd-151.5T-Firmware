# S19 Hyd WebUI 修复版 —— SD 启动卡说明

目标：不走 NAND、不碰签名，直接从 SD 卡启动一份**只改了 WebUI** 的 rootfs，用于联机验证刷新修复。

## 1. 卡上内容（E:，FAT32，卷标 S19SD）

| 文件 | 来源 | 说明 | MD5 |
|---|---|---|---|
| `BOOT.BIN` | 原厂 `.bmu` 内 `BOOT.bin` | **未修改**（FSBL + bitstream + U-Boot） | `1a26ae4a1a53f4361f0fbb077ab11b61` |
| `uImage` | 原厂 `.bmu` | 内核，未改 | `47a18e358ace365e33d3d09845da8e9e` |
| `devicetree.dtb` | 原厂 `.bmu` | 设备树，未改 | `ad826c24ff83f4c32ea104ad1558bd95` |
| `minerfs.image.gz` | 重打包 | 32MB ext2 ramdisk，替换了 3 个 JS | `ea148235ee3f39f6379459de27773b59` |
| `uEnv.txt` | 新建 | 指定 ramdisk 文件名 | `1281ca011b1f1551143a45b813446081` |

`minerfs.image.gz` 解压后 ext2 的 SHA-256：
`3266ebbf63c7bdc327cdfe9211c35afdf2a25079fa52e52030ce365820baef07`

替换的三个文件（ext2 内路径 `/www/pages/js/`）：

| 文件 | 修改后 MD5 |
|---|---|
| `index.7b063c.js` | `b0ac28b0b8243d535bc86af80b4107ba` |
| `dashboard.f675cc.js` | `608657196dd404e660f2f5619ce5aa92` |
| `blog.07d12d.js` | `1d02d3b94c35454ee61f14251229dfa1` |

`uEnv.txt`：

```
modeboot=sdboot
ramdisk_image=minerfs.image.gz
```

## 2. 启动链路

```
Zynq BootROM（SD 启动模式）
  └─ 读取 SD 第一个 FAT 分区根目录的 BOOT.BIN
      └─ FSBL：SD Init Done → 下载 bitstream → 跳转 U-Boot
          └─ U-Boot：board_late_init 按启动介质设置 modeboot=sdboot
              └─ preboot：读取 SD 上的 uEnv.txt 并 import
                  └─ sdboot：load mmc 0 uImage / devicetree.dtb / minerfs.image.gz
                      └─ bootm → Linux + ramdisk（root=/dev/ram）
```

说明：

- `/config`、`/miner` 仍由 `S37bitmainer_setup` 从 NAND 上的 UBIFS 挂载，**NAND 内容完全没动**；
- 断电拔卡即回到原来的 NAND 启动，零风险回滚；
- 卡上 `BOOT.BIN` 是原厂未修改的，所以 BootROM/FSBL 的 eFuse 校验（如果有）仍然通过。

## 3. 上板前检查

1. 确认控制板就是这颗 `.bmu` 对应的型号（S19 Hyd / C59）。**如果 7007 板的 bitstream IDCODE 与这块不同，FSBL 会在 “PCAP Bitstream Download Failed” 处停下**——那说明需要该板自己的 `BOOT.bin`，rootfs 仍可复用。
2. 串口 **115200 8N1** 接控制板调试口，观察启动日志。

期望日志片段：

```
Boot mode is SD
SD Init Done
Booting Device is MMC
...
Copying Linux from SD to RAM...
## Loading kernel from uImage ...
## Loading ramdisk from minerfs.image.gz ...
## Flattened Device Tree ...
Starting kernel ...
```

## 4. 排障

| 现象 | 原因 | 处理 |
|---|---|---|
| FSBL 停在 `SD_INIT_FAIL` | 卡未按 FAT32 格式化 / 分区不对 | 用 Windows 重新格式化为 FAT32（单分区、卡根目录） |
| `PCAP Bitstream Download Failed` | BOOT.BIN 与本板 FPGA 不匹配 | 换该板对应的 `BOOT.bin`，只替换卡上此文件 |
| U-Boot 没有执行 `sdboot`（无 `Copying Linux from SD`） | `modeboot` 不是 `sdboot` | 进 U-Boot 控制台：`setenv modeboot sdboot; setenv ramdisk_image minerfs.image.gz; saveenv; boot` |
| 内核 panic `No filesystem could mount root` | ramdisk 没加载 | 检查 `uEnv.txt` 是否存在、`ramdisk_image=minerfs.image.gz` 是否生效（U-Boot 里 `printenv ramdisk_image`） |
| WebUI 打不开 | lighttpd 未起 / 网络配置在 NAND 的 `/config` | 串口 `ifconfig`、`ps | grep lighttpd` |

## 5. 联机测试清单（本次修复的验收点）

1. **Miner Log 自动刷新**：打开日志页停留 30 秒，应每 10 秒自动出现新日志，无需退出重进；
2. **滚动不被打断**：向上翻历史日志时，刷新不会把视图拽回底部；停在底部时新日志自动跟随；
3. **轮询不叠加**：日志页 ↔ Dashboard 往返 5 次，DevTools Network 里 `log.cgi` 仍保持每 10 秒 1 次（原版会变成 5 次）；
4. **离开即停**：切到 Dashboard 后，Network 不再出现 `log.cgi` 请求；
5. **Dashboard 容错**：Dashboard 仍每 15 秒刷新；如果 bmminer 的 `stats` 暂时失败，算力/运行时间面板应继续更新，而不是整页冻结；
6. **后台标签页**：切到别的浏览器标签再回来，应立即刷新一次，而不是等下一个周期。

## 6. 重建方法

```bash
# 1) 打补丁（原版只读，产物在 _fix/pages/js）
cd analysis/webui_backup/_harness && node apply_fix.js

# 2) 改写 ext2（WSL，e2fsprogs）
wsl -d docker-desktop -- sh -c "cp <ramdisk.ext2> /tmp/m.ext2"
wsl -d docker-desktop -- sh /mnt/host/d/.../_build/patch_ext2.sh /tmp/m.ext2 /mnt/host/d/.../_fix/pages/js

# 3) 封装 uImage（Windows Python）
cd _build && python -I make_image.py <patched.ext2> minerfs.image.gz ramdisk

# 4) 拷到 SD 卡（BOOT.BIN 先拷，保证连续）
```

`_build/` 下保留：`minerfs.ext2`（改好的 32MB 文件系统）、`minerfs.image.gz`（卡上同款）、`sdcard/`（卡内容副本）。
