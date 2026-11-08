# WebUI 刷新问题复现环境

配套报告：`../REFRESH_ISSUE_REPORT.md`

## 一次性准备

```bash
npm install            # 只依赖 puppeteer-core，使用本机已安装的 Chrome
```

Chrome 路径在 `probe.js` / `probe_multi.js` / `debug_load.js` 顶部 `CHROME` 常量里，
默认 `C:\Program Files\Google\Chrome\Application\chrome.exe`。

## 复现原版问题

```bash
PORT=18080 node mock_server.js &            # 服务 ../www/pages（原始备份）
PORT=18080 node probe.js > probe_original.json
PORT=18080 node probe_blog.js               # 日志页：12s 内 0 次请求、内容不变
PORT=18080 node probe_multi.js              # 观察 interval 数随页面往返线性增长
```

## 打补丁并验证

```bash
# 重置副本（可选）
rm -rf ../_fix && mkdir -p ../_fix && cp -r ../www/pages ../_fix/pages

node apply_fix.js                            # 9 处替换，失败会明确报错
node --check ../_fix/pages/js/index.7b063c.js
node --check ../_fix/pages/js/dashboard.f675cc.js

PORT=18081 WEBROOT="../_fix/pages" node mock_server.js &
PORT=18081 node probe.js > probe_fixed.json
PORT=18081 node probe_blog.js                # 日志页：10s 内自动出现新日志，离开后停止
PORT=18081 node probe_multi.js               # interval 数应恒为 2
```

## 文件说明

| 文件 | 作用 |
|---|---|
| `mock_server.js` | 模拟 lighttpd + 全部 CGI；`/__ctl?statsMode=fail` 可注入故障 |
| `probe.js` | 主探测：正常刷新 / 切页 / stats 失败 / chart 失败 |
| `probe_blog.js` | Miner Log 页探测：打开后是否自刷新、切标签、离开后是否停止轮询 |
| `probe_multi.js` | 多轮页面往返，统计活跃 interval 数量 |
| `debug_load.js` | 单页加载诊断（DOM、Vue 挂载、控制台异常） |
| `debug_methods.js` | 逐个调用 Dashboard 的方法，定位抛错点 |
| `apply_fix.js` | 对 `../_fix/pages/js/` 应用补丁（幂等，原版只读） |
| `probe_original.json` / `probe_fixed.json` | 实测结果原始数据 |

## 备注

- mock 的 JSON 结构按本固件 bmminer 的实际格式还原：`STATUS` 是**对象**（`data.STATUS.STATUS`），
  `SUMMARY` / `STATS` / `POOLS` / `RATE` 是**数组**。用标准 cgminer 的 `STATUS` 数组格式会导致
  误判（页面根本不挂载），排查时注意。
- `_fix/` 是完整页面目录副本，可直接覆盖设备 `/www/pages/` 下对应文件（实际只需两个 JS）。
