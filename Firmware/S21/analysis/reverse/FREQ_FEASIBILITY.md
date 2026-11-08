# S21e Hyd 频率改造可行性分析

> 目标：把频率逻辑从“定值”改为“动态调整”，并通过 SD 卡启动验证，不重新打包 `.bmu`。
> 分析对象：`S21/Unpacked/zynq/minerfs.d/rootfs/usr/bin/bmminer`（655,256 B，ARM32，已 strip）
> 工具：Ghidra 12.2，工程 `S21/analysis/reverse/ghidra_project`（2035 个函数）

---

## 1. 结论

**可行，而且比预想的基础更好。**

S21 的 `bmminer` 里已经内置了完整的频率/电压调节框架，不是纯定值实现：

- 有增量升频（`inc_freq_step`/`inc_freq_voltage`/`inc_freq_delay`）
- 有按温度分档调压（`pid_target_temp`、`max_rise_vol`）
- 有独立的调频线程（`tuning_freq_thread`，5 秒周期）
- 有底层 PLL 设置与回读校验（`set_freq`、`POSTDIV1/2`、`USER_DIV`）
- 还有 basic/fine/parallel 三套调频引擎代码（当前构建是否启用待确认）

同时，**SD 启动路径 `sdboot` 使用普通 `bootm`，不调用 `zynqrsa`**，因此修改后的
内核/rootfs 不需要签名，绕开了最大的阻塞。

改造分三档，建议从配置级开始：

| 档位 | 内容 | 工作量 | 风险 |
|---|---|---|---|
| A. 配置级 | 改 `topol.conf` 的 `strategy`/`adjust_strategy` | 小时级 | 低 |
| B. 补丁级 | 改 bmminer 里的温度分档、步进、目标值 | 天级 | 中 |
| C. 新算法 | 替换/挂接调频线程，按算力/温度/电压闭环 | 周级 | 高 |

---

## 2. 已定位的频率相关函数

| 地址 | 作用 | 关键字符串/证据 |
|---|---|---|
| `0x513a0` | 初始化模式设置 | 置 `DAT_008c7074=1`，日志 `This is fix-freq version` |
| `0x55518` | 频率/电压主初始化 | `fixed working voltage`、`max freq in eeprom`、`fixed frequency is %d` |
| `0x12c78` | 解析 `strategy` | `open_core_high_voltage`、`inc_freq_voltage`、`inc_freq_step`、`inc_freq_delay`、`pid_target_temp`、`voltage_adjust_setp` |
| `0x152cc` | 解析 `adjust_strategy` | `hashrate_percent_min/max` |
| `0x4ebd0` | 单次升频 | `inc freq delay:%d`、`inc freq to %d` |
| `0x3ffbc` | **调频线程**（5 秒循环） | `tuning freq start`、`tuning_freq_thread` |
| `0x40ca8` | 创建调频线程 | `create thread tuning_freq_thread` |
| `0x27460` | 设置目标频率+电压 | `tuning_frequency from freq %d to freq %d, set vol to target voltage=%d` |
| `0x2d6b0` | 底层 PLL 设置/校验 | `set_freq`、`pll_id`、`check pll config err` |
| `0x25da0` | 频率→分频计算 | `_POSTDIV1`、`_POSTDIV2`、`USER_DIV` |
| `0x259c0` | 频率合法性检查 | `Freq(%d) > Max_freq(%d), invalid!` |
| `0x5c288` | basic/parallel 调频引擎（**死代码**） | `Do freq tuning basic.`、`Do tuning parallel.` |
| `0x5d758` | fine/single-grade 调频引擎（**死代码**） | `Do freq tuning fine.`、`Do single grade tuning.` |
| `0x5d010`/`0x5be5c` | 调频参数解析 | `freq_base`、`freq_threshold`、`nonce_rate_threshold`、`freq_tuning_fine_step` |
| `0x223f0` | 频率扫描 | `sweep_freq_base`、`sweep_freq_step`、`sweep_hashrate` |
| `0x30750` | API 输出 | `api_get_miner_freq_adjust_info`、`working_freq`、`current_freq` |

