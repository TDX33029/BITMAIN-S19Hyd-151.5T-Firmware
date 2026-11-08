# BOS 动态调压（Dynamic Voltage Regulation）功能地图

来源：`BraiinsOS/unpacked/bosminer-plus-tuner`（26.10-plus，UPX 已解壳）
方法：Ghidra 12.2 headless 全量分析（20,213 函数）→ 电压相关字符串引用反查 → 反编译
产出：`voltage_index.csv`（49 函数索引）、`decomp/*.c`（反编译代码，38,219 行）、`source_locations.json`

## 1. 调压体系分层（从字符串/模块路径/源位置表证据还原）

```
┌─ 调优引擎（决策层：要多少电压）
│   tune/experiment.rs (L1-1846)      单芯片/电压域实验（85 个源位置，最重）
│   tune/stages/gradient_descent.rs   梯度下降目标函数（37 locs）
│   tune/stages/stage2/3/8/13.rs      调优状态机各级（电压-频率扫描）
│   tune/profile_grid.rs              频率-电压工作点网格
│   tune/save.rs                      工作点持久化
│   pll.rs                            频率端（与电压耦合）
├─ DPS（功率策略层）
│   dps.rs (L1-797) + dps/grid.rs     功率目标→电压/频率步进
├─ 硬件执行层（bosminer_am2_s17::hardware::*）
│   hashboard/power.rs + power/antminer.rs (L1-1015, 70 locs)  ← 动态调压主实现
│   · 电压域(voltage domain)使能/校验/回读
│   · DC-DC 稳压器：TPS6287x（I2C，STATUS 寄存器/过压/热关断/限流检测）
│   · Lm75aViaVoltageController / PsuAsVoltageController   温度传感器↔调压控制器抽象
│   antminer/psu.rs + psu/backend.rs (L1-291) + psu/i2c.rs + psu/command/*
│   · SetVoltageCommand / ReadVoltageCommand / GetConfiguredVoltageCommand
│   · "PSU: Setting initial voltage / Ramping voltage / Enable voltage"
│   controlboard/{zynq,aml,bbb,cvitek}.rs   各控制板 I2C/UART 底层
├─ 配置与校准
│   eeprom/x19_j | x19_plain | x21_aes(+xxtea)   hashboard 出厂电压校准
│   bosminer-config body/base.rs:499-716          "chain voltage vs shared voltage control" 校验
└─ 观测与容错
    metrics: tuner_domain_voltage / chip_voltage / hashboard_voltage / voltage_domain_mcr
    allow_missing_voltage_feedback（无电压反馈降级启动）· PsuAsVoltageController 兜底
    错误码 P1-P7（PSU 初始化/设压/I2C/兼容性）
```

## 2. 关键反编译函数（voltage_index.csv 全 49 条，这里列核心）

| 地址 | 大小 | 作用（按字符串证据） |
|---|---|---|
| `00bed9fc` | 35,148 | **开发者 API 总控**：start/stop chains、set voltage、set frequency、tuner start/stop |
| `00b11040` | 5,976 | **Preheat 阶段：电压阈值查找**（"Finding threshold voltage"→预热完成）——低温启动的调压状态机 |
| `00907600` | 5,848 | 型号硬件描述解析：min/max_frequency、**voltage_range**、shared_voltage_control |
| `008fcd58` | 2,856 | 配置校验：chain voltage vs shared voltage control |
| `0092fed0` | 1,204 | VoltageRange（min_voltage/max_voltage）序列化 |
| `008232c0` / `00823d64` | 644/492 | PSU I2C 短应答处理（v2 协议） |
| `008681f4` | 1,604 | PSU undervoltage 处理 |
| `00902450` | 5,288 | quick_ramping + voltage + asic_boost 配置段 |
| `00c00464` | 768 | P1-P7 PSU 错误码定义（设压失败/I2C/兼容性） |
| `006e727c` | 9,632 | 高级设置注册表（含 allow_missing_voltage_feedback） |

注：`power/antminer.rs`（1015 行、70 源位置）的域级设压/回读函数未被 49 个字符串锚点全覆盖，
后续可按源位置行号在 Ghidra 中定位补全（项目已保存，可直接打开）。

## 3. 与股票 bmminer 的对应关系（你们已反编译的部分）

| 股票 bmminer（S19 Hydro，Ghidra 已还原） | BOS 对应 |
|---|---|
| `set_voltage_by_steps`（0x1cc60，分级设压） | "PSU: Ramping voltage" 序列 |
| `power_cmd_v1 / power_cmd_v2`（0x4e110/0x4e2c4） | `psu/command/*Command` 类型化命令 |
| `pic_enable/disable_dc_dc_common` | TPS6287x 使能/STATUS 检查 |
| `get_chain_voltage / get_min_voltage` | `GetConfiguredVoltageCommand` + VoltageRange |
| `wait_sensor_stable` + 电压反馈校验 | "The hashboard measured a different voltage than was set" 校验 + allow_missing_voltage_feedback 降级 |

## 4. 数据流（动态调压一拍）

```
目标(功率目标/温度/预热带) 
  → tune stages + gradient_descent 选工作点 (freq, volt)   [profile_grid]
  → dps.rs 步进限制校验（DpsConstraints/PowerConstraints）
  → hashboard/power/antminer.rs: TPS6287x I2C 写电压码（按 voltage domain）
  → PSU SetVoltageCommand（共享电压域时经 PSU；"shared PSU voltage"）
  → 回读校验：ReadVoltageCommand + hashboard 电压反馈 vs 设定值
  → 偏差→P 系列错误码 / PsuAsVoltageController 降级 / pause cooldown
  → metrics: tuner_domain_voltage, chip_voltage 持续上报（braa 遥测）
```

## 5. 工具与复现

- Ghidra 工程：`BraiinsOS/analysis/ghidra_project/BOS.gpr`（已分析保存，GUI 直接打开继续标 注）
- 全量函数清单：`analysis/out/ghidra_functions.csv`（20,213 函数，含字符串证据）
- 复现脚本：`analysis/ghidra_scripts/ExportAndDecompileVoltage2.java`（引用跟随两级解引用）
- 静态扫描脚本：`analysis/extract_functions_v3.py` / `extract_voltage.py`（免 Ghidra 的快速通道）
