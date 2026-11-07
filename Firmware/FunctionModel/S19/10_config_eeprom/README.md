# 10_config_eeprom 配置 / EEPROM

topol.conf/cgminer.conf/network.conf 解析，EEPROM 校准数据与 CRC。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 25 |
| 程序 | FileParser, bmminer |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| bmminer | 0x12650 | config_parse_chain_topology | 6360 | 10 | domain:\n / get domain failed\n / domain / parse chain domain failed\n |
| bmminer | 0x1eba4 | config_parse_topol_conf | 5208 | 9 | Chain [%d] BOM Version: 0x%04x\n / parse chain failed\n |
| bmminer | 0x39544 | FUN_00039544 | 2548 | 10 | press any key to start rising frequency... / fixed frequency is %d\n |
| bmminer | 0x1a1cc | FUN_0001a1cc | 2776 | 8 | Fixture CRC check fail.fixture_crc = 0x%x, len = 0x%x, crc = 0x%x\n |
| bmminer | 0x303a0 | FUN_000303a0 | 616 | 6 | !!! REG_TYPE = 1.%08x from chain:%d asic:%d\n |
| bmminer | 0x1ad34 | FUN_0001ad34 | 468 | 5 | [chain %d] Update miner info Failed, EEPROM does not have enough space.\n / [chain %d] Upd |
| bmminer | 0x49c10 | FUN_00049c10 | 348 | 5 | %s: Bad eeprom param, input chain is %d\n / %s: auto exec eeprom_open, but chain %d open e |
| bmminer | 0x49ab4 | FUN_00049ab4 | 344 | 5 | %s: Bad eeprom param, input chain is %d\n / %s: auto exec eeprom_open, but chain %d open e |
| bmminer | 0x1c0c0 | FUN_0001c0c0 | 284 | 5 | EEPROM does not have enough space\n |
| bmminer | 0x226c4 | FUN_000226c4 | 208 | 5 | eeprom |
| bmminer | 0x361d4 | FUN_000361d4 | 184 | 5 | max voltage in eeprom = %d\n |
| bmminer | 0x1c4f4 | FUN_0001c4f4 | 168 | 5 | EEPROM write data is not 32-bit aligned, FAIL ENC/DEC!\n |
| bmminer | 0x4994c | FUN_0004994c | 80 | 5 | %s: Bad eeprom param, input chain is %d\n |
| FileParser | 0x11ec4 | FUN_00011ec4 | 800 | 0 |  |
| FileParser | 0x109a8 | FUN_000109a8 | 500 | 0 |  |
| FileParser | 0x10b9c | FUN_00010b9c | 212 | 0 |  |
| FileParser | 0x12230 | FUN_00012230 | 52 | 0 |  |
| FileParser | 0x108b0 | FUN_000108b0 | 42 | 0 |  |
| FileParser | 0x10868 | FUN_00010868 | 40 | 0 |  |
| FileParser | 0x10838 | entry | 36 | 0 |  |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
