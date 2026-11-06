# AntMinerTab - Ubuntu 部署说明（智能插座 token 配置）

矿机与米家智能插座监控套件。**插座凭据全部从 `config.json` 读取**，更换插座或 token 时无需修改任何代码。

---

## 1. 文件说明

| 文件 | 作用 |
|---|---|
| `mijia_plug.py` | **共享 miIO 驱动**（三个程序共用，含丢包重试与状态语义） |
| `antminer_monitor.py` | 无头守护/CLI，`antminer.service` 调用的就是它 |
| `antminer_web.py` | Web 监控（端口 20000） |
| `antminer_gui.py` | PyQt5 桌面版 |
| `config.json` | **凭据文件**（不在 git 中，需手动创建） |
| `config.example.json` | 配置模板 |
| `test_mijia_plug.py` | 离线回归测试（不需要真实插座） |

---

## 2. 首次部署

```bash
# 1) 安装系统依赖（含 python3-cryptography / PyQt5）
chmod +x setup_ubuntu.sh
./setup_ubuntu.sh
```

脚本会在缺少 `config.json` 时自动从模板创建，并把权限设为 `600`。

```bash
# 2) 填写插座凭据（必须，否则服务拒绝启动）
nano config.json
```

```json
{
  "login_password": "antminer",
  "power_password": "dl.general",
  "plug_ip": "10.8.1.110",
  "plug_did": "2051114902",
  "plug_token": "YOUR_32_HEX_MIIO_TOKEN_HERE"
}
```

- `plug_token`：32 位十六进制 miIO token，**必填**
- `plug_ip`：插座静态 IP
- `plug_did`：插座设备 ID（`miIO.info` 或米家 App 可查）

```bash
# 3) 验证配置与连通性
python3 -c "from mijia_plug import load_plug_config, MijiaPlugDriver; c=load_plug_config(); print(c['plug_ip'], c['plug_did']); print(MijiaPlugDriver(c['plug_ip'], c['plug_token'], c['plug_did']).query_status())"
```

```bash
# 4) 注册为开机自启服务
sudo cp antminer.service /etc/systemd/system/
sudo systemctl daemon-reload
sudo systemctl enable --now antminer
sudo systemctl status antminer
journalctl -u antminer -f
```

---

## 3. 更换插座或 token

只改 `config.json` 三个字段，然后 `sudo systemctl restart antminer`。**不要改代码。**

如果插座换了 IP，同时确认系统里没有残留的 ARP 缓存：

```bash
sudo ip neigh flush dev eth0   # 或 ip neigh del <PLUG_IP> dev eth0
```

驱动本身在连续失败后会自动重建 socket 触发重新解析，通常不需要手动干预。

---

## 4. 这个插座链路的已知特性

该插座（`cuco.plug.v3`，ESP32C3）在本网络上**丢包严重**，实测：

- ICMP 丢包 ~37%（同一时刻网关丢包 0%）
- 单次 miIO 请求偶尔耗时数秒，出现过 19 秒完全失联

驱动为此做了针对性处理：

| 机制 | 说明 |
|---|---|
| 短超时 × 多次重试 | `CMD_ATTEMPTS=10`, `CMD_TIMEOUT=0.9s` |
| 会话保持 | 丢一个包不会导致重新握手（重新握手会翻倍放大丢包影响） |
| 过期回包过滤 | 迟到响应不会被误当成本次结果 |
| socket 重建 | 每 3 次失败重建，自动从插座重启/ARP 失效中恢复 |

**重要：`online=False` 不等于插座已断电。** 驱动在读取失败时返回 `state_confirmed=False`，所有安全逻辑都把它当作「未知」处理：

- Web 版：读不到插座时风扇继续按温度曲线运行，**不会**因为丢包把风扇降到 600 RPM
- 服务版：断电保护只依据芯片温度判断，与插座读取状态无关
- 插座状态变更需要连续 2 次一致读数才被接受

---

## 4.1 双板温度保护（重要）

这台矿机有 **2 张算力板**（`chain_num=2`，每板 6 个芯片温度传感器）。历史版本只读取 `chain[0]`，
导致第二张板完全不在保护范围内 —— 实测出现过 Chain1 = 71°C、Chain2 = 81°C，而程序只看到
71°C、急停阈值从未触发的情况。

现在温度按板解析，保护按板独立判定：

| 板号 | 预警 WRN | 急停 STOP | 说明 |
|---|---|---|---|
| Chain 1 | 75°C | 78°C | 基准值 |
| Chain 2 | 85°C | 88°C | 基准 +10°C（第二张板结构上更热） |

界面上只有 CH1 / CH2 两组输入框，没有全局 WRN/STOP。留空（显示 `auto`）即用上表的
内置基准值与偏移量；填了值就以填的为准。

阈值偏移定义在 `mijia_plug.py`：

```python
BOARD_THRESHOLD_OFFSETS = (0.0, 10.0)   # 索引 0=Chain1, 1=Chain2
```

修改这里即可调整每张板的余量，三个程序（web/gui/monitor）同时生效。

**判定规则**：每次采集后，选择「距离自 STOP 阈值最近」的板作为触发板，用它自己的阈值判断
预警/急停。所以 Chain2 到 85°C 才预警、88°C 才急停，而 Chain1 仍是 75/78°C。

**PCB 温度已从界面移除** —— 该数据只覆盖单张板，不能代表整机，保留会造成误导。

---

## 5. 运行测试

```bash
python3 test_mijia_plug.py
```

离线执行，用桩件模拟丢包、过期回包、属性缺失等场景，覆盖 16 个用例。

---

## 6. 常用命令

```bash
sudo systemctl restart antminer      # 重启服务
sudo systemctl stop antminer         # 停止
journalctl -u antminer -n 100 --no-pager   # 最近日志

python3 antminer_monitor.py --json           # 单次快照
python3 antminer_monitor.py --watch          # TUI 实时
python3 antminer_web.py --port 20000         # Web 界面
```

命令行参数 `--plug-ip` / `--plug-token` 可临时覆盖 `config.json`（调试用）。
