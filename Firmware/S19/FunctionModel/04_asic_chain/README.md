# 04_asic_chain ASIC / 算力链

链存在检测、ASIC 数量扫描、UART/FPGA/AXI 访问、nonce 读取、PLL 下发。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 100 |
| 程序 | bitmain_axi.ko, bmminer, fpga_mem_driver.ko |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| bmminer | 0x12650 | config_parse_chain_topology | 6360 | 10 | get domain failed\n / parse chain domain failed\n / domain:\n / domain |
| bmminer | 0x1eba4 | config_parse_topol_conf | 5208 | 9 | Chain [%d] BOM Version: 0x%04x\n / parse chain failed\n |
| bmminer | 0x13f28 | nonce_fifo_parse | 5752 | 6 | reepat nonce error / nonce fifo flush by nonce, last_ts = %.2f.\n |
| bmminer | 0x37218 | chain_asic_detect | 500 | 6 | pic enabled for chain %d, press anykey to continue... / Chain[%d]: find %d asic, times %d\ |
| bmminer | 0x4c050 | pic_enable_dcdc | 460 | 5 | %s: auto exec open_pic, but chain %d open eeprom failed\n / %s: Bad pic param, input chain |
| bmminer | 0x4c224 | pic_disable_dcdc | 452 | 5 | %s: auto exec open_pic, but chain %d open eeprom failed\n / %s: Bad pic param, input chain |
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
| bmminer | 0x2a3a4 | FUN_0002a3a4 | 828 | 13 | \n dump asic nonce number...\n / Chain[%d] total nonce number = %d\n / Chain[%d] nonce:\n |
| bmminer | 0x30dec | FUN_00030dec | 484 | 13 | \n asic nonce number for chain[%d]...\n |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
