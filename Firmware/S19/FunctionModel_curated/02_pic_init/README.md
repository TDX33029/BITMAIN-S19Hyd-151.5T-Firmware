# 02 PIC 初始化（PIC Init）

每条算力链一颗 PIC16F1704，负责 DC-DC 使能、电压采样、温度采样、心跳和固件升级。
bmminer 通过 **I²C** 访问 PIC（总线 0），不是 UART。

---

## 1. I²C 拓扑

`i2c_device_open 0x50a64` 用 6 字节描述符打开设备：

| 字段 | PIC 取值 | 含义 |
|---|---:|---|
| `+4` u16 | 0 | I²C 总线号 |
| `+6` u8 | 4 | 地址高半字节 |
| `+7` u8 | chain | 地址低位 = chain |

从机地址计算：`addr = (chain << 1) | (4 << 4)` → **0x40 + 2×chain**

| chain | 地址 |
|---:|---:|
| 0 | 0x40 |
| 1 | 0x42 |
| 2 | 0x44 |
| 3 | 0x46 |

> 同一套 `0x50a64` 也用于 PSU（总线 1、地址 0x20），见 `01_power_init/README.md`。

## 2. 打开与句柄

`pic_open 0x4b97c`：

```c
if (chain < 0x10) {
    fd   = DAT_00b2d298[chain];      // 每链句柄
    flag = DAT_00b2d29c[chain];      // 已打开标志
    if (fd == 0 || flag == 0) {
        fd = i2c_device_open(&{chain, 0, 4, chain});
        DAT_00b2d298[chain] = fd;
        DAT_00b2d29c[chain] = 1;
    }
} else {
    return pic_open_invalid_chain(); // 0x4b7d8，返回 0x80000201
}
```

- 句柄表 16 项（`chain < 0x10`），S19 Hydro 实际只用到 0–3。
- 所有 PIC 操作函数入口都会检查“已打开”，未打开则**自动** `pic_open`，
  失败时日志形如 `%s: auto exec open_pic, but chain %d open eeprom failed`。
- `pic_open_invalid_chain 0x4b7d8` 只是参数越界时的错误桩，固定返回 `0x80000201`。

## 3. 传输原语

| 地址 | 名称 | 说明 |
|---|---|---|
| `0x50d00` | i2c_write_block | 加锁后写 N 字节，返回实际写入数 |
| `0x50c78` | i2c_read_block | 加锁后读 N 字节，返回实际读取数 |
| `0x4c5c0` | pic_write_iic_byte | 写单字节/短帧，然后读 2 字节应答 |
| `0x4ce44` | pic_iic_block_rw | 写数据块（长度 ≤ 0x3f），读 2 字节应答 |
| `0x4d104` | pic_iic_block_rw2 | 同上，另一种帧格式 |
| `0x4da28` | pic_read_iic | 命令 `0x3C06AA55` + 地址，读回数据 |
| `0x4c7d4` | pic_seek_1704 | 进入 1704 编程模式（应答 8 → 2） |

典型时序（以 `pic_get_version` 为例）：

```
写 6 字节（含命令 0x1B00）
等待 300 ms
读 5 字节（版本 + 校验）
失败重试 3 次，仍失败返回 0x80000200
```

## 4. 命令与应答（从伪代码比较值推断）

| 功能 | 地址 | 第一次应答 | 第二次应答 |
|---|---|---:|---:|
| 读版本 | `0x4bad0` | 6 | 5（含校验） |
| 复位 | `0x4bcd4` | 6 | 2 |
| 启动 APP | `0x4be78` | 6 | 2 |
| 使能 DC-DC | `0x4c050` | 7 | 2 |
| 关闭 DC-DC | `0x4c224` | 7 | 2 |
| 心跳 | `0x4c3f0` | 6 | 6 |
| 进入编程模式 | `0x4c7d4` | 8 | 2 |
| 读电压（mode 3） | `0x4ca78` | 6 | 0x0B |
| 读电压（mode 1） | `0x4ca78` | 6 | 7 |

