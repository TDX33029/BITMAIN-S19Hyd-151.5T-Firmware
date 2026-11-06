#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
AntMinerTab - Headless CLI & Service Monitor (Ubuntu 22.04 / Linux & Windows)
Target:
- Antminer S19 Hydro: http://10.8.1.86/#dashboard
- Mijia Smart Plug 3 (cuco.plug.v3): 10.8.1.110 (miIO UDP)
- Telegram Bot Alert: @s332854BOT (7775553661)

Features:
- Streamlined data acquisition: Queries /cgi-bin/stats.cgi and /cgi-bin/pools.cgi.
- HTTP Keep-Alive persistent connection to minimize miner load.
- Native miIO UDP driver for Mijia Smart Plug 3 (Power, Switch State, Temp).
- Dual Cutoff Protection:
  * WRN TEMP (default 75°C): Cut off power if maintained for >30s + Telegram alert.
  * STOP TEMP (default 78°C): Immediate unconditional power cutoff + Telegram alert.
  * Irreversible safety lock: No auto-recovery without explicit reset.
- Minimalist terminal dashboard (ANSI / TUI mode) with sparkline trends.
"""

import argparse
import hashlib
import json
import os
import socket
import sys
import threading
import time
from collections import deque
from datetime import datetime
from typing import Any, Deque, Dict, List, Optional

import requests
from cryptography.hazmat.backends import default_backend
from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes

from mijia_plug import (MijiaPlugDriver, load_plug_config, parse_chains,
                        board_thresholds, parse_board_thresholds)
from requests.adapters import HTTPAdapter
from requests.auth import HTTPDigestAuth


# Telegram Credentials
TELEGRAM_TOKEN = "8938811502:AAHSMmrELHYz8OrFmlD8YeaogjmZ7X7-7NE"
TELEGRAM_CHAT_ID = 7775553661


def send_telegram_async(message: str):
    """Send asynchronous HTML message to Telegram."""
    def _worker():
        try:
            url = f"https://api.telegram.org/bot{TELEGRAM_TOKEN}/sendMessage"
            payload = {
                "chat_id": TELEGRAM_CHAT_ID,
                "text": message,
                "parse_mode": "HTML",
            }
            requests.post(url, json=payload, timeout=8)
        except Exception as e:
            sys.stderr.write(f"[Telegram Alert Error] {e}\n")

    threading.Thread(target=_worker, daemon=True).start()


# ANSI Colors & Controls
class Colors:
    RESET = "\033[0m"
    BOLD = "\033[1m"
    GREEN = "\033[32m"
    YELLOW = "\033[33m"
    RED = "\033[31m"
    CYAN = "\033[36m"
    MAGENTA = "\033[35m"
    GRAY = "\033[90m"
    CLEAR = "\033[2J\033[H"
    CURSOR_HOME = "\033[H"


def temp_color(t: float) -> str:
    """Return ANSI color based on temperature in Celsius."""
    if t >= 78.0:
        return Colors.RED
    elif t >= 68.0:
        return Colors.YELLOW
    elif t >= 55.0:
        return Colors.CYAN
    else:
        return Colors.GREEN


def render_sparkline(values: List[float], min_val: Optional[float] = None, max_val: Optional[float] = None) -> str:
    """Render 1D trend sparkline using Unicode height blocks ( ▂▃▄▅▆▇█)."""
    if not values:
        return ""
    blocks = [" ", "▂", "▃", "▄", "▅", "▆", "▇", "█"]
    actual_min = min(values)
    actual_max = max(values)
    val_min = min_val if min_val is not None else actual_min
    val_max = max_val if max_val is not None else actual_max
    span = val_max - val_min

    chars = []
    for v in values:
        c = temp_color(v)
        if span <= 0.001:
            idx = 3
        else:
            ratio = (v - val_min) / span
            idx = int(round(ratio * (len(blocks) - 1)))
            idx = max(0, min(len(blocks) - 1, idx))
        chars.append(f"{c}{blocks[idx]}{Colors.RESET}")
    return "".join(chars)


def render_horizontal_bar(val: float, max_range: float = 85.0, width: int = 12) -> str:
    """Render square-like horizontal level bar: [████████░░░░] 68.0°C"""
    ratio = max(0.0, min(1.0, val / max_range))
    fill_len = int(round(ratio * width))
    empty_len = width - fill_len
    c = temp_color(val)
    bar = f"{c}{'█' * fill_len}{Colors.GRAY}{'░' * empty_len}{Colors.RESET}"
    return f"[{bar}] {c}{val:4.1f}°C{Colors.RESET}"


class AntminerMonitor:
    def __init__(
        self,
        base_url: str = "http://10.8.1.86",
        username: str = "root",
        password: str = "dl.general",
        plug_ip: str = "10.8.1.110",
        plug_token: str = "",
        plug_did: str = "2051114902",
        board_overrides: Optional[List[Dict[str, Any]]] = None,
        wrn_temp: float = 75.0,
        stop_temp: float = 78.0,
        interval: float = 1.0,
        timeout: float = 2.5,
        history_len: int = 30,
    ):
        self.base_url = base_url.rstrip("/")
        self.username = username
        self.password = password
        self.wrn_temp = wrn_temp
        self.stop_temp = stop_temp
        # Per-board absolute limits from config.json; empty = built-in offsets apply.
        self.board_overrides = list(board_overrides or [])
        self.interval = interval
        self.timeout = timeout
        self.history_len = history_len

        # Persistent HTTP Session with Keep-Alive & Self-Healing
        self.session = self._create_miner_session()
        self.last_valid_metrics: Optional[Dict[str, Any]] = None
        self.consecutive_miner_failures: int = 0
        self.max_hold_failures: int = 5

        # Plug Driver
        self.plug = MijiaPlugDriver(ip=plug_ip, token_hex=plug_token, did=plug_did)

        # Overheat state
        self.overheat_wrn_seconds = 0.0
        self.cutoff_triggered = False
        self._wrn_last_time: Optional[float] = None

        # Reject Ratio Alarm State
        self.high_reject_alerted = False
        self.last_reject_alert_time = 0.0
        self.reject_alert_cooldown = 300.0  # Cooldown 5 minutes between alerts

        # History queues for sparklines
        self.history_hashrate: Deque[float] = deque(maxlen=self.history_len)
        self.history_inlet: Deque[float] = deque(maxlen=self.history_len)
        self.history_outlet: Deque[float] = deque(maxlen=self.history_len)
        self.history_chip_max: Deque[float] = deque(maxlen=self.history_len)

    def _create_miner_session(self) -> requests.Session:
        s = requests.Session()
        s.auth = HTTPDigestAuth(self.username, self.password)
        adapter = HTTPAdapter(
            pool_connections=2,
            pool_maxsize=4,
            max_retries=2,
            pool_block=False
        )
        s.mount("http://", adapter)
        s.headers.update({
            "Connection": "keep-alive",
            "User-Agent": "AntMinerTab-CLI/1.0",
        })
        return s

    def _reinit_miner_session(self):
        """Self-heal stale Keep-Alive sockets and reset HTTP Digest auth state."""
        try:
            if hasattr(self, "session") and self.session:
                self.session.close()
        except Exception:
            pass
        self.session = self._create_miner_session()

    def fetch_metrics(self) -> Dict[str, Any]:
        """Fetch miner & plug metrics."""
        miner_fetch_success = False
        rate_5s_ghs = 0.0
        total_accepted = 0
        total_rejected = 0
        reject_ratio = 0.0
        temp_pic = []
        temp_pcb = []
        temp_chip = []

        timeout_cfg = (1.5, 3.5) if isinstance(self.timeout, (int, float)) and self.timeout <= 3.0 else self.timeout

        try:
            # 1. Fetch Stats
            resp_stats = self.session.get(f"{self.base_url}/cgi-bin/stats.cgi", timeout=timeout_cfg)
            if resp_stats.status_code == 401:
                raise PermissionError("401 Unauthorized: Digest Authentication failed.")
            if resp_stats.status_code != 200:
                raise ValueError(f"stats.cgi returned HTTP {resp_stats.status_code}")
            raw_stats = resp_stats.json()

            # 2. Fetch Pools
            resp_pools = self.session.get(f"{self.base_url}/cgi-bin/pools.cgi", timeout=timeout_cfg)
            if resp_pools.status_code != 200:
                raise ValueError(f"pools.cgi returned HTTP {resp_pools.status_code}")
            raw_pools = resp_pools.json()

            st0 = raw_stats.get("STATS", [{}])[0]
            rate_5s_ghs = float(st0.get("rate_5s", 0.0))

            # This board reports one entry per hash board (chain_num=2 on the S19 Hydro).
            # Reading only chain[0] hid the second board entirely: observed Chain1 at
            # 71°C while Chain2 sat at 81°C, so the STOP threshold never fired.
            chain_temps, water_pic = parse_chains(st0)
            temp_pic = water_pic
            temp_pcb = []
            temp_chip = []
            for ct in chain_temps:
                temp_pcb.extend(ct["pcb"])
                temp_chip.extend(ct["chip"])

            total_diffa = 0.0
            total_diffr = 0.0
            for p in raw_pools.get("POOLS", []):
                total_accepted += int(p.get("accepted", 0))
                total_rejected += int(p.get("rejected", 0))
                total_diffa += float(p.get("diffa", 0.0))
                total_diffr += float(p.get("diffr", 0.0))

            total_shares = total_accepted + total_rejected
            if total_shares > 0:
                reject_ratio = min(100.0, max(0.0, (total_rejected / total_shares) * 100.0))
            elif (total_diffa + total_diffr) > 0:
                reject_ratio = min(100.0, max(0.0, (total_diffr / (total_diffa + total_diffr)) * 100.0))
            else:
                reject_ratio = 0.0

            miner_fetch_success = True
            self.consecutive_miner_failures = 0
            self.last_valid_metrics = {
                "rate_5s_ghs": rate_5s_ghs,
                "total_accepted": total_accepted,
                "total_rejected": total_rejected,
                "reject_ratio": reject_ratio,
                "temp_pic": temp_pic,
                "temp_pcb": temp_pcb,
                "temp_chip": temp_chip,
                "chain_temps": chain_temps,
            }
        except Exception as e:
            self.consecutive_miner_failures += 1
            if self.consecutive_miner_failures % 3 == 0:
                self._reinit_miner_session()
            if not (self.last_valid_metrics and self.consecutive_miner_failures <= self.max_hold_failures):
                raise

        is_recovering = False
        if miner_fetch_success:
            miner_ok = True
        elif self.last_valid_metrics and self.consecutive_miner_failures <= self.max_hold_failures:
            # Debounce / hold last valid state during brief network glitch
            rate_5s_ghs = self.last_valid_metrics["rate_5s_ghs"]
            total_accepted = self.last_valid_metrics["total_accepted"]
            total_rejected = self.last_valid_metrics["total_rejected"]
            reject_ratio = self.last_valid_metrics["reject_ratio"]
            temp_pic = self.last_valid_metrics["temp_pic"]
            temp_pcb = self.last_valid_metrics["temp_pcb"]
            temp_chip = self.last_valid_metrics["temp_chip"]
            chain_temps = self.last_valid_metrics.get("chain_temps", [])
            miner_ok = True
            is_recovering = True
        else:
            miner_ok = False
            chain_temps = []

        rate_5s_ths = rate_5s_ghs / 1000.0

        # 3. Fetch Plug
        plug_data = self.plug.query_status()

        inlet_t = temp_pic[0] if len(temp_pic) > 0 else 0.0
        outlet_t = temp_pic[1] if len(temp_pic) > 1 else 0.0
        delta_t = (outlet_t - inlet_t) if (inlet_t > 0 and outlet_t > 0) else 0.0

        chip_max = max(temp_chip) if temp_chip else 0.0
        chip_avg = (sum(temp_chip) / len(temp_chip)) if temp_chip else 0.0

        # Per-board protection. Boards run at different temperatures by design, so chain 2
        # gets a configurable allowance instead of forcing one global threshold.
        # hot = the board with the smallest remaining margin to its own STOP threshold.
        hot = None
        for i, ct in enumerate(chain_temps):
            warn_at = board_thresholds(self.wrn_temp, i, "wrn", self.board_overrides)
            stop_at = board_thresholds(self.stop_temp, i, "stop", self.board_overrides)
            margin = stop_at - ct["chip_max"]
            if hot is None or margin < hot["margin"]:
                hot = {"index": ct["index"], "chip_max": ct["chip_max"],
                       "warn_at": warn_at, "stop_at": stop_at, "margin": margin}
        board_hot = hot

        # Push to history
        self.history_hashrate.append(rate_5s_ths)
        if inlet_t > 0:
            self.history_inlet.append(inlet_t)
        if outlet_t > 0:
            self.history_outlet.append(outlet_t)
        if chip_max > 0:
            self.history_chip_max.append(chip_max)

        # Protection evaluation
        self._evaluate_protection(chip_max, chip_avg, inlet_t, outlet_t, delta_t, plug_data, miner_ok=miner_ok,
                                  reject_ratio=reject_ratio, total_accepted=total_accepted, total_rejected=total_rejected,
                                  rate_5s_ghs=rate_5s_ghs, board_hot=board_hot)

        return {
            "timestamp": datetime.now().strftime("%Y-%m-%d %H:%M:%S"),
            "miner_online": miner_ok,
            "miner_recovering": is_recovering,
            "hashrate_ghs": rate_5s_ghs,
            "accepted_shares": total_accepted,
            "rejected_shares": total_rejected,
            "reject_ratio": reject_ratio,
            "water_inlet": inlet_t,
            "water_outlet": outlet_t,
            "water_delta": delta_t,
            "chip_max": chip_max,
            "chip_avg": chip_avg,
            "pcb_temps": temp_pcb,
            "chip_temps": temp_chip,
            "chains": [
                {"index": ct["index"], "chip_max": ct["chip_max"], "chip_avg": ct["chip_avg"],
                 "warn_at": board_thresholds(self.wrn_temp, i, "wrn", self.board_overrides),
                 "stop_at": board_thresholds(self.stop_temp, i, "stop", self.board_overrides)}
                for i, ct in enumerate(chain_temps)
            ],
            "hot_board": ({
                "index": board_hot["index"], "chip_max": board_hot["chip_max"],
                "warn_at": board_hot["warn_at"], "stop_at": board_hot["stop_at"],
            } if board_hot else None),
            "plug": plug_data,
            "cutoff_triggered": self.cutoff_triggered,
            "overheat_wrn_seconds": self.overheat_wrn_seconds,
            "history": {
                "hashrate": list(self.history_hashrate),
                "inlet": list(self.history_inlet),
                "outlet": list(self.history_outlet),
                "chip_max": list(self.history_chip_max),
            }
        }

    def _evaluate_protection(self, chip_max: float, chip_avg: float, tin: float, tout: float, dt: float, plug_data: dict, miner_ok: bool = True,
                             reject_ratio: float = 0.0, total_accepted: int = 0, total_rejected: int = 0, rate_5s_ghs: float = 0.0,
                             board_hot: Optional[dict] = None):
        """Dual threshold overheat cutoff logic and reject ratio alert.

        ``board_hot`` names the hash board closest to its own limits, with that board's
        per-channel thresholds. Falling back to the global thresholds keeps behaviour sane
        if the stats payload has no chain data.
        """
        if board_hot:
            eff_wrn = board_hot["warn_at"]
            eff_stop = board_hot["stop_at"]
            eff_max = board_hot["chip_max"]
            board_label = f"Chain {board_hot['index']}"
        else:
            eff_wrn = self.wrn_temp
            eff_stop = self.stop_temp
            eff_max = chip_max
            board_label = "All chains"

        if self.cutoff_triggered:
            # Enforce off
            if plug_data.get("switch_on", False):
                self.plug.set_switch(False)
            return

        if eff_max >= eff_stop:
            # Immediate cutoff
            self.cutoff_triggered = True
            self.plug.set_switch(False)
            msg = (
                f"🚨 <b>[AntMinerTab-CLI 紧急急停断电告警]</b>\n\n"
                f"<b>设备</b>: Antminer S19 Hydro ({self.base_url})\n"
                f"<b>级别</b>: <b>CRITICAL (达到急停温度 STOP TEMP)</b>\n"
                f"<b>触发板号</b>: <b>{board_label}</b>\n"
                f"<b>芯片温度</b>: <b>{eff_max:.1f}°C</b> (该板急停阈值: {eff_stop:.0f}°C)\n"
                f"<b>水冷回路</b>: 进水 {tin:.1f}°C | 出水 {tout:.1f}°C (ΔT: +{dt:.1f}°C)\n"
                f"<b>动作执行</b>: 米家智能插座已立即<b>硬件切断电源</b>！\n"
                f"<b>保护机制</b>: 保护锁已激活，<b>绝不自动恢复</b>，请现场检查水冷！\n"
                f"<b>时间</b>: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}"
            )
            send_telegram_async(msg)

        elif eff_max >= eff_wrn:
            # WRN temp countdown, accumulated from wall-clock time so that a non-1.0s
            # --interval (or a slow poll) still means 30 real seconds of overheat.
            now_wrn = time.time()
            last = getattr(self, "_wrn_last_time", None)
            if last is None:
                self.overheat_wrn_seconds = 0.0
            else:
                self.overheat_wrn_seconds += max(0.0, now_wrn - last)
            self._wrn_last_time = now_wrn
            if self.overheat_wrn_seconds >= 30.0:
                self.cutoff_triggered = True
                self.plug.set_switch(False)
                msg = (
                    f"⚠️ <b>[AntMinerTab-CLI 超温持续超时断电告警]</b>\n\n"
                    f"<b>设备</b>: Antminer S19 Hydro ({self.base_url})\n"
                    f"<b>级别</b>: <b>WARNING 超时关机 (WRN TEMP 维持超30秒)</b>\n"
                    f"<b>触发板号</b>: <b>{board_label}</b>\n"
                    f"<b>芯片最高温</b>: <b>{eff_max:.1f}°C</b> (该板预警阈值: {eff_wrn:.0f}°C)\n"
                    f"<b>芯片平均温</b>: {chip_avg:.1f}°C\n"
                    f"<b>水冷回路</b>: 进水 {tin:.1f}°C | 出水 {tout:.1f}°C (ΔT: +{dt:.1f}°C)\n"
                    f"<b>动作执行</b>: 米家智能插座已执行<b>断电保护</b>！\n"
                    f"<b>保护机制</b>: 保护锁已激活，<b>绝不自动恢复</b>！\n"
                    f"<b>时间</b>: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}"
                )
                send_telegram_async(msg)
        elif miner_ok:
            self.overheat_wrn_seconds = 0.0
            # Drop the timing baseline too, so the next overheat episode starts at 0s
            # instead of instantly re-accumulating the elapsed time since the last sample.
            self._wrn_last_time = None

        # Reject ratio telegram alert (>10%) with cooldown and recovery
        now_time = time.time()
        total_shares = total_accepted + total_rejected
        if miner_ok and total_shares >= 10 and reject_ratio > 10.0:
            if (not self.high_reject_alerted) or (now_time - self.last_reject_alert_time >= self.reject_alert_cooldown):
                self.high_reject_alerted = True
                self.last_reject_alert_time = now_time
                msg = (
                    f"⚠️ <b>[AntMinerTab-CLI 矿池高拒绝率告警]</b>\n\n"
                    f"<b>设备</b>: Antminer S19 Hydro ({self.base_url})\n"
                    f"<b>当前拒绝率</b>: <b>{reject_ratio:.2f}%</b> (告警阈值: 10.00%)\n"
                    f"<b>有效份额 (Accepted)</b>: {total_accepted:,}\n"
                    f"<b>拒绝份额 (Rejected)</b>: {total_rejected:,}\n"
                    f"<b>总份额数 (Total)</b>: {total_shares:,}\n"
                    f"<b>实时算力</b>: {rate_5s_ghs:,.1f} GH/s\n"
                    f"<b>状态分析</b>: 矿机提交份额被矿池拒绝比例已超 10%，请排查矿池连接延迟与算力板状态！\n"
                    f"<b>时间</b>: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}"
                )
                send_telegram_async(msg)
        elif miner_ok and self.high_reject_alerted and reject_ratio <= 5.0 and total_shares >= 15:
            self.high_reject_alerted = False
            recovery_msg = (
                f"✅ <b>[AntMinerTab-CLI 矿池拒绝率恢复正常]</b>\n\n"
                f"<b>设备</b>: Antminer S19 Hydro ({self.base_url})\n"
                f"<b>当前拒绝率</b>: <b>{reject_ratio:.2f}%</b>\n"
                f"<b>有效份额 (Accepted)</b>: {total_accepted:,}\n"
                f"<b>拒绝份额 (Rejected)</b>: {total_rejected:,}\n"
                f"<b>实时算力</b>: {rate_5s_ghs:,.1f} GH/s\n"
                f"<b>状态</b>: 矿机提交份额已稳定接收，拒绝率已恢复至正常水平。\n"
                f"<b>时间</b>: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}"
            )
            send_telegram_async(recovery_msg)

    def print_dashboard(self, data: Dict[str, Any], watch_mode: bool = False):
        """Render a clean, minimalist terminal dashboard."""
        out = []
        if watch_mode:
            out.append(Colors.CURSOR_HOME)

        out.append("=" * 76)
        out.append(f"{Colors.BOLD}{Colors.CYAN} AntMinerTab (Ubuntu 22.04 LTS & Linux Edition){Colors.RESET}   {data['timestamp']}")
        out.append("=" * 76)

        # 1. KPI Line: Hashrate, Accepted, Rejected, Plug Power & State
        h_spark = render_sparkline(data["history"]["hashrate"])
        h_str = f"{data['hashrate_ghs']:,.1f} GH/s"
        if data.get("miner_recovering"):
            h_str += f" {Colors.YELLOW}[RETRYING]{Colors.RESET}"
        plug = data.get("plug", {})
        pw_str = f"{plug.get('power_w', 0.0):.0f} W" if plug.get("online") else "OFFLINE"
        sw_str = f"{Colors.GREEN}ON{Colors.RESET}" if plug.get("switch_on") else f"{Colors.RED}OFF{Colors.RESET}"

        out.append(f" {Colors.BOLD}Real-time Hashrate:{Colors.RESET} {Colors.BOLD}{Colors.CYAN}{h_str}{Colors.RESET} [{h_spark}]   {Colors.BOLD}Accepted:{Colors.RESET} {Colors.GREEN}{data['accepted_shares']:,}{Colors.RESET}")
        out.append(f" {Colors.BOLD}Smart Plug (10.8.1.110):{Colors.RESET} Power: {Colors.YELLOW}{pw_str}{Colors.RESET} | Switch: [{sw_str}] | Temp: {plug.get('plug_temp', 0)}°C")
        out.append(f" {Colors.BOLD}Rejected Shares:{Colors.RESET}    {Colors.RED}{data['rejected_shares']}{Colors.RESET} (Ratio: {data['reject_ratio']:.2f}%)")
        out.append("-" * 76)

        # 2. Water Temperatures
        tin = data["water_inlet"]
        tout = data["water_outlet"]
        dt = data["water_delta"]
        in_spark = render_sparkline(data["history"]["inlet"])
        out_spark = render_sparkline(data["history"]["outlet"])

        out.append(f" {Colors.BOLD}WATER TEMPERATURE:{Colors.RESET}")
        out.append(f"   Inlet:   {temp_color(tin)}{tin:4.1f}°C{Colors.RESET}  [{in_spark:<10}]")
        out.append(f"   Outlet:  {temp_color(tout)}{tout:4.1f}°C{Colors.RESET}  [{out_spark:<10}]   (Delta T: {Colors.CYAN}+{dt:3.1f}°C{Colors.RESET})")
        out.append("-" * 76)

        # 3. Board Sensors (PCB & Chip Die)
        pcb_list = data["pcb_temps"]
        chip_list = data["chip_temps"]

        out.append(f" {Colors.BOLD}BOARD TEMPERATURE SENSORS (BOARD #1):{Colors.RESET}  [WRN: {self.wrn_temp:.0f}°C | STOP: {self.stop_temp:.0f}°C]")

        # Warning / Cutoff Banner
        if data.get("cutoff_triggered"):
            out.append(f"   {Colors.RED}{Colors.BOLD}🔴 EMERGENCY CUTOFF TRIGGERED! Plug cut off. Lock active.{Colors.RESET}")
        elif data.get("overheat_wrn_seconds", 0) > 0:
            rem = max(0, 30 - data["overheat_wrn_seconds"])
            out.append(f"   {Colors.YELLOW}{Colors.BOLD}⚠️ WRN TEMP EXCEEDED ({data['chip_max']:.1f}°C)! Cutoff in {rem}s...{Colors.RESET}")

        out.append(f"   {Colors.BOLD}PCB Surface Sensors:{Colors.RESET}")
        half = (len(pcb_list) + 1) // 2
        for i in range(half):
            col1 = f"PCB-{i+1} {render_horizontal_bar(pcb_list[i], 80.0, 11)}" if i < len(pcb_list) else ""
            j = i + half
            col2 = f"PCB-{j+1} {render_horizontal_bar(pcb_list[j], 80.0, 11)}" if j < len(pcb_list) else ""
            out.append(f"     {col1:<32}   {col2}")

        out.append(f"\n   {Colors.BOLD}Chip Die Core Sensors:{Colors.RESET}")
        half_c = (len(chip_list) + 1) // 2
        for i in range(half_c):
            col1 = f"Chip-{i+1} {render_horizontal_bar(chip_list[i], 85.0, 11)}" if i < len(chip_list) else ""
            j = i + half_c
            col2 = f"Chip-{j+1} {render_horizontal_bar(chip_list[j], 85.0, 11)}" if j < len(chip_list) else ""
            out.append(f"     {col1:<32}   {col2}")

        out.append("=" * 76 + ("\n" if not watch_mode else ""))
        sys.stdout.write("\n".join(out))
        sys.stdout.flush()


def main():
    parser = argparse.ArgumentParser(
        description="AntMinerTab Headless CLI & Daemon (Ubuntu 22.04 LTS)",
        formatter_class=argparse.ArgumentDefaultsHelpFormatter
    )
    parser.add_argument("--url", default="http://10.8.1.86", help="Miner Web URL")
    parser.add_argument("--user", default="root", help="Digest Auth User")
    parser.add_argument("--pwd", default="dl.general", help="Digest Auth Password")
    parser.add_argument("--config", default=None, help="Path to config.json (default: ./config.json or script directory)")
    parser.add_argument("--plug-ip", default=None, help="Mijia Plug IP (default: from config.json)")
    parser.add_argument("--plug-token", default=None, help="Mijia Plug Token (default: from config.json)")
    parser.add_argument("--wrn-temp", type=float, default=75.0, help="Warning Temp threshold for 30s cutoff (°C)")
    parser.add_argument("--stop-temp", type=float, default=78.0, help="Emergency Stop Temp threshold for instant cutoff (°C)")
    parser.add_argument("--watch", "-w", action="store_true", help="Continuous monitoring TUI mode")
    parser.add_argument("--interval", "-i", type=float, default=1.0, help="Polling interval in seconds")
    parser.add_argument("--json", action="store_true", help="Output raw JSON format")

    args = parser.parse_args()

    # Plug identity lives in config.json so a re-tokenized plug needs no code change.
    cfg = load_plug_config(args.config)
    plug_ip = args.plug_ip or cfg["plug_ip"]
    plug_token = args.plug_token or cfg["plug_token"]
    plug_did = cfg["plug_did"]
    if not plug_token:
        sys.stderr.write("[ERROR] plug_token is empty. Set it in config.json or pass --plug-token.\n")
        sys.exit(1)

    monitor = AntminerMonitor(
        base_url=args.url,
        username=args.user,
        password=args.pwd,
        plug_ip=plug_ip,
        plug_token=plug_token,
        plug_did=plug_did,
        board_overrides=cfg.get("board_thresholds") or [],
        wrn_temp=args.wrn_temp,
        stop_temp=args.stop_temp,
        interval=args.interval,
    )

    if args.watch and not args.json:
        sys.stdout.write(Colors.CLEAR)
        sys.stdout.flush()

    try:
        while True:
            try:
                data = monitor.fetch_metrics()
                if args.json:
                    print(json.dumps(data, ensure_ascii=False, indent=2))
                else:
                    monitor.print_dashboard(data, watch_mode=args.watch)
            except Exception as e:
                sys.stderr.write(f"\n{Colors.RED}[Error] Monitoring failure: {e}{Colors.RESET}\n")
                if not args.watch:
                    sys.exit(1)

            if not args.watch:
                break

            time.sleep(args.interval)

    except KeyboardInterrupt:
        print("\nAntMinerTab stopped by user.")
        sys.exit(0)


if __name__ == "__main__":
    main()