---

## 3. 控制链

```
0x159b8  →  0x513a0  初始化：DAT_008c7074=1（定值基准标志），work_mode=2
   │
0x15c50  →  0x55518  读取 topol.conf 的 strategy / adjust_strategy
   │   ├─ 从 EEPROM 或配置取基准电压/频率
   │   ├─ 按温度分档修正工作电压（见 §4）
   │   ├─ set_voltage 0x246cc
   │   ├─ inc_freq 0x4ebd0(3000, voltage, target)
   │   └─ sem_post 唤醒 0x3ffbc
   │
0x3ffbc  调频线程（每 5 秒）
   │   ├─ 读温度 / 电压 / 非ce 率
   │   ├─ 电压越界 → 0x246cc 调整
   │   └─ 满足条件 → 0x27460 设置新频率+电压
   │
0x27460  tuning_frequency(freq_from, freq_to, voltage)
   │
0x2d6b0  set_freq → 计算 POSTDIV1/POSTDIV2/USER_DIV → 写 PLL → 回读校验
```

### 启动时的温度→电压分档（0x55518 尾部）

`FUN_00018aa0()` 的返回值（推测为最高芯片温度）落在不同区间时，工作电压做如下修正：

| 温度区间 | 电压修正 |
|---|---|
| < 41 °C | `+ max_rise_vol`（topol 配置为 120） |
| 41–45 °C | −15 / −5 |
| 46–47 °C | −25 / −15 |
| 48–51 °C | −40 / −30 |
| ≥ 52 °C | −50 / −40 |

这说明**温度联动调压已经是现成逻辑**，不是从零实现。

### 3.1 频率到底从哪里来（源码级）

频率不是单一常量，而是四层叠加：

**第 1 层：机型硬编码的默认值与边界（`0x55518`）**

- 未启用“固定频率配置位”（`DAT_00a6c8bc & 0x8`）时：`DAT_008c7040 = 200`，
  每链频率表也写 200。
- 启用后：先取配置值 `DAT_00a6c8c4 & 0xffff`，再用 EEPROM 结果覆盖。
- 机型上限：`H6HB70801/802` 在 `work_mode==2` 时，若频率 ≥ 701 则强制 **700**；
  `HHB68701` 上限 **430**；所有机型下限 **50**。
- 电压同理：未配置时读 EEPROM 每链最大电压（下限 **1900**，即 0x76c）；
  配置位置位时用 `DAT_00a6c8c4 >> 16`。

**第 2 层：每台机器的 EEPROM 产线校准数据（真正决定工作频率）**

- `FUN_0001c934()`：逐链读 EEPROM 的 **max freq**，取全局最大值写入
  `DAT_008c7040`，日志 `max freq in eeprom = %d`。
  后面日志 `fixed frequency is %d` 打印的其实就是这个 EEPROM 最大值，
  **不是编译期常量**。
- `FUN_0001d4fc()`：读每链的 sweep 结果，展开成每 ASIC 的频率表
  （`DAT_00943ae0 + chain*0x100`，每链 0x400 字节）。
- `FUN_00024f98()`：对每链的 ASIC 频率表求 **min / max / sum**。
- `FUN_00025b38()`：
  - 每链的 **min** 存入数组 `DAT_00a6c8d8`
  - 每链的 **max** 存入 `DAT_00a6c8e8`
  - 全局最大存入 `DAT_008c8aa8`
  - 每 ASIC 的相对偏移 `freq - chain_min` 存入 `DAT_008c8aa8 + chain*0x400`
  - 日志 `inc_mixed_freq_prepare ... min_sorted[...]`

也就是说：**最终工作频率 = 该链所有 ASIC 中最小的那个 EEPROM 扫描频率**，
每颗 ASIC 再叠加自己的相对偏移。这是产线逐机校准的结果，不同机器不一样。

