# 12_crypto 加密 / 签名

RSA/SHA/AES、公钥与证书、固件签名校验、CRL。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 6 |
| 程序 | FileParser, bmminer, cgminer |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| cgminer | 0x24a8c | FUN_00024a8c | 5588 | 13 | Pool %d confirmed mining.subscribe with extranonce1 %s extran2size %d / {"id":%d, "method" |
| bmminer | 0x34f98 | FUN_00034f98 | 304 | 13 | verify failed / openssl dgst -sha256 -verify /etc/bitmain-adv.pub -signature /nvdata/pool/ |
| FileParser | 0x10de8 | FUN_00010de8 | 1616 | 6 | crl.tar.gz |
| FileParser | 0x12c40 | FUN_00012c40 | 3016 | 4 | Dump Miner.pem Failed!\r / Check pem payload failed! ret:[%d]\n / Dump Miner.pem.sig Faile |
| FileParser | 0x10c70 | FUN_00010c70 | 376 | 4 | Check miner.pem Failed! |
| cgminer | 0x1f224 | FUN_0001f224 | 128 | 4 |  |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
