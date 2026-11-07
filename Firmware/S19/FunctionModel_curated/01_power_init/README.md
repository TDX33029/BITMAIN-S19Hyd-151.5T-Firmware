# 01 电源初始化（Power Init）

对应固件中的 PSU 上电、型号识别、电压设定与回读。PSU 通过 **I²C** 挂在控制板上，
不是 UART。

---

## 1. 入口与调用关系

```
board_power_init_sequence  0x388ec   （板级初始化，调用者 0x3f2d0 / 0x39544）
├─ 选择目标电压（按板型字符串，见 §2）
├─ power_init 0x1cd50
│   ├─ power_get_type_version 0x4f034
│   │   └─ power_open_if_needed 0x4f890 → power_open 0x4f1d4 → i2c_device_open 0x50a64
│   ├─ power_type_is_supported 0x20854
│   ├─ GPIO 0x38b 置 1（0x479e8）
│   ├─ wait_sensor_stable 0x1cba0
│   ├─ set_voltage_by_steps 0x1cc60
│   │   └─ bitmain_set_voltage 0x50390 → power_type_to_voltage_code 0x4fff4
│   ├─ GPIO 0x38b 置 0（0x479b0）
│   └─ get_min_voltage 0x1caa8（3 次，≥ 75% 目标即成功）
└─ …随后进入 chain_asic_detect 0x37218（见 03_asic_count_detect）
```

## 2. 目标电压由板型决定

`0x388ec` 读取板型字符串（`FUN_0001fffc`）后选择 `power_init` 的参数：

| 板型字符串 | 参数 | 换算后 | 说明 |
|---|---:|---:|---|
| `BHB28601` | `0x76C` = 1900 | **19.0 V** | 单位 10 mV |
| `HHB28601` / `HHB28602` | `0x834` = 2100 | **21.0 V** | |
| 其它 | `0x5DC` = 1500 | **15.0 V** | 默认档 |

`set_voltage_by_steps` 中除以 `DAT_0001cd48 = 100.0`（10 mV → V）：

```c
dVar3 = (double)param;               // 例如 1900
FUN_00050390(dVar3 / 100.0);         // 传给 set_voltage 的是 19.0 (V)
```

## 3. power_init 0x1cd50 步骤

1. `power_get_type_version()` 取得 PSU 类型/版本，存入 `DAT_00891d8` 和 `DAT_0050fac0`。
2. `power_type_is_supported(type)`：查表 `DAT_0071c47c`（长度 `DAT_0071c478`），
   不在表内打印 `power type version error` 并返回 -1。
3. 打印 `Initializing the power, please wait, this may take up to 2 minutes...`。
4. `0x479e8`：GPIO `0x38B` 置 1（PSU 使能/复位释放，具体极性需结合原理图确认）。
5. `wait_sensor_stable`：每秒比较两路传感器读数，差值 ≤ 5 或等满 180 秒后继续；
   日志 `Slept %d seconds, diff = %d.`。
6. `set_voltage_by_steps(target)`：设定初始电压，成功后把目标值写入
   `DAT_000891d0` / `DAT_000891d4`。
7. `0x479b0`：GPIO `0x38B` 置 0。
8. 最多 3 次、每次间隔 1 秒读取 `get_min_voltage()`，要求
   `min_voltage ≥ target × 0.75 / 100`；否则打印
   `power voltage can not meet the target` 并返回 -1。

## 4. PSU 打开与协议

### 4.1 打开（0x4f1d4）

- 加锁 `DAT_0050fc28`，调用 `i2c_device_open(&{0x00020001})`：
  - `+4` u16 = 1 → I²C 总线 1
  - `+6` = 2，`+7` = 0 → 从机地址 `(0<<1) | (2<<4)` = **0x20**
- 成功后 `DAT_0050fabc = 1`，`DAT_0050fab8` 保存句柄。
- 读取 PSU 类型/版本，清零并初始化 0x160 字节的型号参数区 `DAT_0050fac8`。
- 按版本选择协议（v1/v2），并初始化电压/电流换算系数。

### 4.2 命令帧（0x4e110 v1 / 0x4e2c4 v2）

```
写 N 字节（命令 + 数据）
等待 400 ms
读 8 字节应答
校验：应答[0]==命令[0]、[1]==命令[1]、[3]==命令[3]、长度匹配、字节和校验
失败重试 3 次，仍失败返回 0x80000300
```

- v1 命令头：`0x0204AA55`（`local_830 = 0x204aa55`，6 字节）
- v2 命令头：`0x0204`（`local_82c = 0x204`，6 字节）
- 读/写单字节由 `0x50e30` / `0x50d88` 完成（底层 I²C 收发）。

### 4.3 电压换算 0x4fff4

按 PSU 类型 `DAT_0050fac0` 选择线性公式，把电压（double）换算成 PSU 的 DAC 码：

