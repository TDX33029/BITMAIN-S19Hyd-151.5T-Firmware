# 07_mining_pool 矿池 / Stratum

矿池连接、订阅/授权、任务下发、share 提交与难度处理。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 7 |
| 程序 | bmminer |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| bmminer | 0x2ecf8 | stratum_job_recv | 1224 | 7 | %s, rec job data %p size: %d\n |
| bmminer | 0x2d114 | stratum_header_build | 2516 | 4 | Generated stratum header %s / Generated stratum merkle %s |
| bmminer | 0x3777c | send_job | 1300 | 3 | start to send job, mid_auto_gen = %d |
| bmminer | 0x2ea24 | stratum_job_parse | 652 | 3 | parse job buf len:%d\n |
| bmminer | 0x2ce80 | set_target_diff | 600 | 3 | Diff zero passed to set_target |
| bmminer | 0x2bd54 | mining_capability | 84 | 3 | %s\nBuilt with bitmain_c5 mining support.\n |
| bmminer | 0x57ae4 | FUN_00057ae4 | 540 | 5 | Want freq: %f, Real freq: %f\n |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
