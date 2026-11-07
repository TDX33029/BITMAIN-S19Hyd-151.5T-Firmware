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
