# 00_imports_thunks 导入符号 / Thunk

PLT thunk 与外部导入符号，不含实际实现；列在此处便于查依赖。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 657 |
| 程序 | FileParser, antlogin, bitmain_axi.ko, bmminer, cgminer-api, fpga_mem_driver.ko, id2mac, monitor-ipsig, monitor-recobtn, update-daemon |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| bmminer | 0x11fc4 | pthread_detach | 12 | 4 |  |
| bmminer | 0x12198 | pthread_create | 12 | 4 |  |
| bmminer | 0x12490 | pthread_join | 12 | 4 |  |
| FileParser | 0x10750 | RSA_verify | 12 | 4 |  |
| FileParser | 0x10774 | SHA256_Final | 12 | 4 |  |
| FileParser | 0x107fc | RSA_free | 12 | 4 |  |
| FileParser | 0x10808 | SHA256_Update | 12 | 4 |  |
| FileParser | 0x10820 | SHA256_Init | 12 | 4 |  |
| update-daemon | 0x107c0 | pthread_create | 12 | 4 |  |
| bmminer | 0x12078 | recvfrom | 12 | 2 |  |
| bmminer | 0x12538 | socket | 12 | 2 |  |
| bmminer | 0x125ec | recv | 12 | 2 |  |
| bmminer | 0x12610 | send | 12 | 2 |  |
| bmminer | 0x1261c | connect | 12 | 2 |  |
| cgminer-api | 0x106a0 | socket | 12 | 2 |  |
| cgminer-api | 0x106c4 | recv | 12 | 2 |  |
| cgminer-api | 0x106dc | send | 12 | 2 |  |
| cgminer-api | 0x106e8 | connect | 12 | 2 |  |
| monitor-ipsig | 0x10820 | recvfrom | 12 | 2 |  |
| monitor-ipsig | 0x10904 | sendto | 12 | 2 |  |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
