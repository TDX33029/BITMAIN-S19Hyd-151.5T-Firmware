# 08 遥测与云代理（braa / metrics / devfee）——思路方法

## 结构

- `braa`（0.82，34KB 独立二进制）——Braiins 云代理，矿机↔云端管理通道
- `bosminer-plus/src/bos_mgmt/telemetry/`（common/devfee/tuner 三路）
- `metrics.rs` + `/metrics` Prometheus 端点 + `mgmt` 命名空间

## 思路要点

1. **遥测三分离**：通用遥测 / devfee 计量 / tuner 内部状态三条独立管线，
   各自的频率与生命周期不同——不要做成一条大管子。
2. **metrics 即调试接口**：调优器把内部状态（tuner_stage、tuner_domain_voltage、
   voltage_domain_mcr）全量导出，Prometheus 格式。任何复杂系统都该这样做。
3. devfee 与 attribution 独立模块（`devfee.rs`、`mining/attribution.rs`）——
   计量与业务隔离，便于审计。你们重写时只学结构，不实现它的抽水逻辑。

## 重写要点

云代理用你们自己的协议；值得搬的是 **metrics 全量导出的习惯** 和
**遥测管线分通道** 的结构。braa 二进制无需逆向（角色清晰）。
