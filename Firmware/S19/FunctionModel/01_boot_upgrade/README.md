# 01_boot_upgrade 固件升级与启动

BOOT.bin/BootROM、U-Boot 环境、mtd/ubi 分区、升级包解包与落盘、升级守护进程。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 13 |
| 程序 | FileParser, update-daemon |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| FileParser | 0x10de8 | FUN_00010de8 | 1616 | 6 | crl.tar.gz |
| FileParser | 0x108f8 | FUN_000108f8 | 176 | 3 | 		-s [minerType] [fileName] [rootPublicKeyFile]: \n			Check If Filename Was Valided, and S |
| update-daemon | 0x10db8 | FUN_00010db8 | 280 | 2 |  |
| update-daemon | 0x10c24 | FUN_00010c24 | 404 | 0 |  |
| update-daemon | 0x10bd8 | FUN_00010bd8 | 76 | 0 |  |
| update-daemon | 0x10ed0 | FUN_00010ed0 | 52 | 0 |  |
| update-daemon | 0x10b90 | FUN_00010b90 | 42 | 0 |  |
| update-daemon | 0x10b48 | FUN_00010b48 | 40 | 0 |  |
| update-daemon | 0x10b18 | entry | 36 | 0 |  |
| update-daemon | 0x10b6c | FUN_00010b6c | 34 | 0 |  |
| update-daemon | 0x10bbc | _FINI_0 | 24 | 0 |  |
| update-daemon | 0x1074c | _DT_INIT | 12 | 0 |  |
| update-daemon | 0x10f10 | _DT_FINI | 8 | 0 |  |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
