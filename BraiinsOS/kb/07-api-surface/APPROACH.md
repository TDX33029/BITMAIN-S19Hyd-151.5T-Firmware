# 07 API 面（cgminer API / devel API / boser gRPC）——思路方法

## 三层 API 设计（学这个分层）

```
┌─ boser (gRPC, braiins.bos.v1.*)  ← 对外正式 API（bos-plus-api 的 16 个 proto）
│    actions/configuration/cooling/miner/performance/pool/work/upgrade...
├─ devel API（bosminer 内嵌，调试/开发用）  ← "00bed9fc" 35KB 函数：总控命令解释器
│    start/stop chains、set voltage、set frequency、diff、tuner start/stop
│    "Before you start manipulating individual chains you have to stop the tuner"
└─ cgminer 兼容 API（api/rpc.rs）       ← 存量生态兼容（老监控/矿场软件）
     cgminer_readonly 开关可禁所有写命令
```

## 思路要点

1. **devel API 的安全设计**：操纵单链前必须停调优器（否则状态机被干扰）——
   文案里直接写明因果（"otherwise it gets confused"）。任何"运行时改参数"的
   系统都需要这种互斥语义。
2. **cgminer 兼容层只读化**：`cgminer_readonly` 一刀切封写命令——老软件轮询没问题，
   但不能误改配置。兼容层的权限管理一句话解决。
3. **boser 与 bosminer 分进程**：API 崩溃不连累挖矿（S98boser 先于 S99bosminer 起）。
4. 错误码体系 E*/P*/HW*（见 `00c00464.c`）——API 返回的不只是"失败"，是分类+处置建议。

## 调用路径（你们固件可直接用的接口）

- gRPC: proto 见 `BraiinsOS/bos-plus-api/proto/bos/v1/`（注意无许可证，互操作参考）
- devel API: bosminer 端口上 `developers` 命令组（`00bed9fc` 反编译有全命令表+帮助文本）
- cgminer API: 标准 cgminer 协议 + BOS 扩展命令

## 重写要点

三层不是三套代码——devel/cgminer 是 bosminer 内嵌 RPC，boser 是独立 gRPC 网关。
你的固件照这个分层：引擎内嵌调试 RPC + 独立 API 网关进程 + 兼容层只读开关。

## boser 网关实测结构（26,607 函数已全量反编译 → `../out/boser_decomp/`）

两个 gRPC 命名空间（字符串证据计数）：
- **`braiins.bos.v1.*`**（正式 API）：PerformanceService×20 / MinerService×11 /
  ActionsService×10 / PoolService×6 / UpgradeService×5 / AdvancedSettingsService×5 /
  NetworkService×4 / CoolingService×4 / LicenseService×3 / ConfigurationService×3
- **`braiins.boser.web.*`**（Web UI 专用面）：UpgradeService / SettingsService /
  MinerService / ChipDataService / ActionsService —— **正式 API 与 Web 面分开**，
  Web 面可以加一些不适合放进稳定 API 的东西（如 ChipDataService 芯片级数据）
- 系统边界：/etc/boser /etc/bosminer /etc/crontabs（boser 还管 crontab——
  自动升级调度在那里）
- 代码规模：26.6k 函数中大部分是 tonic/prost/h2/hyper 运行时——业务逻辑
  只是一小层。**重写 boser 级别的网关用 tonic 生成代码即可，无需逆向**；
  值得学的只有"双命名空间分离"和"网关独立进程"两个决策。

## 函数级入口（boser_decomp/）

按服务名 grep：`grep -rl "PerformanceService" ../out/boser_decomp --include="*.c"`
（注意 index CSV 字符串列只留 6 条，服务路径可能不在其中，直接 grep .c 文件。）
