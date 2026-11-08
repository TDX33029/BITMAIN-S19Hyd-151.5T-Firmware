# 03_pic_ctrl PIC 控制

链上 PIC 的复位、心跳、DCDC 使能、版本读取与 1704 升级。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 11 |
| 程序 | bmminer |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| bmminer | 0x1a1d0 | water_temp_pic_protect | 5412 | 7 | too hot water temperature pic temp %d (min %d)\n / too low water temperature pic temp %d ( |
| bmminer | 0x6e354 | FUN_0006e354 | 356 | 5 | %s: Bad pic param, input chain is %d\n |
| bmminer | 0x6e5c4 | FUN_0006e5c4 | 320 | 5 | %s: Bad pic param, input chain is %d\n |
| bmminer | 0x6e704 | FUN_0006e704 | 312 | 5 | %s: Bad pic param, input chain is %d\n |
| bmminer | 0x6e83c | FUN_0006e83c | 312 | 5 | %s: Bad pic param, input chain is %d\n |
| bmminer | 0x6e974 | FUN_0006e974 | 312 | 5 | %s: Bad pic param, input chain is %d\n |
| bmminer | 0x6eaac | FUN_0006eaac | 312 | 5 | %s: Bad pic param, input chain is %d\n |
| bmminer | 0x6ebe4 | FUN_0006ebe4 | 312 | 5 | %s: Bad pic param, input chain is %d\n |
| bmminer | 0x6e4b8 | FUN_0006e4b8 | 268 | 5 | %s: Bad pic param, input chain is %d\n |
| bmminer | 0x4eb54 | FUN_0004eb54 | 188 | 5 | PIC reset failed.\n / Chain %d PIC reset failed.\n |
| bmminer | 0x2433c | FUN_0002433c | 180 | 5 | Check chain[%d] PIC fw version=0x%02x\n / chain[%d] PIC jump to app\n |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
