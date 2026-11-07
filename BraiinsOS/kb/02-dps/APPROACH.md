# 02 DPS（动态性能调节）——思路方法

## 解决的问题

矿场需要矿机**跟随电价/ curtailment 信号动态调功率**（错峰、限电、需求响应），
而不是只有开/关两态。DPS = 在功率约束下让调优器连续工作在最优能效点。

## 思路

### 1. 双目标模式

`DpsMode: NORMAL / BOOST` + 目标类型 `PowerTarget / HashrateTarget`
（`SetDpsRequest` proto、`dps.rs` L1-797 + `dps/grid.rs`）。
- PowerTarget 模式：给定瓦数 → 调优器在网格上找 ≤W 的最优能效点
- Boost 模式：允许短时超频冲高（配合温度余量）
- 约束分层：`DpsConstraints`（功率上下限/步长/关机时长）在 **proto 层定义、
  引擎入口统一执行**——上层传什么都要先过约束闸

### 2. 步进参数化（可被外部编排的核心）

`dps.shutdown_duration_hours / dps.power_step_watts / dps.min_power_target_watts`
（toolbox 配置证据）+ `quick_ramping_time_up/down_s`（快速爬坡独立于正常爬坡）。
思路：**外部调度器（如 braa 云端）只需要下发目标值，步进节奏由固件自己把关**——
责任边界清晰。

### 3. 与暂停/恢复的配合

`PauseMining/ResumeMining` + `fan_mode_when_paused`（暂停时风扇策略：
AUTO/MANUAL/停转 + 运行时长限制 TWO_MINUTES/INDEFINITELY）。
水冷机暂停还要管泵——`dps.shutdown_enabled`。
**学点：暂停不是"停机"，是一组带策略的降级运行状态。**

## 锚点

`00916498`(power/hashrate target 切换) `0090e60c`(manual/manual_indefinite 状态)
`00930420`(psu_power_limit/min_psu_power_limit) `0092fed0`(VoltageRange 约束)
proto: `performance.proto` / `work.proto` / `cooling.proto`

## 重写要点

1. 功率目标不是"限功率"而是"在约束内重新选工作点"——和调优器一体化设计
2. 快/慢两套爬坡参数（日常 vs 快速响应）很实用
3. 暂停状态的风扇/泵策略要显式建模
4. 所有外部下发值过统一约束闸，固件永远不信任上层
