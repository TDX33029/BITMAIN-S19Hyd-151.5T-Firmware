# braiins-toolbox.exe 逆向分析报告

分析对象：`D:\Document\tempPrj\BITMAIN-S19Hyd-151T-Firmware\braiins-toolbox.exe`（87,443,464 字节）
分析日期：2026-11-07，输出目录：`toolbox_re/`

## 1. 基本身份

| 项目 | 值 |
|---|---|
| 程序名 | **braiins-toolbox 26.08.1** |
| 构建 | git `eb00699aa0761c2c38feb3fd3c8d817f72f49c47`，2026-08-26T13:23:18Z |
| 文件类型 | PE32+ x86-64 控制台程序，10 个节区 |
| 语言 | **Rust**（非 PyInstaller/NSIS/Electron），tokio 异步运行时 |
| 符号 | stripped to external PDB（文件内无 PDB，无导出符号） |
| 函数数量 | `.pdata` 共 **108,685** 个函数 |
| 依赖 crate | 255 个（tokio 1.51, axum 0.8.8, tonic/tonic-web, clap 4.6, russh, aes, reqwest…） |
| 前端 | React + webpack（构建 hash `dfc031ee6f907417`，react-dom 19.x），内嵌于 exe |

注：这是原生 Rust 机器码，**无法像 Python 字节码那样反编译回源码**；本报告通过资源提取、协议还原、CLI 枚举与字符串分析完成结构级逆向。

## 2. 提取产物（toolbox_re/ 目录）

- `assets/` — **120 个内嵌 Web 资源**（共 9.2MB）：React 前端全部 JS chunk、CSS、Braiins 字体、矿池 logo、`index.html`。构建时间 2026-08-26。
- `proto/` + `proto_txt/` — **17 个 protobuf FileDescriptorProto** 已解码为可读 `.proto`（`toolbox/device_data.proto`、`pool_presets_service.proto`、20 余个 action 服务定义）。
- `extract_assets.py` — 资源提取脚本（可复现）。
- `unlock_strings.txt`、`all_src_paths.txt`、`crate_names.txt` — 字符串/模块路径分析中间产物。

## 3. 架构

```
braiins-toolbox.exe（单文件）
├── CLI（clap 4）：scan / firmware / system / miner / tuner / cooling /
│                 custom-contract / self / advanced
├── GUI 模式：axum HTTP 服务，默认监听 127.0.0.1:8888，伺服内嵌 React 前端
├── gRPC 服务端（tonic）：28 个 braiins.toolbox.* 服务，供前端调用
│     DeviceListService, ActionListService, ConfigService, LogsService,
│     PoolPresetsService, TemplateVariablesService, UtilityService,
│     ValidatorService, AuxiliaryService, ApplyCustomContractCodeService,
│     InstallActionService, RestoreActionService, UpgradeActionService,
│     Start/Stop/Restart/Pause/Resume/Reboot/Execute/CollectData/
│     LocateDevice/ConfigureCooling/ConfigureDps/ConfigurePerformance/
│     ConfigurePools/ConfigureAdvancedSettings/RemoveTunedProfilesActionService
└── 矿机通信客户端
      ├── SSH（russh）— root@矿机，可配自定义密码
      ├── cgminer API v2/v3（rpc/ 模块，Bitmain/MicroBT 裸机协议）
      ├── LuCI 探测（/cgi-bin/luci，股票固件 Web UI）
      └── BOS gRPC（braiins.bos.v1.*，已装 Braiins OS 的矿机）
```

## 4. 关键机制

### 4.1 固件安装与解锁（与 S19 Hydro 相关的核心）
- 下载源（硬编码）：`https://downloads.braiins.com/braiins-os`、`https://downloads.braiins.com/braiins-toolbox`
- **解锁服务器**：股票 Bitmain 固件有安装锁，toolbox 通过 "unlock client" 解锁：
  1. 检查本机公网 IP 是否在 Braiins 白名单（`api64.ipify.org` 查公网 IP，fallback）
  2. 从解锁服务器按架构下载 unlock client（`arm` / `aarch64` / local-arch）
  3. SSH 部署到矿机（"deploying unlock client to path"）
  4. 状态机：`NOT_WHITELISTED / NOT_GOLDLISTED / UNLOCK_SERVER_UNREACHABLE / UNLOCK_TOKEN_INVALID / UNLOCK_NO_SSH_ACCESS / INSTALL_ROLLED_BACK / BOS_BOOT_FAILED / FIRMWARE_TRANSITION_TIMEOUT …`
