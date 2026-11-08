# 07_mining_pool 矿池 / Stratum

矿池连接、订阅/授权、任务下发、share 提交与难度处理。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 463 |
| 程序 | bmminer, cgminer |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| cgminer | 0x39624 | FUN_00039624 | 6748 | 16 | mining.set_version_mask / mining.configure |
| cgminer | 0x21e14 | FUN_00021e14 | 3540 | 15 | Pool %d confirmed mining.subscribe with extranonce1 %s extran2size %d / mining.notify / {" |
| cgminer | 0x12d28 | FUN_00012d28 | 14404 | 13 | Blank worker exists.\n |
| cgminer | 0x24a8c | FUN_00024a8c | 5588 | 13 | Pool %d confirmed mining.subscribe with extranonce1 %s extran2size %d / {"id":%d, "method" |
| cgminer | 0x36bf0 | FUN_00036bf0 | 4324 | 13 | {"params": ["%s", "%s", "%s", "%s", "%s", "%08x"], "id": %d, "method": "mining.submit"} /  |
| cgminer | 0x270d0 | FUN_000270d0 | 1016 | 13 | {"id": %d, "method": "mining.extranonce.subscribe", "params": []} / Cannot subscribe to mi |
| bmminer | 0x34f98 | FUN_00034f98 | 304 | 13 | openssl dgst -sha256 -verify /etc/bitmain-adv.pub -signature /nvdata/pool/pool.json.sig /n |
| cgminer | 0x37ce0 | FUN_00037ce0 | 6344 | 10 | New block: %s... diff %s / Network diff set to %s |
| cgminer | 0x17678 | FUN_00017678 | 2284 | 10 | Last Share Time / Last Share Difficulty / Best Share |
| cgminer | 0x320b0 | FUN_000320b0 | 2024 | 10 | Lost %d shares due to no stratum share response from pool %d |
| cgminer | 0x3b884 | FUN_0003b884 | 1872 | 10 | Pool %d stale share detected, submitting as user requested / Pool %d stale share detected, |
| cgminer | 0x274c8 | FUN_000274c8 | 752 | 10 | {"id": %d, "method": "mining.authorize", "params": ["%s", "%s"]} / {"id": %d, "method": "m |
| cgminer | 0x264e0 | FUN_000264e0 | 3028 | 8 | mining.set_extranonce / mining.ping / mining.notify / mining.multi_version |
| cgminer | 0x2cd4c | FUN_0002cd4c | 2016 | 7 | Failed to create stratum sthread / No GBT coinbase + append support found, pool unusable i |
| bmminer | 0x35a44 | FUN_00035a44 | 1300 | 7 | pool.json not existed do nothing |
| bmminer | 0x44b40 | FUN_00044b40 | 1272 | 7 | %s, rec job data %p size: %d\n |
| cgminer | 0x33d64 | FUN_00033d64 | 1252 | 7 | Work stale due to stratum job_id mismatch / Work stale due to stratum inactive |
| cgminer | 0x2610c | FUN_0002610c | 976 | 7 | Stratum reconnect requested from pool %d to %s / Denied stratum reconnect request to non-m |
| cgminer | 0x214d4 | FUN_000214d4 | 944 | 7 | Stratum send failed due to no pool stratum_active |
| cgminer | 0x328bc | FUN_000328bc | 904 | 7 | Lost %d shares due to stratum disconnect on pool %d |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