**第 3 层：启动时的一次性爬坡（`0x3ffbc`）**

1. 等板温升到 55 °C（最多等 30 秒）。
2. 把电压抬到 work voltage（钳位 1725–2180）。
3. 在“整机功率 < 1200 且 ASIC 温度 < 19 °C”的条件下，每 5 秒按温度算一个
   中间频率，调用 `0x27460` 逐步升频，直到最小的链 min 频率。
4. 调 `0x26ac0` 按链下发 min/max 频率矩阵（日志
   `1.inc all chain freq to`、`2.chain_%d inc freq to`、`3.chain %d min/max`），
   再由 `0x2500c` 逐 ASIC 调 `0x2d6b0` 写 PLL。
5. 电压降回工作值，按 `opt_hashrate_percent` 开关核心，线程退出。

**第 4 层：运行期**

- `0x3ffbc` 执行完就返回，**不是常驻循环**。
- 运行期的 `is_inc_freq_with_high_vol_runtime` 只出现在 `0x5be5c`/`0x5d010`，
  也就是那套死代码调频引擎里。
- 因此正常运行后频率基本固定；温度保护更多是调压、关链或停机，而不是持续调频。

**一句话总结**：

> 写死的是“机型默认值和上下限”；真正的工作频率来自每台机器 EEPROM 的产线
> 扫描结果（每链取 ASIC 最小值 + 逐 ASIC 偏移）；启动时做一次温度/功率爬坡，
> 之后基本固定。它不是运行时持续动态调频。

---

## 4. `topol.conf` 中可直接调整的频率参数

S21 的 `/etc/topol.conf`（machine `H6HB70801`，ASIC `BM1370`）当前值：

| 键 | 当前值 | 作用 |
|---|---:|---|
| `open_core_high_voltage` | 2100 | 开核高电压 |
| `inc_freq_voltage` | 2000 | 升频时使用的工作电压 |
| `inc_freq_step` | 625 | 每次升频步进 |
| `inc_freq_delay` | 100 | 升频间隔 |
| `pid_target_temp` | 50 | 闭环目标温度 |
| `voltage_adjust_setp` | 10 | 调压步进 |
| `low_freq_miner_mode` | true | 低频繁矿模式 |
| `low_freq_inc_freq_temp` | 35 | 低 freq 升温阈值 |
| `low_freq_wait_time` | 240 | 低 freq 等待时间 |
| `low_freq_base_freq` | 0 | 低 freq 起始频率 |
| `max_rise_vol` | 120 | 低温时最大升压量 |
| `hashrate_percent_min/max` | 45 / 100 | 算力百分比范围 |
| `chain_asic_num` | 85 | 每链 ASIC 数 |
| `chain_num` | 3 | 链数 |

这些键全部由 `0x12c78` / `0x152cc` 解析，改配置文件即可影响运行行为，**不需要动二进制**。

---

## 5. 当前到底是“定值”还是“动态”？

证据是混合的：

**支持“定值版”的证据**
- `0x513a0` 无条件把 `DAT_008c7074` 置 1，并在日志级别 ≥4 时打印
  `This is fix-freq version`（`0x4e424`）。
- `0x55518` 在 `DAT_008c7074 != 0` 且配置位未置位时，直接使用 EEPROM 中的固定
  电压/频率（`fixed working voltage`、`fixed frequency is %d`）。

**支持“动态”的证据**
- `0x513a0` 同时把 `work_mode` 设为 2；`0x4ebd0` 在 `work_mode == 2` 时执行升频。
- `0x55518` 在启动时按温度分档修正电压，然后调用 `0x4ebd0` 升频并唤醒 `0x3ffbc`。
- `0x3ffbc` 是每 5 秒运行的闭环线程，会调用 `0x27460` 修改频率/电压。
- `topol.conf` 中存在完整的 `inc_freq_*`、`pid_target_temp`、`low_freq_*` 参数。

