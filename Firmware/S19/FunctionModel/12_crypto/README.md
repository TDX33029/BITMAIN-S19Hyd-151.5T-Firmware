# 12_crypto 加密 / 签名

RSA/SHA/AES、公钥与证书、固件签名校验、CRL。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 3 |
| 程序 | FileParser |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| FileParser | 0x10de8 | FUN_00010de8 | 1616 | 6 | crl.tar.gz |
| FileParser | 0x11460 | FUN_00011460 | 2660 | 4 | Load Pem Failed! / Dump Miner.pem.sig Failed!\r / /tmp/tmpfw/miner.pem / Dump Miner.pem Fa |
| FileParser | 0x10c70 | FUN_00010c70 | 376 | 4 | Check miner.pem Failed! |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
