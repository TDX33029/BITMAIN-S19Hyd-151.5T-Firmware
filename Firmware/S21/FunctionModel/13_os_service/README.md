# 13_os_service 系统服务 / 线程

init/daemon、线程创建、定时器、NTP、重启/关机。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 38 |
| 程序 | bmminer, cgminer, update-daemon |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| bmminer | 0x513a0 | mode_init | 2444 | 6 |  |
| cgminer | 0x2cd4c | FUN_0002cd4c | 2016 | 7 | Failed to create stratum sthread / No GBT coinbase + append support found, pool unusable i |
| bmminer | 0x15500 | FUN_00015500 | 5956 | 6 | nonce fifo flush by nonce, last_ts = %.2f.\n / repeat nonce error |
| update-daemon | 0x10930 | FUN_00010930 | 588 | 6 | pthread_create error!\n |
| cgminer | 0x3d300 | FUN_0003d300 | 2028 | 4 |  |
| bmminer | 0x83f00 | FUN_00083f00 | 828 | 4 |  |
| cgminer | 0x4433c | FUN_0004433c | 816 | 4 |  |
| bmminer | 0x84240 | FUN_00084240 | 784 | 4 |  |
| bmminer | 0x83c48 | FUN_00083c48 | 696 | 4 |  |
| bmminer | 0x19120 | FUN_00019120 | 652 | 4 |  |
| cgminer | 0x330f0 | FUN_000330f0 | 648 | 4 |  |
| cgminer | 0x44670 | FUN_00044670 | 648 | 4 |  |
| cgminer | 0x448f8 | FUN_000448f8 | 592 | 4 |  |
| bmminer | 0x59790 | FUN_00059790 | 380 | 4 |  |
| cgminer | 0x349f4 | FUN_000349f4 | 364 | 4 |  |
| bmminer | 0x3c4b0 | FUN_0003c4b0 | 308 | 4 | start the http server\n |
| cgminer | 0x298dc | FUN_000298dc | 300 | 4 |  |
| bmminer | 0x61594 | FUN_00061594 | 296 | 4 | gpio re init\n |
| cgminer | 0x28d5c | FUN_00028d5c | 284 | 4 |  |
| bmminer | 0x40630 | FUN_00040630 | 276 | 4 |  |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