- “应答”是 PIC 返回帧里的状态/长度字节，不是主机发送的命令码。
- 读电压使用命令 `0x3B00`（mode 3）或 `0x3E00`（mode 1），返回 3 组 16 位值
  （`param_2[0..2]`），并做累加和校验。
- 读版本时会校验 `应答[0..1]` 与 `版本 + 0x1C` 的关系。

## 5. 链级流程

```
chain_pic_reset_flow 0x3670c
├─ chain_pic_reset_check 0x1c888 → pic_reset 0x4bcd4
├─ 成功：
│   ├─ chain_pic_start_and_check_version 0x1c8c0
│   │   ├─ pic_start_app 0x4be78
│   │   ├─ usleep(500 ms)
│   │   └─ pic_get_version 0x4bad0（日志 Check chain[%d] PIC fw version=0x%02x）
│   └─ pic_disable_dcdc 0x4c224
└─ 失败：
    ├─ set_chain_present(chain, 0)      // 0x2013c
    ├─ 日志 Chain %d PIC reset failed.
    └─ 返回 -1
```

`chain_pic_heartbeat_check 0x1c8a8` 是对 `pic_send_heartbeat` 的薄封装，返回 0/1。

## 6. 函数清单

| 地址 | 名称 | 作用 |
|---|---|---|
| `0x4b97c` | pic_open | 打开某链 PIC 的 I²C 句柄（自动调用） |
| `0x4b7d8` | pic_open_invalid_chain | 链号 ≥ 0x10 的错误桩 |
| `0x4bad0` | pic_get_version | 读 PIC 固件版本 |
| `0x4bcd4` | pic_reset | 复位 PIC |
| `0x4be78` | pic_start_app | 从 bootloader 跳 APP |
| `0x4c050` | pic_enable_dcdc | 使能 DC-DC |
| `0x4c224` | pic_disable_dcdc | 关闭 DC-DC |
| `0x4c3f0` | pic_send_heartbeat | 心跳 |
| `0x4c5c0` | pic_write_iic_byte | 写短帧并读应答 |
| `0x4c7d4` | pic_seek_1704 | 进入 1704 编程模式 |
| `0x4ca78` | pic_get_voltage | 读 PIC ADC 电压（两种模式） |
| `0x4ce44` | pic_iic_block_rw | 数据块写 + 应答 |
| `0x4d104` | pic_iic_block_rw2 | 数据块写 + 应答（变体） |
| `0x4da28` | pic_read_iic | 读 PIC I²C 数据（命令 0x3C06AA55） |
| `0x50a64` | i2c_device_open | 打开 I²C 设备并设置从机地址 |
| `0x50c78` | i2c_read_block | I²C 读封装（加锁） |
| `0x50d00` | i2c_write_block | I²C 写封装（加锁） |
| `0x1c888` | chain_pic_reset_check | 复位并返回成功/失败 |
| `0x1c8a8` | chain_pic_heartbeat_check | 心跳并返回成功/失败 |
| `0x1c8c0` | chain_pic_start_and_check_version | 启动 APP + 延时 + 读版本 |
| `0x3670c` | chain_pic_reset_flow | 链级 PIC 复位编排 |

## 7. 限制与待补

- **固件升级函数未包含**：`upgrade_pic`（启发式地址 `0x4d3e0`，约 1608 字节）
  位于 `0x4d104` 与 `0x4da28` 之间的空隙。Ghidra 自动分析没有在该区间定义函数，
  需要手动反汇编后再导出；它包含 `_bitmain_pic_erase_1704`、`_bitmain_pic_write_1704`、
  `_erase_pic_app`、`_update_pic_app_program_1704` 等日志，是 ICSP 时序的直接参考。
- PIC 命令码（除 `0x1B00`/`0x3B00`/`0x3E00`/`0x3C06AA55`）多数以结构体字段形式
  出现，未逐条还原；需要精确协议时应对 `0x4ce44`/`0x4d104` 做寄存器级跟踪。
- `0x4ce44`、`0x4d104`、`0x4c7d4`、`0x4da28` 在 Ghidra 中显示无调用者，
  实际可能通过函数指针表调用；引用关系需结合数据段交叉引用确认。
