# 04_asic_chain ASIC / 算力链

链存在检测、ASIC 数量扫描、UART/FPGA/AXI 访问、nonce 读取、PLL 下发。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 110 |
| 程序 | bitmain_axi.ko, bmminer, fpga_mem_driver.ko |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| bmminer | 0x12650 | config_parse_chain_topology | 6360 | 10 | domain:\n / get domain failed\n / domain / parse chain domain failed\n |
| bmminer | 0x1eba4 | config_parse_topol_conf | 5208 | 9 | Chain [%d] BOM Version: 0x%04x\n / parse chain failed\n |
| bmminer | 0x37218 | chain_asic_detect | 500 | 6 | Chain %d only find %d asic, will power off hash board %d\n / Chain[%d]: find %d asic, time |
| bmminer | 0x4c050 | pic_enable_dcdc | 460 | 5 | %s: Bad pic param, input chain is %d\n / %s: auto exec open_pic, but chain %d open eeprom  |
| bmminer | 0x4c224 | pic_disable_dcdc | 452 | 5 | %s: Bad pic param, input chain is %d\n / %s: auto exec open_pic, but chain %d open eeprom  |
| bmminer | 0x2f808 | chain_scan | 556 | 3 | Chain %d is not exist.\n |
| bmminer | 0x37160 | chain_bad_asic_probe | 184 | 3 | bad asic is %d\n |
| bmminer | 0x1ea90 | chain_runtime_init | 276 | 0 |  |
| bmminer | 0x2013c | set_chain_present | 140 | 0 |  |
| bmminer | 0x205b4 | get_detected_asic_num | 100 | 0 |  |
| bmminer | 0x20c04 | chain_cmd_broadcast | 88 | 0 |  |
| bmminer | 0x4b29c | chain_gpio_power_on | 68 | 0 |  |
| bmminer | 0x4b2e4 | chain_gpio_power_off | 68 | 0 |  |
| bmminer | 0x34a5c | delay_ms | 44 | 0 |  |
| bmminer | 0x201d8 | chain_present | 24 | 0 |  |
| bmminer | 0x2002c | get_expected_asic_num | 16 | 0 |  |
| bmminer | 0x255b0 | FUN_000255b0 | 4700 | 13 | \n asic nonce number for chain[%d]...\n / /nonce |
| bmminer | 0x2a3a4 | FUN_0002a3a4 | 828 | 13 | Chain[%d] total nonce number = %d\n / Chain[%d] nonce:\n / \n dump asic nonce number...\n |
| bmminer | 0x30dec | FUN_00030dec | 484 | 13 | \n asic nonce number for chain[%d]...\n |
| bmminer | 0x44310 | FUN_00044310 | 3716 | 10 | domain %2d: |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