- CLI 可用 `UNLOCK_SERVER` 环境变量/`--unlock-server` 覆盖解锁服务器 URL（测试用，"Hidden for clients"）。
- 错误提示："Partial access to unlock server. IP address has not been whitelisted for installation."

### 4.2 虚拟网络（测试特性）
- `--enable-virtual-network` + `--virtual-network-blueprint <JSON>`：用 Blueprint JSON 模拟矿机网络。

### 4.3 配置文件
- `%APPDATA%\braiins-toolbox\config.toml`：`ip_sources / include_public_ips / scan_rate_preset / timeout / unlock_server_url / contract_code / feeds_url / temporary_files_ttl / update_check_feeds_url / update_check_interval / override_current_version …`
- `%APPDATA%\braiins-toolbox\pool_presets.toml` — 矿池预设
- 日志：`%LOCALAPPDATA%\braiins-toolbox\logs/toolbox.log`（滚动，默认 1GB 上限）
- 高级设置 schema：`https://developer.braiins-os.com/advanced-settings/latest/schema.json`

### 4.4 控制板平台
内部平台代号：`Am1s9 / Am2s17 / Am2 / Am3 / Bm3 / Zynq / Bmm1 / Cvitek / Stm32mp157c` 等
（Cvitek = 新一代 Antminer 控制板 SoC；Zynq = S9~S19 系列 Xilinx Zynq-7000）。

### 4.5 支持矿机（121 款）
完整型号表见字符串分析，覆盖全部 Hydro 水冷型号：
`Antminer S19 Hyd. / S19 Pro Hyd. / S19 Pro Hydro / S19 Pro+ Hyd. / S19 XP Hyd. / S19e XP Hyd.`，
以及 S9~S21、WhatsMiner、Avalon、Iceriver 等（`src/device/poll_data/antminer.rs | avalon.rs | bos.rs | iceriver.rs`）。

## 5. Rust 模块结构（panic 路径还原的一手代码布局）

- `src/commands/**` — CLI 各子命令入口（与 --help 完全对应）
- `src/procedures/**` — 19 个安装/配置流程（install, restore, upgrade, configure_*）
- `src/device/**` — 46 个文件：各厂商设备抽象（antminer, bos, cvitek, graphql, grpc, http_api, install, unlock_remote…）
- `src/rpc/**` + `rpc/v2/**` + `rpc/v3/**` — cgminer RPC 协议客户端（46 个文件）
- `src/server/**` — axum/gRPC 服务器（`/api/v1/info`, `/auth-check`, `/available_miner_models`, `/blueprint`）
- `src/action_list/**` — 并发动作调度（action/guard/inner/log/state/stats）
- `src/device_list/**` — 设备发现与在线状态
- `src/auth/**`, `src/bos/**`（版本管理）

## 6. 前端要点

- React SPA，i18n 多语言（含 `zh-hans`），聊天挂 wechat-qr 图片（中国市场支持）。
- 通过 protobufjs 反射动态调用本地 gRPC 服务（无硬编码 URL）。
- `device_data.proto` 的 `StaticData` 消息含完整矿机状态模型：`is_unrecognized / has_invalid_credentials / firmware / boot_mode / model / control_board / can_install_bos / pools / autotuning_enabled / dps_enabled / power_target / hashrate_target / performance_mode / contract_name / sticker_hashrate / cb_serial / chip_type / psu_model / psu_fw_version / psu_serial / psu_min_max_voltage / cooling_mode / target_temp / hot_temp / dangerous_temp / min_fan_speed / fan_mode / hashboard_type / advanced_settings …`

## 7. 结论与后续建议

1. **无法还原 Rust 源码**，但以上已还原：完整协议（17 个 proto）、完整 CLI、全部 Web 资源、模块结构、网络端点。对固件研究而言，最有价值的是 unlock client 的部署路径与 downloads.braiins.com 的固件包格式（后者在你仓库 `Firmware/Unpacked/` 已有解包基线）。
2. 如需函数级逆向（如 unlock client 校验逻辑、安装状态机细节）：
   - 用 Ghidra（自带 .pdata 解析，108,685 函数可自动列出）+ Rust panic 字符串交叉定位模块；
   - 或运行时分析：`--unlock-server http://<本地伪造服务器>` 搭假解锁服务器抓协议（已内置测试后门）；
   - Wireshark 抓 127.0.0.1:8888 gRPC 流量，配合解码出的 proto 直接读明文。
3. 运行痕迹：安装到 `%APPDATA%\braiins-toolbox\`，日志在 `%LOCALAPPDATA%\braiins-toolbox\logs\`。
