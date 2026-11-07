# 03 动态调压（Voltage/Power）——思路方法

> 详细函数级地图见 `../out/voltage/VOLTAGE_MAP.md`（49 个已反编译函数）。
> 本文讲设计思路与重写要点。

## 解决的问题

S19/S21 世代 hashboard 有**多电压域**（`num_chips_per_voltage_domain`），每域由
TPS6287x DC-DC 供电；整机 PSU 可能共享电压轨（`shared_psu_voltage`）。
要解决：① 设多少压（和调优器联动）② 怎么设（I2C 时序/爬坡）③ 设完怎么验证
④ 出错怎么降级。

## 思路分解

### 1. 控制器抽象（值得学的接口设计）

```
VoltageController trait（推断自结构证据）
├── Tps6287xController      域级 DC-DC（I2C，STATUS/过压/热关断/限流寄存器）
├── PsuAsVoltageController  兜底：PSU 直接当调压器（无域级 DC-DC 的机型）
└── Lm75aViaVoltageController  温度传感器复用为电压监控通道
```
`PsuAsVoltageController` 这个命名本身就是设计答案：**硬件差异用"适配器"吸收，
上层调优器永远面对同一个接口**。

### 2. PSU 命令层（类型化命令，对照你们已反编译的 bmminer）

| bmminer（原厂） | BOS |
|---|---|
| `power_cmd_v1/v2`（裸字节协议） | `SetVoltageCommand` / `ReadVoltageCommand` / `GetConfiguredVoltageCommand` 类型化封装 |
| `set_voltage_by_steps` 开环分级 | "PSU: Setting initial voltage → Ramping voltage" 显式爬坡状态 |
| 无版本协商 | `voltage controller firmware version` 检查 + P5/P6/P7 兼容性错误码 |

### 3. 闭环校验（原厂没有的部分）

- 设定后回读：`ReadVoltageCommand` + hashboard 端电压反馈比对
- 偏差处理分级：
  - 可容忍 → 继续运行
  - `allow_missing_voltage_feedback=true` → 无反馈也启动（NoPIC 机型/维修场景）
  - 不可容忍 → 错误码 "The hashboard measured a different voltage than was set on PSU"
- 全链错误码 P1-P7：初始化/设压/I2C 读写/兼容性，**每个错误码带用户可读的处置建议**
  （见 `00c00464.c` 反编译——错误信息里直接写"检查 PSU 连接线或换 PSU"）

### 4. 低温预热（Preheat）——调压与温控的交叉点

`00b11040`（5,976B）：**"Finding threshold voltage"** 状态机——
冷机时逐级升压让芯片自发热，找到"能开始 Hash 的最低电压阈值"后转正常调优。
`enable_defrost / defrost_temperature_limit_c / defrost_timeout_{mode,s}` 是它的配置面。
**水冷机冬季启动的实际问题，用一个小状态机优雅解决。**

## 关键函数锚点

`00bed9fc`(devel API 总控) `00b11040`(preheat) `00907600`(型号电压范围)
`008fcd58`(chain vs shared voltage 校验) `0092fed0`(VoltageRange) `00c00464`(P1-P7)

## 重写要点

1. **接口先行**：先定义你的 VoltageController trait，再写实现——BOS 的可移植性全靠这层
2. 爬坡必须有状态（initial→ramping→enable），每步之间留 settling time
3. 回读校验是闭环的根；"允许无反馈"必须是显式配置项而不是静默跳过
4. 错误码带处置建议——运维价值极高，成本极低
5. 域级电压和 PSU 级电压要区分清楚（`chain voltage vs shared voltage control` 的
   配置校验就是为此存在，见 `bosminer-config/body/base.rs:499-716`）
