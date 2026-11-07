# 09_web_api WebUI / API

lighttpd CGI、cgminer-api、登录鉴权、配置页面与状态接口。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 24 |
| 程序 | antlogin, bmminer, cgminer-api |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| bmminer | 0x1d1dc | FUN_0001d1dc | 712 | 5 | http://%s:%d/api/v1/power |
| bmminer | 0x26968 | FUN_00026968 | 2924 | 4 | statusServiceThread send http timeout, try again... / HTTP/1.0  200  OK%s / send http resp |
| bmminer | 0x27970 | FUN_00027970 | 1348 | 4 | http:// / GET /%s HTTP/1.1\r\nHOST: %s:%d\r\nAccept: */*\r\n\r\n |
| bmminer | 0x274d4 | FUN_000274d4 | 896 | 4 | http listen failed! try again after 10s... / http port bind failed! try again after 10s... |
| bmminer | 0x1cf90 | FUN_0001cf90 | 588 | 4 | http://%s:%d/power/%s / http get failed\n |
| bmminer | 0x27854 | FUN_00027854 | 284 | 4 | start the http log.\n |
| bmminer | 0x54588 | FUN_00054588 | 1188 | 3 | invalid token / unexpected token |
| cgminer-api | 0x109b8 | FUN_000109b8 | 404 | 0 |  |
| antlogin | 0x10410 | FUN_00010410 | 52 | 0 |  |
| cgminer-api | 0x10d9c | FUN_00010d9c | 52 | 0 |  |
| antlogin | 0x103c8 | FUN_000103c8 | 42 | 0 |  |
| cgminer-api | 0x10900 | FUN_00010900 | 42 | 0 |  |
| antlogin | 0x10380 | FUN_00010380 | 40 | 0 |  |
| cgminer-api | 0x108b8 | FUN_000108b8 | 40 | 0 |  |
| antlogin | 0x10350 | entry | 36 | 0 |  |
| cgminer-api | 0x10888 | entry | 36 | 0 |  |
| antlogin | 0x103a4 | FUN_000103a4 | 34 | 0 |  |
| cgminer-api | 0x108dc | FUN_000108dc | 34 | 0 |  |
| antlogin | 0x103f4 | _FINI_0 | 24 | 0 |  |
| cgminer-api | 0x1092c | _FINI_0 | 24 | 0 |  |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