**判断**：这个构建是“**定值基准 + 温度分档调压 + 增量升频**”的混合模式，
而不是完整的自动调频。完整的 basic/fine/parallel 调频引擎（`0x5c288`、`0x5d758`）
在二进制中存在，但已确认是**死代码**：

- Ghidra 调用图里没有调用者；
- 对整个 `.text` 做 ARM `BL` 指令扫描，目标不等于这两个地址；
- 对整个文件做 4 字节地址扫描，也没有任何函数指针/跳转表引用。

实际在跑的动态逻辑只有：
- `0x4ebd0`（增量升频，2 个调用点，都在 `0x55518` 内）；
- `0x3ffbc`（调频线程，通过 `0x40ca8` → `0x4c5a0` 创建）；
- `0x27460`（tuning_frequency，5 个调用点：`0x27b80`、`0x2831c`、`0x40194`、`0x40340`、`0x4eed0`）。

因此“改成动态”不需要从零写调频器：**执行层已经齐全**，缺的是决策层。
可以只改策略参数，或把 `0x3ffbc` 的决策逻辑换成自定义算法。

---

## 6. 改造方案

### A. 配置级（建议先做）

在 SD 卡的 rootfs 中修改 `/etc/topol.conf`：

```json
"strategy": {
    "inc_freq_step": 625,        // 调大 → 升频更快
    "inc_freq_voltage": 2000,    // 升频工作电压
    "pid_target_temp": 50,       // 目标温度
    "max_rise_vol": 120,         // 低温升压上限
    "low_freq_miner_mode": true,
    "low_freq_base_freq": 0
}
```

改完直接 SD 启动验证，不动 bmminer。适合验证“动态策略是否生效”和找安全边界。

> 注意：`inc_freq_*` 只影响启动爬坡的步进/电压/节奏，**不会改变最终目标频率**。
> 目标频率来自 EEPROM sweep 的每链最小值，要改目标必须动 `0x55518`、
> `0x26ac0`/`0x2500c`，或直接改 EEPROM 校准数据。

### B. 补丁级（配置不够时）

| 改点 | 地址 | 说明 |
|---|---|---|
| 温度分档表 | `0x55518` 尾部 | 修改 41/45/47/51/52 °C 分档与 ±电压值 |
| 升频步进/延时 | `0x4ebd0` | 修改步进、目标电压、3000 ms 延时 |
| 调频线程周期/阈值 | `0x3ffbc` | 5 秒周期、目标温度、启停条件 |
| 频率上限校验 | `0x259c0` | `Freq > Max_freq` 判定 |
| 模式标志 | `0x513a0` | `DAT_008c7074`、`work_mode` 赋值 |

补丁方式：ARM 固定 4 字节指令，等长替换常量或改条件跳转；Ghidra 可直接
patch 并导出，或用 `keystone-engine` 脚本化。

### C. 新算法（最终目标）

如果要“按实时算力/温度/电压/错误率动态决策”，有两种落地方式：

1. **挂接现有线程**：把 `0x3ffbc` 入口改成跳转到代码洞里的自定义逻辑，
   复用 `0x27460`（设频+设压）和 `0x2d6b0`（PLL）作为执行层。
2. **外部进程**：新写一个守护进程，通过现有接口（若 API 支持设置频率）或
   直接操作 FPGA/寄存器来调频；风险是绕过 bmminer 的保护逻辑。

推荐 1，因为能复用温度保护、电压校验和 PLL 回读校验。

---

## 7. SD 卡启动路径（已确认）

S21 的 U-Boot 默认环境里带有：

```
sdboot=if mmcinfo; then
    load mmc 0 ${kernel_load_address} ${kernel_image} &&
    load mmc 0 ${devicetree_load_address} ${devicetree_image} &&
    load mmc 0 ${ramdisk_load_address} ${ramdisk_image} &&
    bootm ${kernel_load_address} ${ramdisk_load_address} ${devicetree_load_address};
fi

nandboot_sd=... fatload mmc 0 ... && bootm ...

rsa_sdboot=... load mmc 0 0x100000 ${boot_image} && zynqrsa 0x100000 && bootm ...
```

