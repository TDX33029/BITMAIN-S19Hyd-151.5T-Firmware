# 03_pic_ctrl PIC 控制

链上 PIC 的复位、心跳、DCDC 使能、版本读取与 1704 升级。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 20 |
| 程序 | bmminer |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| bmminer | 0x4ca78 | pic_get_voltage | 956 | 5 | %s: Bad pic param, input chain is %d\n |
| bmminer | 0x4da28 | pic_read_iic | 800 | 5 | %s: Bad pic param, input chain is %d\n |
| bmminer | 0x4d104 | pic_iic_block_rw2 | 720 | 5 | %s: Bad pic param, input chain is %d\n |
| bmminer | 0x4ce44 | pic_iic_block_rw | 696 | 5 | %s: Bad pic param, input chain is %d\n |
| bmminer | 0x4bad0 | pic_get_version | 508 | 5 | %s: Bad pic param, input chain is %d\n |
| bmminer | 0x4be78 | pic_start_app | 464 | 5 | %s: Bad pic param, input chain is %d\n |
| bmminer | 0x4c3f0 | pic_send_heartbeat | 456 | 5 | %s: Bad pic param, input chain is %d\n |
| bmminer | 0x4bcd4 | pic_reset | 412 | 5 | %s: Bad pic param, input chain is %d\n |
| bmminer | 0x3670c | chain_pic_reset_flow | 188 | 5 | Chain %d PIC reset failed.\n / PIC reset failed.\n |
| bmminer | 0x1c8c0 | chain_pic_start_and_check_version | 180 | 5 | Check chain[%d] PIC fw version=0x%02x\n / chain[%d] PIC jump to app\n |
| bmminer | 0x4b7d8 | pic_open_invalid_chain | 80 | 5 | %s: Bad pic param, input chain is %d\n |
| bmminer | 0x50c78 | i2c_read_block | 136 | 3 |  |
| bmminer | 0x50d00 | i2c_write_block | 136 | 3 |  |
| bmminer | 0x4c5c0 | pic_write_iic_byte | 532 | 0 |  |
| bmminer | 0x50a64 | i2c_device_open | 420 | 0 |  |
| bmminer | 0x4c7d4 | pic_seek_1704 | 304 | 0 |  |
| bmminer | 0x4b97c | pic_open | 160 | 0 |  |
| bmminer | 0x1c888 | chain_pic_reset_check | 24 | 0 |  |
| bmminer | 0x1c8a8 | chain_pic_heartbeat_check | 24 | 0 |  |
| bmminer | 0x1af08 | FUN_0001af08 | 1640 | 5 | pic sensor / pic sensor addr |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
