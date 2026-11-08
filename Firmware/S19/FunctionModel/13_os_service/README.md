# 13_os_service 系统服务 / 线程

init/daemon、线程创建、定时器、NTP、重启/关机。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 17 |
| 程序 | bmminer, update-daemon |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| update-daemon | 0x108c8 | FUN_000108c8 | 588 | 6 | pthread_create error!\n |
| bmminer | 0x59bf0 | FUN_00059bf0 | 828 | 4 |  |
| bmminer | 0x59f30 | FUN_00059f30 | 784 | 4 |  |
| bmminer | 0x59964 | FUN_00059964 | 652 | 4 |  |
| bmminer | 0x18364 | FUN_00018364 | 424 | 4 |  |
| bmminer | 0x3dd0c | FUN_0003dd0c | 380 | 4 |  |
| bmminer | 0x45d08 | FUN_00045d08 | 368 | 4 |  |
| bmminer | 0x33284 | FUN_00033284 | 288 | 4 |  |
| bmminer | 0x27854 | FUN_00027854 | 284 | 4 | start the http log.\n |
| bmminer | 0x2b150 | FUN_0002b150 | 280 | 4 |  |
| bmminer | 0x2b268 | FUN_0002b268 | 280 | 4 |  |
| bmminer | 0x2b380 | FUN_0002b380 | 280 | 4 |  |
| bmminer | 0x2b498 | FUN_0002b498 | 280 | 4 |  |
| bmminer | 0x2b5b0 | FUN_0002b5b0 | 280 | 4 |  |
| bmminer | 0x2b6c8 | FUN_0002b6c8 | 280 | 4 |  |
| bmminer | 0x47cb0 | FUN_00047cb0 | 136 | 4 |  |
| bmminer | 0x35098 | FUN_00035098 | 68 | 4 |  |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