关键点：

- **只有 `rsa_sdboot` 调 `zynqrsa`**；`sdboot` 和 `nandboot_sd` 都不验签。
- `preboot` 在 `modeboot=sdboot` 时会尝试从 SD 加载 `uEnv.txt` 并导入环境，
  可以用它覆盖 `ramdisk_image` 等变量。
- 默认文件名：
  - `kernel_image=uImage`
  - `devicetree_image=devicetree.dtb`
  - `ramdisk_image=update.image.gz`（默认是升级系统，建议改成 `minerfs.image.gz`）
- 默认地址：kernel `0x2000000`、dtb `0x3000000`、ramdisk `0x3800000`。
- `mmc_loadbit` 还支持从 SD 加载 bitstream（`system.bit.bin`），但正常启动时
  PL 已由 NAND 的 FSBL 配置，不改 PL 就不需要。

### 操作步骤

1. SD 卡格式化为 FAT32，根目录放：
   - `uImage`（可用原厂，改频率不需要换内核）
   - `devicetree.dtb`（原厂）
   - `minerfs.image.gz`（改过的 rootfs，uImage 包装的 gzip ext2）
   - 可选 `uEnv.txt`：`ramdisk_image=minerfs.image.gz`
2. 串口进 U-Boot，执行：
   ```
   setenv ramdisk_image minerfs.image.gz
   run sdboot
   ```
   或先 `setenv modeboot sdboot; saveenv`，让每次启动都走 SD。
3. 观察启动日志，确认 rootfs 来自 SD、bmminer 正常起来。

> 注意：FSBL 和 U-Boot 仍来自 NAND；SD 启动只是把内核/设备树/rootfs 换成 SD 上的。
> 如果 U-Boot 本身被改坏，仍需要 JTAG/救砖手段。

---

## 8. 风险与限制

1. **硬件风险**：升频/升压过头会损坏算力板；必须保留 `Max_freq` 校验和温度保护。
2. **PLL 校验**：`0x2d6b0` 会回读 PLL 配置，写入非法分频会报错并重试。
3. **温度保护会覆盖**：即使改了目标频率，`0x3ffbc` 仍可能因温度/电压越界降频。
4. **eeprom 上限**：每台机器的 EEPROM 里有 max freq/voltage，超过会被拒绝。
5. **完整调频引擎是死代码**：`0x5c288`/`0x5d758` 未链接进调用图，不能指望
   basic/fine 调频自动生效；需要自己把调用接上，或只改增量升频策略。
6. **SD 启动依赖串口**：`modeboot` 的默认值未知，首次需要串口干预；量产要
   考虑保存环境或改 U-Boot 默认值。

---

## 9. 建议的验证顺序

1. 串口确认 `sdboot` 能启动原厂 rootfs（先不改任何东西）。
2. 打开 bmminer 日志级别，抓启动日志，确认走的是 `inc freq` 还是
   `Do freq tuning basic/fine`。
3. 只改 `topol.conf` 的 `inc_freq_step` / `pid_target_temp`，小步试验，
   记录 `/freq_info`、算力、温度、HW 错误率。
4. 确认安全边界后，再考虑补丁级（温度分档表、线程阈值）。
5. 需要新算法时，再挂接 `0x3ffbc` / `0x27460`。

---

## 10. 未确认项

- `This is fix-freq version` 的准确语义（构建标志 vs 运行模式）。
- `FUN_00018aa0()` 的返回值是否为芯片温度（按分档逻辑推测是）。
- 控制板是否有物理 SD 槽、`modeboot` 默认值（需硬件/串口确认）。
- `0x5c288` / `0x5d758` 已确认无调用者、无指针引用，判定为死代码；
  但仍未排除通过运行时自修改/异常跳转进入的可能（概率极低）。
