# 09_web_api WebUI / API

lighttpd CGI、cgminer-api、登录鉴权、配置页面与状态接口。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 31 |
| 程序 | antlogin, bmminer, cgminer, cgminer-api |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| bmminer | 0x30750 | api_get_miner_freq_adjust_info | 724 | 1 |  |
| bmminer | 0x2f224 | api_miner_chain_asic_status | 240 | 0 |  |
| bmminer | 0x2f160 | api_miner_chain_asic_num | 192 | 0 |  |
| cgminer | 0x12d28 | FUN_00012d28 | 14404 | 13 | Blank worker exists.\n |
| bmminer | 0x36b08 | FUN_00036b08 | 1244 | 7 | serialize input miner conf failed / open /cofig/cgminer.conf failed / serialize local  min |
| bmminer | 0x3c5e4 | FUN_0003c5e4 | 1348 | 4 | http:// / GET /%s HTTP/1.1\r\nHOST: %s:%d\r\nAccept: */*\r\n\r\n |
| cgminer | 0x1ed70 | FUN_0001ed70 | 1204 | 4 | HTTP/1.0 200 / HTTP/1.1 200 / CONNECT %s:%s HTTP/1.1\r\nHost: %s:%s\r\n\r\n / HTTP Error f |
| bmminer | 0x24cb0 | FUN_00024cb0 | 588 | 4 | http get failed\n / http://%s:%d/power/%s |
| bmminer | 0x3c4b0 | FUN_0003c4b0 | 308 | 4 | start the http server\n |
| cgminer | 0x2a4dc | FUN_0002a4dc | 220 | 4 | stratum+tcp:// |
| bmminer | 0x3b5d0 | FUN_0003b5d0 | 152 | 4 | HTTP/1.1 %d %s\r\nDate: %s\r\n |
| cgminer | 0x4785c | FUN_0004785c | 1188 | 3 | invalid token / unexpected token |
| bmminer | 0x7cdf8 | FUN_0007cdf8 | 620 | 3 | invalid token / unexpected token |
| bmminer | 0x3c320 | FUN_0003c320 | 168 | 3 | session != NULL |
| cgminer-api | 0x109f0 | FUN_000109f0 | 404 | 0 |  |
| antlogin | 0x10410 | FUN_00010410 | 52 | 0 |  |
| cgminer-api | 0x10e5c | FUN_00010e5c | 52 | 0 |  |
| antlogin | 0x103c8 | FUN_000103c8 | 42 | 0 |  |
| cgminer-api | 0x10938 | FUN_00010938 | 42 | 0 |  |
| antlogin | 0x10380 | FUN_00010380 | 40 | 0 |  |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
