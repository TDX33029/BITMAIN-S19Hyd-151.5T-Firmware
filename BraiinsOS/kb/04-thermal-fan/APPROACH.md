# 04 温控/风扇（Thermal & Fan）——思路方法

## 解决的问题

水冷/风冷机型的温度-性能平衡：芯片温度墙、进出水温、板温差异、
低温启动、暂停时的风扇策略、过热后的恢复行为。

## 思路

### 1. 传感器拓扑显式建模

`WaterInlet / WaterOutlet / PsuSensor / pcb_sensor / internal_voltage_domain`
（`00813248` 证据：fan_feedback / filtered_fan_speed / input_temperature /
decision_explained / temperature_settled / fans_broken / FanFeedback / UnknownTemp /
NotPreheated / threshold_temp / TooCold / Dangerous）。
**学点：`decision_explained` 字段——温控决策连同理由一起上报**，运维不用猜。

### 2. PID + 策略模式混合

`pid_descriptor`（型号硬件描述里）、`UsePid / UsePauseControl / UseFixedSpeed`
三个控制模式共存；`temp_control / hash_chain / hash_chain_global / fan_control`
四个配置组（`0090fb58`）——**每条链可独立温控，也可全局**。

### 3. 温度分级状态机

`target_temp / hot_temp / dangerous_temp`（device_data.proto StaticData 字段）+
`overheat_recovery_mode`（过热暂停后的恢复行为可配置）+
`ignore_internal_chip_temperature`（内部传感器不可信时降级到外部传感器）。
分级不是硬编码阈值，而是**型号元数据**（`00934088`：S21 XP Hyd/S19e XP Hyd/
U3S21EXPH 等型号表驱动）。

### 4. 风扇细分能力

`min_fan_pwm / min_fan_pwm_mode(Auto/Manual)`、`fan_maximum_efficiency_mode`
（用进风+出风双传感器把风扇压到最低可接受转速）、`PauseForBrokenFans`。
风扇故障检测：`fans_broken` + `fan_rpm_ok`。

### 5. 低温预热（与 03 联动）

`NotPreheated / TooCold / threshold_temp` → 进入 03 的 Preheat 状态机
（升压自发热），`Preheat finished` 后转正常温控。

## 锚点

`00813248`(温控决策模型) `0090fb58`(温控配置组) `00934088`(型号温控元数据)
`00e5e024`(调优时序中的温度等待参数) proto: `cooling.proto`

## 重写要点

1. 温控决策带"解释"输出——可观测性是温控调参的前提
2. 阈值放型号元数据，代码里只放状态机
3. 风扇策略在暂停/预热带/正常三态下都要显式定义
4. 传感器可信度分级（内部芯片温不可信→外部传感器），不要一棵树上吊死
