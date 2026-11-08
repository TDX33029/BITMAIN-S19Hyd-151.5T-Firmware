# 01 自动调优（Autotuning）——思路方法

## 解决的问题

ASIC 出厂只给标称工作点。实际每颗芯片漏电流不同、温度不同，最优 (频率, 电压) 组合
逐芯片差异巨大。目标：**在功耗/温度约束下把每颗芯片推到它自己的能效峰值**，
并且环境变化（水温/室温/老化）时持续跟随。

## Braiins 的思路（与原厂扫频的本质区别）

原厂（bmminer）：按链统一扫频 → 找到"最差芯片决定"的链级频率 → 开环运行。
BOS+：**按电压域(chip domain)闭环**，且把"找工作点"变成一个持续运行的优化问题。

### 1. 调优状态机（8+ 级，`tune/stages/stage*.rs`）

源位置证据：stage1(1-235) stage2(68-741) stage3(270-1123) stage4(1-276)
stage6/7 stage8(71-1000) stage13(186-601) + stages.rs。
级与级之间传递 `ResolvedChainConfig` / `TempControlConfig`（字符串证据）。
思路要点：
- **stage1 快速起链**：用 EEPROM 出厂校准值直接起，不让用户等
- **中间级粗调**：逐电压域扫 (freq,volt) 网格（`profile_grid.rs` L1-657），
  每步记录 MCR（每周期错误/拒绝率，`voltage_domain_mcr` metric）
- **stage13/高级级精调**：连续微调（`enable_continuous_tuning`）
- 调优可暂停/恢复（`tune/pause.rs` L1-110，`pause_cooldown_mode`）——温控事件不打断收敛状态

### 2. 梯度下降（`tune/stages/gradient_descent.rs` L32-1118，37 个源位置）

把"每颗芯片的能效"作为目标函数，在 (freq, volt) 二维空间做**带约束的梯度下降**：
- 目标函数信号：`voltage_domain_mcr`（欠压→错误率上升）、实时算力、功耗
- 步长控制：`wait_per_mhz_ramp_up/down_quick`（`00e5e024` 函数证据）——
  频率每变 1MHz 的等待时间，防止把瞬态当稳态评估
- 约束：`PowerConstraints` / `TunerConstraints` / `FrequencyConstraints`（proto 定义）
- 收敛后落盘（`tune/save.rs` L1-472，25 locs）→ 重启不重扫（`persistence.rs`）

### 3. 实验引擎（`tune/experiment.rs` L1-1846，85 个源位置——全二进制最重模块）

单电压域 A/B 实验：改工作点 → 与对照组比 MCR/算力 → 决定采纳/回滚。
`init_delay / max_chip_frequency_change / wait_after_change`（`00e5e024`）是实验节奏参数。

### 4. 度量闭环（metrics）

`tuner_domain_voltage`（"Domain voltage calculated by the tuner"）、
`voltage_domain_mcr`、`base_tuning_frequency`、`tuner_stage`（当前级号 gauge）——
调优器把自己的内部状态全部导出为 metrics，既供 boser API 也供自己诊断。

## 关键函数锚点（去 all_decomp 看细节）

| 地址 | 证据 |
|---|---|
| `00907600` | 型号硬件描述：min/max_frequency、voltage_range、num_chips_per_voltage_domain |
| `00e5e024` | 调优时序参数（init_delay/max_chip_frequency_change/wait_per_mhz） |
| `00c65aa8` | tuning_started 状态上报 |
| `00916498` | power_target / hashrate_target 模式切换 |
| `00bed9fc` | devel API：tuner start/stop、per-chain 控制 |

## 重写要点（给你自己的实现）

1. 状态机分级别照抄级数没意义——**学它"先粗后精+可暂停+可持久化"的结构**
2. 评估窗口必须跨过瞬态（wait_per_mhz 是防坑关键参数）
3. MCR（错误率）比算力更适合做欠压信号——响应快且单调
4. 把调优器状态做成 metrics 一等公民，调试时救命
5. 约束（功耗/温度/电压上下限）在优化器入口统一 clamp，不要散在各处
