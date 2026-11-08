# BOS 26.10 功能分析指南（S21 Hyd / zynq-bm3-am2）

日期：2026-11-08　配套：`BOS_FW_REPORT.md`（固件结构）、`bosminer_modules.txt`（200 个模块路径全表）

## 1. 守护进程地图（谁实现了什么）

| 守护进程 | 包路径 | 角色 |
|---|---|---|
| **bosminer-plus-tuner** 0.9.0 | `/usr/bin/bosminer` → nix store，UPX 壳 | 矿机引擎+调优器合一（核心炫酷功能全部在这里），23.8MB 已解壳 → `unpacked/bosminer-plus-tuner` |
| **boser** | nix store（www-merged 内也有一份） | gRPC API 服务器（braiins.bos.v1.*，toolbox 调用的就是它） |
| **braa** 0.82 | nix store | Braiins 云代理（远程管理/遥测上报） |
| **bos-tools** | nix store | 守护/环境工具（安装期 daemonize、print-env） |
| **fwtool** | nix store | 固件升级工具 |
| www-merged | nix store | React Web UI |

init 链：S37board → S38network → S39set-environment → S97recovery-flag → S98boser → S99bosminer（经 bos-tools run-and-watch 拉起）。

## 2. 炫酷功能 → 代码位置（源自解壳二进制的 Rust 模块路径）

### 2.1 自动调优引擎（bosminer-plus/bosminer-plus-tuner/src/）
- `tune/stages/stage1/2/3/4/6/7/8/13.rs` + `stages/gradient_descent.rs` —— **8 级调优状态机 + 梯度下降**，
  这是 BOS+ 算力/能效优化的核心算法（比原厂扫频高级的地方）
- `tune/profile_grid.rs`（profile 网格）、`tune/experiment.rs`（单芯片实验）、`tune/pause.rs`、`tune/save.rs`
- `pll.rs` —— PLL 频率控制底层
- `dps.rs` + `dps/grid.rs` —— **DPS 动态性能调节**（功率步进/关机策略/boost 模式）
- `persistence.rs` —— 调优结果持久化（跨重启恢复 profile）

### 2.2 硬件抽象与 EEPROM（同上 src/）
- `eeprom/antminer/x19_j.rs`、`x19_plain.rs`、**`x21_aes/types.rs` + `xxtea.rs`** —— hashboard EEPROM
  解析（x21 代用 AES+XXTEA 加密；这就是水冷板/hashboard 身份与校准数据入口）
- `miner/antminer/hashboard.rs`、`miner/model.rs`、`platform.rs` —— 型号运行时识别

### 2.3 挖矿引擎（bosminer/bosminer/src/）
- `client/stratum_v1.rs`、**`client/stratum_v2.rs` + `connectors/{noise,insecure,v1}.rs` + `extension.rs`**
  —— 完整 Stratum V2（含 Noise 协议握手、SRI 扩展）
- `work/engine.rs` + `work/solver.rs` + `hub.rs` —— 工作分发引擎
- `api/rpc.rs` —— cgminer 兼容 API（只读锁定见 cgminer_readonly）
- `experimental/watch.rs` —— 实验特性开关
- hal：`bosminer-hal/src/sysfs/{controlboard_fan,hwmon_fan}.rs` —— 风扇/控制板风扇 sysfs 层

### 2.4 BOS+ 商业层（bosminer-plus/bosminer-plus/src/）
- `bos_mgmt/stratum2.rs`（S2 管理通道）、`bos_mgmt/sync.rs`、`bos_mgmt/telemetry/{common,devfee,tuner}.rs`
- `devfee.rs` —— 开发费逻辑（分析计费/抽水行为的目标）
- `license.rs` + `license/loader.rs` —— OS+ 许可证体系（含 `ApplyContractKey` 通道）
- `braa.rs`、`pool_groups.rs`、`metrics.rs`、`oitpdu.rs`

## 3. 高级设置 22 项（官方 schema，`advanced_settings_schema.json`，带描述）

低温预热/除霜 `enable_defrost`+`defrost_*`、连续调优 `enable_continuous_tuning`、
风扇效率模式 `fan_maximum_efficiency_mode`、最小风扇 PWM 及启动模式、
爬坡控制 `normal_ramping_time_up/down_{mode,s}`、启动冷却 `start_cooldown_*`、
过热恢复 `overheat_recovery_mode`、**容错 `rambo_mode`**（"fault tolerance level"，容忍芯片/PSU 错误）、
随机启动延迟 `startup_delay_max_s`（防集群同步启动）、mDNS 发现、
`allow_missing_voltage_feedback`（无电压反馈可启动）、`allow_disabling_hashboards_on_nopic_miners`、
`ignore_internal_chip_temperature`、`cgminer_readonly`。

schema 端点：`https://developer.braiins-os.com/advanced-settings/latest/schema.json`（版本化）。

## 4. gRPC API（全部 proto 已到手）

`bos-plus-api/proto/bos/v1/`：actions / advanced_settings / authentication / common / configuration /
constraints / cooling / license / miner / network / performance / pool / units / work / upgrade (+version)。
来源 `github.com/braiins/bos-plus-api`（main，2026-09 更新，Braiins 官方开源）。
配合 toolbox 侧解码出的 `toolbox/device_data.proto` 等即可完整还原 minertoolbox↔miner 通信。

## 5. 分析入口建议（按性价比排序）

1. **调优状态机**：Ghidra 打开 `unpacked/bosminer-plus-tuner`（ARM32 musl，静态链接，无壳），
   以 stage*.rs 字符串/日志定位各 stage 函数，还原梯度下降的目标函数与步进策略——炫酷功能之王
2. **EEPROM 加密**：`x21_aes` + `xxtea.rs` 字符串定位 → 还原密钥派生与校准数据格式（对水冷板直接有用）
3. **DPS**：`dps/grid.rs` + `DpsConfiguration` proto 对照，还原功率步进/关机决策表
4. **Stratum V2**：不需要逆向——连接器结构+官方 proto+公开规范即可对齐实现
5. **devfee/license**：字符串+flow 分析（合规评估用）
6. 运行态捷径：机器上 `bosminer --help`、`boser` 的 gRPC 反射、`/metrics`、cgminer API 全部可用

## 6. 本次产出文件（toolbox_re/）
- `bos_fw/unpacked/bosminer-plus-tuner` —— 解壳后的核心二进制（Ghidra 直接开）
- `bos_fw/bosminer_modules.txt` —— 200 个 Rust 模块路径全表
- `bos_fw/advanced_settings_schema.json` —— 官方高级设置 schema
- `bos-plus-api/` —— 16 个官方 proto
- `bos_fw/{zynq_rootfs,aml_rootfs,zynq_install}` —— 解包的 rootfs 与安装套件
