# Ghidra 分析环境

## 安装位置

| 组件 | 路径 |
|---|---|
| Ghidra 12.2 | `Firmware/analysis/tools/ghidra_12.2_PUBLIC/` |
| JDK 25（便携版，Ghidra 12.2 要求） | `Firmware/analysis/tools/jdk-25.0.5+8/` |
| 已固定的 JDK 配置 | `ghidra_12.2_PUBLIC/support/launch.properties` → `JAVA_HOME_OVERRIDE` |
| Ghidra 工程 | `Firmware/analysis/reverse/ghidra_project/S19Hydro.gpr` |
| 已导入程序 | `/bmminer`（429,356 B，ARM:LE:32:v7，ELF） |

系统里的 JDK 17/21 不受影响；Ghidra 只用自带的 JDK 25，不依赖 `JAVA_HOME`。

## 启动

GUI：

```bash
cd Firmware/analysis/tools/ghidra_12.2_PUBLIC
./ghidraRun
```

打开工程 `analysis/reverse/ghidra_project/S19Hydro`，程序 `/bmminer` 已完成自动分析。

## 脚本

| 脚本 | 用途 |
|---|---|
| `ghidra_scripts/S19ListFunctions.java` | 导出函数清单 CSV（入口/名称/大小/参数/调用者数） |
| `ghidra_scripts/S19DecompileAt.java` | 按地址导出 C 伪代码 |

> 必须用 `S19` 前缀：Ghidra 自带同名脚本（如 `ListFunctions.java`）会优先命中，
> 导致脚本参数被当成交互式选项而报 `Invalid choice`。

命令行用法：

```bash
cd Firmware/analysis/tools/ghidra_12.2_PUBLIC

./support/analyzeHeadless \
  "D:/Document/tempPrj/BITMAIN-S19Hyd-151T-Firmware/Firmware/analysis/reverse/ghidra_project" \
  S19Hydro -process bmminer -noanalysis \
  -scriptPath "D:/Document/tempPrj/BITMAIN-S19Hyd-151T-Firmware/Firmware/analysis/reverse/ghidra_scripts" \
  -postScript S19ListFunctions.java \
  "D:/Document/tempPrj/BITMAIN-S19Hyd-151T-Firmware/Firmware/analysis/reverse/bmminer_functions_ghidra.csv"
```

```bash
# 反编译指定地址（可一次多个）
... -postScript S19DecompileAt.java <输出目录> 0x50390 0x4ca78
```

## 当前分析结果

- Ghidra 自动识别 **1420 个函数**（此前 `push {..,lr}` 启发式为 969，是下界）。
- 函数清单：`analysis/reverse/bmminer_functions_ghidra.csv`。
- 已抽样反编译：`analysis/reverse/decompiled/50390_FUN_00050390.c`（`bitmain_set_voltage`）、
  `4ca78_FUN_0004ca78.c`（`pic_get_voltage`），伪代码可读性良好。

### 地址修正

Ghidra 的函数边界比启发式准，之前 README 中的地址有 4 字节偏差（个别偏差更大）：

| 功能 | 旧（启发式） | 新（Ghidra 权威） |
|---|---:|---:|
| `bitmain_set_voltage` | `0x50390` | `0x50390` ✔ |
| `bitmain_get_voltage` | `0x506f8` | `0x506f8` ✔ |
| `pic_get_voltage` | `0x4ca7c` | `0x4ca78` |
| `get_pic_version` | `0x4bad4` | `0x4bad0` |
| `reset_pic` | `0x4bcd8` | `0x4bcd4` |
| `_bitmain_pic_start_app_common` | `0x4be7c` | `0x4be78` |
| `enable/disable_dc_dc` | `0x4c054/0x4c228` | `0x4c050/0x4c224` |
| `send_pic_heart_beat` | `0x4c3f4` | `0x4c3f0` |
| `bitmain_set_voltage_by_n` | `0x4ff74` | **`0x4fff4`**（旧地址落在函数间隙） |

后续以 `bmminer_functions_ghidra.csv` 为准。
