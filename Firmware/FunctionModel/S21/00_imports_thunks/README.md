# 00_imports_thunks 导入符号 / Thunk

PLT thunk 与外部导入符号，不含实际实现；列在此处便于查依赖。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 1083 |
| 程序 | FileParser, antlogin, bitmain_axi.ko, bmminer, cgminer, cgminer-api, fpga_mem_driver.ko, id2mac, monitor-ipsig, monitor-recobtn, update-daemon |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| bmminer | 0x123fc | pthread_detach | 12 | 4 |  |
| bmminer | 0x1242c | RSA_public_decrypt | 12 | 4 |  |
| bmminer | 0x124f0 | pthread_join | 12 | 4 |  |
| bmminer | 0x1255c | RSA_size | 12 | 4 |  |
| bmminer | 0x12ae4 | pthread_create | 12 | 4 |  |
| bmminer | 0x12bcc | RSA_free | 12 | 4 |  |
| FileParser | 0x10750 | RSA_verify | 12 | 4 |  |
| FileParser | 0x10774 | SHA256_Final | 12 | 4 |  |
| FileParser | 0x107fc | RSA_free | 12 | 4 |  |
| FileParser | 0x10808 | SHA256_Update | 12 | 4 |  |
| FileParser | 0x10820 | SHA256_Init | 12 | 4 |  |
| cgminer | 0x12464 | X509_check_host | 12 | 4 |  |
| cgminer | 0x12830 | pthread_create | 12 | 4 |  |
| cgminer | 0x128e4 | X509_STORE_add_cert | 12 | 4 |  |
| cgminer | 0x12a10 | X509_check_ip_asc | 12 | 4 |  |
| cgminer | 0x12b00 | X509_verify_cert_error_string | 12 | 4 |  |
| cgminer | 0x12bfc | pthread_detach | 12 | 4 |  |
| cgminer | 0x12c38 | X509_free | 12 | 4 |  |
| cgminer | 0x12d1c | pthread_join | 12 | 4 |  |
| update-daemon | 0x10810 | pthread_create | 12 | 4 |  |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