| PSU 类型 | 公式（伪代码） |
|---|---|
| `0x22` | `A - V * B`（系数 @0x50348/0x50350） |
| `0x41`, `0x42` | `A - V * B`（@0x50328/0x50330） |
| `0x43` | `A - V * B`（@0x50358/0x50360） |
| `0x61` | `A - V * B`（@0x50368/0x50370） |
| `0x62`, `0x64`, `0x65`, `0x66` | `A - V`（@0x50378） |
| `0x71`, `0x72`, `0x75`, `0x77` | `A - V * B`（@0x50318/0x50320） |
| `0x73`, `0x78` | `A - V * B`（@0x50380/0x50388） |
| `0x74`, `0x76` | 其余分支，见伪代码 |

> 这些系数就是“型号适配”的核心。换 PSU 型号时，除了类型要落在支持表里，
> 还必须提供对应的线性系数，否则电压会算错。

## 5. 关键全局变量

| 地址 | 含义（推断） |
|---|---|
| `DAT_0050fac0` | PSU 类型/版本（0x22/0x41/…/0x78） |
| `DAT_0050fab8` | PSU I²C 句柄 |
| `DAT_0050fabc` | 已打开标志 |
| `DAT_0050fac4` | 换算缓存/标定标志（`0x4fff4` 中与 `DAT_0050fc40` 联合判断） |
| `DAT_0050fac8` | 0x160 字节型号参数区 |
| `DAT_00891d8` | PSU 类型版本副本 |
| `DAT_000891d0` / `DAT_000891d4` | 当前设定电压（10 mV） |
| `DAT_0071c478` / `DAT_0071c47c` | 支持的 PSU 类型表（数量/指针） |

## 6. 函数清单

| 地址 | 名称 | 作用 |
|---|---|---|
| `0x388ec` | board_power_init_sequence | 板级初始化：选电压、调 power_init、随后触发链检测 |
| `0x1cd50` | power_init | PSU 上电 + 初始电压 + 75% 校验 |
| `0x4f890` | power_open_if_needed | 未打开则调用 power_open |
| `0x4f1d4` | power_open | 打开 I²C、读版本、初始化型号参数区、选协议 |
| `0x4f034` | power_get_type_version | 读 PSU 类型/版本，v1 失败降级 v2 |
| `0x20854` | power_type_is_supported | 查支持表 |
| `0x50a64` | i2c_device_open | 打开 I²C 设备并设置从机地址 |
| `0x4e110` / `0x4e2c4` | power_cmd_v1 / v2 | 命令帧收发、校验、3 次重试 |
| `0x4ee90` | power_close | 关闭句柄并清零状态 |
| `0x4f8b4` | power_read_voltage | 读 PSU 电压 |
| `0x4fd58` | power_is_calibrated | 是否已校准 |
| `0x4fe60` | power_get_sw_version | 读 PSU 固件版本 |
| `0x1cba0` | wait_sensor_stable | 等传感器读数稳定（≤5 或 180 s） |
| `0x1cc60` | set_voltage_by_steps | 10 mV → V 后调用 set_voltage |
| `0x1caa8` | get_min_voltage | 4 条链中取最小电压 |
| `0x1c978` | get_chain_voltage | 单链电压（含校准系数） |
| `0x4fff4` | power_type_to_voltage_code | 电压 → PSU DAC 码（按型号） |
| `0x50390` | bitmain_set_voltage | 设定电压入口（含自动打开） |
| `0x506f8` | bitmain_get_voltage | 读取电压入口 |
| `0x4e544` | power_get_dc_voltage | 读 DC 电压（`Get power dc_volt value failed`） |
| `0x4e648` | power_cmd_0x05 | PSU 0x05 命令 |
| `0x4e718` | power_get_ac_voltage | 读 AC 输入电压 |
| `0x4e7fc` | power_get_error_code | 读错误码 |
| `0x4e960` | power_get_reset_cause | 读复位原因 |
| `0x4ea28` | power_get_update_time | 读 PSU 运行/更新时间 |
| `0x4eae4` | power_get_error_data | 读错误数据块 |
| `0x479e8` | gpio_power_enable_high | GPIO `0x38B` 置 1 |
| `0x479b0` | gpio_power_enable_low | GPIO `0x38B` 置 0 |

## 7. 改造提示（动态电压）

1. 电压设定最终都汇到 `0x50390 bitmain_set_voltage`，从这里介入可以覆盖
   初始化、升温补偿、手动设置等所有路径。
2. 不要绕过 `0x4fff4`：它把伏特换算成该型号 PSU 的 DAC 码，直接写码会因型号而异。
3. 若新 PSU 型号不在 `DAT_0071c47c` 表内，`power_init` 会直接失败；
   需要扩表或改 `0x20854` 的判断。
4. 初始电压只在 `0x1cd50` 设定一次，之后由温度/频率逻辑再次调用
   `set_voltage_by_steps`；做动态电压时应复用该入口，避免与现有电压保护冲突。
