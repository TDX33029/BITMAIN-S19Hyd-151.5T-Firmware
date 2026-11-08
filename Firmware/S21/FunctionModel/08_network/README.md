# 08_network 网络

IP/DHCP/DNS/网关/主机名/MAC、网络配置读写。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 17 |
| 程序 | bmminer, cgminer, cgminer-api, id2mac |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| cgminer | 0x2e0c8 | FUN_0002e0c8 | 5028 | 6 | Best share difficulty: %s / Share submissions: %lld /  Share submissions: %lld |
| cgminer | 0x1af70 | FUN_0001af70 | 2196 | 6 | Best Share |
| cgminer-api | 0x10b84 | FUN_00010b84 | 728 | 4 | Couldn't get hostname: '%s'\n |
| cgminer | 0x1aad0 | FUN_0001aad0 | 1148 | 3 | network |
| cgminer | 0x247d0 | FUN_000247d0 | 696 | 3 | Invalid IP address specified for socks4 proxy: %s |
| bmminer | 0x3d7f0 | FUN_0003d7f0 | 616 | 3 | network connection resume, restart... / network connection lost / network connection lost  |
| id2mac | 0x106c8 | FUN_000106c8 | 488 | 0 |  |
| id2mac | 0x105b0 | FUN_000105b0 | 280 | 0 |  |
| id2mac | 0x108b0 | FUN_000108b0 | 52 | 0 |  |
| id2mac | 0x10438 | FUN_00010438 | 48 | 0 |  |
| id2mac | 0x104e0 | FUN_000104e0 | 42 | 0 |  |
| id2mac | 0x10498 | FUN_00010498 | 40 | 0 |  |
| id2mac | 0x10468 | entry | 36 | 0 |  |
| id2mac | 0x104bc | FUN_000104bc | 34 | 0 |  |
| id2mac | 0x1050c | _FINI_0 | 24 | 0 |  |
| id2mac | 0x103a0 | _DT_INIT | 12 | 0 |  |
| id2mac | 0x108f0 | _DT_FINI | 8 | 0 |  |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
