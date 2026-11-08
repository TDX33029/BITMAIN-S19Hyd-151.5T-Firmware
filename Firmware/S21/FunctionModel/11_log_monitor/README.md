# 11_log_monitor 日志 / 监控 / 看门狗

日志分级、syslog、心跳、看门狗、IPSIG/录音按键监控。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 40 |
| 程序 | bmminer, cgminer, monitor-ipsig, monitor-recobtn |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| cgminer | 0x12d28 | FUN_00012d28 | 14404 | 13 | Blank worker exists.\n |
| cgminer | 0x36398 | FUN_00036398 | 2116 | 5 | Watchdog |
| cgminer | 0x2f770 | FUN_0002f770 | 832 | 5 | Killing off watchdog thread |
| bmminer | 0x72a18 | FUN_00072a18 | 544 | 5 | set watchdog failed\n |
| bmminer | 0x74afc | FUN_00074afc | 416 | 5 | can nont set power watchdog\n |
| bmminer | 0x9052c | FUN_0009052c | 5332 | 4 | syslog / [%s]the string after is not syslog, stdout or stderr |
| bmminer | 0x97dec | FUN_00097dec | 404 | 4 | wrong syslog level[%s] |
| bmminer | 0x6f67c | FUN_0006f67c | 596 | 3 | WARNING: exec_power_cmd_v2 only support even len\n |
| monitor-recobtn | 0x106a0 | FUN_000106a0 | 480 | 3 | monitor-recobtn compile %s--%s\n |
| monitor-ipsig | 0x11274 | FUN_00011274 | 564 | 2 |  |
| monitor-ipsig | 0x110ec | FUN_000110ec | 304 | 2 |  |
| monitor-ipsig | 0x10bbc | FUN_00010bbc | 260 | 2 |  |
| monitor-ipsig | 0x10fe8 | FUN_00010fe8 | 260 | 2 |  |
| monitor-ipsig | 0x10cc0 | FUN_00010cc0 | 224 | 2 |  |
| monitor-ipsig | 0x10afc | FUN_00010afc | 192 | 2 |  |
| monitor-ipsig | 0x1121c | FUN_0001121c | 88 | 2 |  |
| monitor-ipsig | 0x10e1c | FUN_00010e1c | 316 | 0 |  |
| monitor-recobtn | 0x109c0 | FUN_000109c0 | 312 | 0 |  |
| monitor-ipsig | 0x114a8 | FUN_000114a8 | 148 | 0 |  |
| monitor-ipsig | 0x10f58 | FUN_00010f58 | 144 | 0 |  |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
