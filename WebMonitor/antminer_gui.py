#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
AntMinerTab - Real-time Miner & Smart Plug Monitor
Targets:
- Antminer S19 Hydro: http://10.8.1.86/#dashboard
- Mijia Smart Plug 3 (cuco.plug.v3): 10.8.1.110 (miIO UDP)
- Telegram Alarm Bot: @s332854BOT -> Chat ID 7775553661

Features:
1. Dual Cutoff Thresholds:
   - WRN TEMP (default 75°C): Cut off power if maintained for >30s.
   - STOP TEMP (default 78°C): Immediate unconditional power cutoff.
   - Irreversible protection lock (no auto-recovery, manual reset required).
2. Telegram Bot Emergency Notifications:
   - Asynchronously alerts user's Telegram bot on WRN TEMP cutoff, STOP TEMP cutoff, and lock reset.
3. Password Protection:
   - Power ON requires password 'dl.general'.
   - Power OFF is direct and immediate.
4. Adaptive Dynamic Y-Axis Scaling:
   - Y-axis automatically fits the span of current curves for optimal vertical resolution.
5. Auto Right-Align:
   - Viewport defaults to right-aligned [-3600, 0] after 6s of no user panning/zooming.
6. Interactive Vertical Cursor Line with Crosshair & Top-Right Temperature Badges:
   - Zero-jitter, non-blocking hover on 4 curves with clean square border temperature badges.
7. Pure square industrial design & unified 'AntMinerTab' title.
"""

import bisect
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

import pyqtgraph as pg
import requests
from cryptography.hazmat.backends import default_backend
from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes

from mijia_plug import MijiaPlugDriver, load_plug_config, parse_chains, board_thresholds
from PyQt5.QtCore import QMutex, QPointF, Qt, QThread, pyqtSignal
from PyQt5.QtGui import QColor, QFont, QPainter, QPalette
from PyQt5.QtWidgets import (
    QApplication,
    QComboBox,
    QDialog,
    QDoubleSpinBox,
    QFrame,
    QHBoxLayout,
    QLabel,
    QLineEdit,
    QMainWindow,
    QPushButton,
    QSpinBox,
    QVBoxLayout,
    QWidget,
)
from requests.adapters import HTTPAdapter
from requests.auth import HTTPDigestAuth


# Telegram Bot Credentials
TELEGRAM_TOKEN = "8938811502:AAHSMmrELHYz8OrFmlD8YeaogjmZ7X7-7NE"
TELEGRAM_CHAT_ID = 7775553661


def send_telegram_async(message: str):
    """Send asynchronous HTML message to Telegram without blocking UI thread."""
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


# Industrial Color Palette
DARK_BG = "#131417"
PANEL_BG = "#1b1d22"
BORDER_COLOR = "#2d313b"
BAR_TRACK = "#252830"
ACCENT_BLUE = "#00a8e8"
ACCENT_GREEN = "#00c49f"
ACCENT_YELLOW = "#f4a261"
ACCENT_RED = "#e76f51"
ACCENT_ORANGE = "#e67e22"
TEXT_WHITE = "#e0e2e8"
TEXT_MUTED = "#868c9c"

# Fallback base limits for a board left on "auto". Chain 2 is derived from these via
# BOARD_THRESHOLD_OFFSETS, so these are a base rather than a global switch.
DEFAULT_WRN_TEMP = 75.0
DEFAULT_STOP_TEMP = 78.0

# Cross-platform fonts for Linux (Ubuntu 22.04), Windows and macOS
MONO_FONTS = ["Ubuntu Mono", "DejaVu Sans Mono", "Liberation Mono", "Consolas", "Courier New", "monospace"]
SANS_FONTS = ["Ubuntu", "DejaVu Sans", "Liberation Sans", "Segoe UI", "sans-serif"]


def get_mono_font(size: int = 10, bold: bool = False) -> QFont:
    f = QFont()
    f.setFamilies(MONO_FONTS)
    f.setPointSize(size)
    if bold:
        f.setBold(True)
    return f


def get_sans_font(size: int = 9, bold: bool = False) -> QFont:
    f = QFont()
    f.setFamilies(SANS_FONTS)
    f.setPointSize(size)
    if bold:
        f.setBold(True)
    return f


class PasswordDialog(QDialog):
    """Pure square industrial password authentication dialog."""

    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)
        self.setWindowTitle("Power ON Authentication")
        self.setFixedSize(360, 160)
        self.setStyleSheet(f"""
            QDialog {{
                background-color: {PANEL_BG};
                border: 1px solid {BORDER_COLOR};
            }}
            QLabel {{
                color: {TEXT_WHITE};
                font-family: "Ubuntu Mono", "DejaVu Sans Mono", Consolas, monospace;
            }}
            QLineEdit {{
                background-color: #22252e;
                border: 1px solid {BORDER_COLOR};
                border-radius: 0px;
                padding: 6px 10px;
                color: {TEXT_WHITE};
                font-family: "Ubuntu Mono", "DejaVu Sans Mono", Consolas, monospace;
                font-size: 13px;
            }}
            QLineEdit:focus {{
                border: 1px solid {ACCENT_BLUE};
            }}
            QPushButton {{
                background-color: #22252e;
                border: 1px solid {BORDER_COLOR};
                border-radius: 0px;
                padding: 6px 14px;
                color: {TEXT_WHITE};
                font-family: "Ubuntu Mono", "DejaVu Sans Mono", Consolas, monospace;
                font-weight: bold;
                font-size: 12px;
            }}
            QPushButton:hover {{
                background-color: #2d313d;
                border-color: {ACCENT_BLUE};
            }}
        """)

        layout = QVBoxLayout(self)
        layout.setContentsMargins(18, 16, 18, 16)
        layout.setSpacing(12)

        prompt_label = QLabel("Enter password to turn ON the smart plug:")
        prompt_label.setFont(QFont("Segoe UI", 9, QFont.Bold))
        layout.addWidget(prompt_label)

        self.pwd_edit = QLineEdit()
        self.pwd_edit.setEchoMode(QLineEdit.Password)
        self.pwd_edit.setPlaceholderText("Password")
        layout.addWidget(self.pwd_edit)

        self.err_label = QLabel("")
        self.err_label.setFont(QFont("Segoe UI", 9))
        self.err_label.setStyleSheet(f"color: {ACCENT_RED};")
        self.err_label.hide()
        layout.addWidget(self.err_label)

        btn_row = QHBoxLayout()
        btn_row.addStretch()

        self.ok_btn = QPushButton("CONFIRM")
        self.ok_btn.clicked.connect(self._validate)

        self.cancel_btn = QPushButton("CANCEL")
        self.cancel_btn.clicked.connect(self.reject)

        btn_row.addWidget(self.ok_btn)
        btn_row.addWidget(self.cancel_btn)
        layout.addLayout(btn_row)

    def _validate(self):
        if self.pwd_edit.text() == "dl.general":
            self.accept()
        else:
            self.err_label.setText("Incorrect password! Try again.")
            self.err_label.show()
            self.pwd_edit.selectAll()
            self.pwd_edit.setFocus()


class RealTimeAxisItem(pg.AxisItem):
    """X-Axis showing authentic local wall-clock time (HH:MM:SS / HH:MM)."""

    def tickStrings(self, values, scale, spacing):
        strings = []
        for v in values:
            if v <= 0:
                strings.append("")
                continue
            try:
                dt = datetime.fromtimestamp(v)
                if spacing < 180:
                    strings.append(dt.strftime("%H:%M:%S"))
                else:
                    strings.append(dt.strftime("%H:%M"))
            except Exception:
                strings.append("")
        return strings


class TempSensorBar(QWidget):
    """Flat, square-geometry horizontal temperature gauge bar."""

    def __init__(self, label: str, max_temp: float = 85.0, parent: Optional[QWidget] = None):
        super().__init__(parent)
        self.label_text = label
        self.max_temp = max_temp
        self.current_temp = 0.0
        self.is_overheat = False
        self.setFixedHeight(26)

    def set_temperature(self, temp: float, is_overheat: bool = False):
        self.current_temp = max(0.0, temp)
        self.is_overheat = is_overheat
        self.update()

    def paintEvent(self, event):
        painter = QPainter(self)
        painter.setRenderHint(QPainter.Antialiasing, False)

        w = self.width()
        h = self.height()

        painter.setFont(get_mono_font(9, bold=True))
        painter.setPen(QColor(TEXT_WHITE))
        painter.drawText(0, 0, 68, h, Qt.AlignVCenter | Qt.AlignLeft, self.label_text)

        bar_x = 72
        bar_w = w - bar_x - 68
        bar_h = 10
        bar_y = (h - bar_h) // 2

        painter.setPen(Qt.NoPen)
        painter.setBrush(QColor(BAR_TRACK))
        painter.drawRect(bar_x, bar_y, bar_w, bar_h)

        ratio = min(1.0, self.current_temp / self.max_temp) if self.max_temp > 0 else 0.0
        fill_w = int(ratio * bar_w)

        if fill_w > 0:
            if self.is_overheat or self.current_temp >= 78.0:
                bar_color = QColor(ACCENT_RED)
            elif self.current_temp >= 68.0:
                bar_color = QColor(ACCENT_YELLOW)
            elif self.current_temp >= 55.0:
                bar_color = QColor(ACCENT_BLUE)
            else:
                bar_color = QColor(ACCENT_GREEN)

            painter.setBrush(bar_color)
            painter.drawRect(bar_x, bar_y, fill_w, bar_h)

        val_str = f"{self.current_temp:4.1f}°C" if self.current_temp > 0 else "--.-°C"
        painter.setFont(get_mono_font(10, bold=True))
        if self.is_overheat or self.current_temp >= 78.0:
            painter.setPen(QColor(ACCENT_RED))
        elif self.current_temp >= 68.0:
            painter.setPen(QColor(ACCENT_YELLOW))
        elif self.current_temp >= 55.0:
            painter.setPen(QColor(ACCENT_BLUE))
        else:
            painter.setPen(QColor(ACCENT_GREEN))

        painter.drawText(w - 62, 0, 62, h, Qt.AlignVCenter | Qt.AlignRight, val_str)


class DataWorker(QThread):
    """Background polling worker for both Antminer & Mijia Smart Plug."""

    data_received = pyqtSignal(dict)
    connection_changed = pyqtSignal(bool, str)
    plug_switch_completed = pyqtSignal(bool, bool)

    def __init__(
        self,
        miner_url: str = "http://10.8.1.86",
        username: str = "root",
        password: str = "dl.general",
        plug_ip: str = "10.8.1.110",
        plug_token: str = "",
        plug_did: str = "2051114902",
        board_overrides: Optional[List[Dict[str, Any]]] = None,
        interval: float = 1.0,
    ):
        super().__init__()
        self.miner_url = miner_url.rstrip("/")
        self.username = username
        self.password = password
        self.interval = interval
        self._running = True
        self._paused = False
        self.mutex = QMutex()
        self.pending_switch_command: Optional[bool] = None

        # Miner Session with Keep-Alive & Self-Healing
        self.session = self._create_miner_session()
        self.last_valid_metrics: Optional[Dict[str, Any]] = None
        self.consecutive_miner_failures: int = 0
        self.max_hold_failures: int = 5

        # Persistent Plug Driver
        self.plug = MijiaPlugDriver(ip=plug_ip, token_hex=plug_token, did=plug_did)
        self.board_overrides = list(board_overrides or [])

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
            "User-Agent": "AntMinerTab/2.0",
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

    def set_interval(self, sec: float):
        self.mutex.lock()
        self.interval = max(0.5, sec)
        self.mutex.unlock()

    def set_paused(self, paused: bool):
        self.mutex.lock()
        self._paused = paused
        self.mutex.unlock()

    def request_plug_switch(self, state: bool):
        self.mutex.lock()
        self.pending_switch_command = state
        self.mutex.unlock()

    def stop(self):
        self._running = False
        self.wait(2000)

    def run(self):
        while self._running:
            if not self._paused:
                t0 = time.time()
                miner_fetch_success = False
                miner_err = ""
                rate_5s_ghs = 0.0
                total_accepted = 0
                total_rejected = 0
                reject_ratio = 0.0
                temp_pic = []
                temp_pcb = []
                temp_chip = []
                chain_temps = []

                # Handle pending switch request
                self.mutex.lock()
                target_switch = self.pending_switch_command
                self.pending_switch_command = None
                self.mutex.unlock()

                if target_switch is not None:
                    res = self.plug.set_switch(target_switch)
                    self.plug_switch_completed.emit(res, target_switch)

                # 1. Query Miner Data (with timeout & JSON validation)
                try:
                    resp_stats = self.session.get(f"{self.miner_url}/cgi-bin/stats.cgi", timeout=(1.5, 3.5))
                    if resp_stats.status_code != 200:
                        raise ValueError(f"stats.cgi returned HTTP {resp_stats.status_code}")
                    raw_stats = resp_stats.json()

                    resp_pools = self.session.get(f"{self.miner_url}/cgi-bin/pools.cgi", timeout=(1.5, 3.5))
                    if resp_pools.status_code != 200:
                        raise ValueError(f"pools.cgi returned HTTP {resp_pools.status_code}")
                    raw_pools = resp_pools.json()

                    st0 = raw_stats.get("STATS", [{}])[0]
                    rate_5s_ghs = float(st0.get("rate_5s", 0.0))

                    # One chain entry per hash board (chain_num=2 here). Reading only
                    # chain[0] hid the second board: Chain1 read 71°C while Chain2 was at
                    # 81°C, so the STOP threshold never fired.
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
                    miner_err = str(e)
                    self.consecutive_miner_failures += 1
                    if self.consecutive_miner_failures % 3 == 0:
                        self._reinit_miner_session()

                is_recovering = False
                if miner_fetch_success:
                    miner_ok = True
                elif self.last_valid_metrics and self.consecutive_miner_failures <= self.max_hold_failures:
                    # Debounce / hold last known good values to prevent metric zeroing and chart gaps
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

                # 2. Query Mijia Plug Data
                plug_data = self.plug.query_status()

                latency_ms = int((time.time() - t0) * 1000)

                inlet_t = temp_pic[0] if len(temp_pic) > 0 else 0.0
                outlet_t = temp_pic[1] if len(temp_pic) > 1 else 0.0
                delta_t = (outlet_t - inlet_t) if (inlet_t > 0 and outlet_t > 0) else 0.0

                payload = {
                    "time_epoch": time.time(),
                    "timestamp": datetime.now().strftime("%H:%M:%S"),
                    "latency_ms": latency_ms,
                    "miner_online": miner_ok,
                    "miner_recovering": is_recovering,
                    "hashrate_ghs": rate_5s_ghs,
                    "accepted_shares": total_accepted,
                    "rejected_shares": total_rejected,
                    "reject_ratio": reject_ratio,
                    "water_inlet": inlet_t,
                    "water_outlet": outlet_t,
                    "water_delta": delta_t,
                    "pcb_temps": temp_pcb,
                    "chip_temps": temp_chip,
                    "chains": [
                        {"index": ct["index"], "chip_max": ct["chip_max"], "chip_avg": ct["chip_avg"],
                         "warn_at": board_thresholds(DEFAULT_WRN_TEMP, i, "wrn", self.board_overrides),
                         "stop_at": board_thresholds(DEFAULT_STOP_TEMP, i, "stop", self.board_overrides)}
                        for i, ct in enumerate(chain_temps)
                    ],
                    "chip_max": max(temp_chip) if temp_chip else 0.0,
                    "chip_avg": (sum(temp_chip) / len(temp_chip)) if temp_chip else 0.0,
                    "plug": plug_data,
                }

                if miner_ok:
                    if is_recovering:
                        self.connection_changed.emit(True, f"Retrying ({self.miner_url})")
                    else:
                        self.connection_changed.emit(True, f"Connected ({self.miner_url})")
                else:
                    self.connection_changed.emit(False, f"Miner: {miner_err[:20]}")

                self.data_received.emit(payload)

            # Adaptive sleep
            self.mutex.lock()
            cur_interval = self.interval
            self.mutex.unlock()

            elapsed = 0.0
            while elapsed < cur_interval and self._running:
                time.sleep(0.05)
                elapsed += 0.05


class MetricCard(QFrame):
    """Flat square-geometry KPI display card."""

    def __init__(self, title: str, accent_color: str, parent: Optional[QWidget] = None):
        super().__init__(parent)
        self.setObjectName("MetricCard")
        self.setStyleSheet(f"""
            QFrame#MetricCard {{
                background-color: {PANEL_BG};
                border: 1px solid {BORDER_COLOR};
                border-radius: 0px;
                padding: 10px;
            }}
        """)

        layout = QVBoxLayout(self)
        layout.setContentsMargins(10, 8, 10, 8)
        layout.setSpacing(2)

        self.title_label = QLabel(title.upper())
        self.title_label.setFont(QFont("Segoe UI", 8, QFont.Bold))
        self.title_label.setStyleSheet(f"color: {TEXT_MUTED}; letter-spacing: 0.5px;")

        self.value_label = QLabel("--")
        self.value_label.setFont(QFont("Consolas", 18, QFont.Bold))
        self.value_label.setStyleSheet(f"color: {accent_color};")

        self.sub_label = QLabel("")
        self.sub_label.setFont(QFont("Segoe UI", 8))
        self.sub_label.setStyleSheet(f"color: {TEXT_MUTED};")

        layout.addWidget(self.title_label)
        layout.addWidget(self.value_label)
        layout.addWidget(self.sub_label)

    def set_value(self, val_text: str, sub_text: str = "", val_color: Optional[str] = None):
        self.value_label.setText(val_text)
        if val_color:
            self.value_label.setStyleSheet(f"color: {val_color};")
        if sub_text:
            self.sub_label.setText(sub_text)
            self.sub_label.show()
        else:
            self.sub_label.hide()


class PlugSwitchCard(QFrame):
    """Square interactive plug switch card."""

    switch_toggled = pyqtSignal(bool)

    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)
        self.setObjectName("MetricCard")
        self.setStyleSheet(f"""
            QFrame#MetricCard {{
                background-color: {PANEL_BG};
                border: 1px solid {BORDER_COLOR};
                border-radius: 0px;
                padding: 10px;
            }}
        """)

        layout = QVBoxLayout(self)
        layout.setContentsMargins(10, 8, 10, 8)
        layout.setSpacing(4)

        self.title_label = QLabel("PLUG SWITCH")
        self.title_label.setFont(QFont("Segoe UI", 8, QFont.Bold))
        self.title_label.setStyleSheet(f"color: {TEXT_MUTED}; letter-spacing: 0.5px;")

        btn_row = QHBoxLayout()
        self.toggle_btn = QPushButton("ON")
        self.toggle_btn.setFixedHeight(30)
        self.toggle_btn.setFont(QFont("Consolas", 11, QFont.Bold))
        self.toggle_btn.setStyleSheet(f"""
            QPushButton {{
                background-color: #1a382c;
                border: 1px solid {ACCENT_GREEN};
                color: {ACCENT_GREEN};
                border-radius: 0px;
                font-weight: bold;
            }}
            QPushButton:hover {{
                background-color: #244f3e;
            }}
        """)
        self.toggle_btn.clicked.connect(self._on_clicked)
        btn_row.addWidget(self.toggle_btn)

        self.sub_label = QLabel("Plug: --°C")
        self.sub_label.setFont(QFont("Segoe UI", 8))
        self.sub_label.setStyleSheet(f"color: {TEXT_MUTED};")

        layout.addWidget(self.title_label)
        layout.addLayout(btn_row)
        layout.addWidget(self.sub_label)

        self.current_state = True

    def _on_clicked(self):
        new_state = not self.current_state
        self.switch_toggled.emit(new_state)

    def update_state(self, is_online: bool, is_on: bool, temp_c: int = 0):
        if not is_online:
            self.toggle_btn.setText("OFFLINE")
            self.toggle_btn.setStyleSheet(f"""
                QPushButton {{
                    background-color: #252830;
                    border: 1px solid {BORDER_COLOR};
                    color: {TEXT_MUTED};
                    border-radius: 0px;
                }}
            """)
            self.sub_label.setText("Plug unreachable")
            return

        self.current_state = is_on
        if is_on:
            self.toggle_btn.setText("ON")
            self.toggle_btn.setStyleSheet(f"""
                QPushButton {{
                    background-color: #1a382c;
                    border: 1px solid {ACCENT_GREEN};
                    color: {ACCENT_GREEN};
                    border-radius: 0px;
                }}
                QPushButton:hover {{
                    background-color: #244f3e;
                }}
            """)
            self.sub_label.setText(f"Internal Temp: {temp_c}°C")
        else:
            self.toggle_btn.setText("OFF")
            self.toggle_btn.setStyleSheet(f"""
                QPushButton {{
                    background-color: #3b1e24;
                    border: 1px solid {ACCENT_RED};
                    color: {ACCENT_RED};
                    border-radius: 0px;
                }}
                QPushButton:hover {{
                    background-color: #522730;
                }}
            """)
            self.sub_label.setText("Power Cut Off")


class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("AntMinerTab")
        self.resize(1140, 720)
        self.setMinimumSize(960, 620)

        self.setStyleSheet(f"""
            QMainWindow {{
                background-color: {DARK_BG};
            }}
            QLabel {{
                color: {TEXT_WHITE};
            }}
            QComboBox {{
                background-color: #22252e;
                border: 1px solid {BORDER_COLOR};
                border-radius: 0px;
                padding: 3px 8px;
                color: {TEXT_WHITE};
                font-family: Consolas, Segoe UI;
                font-size: 12px;
            }}
            QComboBox::drop-down {{
                border: none;
            }}
            QPushButton {{
                background-color: #22252e;
                border: 1px solid {BORDER_COLOR};
                border-radius: 0px;
                padding: 4px 12px;
                color: {TEXT_WHITE};
                font-family: Consolas, Segoe UI;
                font-weight: bold;
                font-size: 12px;
            }}
            QPushButton:hover {{
                background-color: #2d313d;
                border-color: {ACCENT_BLUE};
            }}
            QSpinBox, QDoubleSpinBox {{
                background-color: #22252e;
                border: 1px solid {BORDER_COLOR};
                border-radius: 0px;
                padding: 2px 4px;
                color: {ACCENT_YELLOW};
                font-family: Consolas, monospace;
                font-size: 12px;
                font-weight: bold;
            }}
            QFrame#Panel {{
                background-color: {PANEL_BG};
                border: 1px solid {BORDER_COLOR};
                border-radius: 0px;
            }}
        """)

        # 1-Hour Time Window Buffers (Fixed 3600 seconds)
        self.window_seconds = 3600.0
        self.time_buffer: Deque[float] = deque()
        self.inlet_buffer: Deque[float] = deque()
        self.outlet_buffer: Deque[float] = deque()
        self.chip_max_buffer: Deque[float] = deque()
        self.chip_avg_buffer: Deque[float] = deque()

        # Overheat Protection State
        self.overheat_wrn_seconds = 0
        self.cutoff_triggered = False

        # High Reject Ratio Alarm State
        self.high_reject_alerted = False
        self.last_reject_alert_time = 0.0
        self.reject_alert_cooldown = 300.0  # Cooldown 5 minutes between alerts

        # User Interaction & Right-Align Timer
        self.last_user_interaction_time = 0.0

        # Debouncing variable for smooth hover without jitter
        self.current_hover_idx: Optional[int] = None

        self._init_ui()
        self._init_worker()

    def _init_ui(self):
        central_widget = QWidget(self)
        self.setCentralWidget(central_widget)
        main_layout = QVBoxLayout(central_widget)
        main_layout.setContentsMargins(14, 12, 14, 12)
        main_layout.setSpacing(10)

        # 1. Header Bar: 'AntMinerTab' + Connection Badge + Controls
        header_layout = QHBoxLayout()
        header_layout.setSpacing(10)

        title = QLabel("AntMinerTab")
        title.setFont(QFont("Consolas", 13, QFont.Bold))
        title.setStyleSheet(f"color: {TEXT_WHITE}; letter-spacing: 0.5px;")

        self.status_badge = QLabel("[ CONNECTING... ]")
        self.status_badge.setFont(QFont("Consolas", 9, QFont.Bold))
        self.status_badge.setStyleSheet(f"color: {ACCENT_YELLOW}; background-color: #23211b; padding: 2px 8px; border: 1px solid #4a3e20; border-radius: 0px;")

        header_layout.addWidget(title)
        header_layout.addWidget(self.status_badge)
        header_layout.addStretch()

        interval_label = QLabel("Interval:")
        interval_label.setFont(QFont("Segoe UI", 9))
        interval_label.setStyleSheet(f"color: {TEXT_MUTED};")

        # Custom numerical spin box (0.5s ~ 60.0s)
        self.interval_spin = QDoubleSpinBox()
        self.interval_spin.setRange(0.5, 60.0)
        self.interval_spin.setSingleStep(0.5)
        self.interval_spin.setValue(1.0)
        self.interval_spin.setDecimals(1)
        self.interval_spin.setSuffix(" s")
        self.interval_spin.setFixedWidth(78)
        self.interval_spin.valueChanged.connect(self._on_interval_changed)

        self.pause_btn = QPushButton("Pause")
        self.pause_btn.setCheckable(True)
        self.pause_btn.clicked.connect(self._toggle_pause)

        self.clear_btn = QPushButton("Clear Chart")
        self.clear_btn.clicked.connect(self._clear_history)

        header_layout.addWidget(interval_label)
        header_layout.addWidget(self.interval_spin)
        header_layout.addWidget(self.pause_btn)
        header_layout.addWidget(self.clear_btn)

        main_layout.addLayout(header_layout)

        # 2. Metric Cards: Hashrate, Accepted, Rejected, Plug Power (Right), Plug Switch (Far Right)
        cards_layout = QHBoxLayout()
        cards_layout.setSpacing(8)

        self.card_hashrate = MetricCard("Real-time Hashrate", ACCENT_BLUE)
        self.card_accepted = MetricCard("Accepted Shares", ACCENT_GREEN)
        self.card_rejected = MetricCard("Rejected Shares", ACCENT_RED)
        self.card_plug_power = MetricCard("Smart Plug Power", ACCENT_YELLOW)
        self.card_plug_switch = PlugSwitchCard()
        self.card_plug_switch.switch_toggled.connect(self._on_user_toggle_plug)

        cards_layout.addWidget(self.card_hashrate)
        cards_layout.addWidget(self.card_accepted)
        cards_layout.addWidget(self.card_rejected)
        cards_layout.addWidget(self.card_plug_power)
        cards_layout.addWidget(self.card_plug_switch)

        main_layout.addLayout(cards_layout)

        # 3. Main Center Area (Left: Plot, Right: Sensors & Dual Thresholds)
        center_layout = QHBoxLayout()
        center_layout.setSpacing(10)

        # --- Left Panel: Temperature Dynamics Plot ---
        plot_frame = QFrame()
        plot_frame.setObjectName("Panel")
        plot_layout = QVBoxLayout(plot_frame)
        plot_layout.setContentsMargins(12, 10, 12, 10)
        plot_layout.setSpacing(6)

        plot_header = QHBoxLayout()
        self.plot_title = QLabel("TEMPERATURE DYNAMICS (LAST 1 HOUR)")
        self.plot_title.setFont(QFont("Consolas", 10, QFont.Bold))
        self.plot_title.setStyleSheet(f"color: {TEXT_MUTED};")

        # Stable Real-time Water Status (Decoupled from mouse move to prevent layout oscillation)
        self.water_stat_label = QLabel("Inlet: --.-°C | Outlet: --.-°C (ΔT: --.-°C)")
        self.water_stat_label.setFont(QFont("Consolas", 9, QFont.Bold))
        self.water_stat_label.setStyleSheet(f"color: {ACCENT_BLUE};")

        plot_header.addWidget(self.plot_title)
        plot_header.addStretch()
        plot_header.addWidget(self.water_stat_label)
        plot_layout.addLayout(plot_header)

        # PyQtGraph Plot Widget
        pg.setConfigOptions(antialias=True)
        time_axis = RealTimeAxisItem(orientation="bottom")
        self.plot_widget = pg.PlotWidget(axisItems={"bottom": time_axis})
        self.plot_widget.setBackground(PANEL_BG)
        self.plot_widget.showGrid(x=True, y=True, alpha=0.15)
        self.plot_widget.setLabel("left", "Temp", units="°C", color=TEXT_MUTED)
        self.plot_widget.setLabel("bottom", "Local Time", color=TEXT_MUTED)
        self.plot_widget.getAxis("left").setTextPen(TEXT_MUTED)
        self.plot_widget.getAxis("bottom").setTextPen(TEXT_MUTED)
        self.plot_widget.getAxis("left").setPen(QColor(BORDER_COLOR))
        self.plot_widget.getAxis("bottom").setPen(QColor(BORDER_COLOR))

        # Lock X-Range strictly to [-3600, 0] by default
        self.plot_widget.setXRange(-self.window_seconds, 0, padding=0.0)

        # Connect user pan/zoom signal
        self.plot_widget.getViewBox().sigRangeChangedManually.connect(self._on_user_manipulated_view)

        # Non-blocking Vertical Reference Line (Transparent to mouse hover, zero jitter)
        self.v_line = pg.InfiniteLine(
            angle=90,
            movable=False,
            pen=pg.mkPen(color="#8890a0", width=1.0, style=Qt.DashLine),
        )
        self.v_line.setAcceptHoverEvents(False)
        self.v_line.setAcceptedMouseButtons(Qt.NoButton)
        self.v_line.setEnabled(False)
        self.v_line.hide()
        self.plot_widget.addItem(self.v_line, ignoreBounds=True)

        # Crosshair markers ('+') & Top-Right Temperature Badges for all 4 curves
        self.markers = {}
        self.labels = {}
        curve_configs = [
            ("inlet", ACCENT_BLUE),
            ("outlet", ACCENT_YELLOW),
            ("chip_max", ACCENT_RED),
            ("chip_avg", ACCENT_ORANGE),
        ]
        for name, col in curve_configs:
            # Crosshair '+' marker on curve
            m = pg.ScatterPlotItem(size=14, symbol="+", pen=pg.mkPen(col, width=2.0))
            m.setAcceptHoverEvents(False)
            m.setAcceptedMouseButtons(Qt.NoButton)
            m.setEnabled(False)
            m.hide()
            self.plot_widget.addItem(m, ignoreBounds=True)
            self.markers[name] = m

            # Direct Temperature Badge strictly at Top-Right (anchor=(-0.15, 1.15))
            lbl = pg.TextItem(
                text="",
                color=col,
                fill=pg.mkBrush(24, 26, 32, 230),
                border=pg.mkPen(col, width=1),
                anchor=(-0.15, 1.15)
            )
            lbl.setFont(QFont("Consolas", 9, QFont.Bold))
            lbl.setAcceptHoverEvents(False)
            lbl.setAcceptedMouseButtons(Qt.NoButton)
            lbl.setEnabled(False)
            lbl.hide()
            self.plot_widget.addItem(lbl, ignoreBounds=True)
            self.labels[name] = lbl

        # Connect mouse movement for crosshairs
        self.plot_widget.scene().sigMouseMoved.connect(self._on_plot_mouse_moved)

        self.legend = self.plot_widget.addLegend(offset=(10, 10))
        self.legend.setBrush(QColor("#16181cee"))
        self.legend.setPen(QColor(BORDER_COLOR))

        self.curve_inlet = self.plot_widget.plot(
            [], [], name="Inlet Water", pen=pg.mkPen(color=ACCENT_BLUE, width=2.0), connect="finite"
        )
        self.curve_outlet = self.plot_widget.plot(
            [], [], name="Outlet Water", pen=pg.mkPen(color=ACCENT_YELLOW, width=2.0), connect="finite"
        )
        self.curve_chip_max = self.plot_widget.plot(
            [], [], name="Chip Max", pen=pg.mkPen(color=ACCENT_RED, width=2.0), connect="finite"
        )
        self.curve_chip_avg = self.plot_widget.plot(
            [], [], name="Chip Avg", pen=pg.mkPen(color=ACCENT_ORANGE, width=1.5, style=Qt.DashLine), connect="finite"
        )

        plot_layout.addWidget(self.plot_widget)
        center_layout.addWidget(plot_frame, stretch=6)

        # --- Right Panel: Sensor Gauges & Dual Thresholds ---
        sensors_frame = QFrame()
        sensors_frame.setObjectName("Panel")
        sensors_layout = QVBoxLayout(sensors_frame)
        sensors_layout.setContentsMargins(12, 10, 12, 10)
        sensors_layout.setSpacing(4)

        # Per-board power-cutoff limits. Chain 2 runs hotter by design, so it gets its own
        # pair; leaving a value on "auto" falls back to the built-in base + offset.
        def _board_row(title: str, color: str, wrn_default: Optional[int], stop_default: Optional[int]):
            row = QHBoxLayout()
            row.setSpacing(6)
            lbl = QLabel(title)
            lbl.setFont(QFont("Consolas", 8, QFont.Bold))
            lbl.setStyleSheet(f"color: {color};")

            w = QSpinBox()
            w.setRange(0, 115)
            w.setSuffix("°C")
            w.setFixedWidth(64)
            w.setSpecialValueText("auto")
            w.setValue(wrn_default if wrn_default is not None else 0)

            s = QSpinBox()
            s.setRange(0, 125)
            s.setSuffix("°C")
            s.setFixedWidth(64)
            s.setSpecialValueText("auto")
            s.setValue(stop_default if stop_default is not None else 0)

            stop_lbl = QLabel("STOP:")
            stop_lbl.setFont(QFont("Consolas", 8, QFont.Bold))
            stop_lbl.setStyleSheet(f"color: {TEXT_MUTED};")

            row.addWidget(lbl)
            row.addWidget(w)
            row.addSpacing(6)
            row.addWidget(stop_lbl)
            row.addWidget(s)
            row.addStretch()
            sensors_layout.addLayout(row)
            return w, s

        self.b1_wrn_spin, self.b1_stop_spin = _board_row("CH1 WRN:", ACCENT_YELLOW, None, None)
        self.b2_wrn_spin, self.b2_stop_spin = _board_row("CH2 WRN:", ACCENT_ORANGE, 85, 88)

        # Overheat Alert Banner
        self.cutoff_alert_label = QLabel("")
        self.cutoff_alert_label.setFont(QFont("Consolas", 8, QFont.Bold))
        self.cutoff_alert_label.setStyleSheet(f"color: {ACCENT_RED}; background-color: #3b171c; padding: 4px; border: 1px solid #752834; border-radius: 0px;")
        self.cutoff_alert_label.hide()
        sensors_layout.addWidget(self.cutoff_alert_label)

        # Reset Protection Lock Button
        self.reset_cutoff_btn = QPushButton("RESET PROTECTION LOCK")
        self.reset_cutoff_btn.setStyleSheet(f"""
            QPushButton {{
                background-color: #5e1f2b;
                border: 1px solid {ACCENT_RED};
                color: {TEXT_WHITE};
                font-weight: bold;
                padding: 4px;
            }}
            QPushButton:hover {{
                background-color: #7a2838;
            }}
        """)
        self.reset_cutoff_btn.clicked.connect(self._on_reset_cutoff_lock)
        self.reset_cutoff_btn.hide()
        sensors_layout.addWidget(self.reset_cutoff_btn)

        # Chip Die Section (this miner has 2 hash boards, 6 die sensors each)
        chip_hdr = QLabel("Chip Die Core Sensors (Chain 1 / Chain 2)")
        chip_hdr.setFont(QFont("Segoe UI", 9, QFont.Bold))
        chip_hdr.setStyleSheet(f"color: {ACCENT_YELLOW}; margin-top: 6px;")
        sensors_layout.addWidget(chip_hdr)

        self.chip_bars: List[TempSensorBar] = []
        for i in range(12):
            board = i // 6 + 1
            slot = i % 6 + 1
            bar = TempSensorBar(f"CH{board}-{slot}", max_temp=90.0)
            self.chip_bars.append(bar)
            sensors_layout.addWidget(bar)

        sensors_layout.addStretch()
        center_layout.addWidget(sensors_frame, stretch=4)

        main_layout.addLayout(center_layout)

        # 4. Footer Bar
        footer_layout = QHBoxLayout()
        self.footer_info = QLabel("Miner: 10.8.1.86  |  Smart Plug: 10.8.1.110 (miIO)  |  Telegram Alert: Active")
        self.footer_info.setFont(QFont("Consolas", 8))
        self.footer_info.setStyleSheet(f"color: {TEXT_MUTED};")

        self.footer_updated = QLabel("Last update: --:--:--")
        self.footer_updated.setFont(QFont("Consolas", 8))
        self.footer_updated.setStyleSheet(f"color: {TEXT_MUTED};")

        footer_layout.addWidget(self.footer_info)
        footer_layout.addStretch()
        footer_layout.addWidget(self.footer_updated)

        main_layout.addLayout(footer_layout)

        self.latest_water_str = "Inlet: --.-°C | Outlet: --.-°C (ΔT: --.-°C)"

    def _init_worker(self):
        plug_cfg = load_plug_config()
        self.worker = DataWorker(
            plug_ip=plug_cfg["plug_ip"],
            plug_token=plug_cfg["plug_token"],
            plug_did=plug_cfg["plug_did"],
            board_overrides=plug_cfg.get("board_thresholds") or [],
            interval=1.0,
        )
        self.worker.data_received.connect(self._on_data_received)
        self.worker.connection_changed.connect(self._on_connection_changed)
        self.worker.start()

        # Seed the per-board spin boxes from config, then keep the worker in sync on edit.
        overrides = plug_cfg.get("board_thresholds") or []
        for idx, (w, s) in enumerate(((self.b1_wrn_spin, self.b1_stop_spin),
                                      (self.b2_wrn_spin, self.b2_stop_spin))):
            entry = overrides[idx] if idx < len(overrides) else {}
            w.setValue(int(entry.get("wrn") or 0))
            s.setValue(int(entry.get("stop") or 0))
        self.b1_wrn_spin.valueChanged.connect(self._on_board_thresholds_changed)
        self.b1_stop_spin.valueChanged.connect(self._on_board_thresholds_changed)
        self.b2_wrn_spin.valueChanged.connect(self._on_board_thresholds_changed)
        self.b2_stop_spin.valueChanged.connect(self._on_board_thresholds_changed)

    def _on_board_thresholds_changed(self):
        """Push per-board overrides to the worker (0 in the spin box means 'auto')."""
        if not hasattr(self, "worker") or self.worker is None:
            return
        overrides = []
        for w, s in ((self.b1_wrn_spin, self.b1_stop_spin),
                     (self.b2_wrn_spin, self.b2_stop_spin)):
            overrides.append({
                "wrn": (w.value() or None),
                "stop": (s.value() or None),
            })
        self.worker.board_overrides = overrides

    def _on_interval_changed(self, val: float):
        self.worker.set_interval(val)

    def _toggle_pause(self):
        is_paused = self.pause_btn.isChecked()
        self.worker.set_paused(is_paused)
        if is_paused:
            self.pause_btn.setText("Resume")
            self.status_badge.setText("[ PAUSED ]")
            self.status_badge.setStyleSheet(f"color: {TEXT_MUTED}; background-color: #202228; padding: 2px 8px; border: 1px solid #363945; border-radius: 0px;")
        else:
            self.pause_btn.setText("Pause")

    def _on_user_manipulated_view(self):
        self.last_user_interaction_time = time.time()

    def _on_user_toggle_plug(self, target_state: bool):
        if target_state:
            # Turning ON requires password 'dl.general'
            pwd_dlg = PasswordDialog(self)
            if pwd_dlg.exec_() == QDialog.Accepted:
                self.worker.request_plug_switch(True)
        else:
            # Turning OFF is immediate without password
            self.worker.request_plug_switch(False)

    def _on_reset_cutoff_lock(self):
        self.cutoff_triggered = False
        self.overheat_wrn_seconds = 0
        self.cutoff_alert_label.hide()
        self.reset_cutoff_btn.hide()

        # Send Telegram notification about manual lock reset
        rst_msg = (
            "ℹ️ <b>[AntMinerTab 保护锁复位通知]</b>\n\n"
            "用户已在监控面板手动复位了超温断电安全保护锁。\n"
            "系统已恢复正常监控状态，如需通电请点击开关并输入授权密码。\n"
            f"<b>时间</b>: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}"
        )
        send_telegram_async(rst_msg)

    def _on_connection_changed(self, connected: bool, message: str):
        if connected:
            self.status_badge.setText(f"[ CONNECTED: 10.8.1.86 ]")
            self.status_badge.setStyleSheet(f"color: {ACCENT_GREEN}; background-color: #14241e; padding: 2px 8px; border: 1px solid #1e4538; border-radius: 0px;")
        else:
            self.status_badge.setText(f"[ ERROR: DISCONNECTED ]")
            self.status_badge.setStyleSheet(f"color: {ACCENT_RED}; background-color: #2b171c; padding: 2px 8px; border: 1px solid #572635; border-radius: 0px;")

    def _clear_history(self):
        self.time_buffer.clear()
        self.inlet_buffer.clear()
        self.outlet_buffer.clear()
        self.chip_max_buffer.clear()
        self.chip_avg_buffer.clear()
        self.curve_inlet.setData([], [])
        self.curve_outlet.setData([], [])
        self.curve_chip_max.setData([], [])
        self.curve_chip_avg.setData([], [])
        self._hide_crosshairs()

    def _hide_crosshairs(self):
        self.current_hover_idx = None
        self.v_line.hide()
        for m in self.markers.values():
            m.hide()
        for l in self.labels.values():
            l.hide()

    def _on_plot_mouse_moved(self, pos: QPointF):
        vb = self.plot_widget.plotItem.vb
        if not vb.sceneBoundingRect().contains(pos):
            self._hide_crosshairs()
            return

        mouse_point = vb.mapSceneToView(pos)
        x_val = mouse_point.x()
        now = time.time()

        if len(self.time_buffer) < 1 or x_val > now + 30.0 or x_val < now - self.window_seconds - 300.0:
            self._hide_crosshairs()
            return

        x_vals = list(self.time_buffer)
        if not x_vals:
            self._hide_crosshairs()
            return

        # Find closest data sample
        idx = bisect.bisect_left(x_vals, x_val)
        if idx >= len(x_vals):
            idx = len(x_vals) - 1
        elif idx > 0 and abs(x_vals[idx - 1] - x_val) < abs(x_vals[idx] - x_val):
            idx = idx - 1

        # Debouncing: If still hovering on the same data sample, do nothing!
        if idx == self.current_hover_idx:
            return
        self.current_hover_idx = idx

        snap_x = x_vals[idx]
        tin = self.inlet_buffer[idx]
        tout = self.outlet_buffer[idx]
        tmax = self.chip_max_buffer[idx]
        tavg = self.chip_avg_buffer[idx]

        # 1. Update Vertical Line
        self.v_line.setPos(snap_x)
        self.v_line.show()

        # 2. Position crosshair markers on curves & position badges strictly at Top-Right
        # If very close to right edge (within 120s of now), flip horizontally to Top-Left
        anchor_tuple = (1.15, 1.15) if (now - snap_x < 120.0) else (-0.15, 1.15)
        curve_data = [
            ("inlet", tin),
            ("outlet", tout),
            ("chip_max", tmax),
            ("chip_avg", tavg),
        ]

        for name, val in curve_data:
            m = self.markers[name]
            l = self.labels[name]

            if val != val or val is None or val <= 0:
                m.hide()
                l.hide()
                continue

            # Crosshair '+' marker on curve
            m.setData([{"pos": (snap_x, val)}])
            m.show()

            # Direct Temperature Badge on Top-Right of crosshair
            l.setAnchor(anchor_tuple)
            l.setPos(snap_x, val)
            l.setText(f"{val:4.1f}°C")
            l.show()

    def _on_data_received(self, data: Dict[str, Any]):
        now = data.get("time_epoch", time.time())

        # 1. Update Top Metric Cards
        hashrate = data.get("hashrate_ghs", 0.0)
        self.card_hashrate.set_value(f"{hashrate:,.1f} GH/s", "Real-time 5s hashrate")

        accepted = data.get("accepted_shares", 0)
        self.card_accepted.set_value(f"{accepted:,}", "Cumulative accepted")

        rejected = data.get("rejected_shares", 0)
        reject_ratio = data.get("reject_ratio", 0.0)
        self.card_rejected.set_value(f"{rejected:,}", f"Ratio: {reject_ratio:4.2f}%")

        # Plug Cards (Far Right)
        plug = data.get("plug", {})
        if plug.get("online"):
            pw = plug.get("power_w", 0.0)
            pw_kw = pw / 1000.0
            self.card_plug_power.set_value(f"{pw:4.0f} W", f"Load: {pw_kw:4.2f} kW")
            self.card_plug_switch.update_state(True, plug.get("switch_on", False), plug.get("plug_temp", 0))
        else:
            self.card_plug_power.set_value("OFFLINE", "miIO Timeout", val_color=TEXT_MUTED)
            self.card_plug_switch.update_state(False, False)

        # 2. Water Status string (Only updated here in fixed rate to ensure zero layout jitter)
        tin = data.get("water_inlet", 0.0)
        tout = data.get("water_outlet", 0.0)
        dt = data.get("water_delta", 0.0)
        dt_sign = f"+{dt:.1f}" if dt > 0 else f"{dt:.1f}"
        self.latest_water_str = f"Inlet: {tin:4.1f}°C  |  Outlet: {tout:4.1f}°C  (ΔT: {dt_sign}°C)"
        self.water_stat_label.setText(self.latest_water_str)

        # 3. Dual Cutoff Protection Logic (WRN TEMP & STOP TEMP), evaluated per hash board
        wrn_thresh = DEFAULT_WRN_TEMP
        stop_thresh = DEFAULT_STOP_TEMP
        chip_max = data.get("chip_max", 0.0)
        chip_avg = data.get("chip_avg", 0.0)

        # Boards run at different temperatures by design: each gets its own limits, and the
        # board with the smallest remaining margin decides whether to trip.
        chains_data = data.get("chains", [])
        hot = None
        for c in chains_data:
            margin = c["stop_at"] - c["chip_max"]
            if hot is None or margin < hot["margin"]:
                hot = {**c, "margin": margin}
        if hot:
            eff_max, eff_wrn, eff_stop = hot["chip_max"], hot["warn_at"], hot["stop_at"]
            board_label = f"Chain {hot['index']}"
        else:
            eff_max, eff_wrn, eff_stop = chip_max, wrn_thresh, stop_thresh
            board_label = "All chains"

        is_over_wrn = (eff_max >= eff_wrn)
        is_over_stop = (eff_max >= eff_stop)

        # Update Sensor Gauges (per board: each has its own warn threshold)
        chain_temps = data.get("chains", [])
        chip_temps = data.get("chip_temps", [])
        for i, bar in enumerate(self.chip_bars):
            val = chip_temps[i] if i < len(chip_temps) else 0.0
            board_wrn = chain_temps[i // 6]["warn_at"] if i // 6 < len(chain_temps) else wrn_thresh
            bar.set_temperature(val, is_overheat=(val >= board_wrn))

        if self.cutoff_triggered:
            self.cutoff_alert_label.setText("EMERGENCY CUTOFF ACTIVE: Plug cut off.\nManual reset required.")
            self.cutoff_alert_label.show()
            self.reset_cutoff_btn.show()
            if plug.get("switch_on", False):
                self.worker.request_plug_switch(False)
        else:
            if is_over_stop:
                # 1. Immediate unconditional cutoff on STOP TEMP
                self.cutoff_triggered = True
                self.worker.request_plug_switch(False)
                self.cutoff_alert_label.setText(f"STOP TEMP REACHED ({board_label}): {eff_max:.1f}°C >= {eff_stop:.0f}°C!\nPOWER CUT OFF IMMEDIATELY.")
                self.cutoff_alert_label.show()
                self.reset_cutoff_btn.show()

                # Dispatch Telegram Critical Alarm
                alert_msg = (
                    f"🚨 <b>[AntMinerTab 紧急急停断电告警]</b>\n\n"
                    f"<b>设备</b>: Antminer S19 Hydro (10.8.1.86)\n"
                    f"<b>级别</b>: <b>CRITICAL (达到急停温度 STOP TEMP)</b>\n"
                    f"<b>触发板号</b>: <b>{board_label}</b>\n"
                    f"<b>芯片温度</b>: <b>{eff_max:.1f}°C</b> (该板急停阈值: {eff_stop:.0f}°C)\n"
                    f"<b>水冷回路</b>: 进水 {tin:.1f}°C | 出水 {tout:.1f}°C (升温 ΔT: +{dt:.1f}°C)\n"
                    f"<b>执行动作</b>: 米家智能插座(10.8.1.110)已立即<b>硬件切断电源</b>！\n"
                    f"<b>保护机制</b>: 保护锁已死锁，<b>绝不自动恢复</b>，请现场检查水冷泵及管路！\n"
                    f"<b>时间</b>: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}"
                )
                send_telegram_async(alert_msg)

            elif is_over_wrn:
                # 2. WRN TEMP: Cutoff if maintained for >30 seconds
                self.overheat_wrn_seconds += 1
                rem = max(0, 30 - self.overheat_wrn_seconds)
                self.cutoff_alert_label.setText(f"WRN TEMP ({board_label}): {eff_max:.1f}°C >= {eff_wrn:.0f}°C! Cutoff in {rem}s")
                self.cutoff_alert_label.show()

                if self.overheat_wrn_seconds >= 30:
                    self.cutoff_triggered = True
                    self.worker.request_plug_switch(False)
                    self.cutoff_alert_label.setText(f"WRN TEMP MAINTAINED >30s ({board_label} {eff_max:.1f}°C)!\nPOWER CUT OFF EXECUTED.")
                    self.reset_cutoff_btn.show()

                    # Dispatch Telegram Warning Timeout Alarm
                    alert_msg = (
                        f"⚠️ <b>[AntMinerTab 超温持续超时断电告警]</b>\n\n"
                        f"<b>设备</b>: Antminer S19 Hydro (10.8.1.86)\n"
                        f"<b>级别</b>: <b>WARNING 超时关机 (WRN TEMP 维持超30秒)</b>\n"
                        f"<b>触发板号</b>: <b>{board_label}</b>\n"
                        f"<b>芯片最高温</b>: <b>{eff_max:.1f}°C</b> (该板预警阈值: {eff_wrn:.0f}°C)\n"
                        f"<b>芯片平均温</b>: {chip_avg:.1f}°C\n"
                        f"<b>水冷回路</b>: 进水 {tin:.1f}°C | 出水 {tout:.1f}°C (升温 ΔT: +{dt:.1f}°C)\n"
                        f"<b>执行动作</b>: 米家智能插座(10.8.1.110)已执行<b>断电保护</b>！\n"
                        f"<b>保护机制</b>: 保护锁已激活，<b>绝不自动恢复</b>，请检查进出水温与散热！\n"
                        f"<b>时间</b>: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}"
                    )
                    send_telegram_async(alert_msg)
            elif data.get("miner_online", False):
                # Temperature safe: reset warning countdown only when miner is verified online
                self.overheat_wrn_seconds = 0
                self.cutoff_alert_label.hide()

        # High Reject Ratio Telegram Alert (>10%) with Cooldown & Auto-Recovery
        miner_online = data.get("miner_online", False)
        total_shares = accepted + rejected
        if miner_online and total_shares >= 10 and reject_ratio > 10.0:
            if (not self.high_reject_alerted) or (now - self.last_reject_alert_time >= self.reject_alert_cooldown):
                self.high_reject_alerted = True
                self.last_reject_alert_time = now
                msg = (
                    f"⚠️ <b>[AntMinerTab 矿池高拒绝率告警]</b>\n\n"
                    f"<b>设备</b>: Antminer S19 Hydro (10.8.1.86)\n"
                    f"<b>当前拒绝率</b>: <b>{reject_ratio:.2f}%</b> (告警阈值: 10.00%)\n"
                    f"<b>有效份额 (Accepted)</b>: {accepted:,}\n"
                    f"<b>拒绝份额 (Rejected)</b>: {rejected:,}\n"
                    f"<b>总份额数 (Total)</b>: {total_shares:,}\n"
                    f"<b>实时算力</b>: {hashrate:,.1f} GH/s\n"
                    f"<b>状态分析</b>: 矿机提交份额被矿池拒绝比例已超 10%，请检查矿池网络延迟与算力板状态！\n"
                    f"<b>时间</b>: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}"
                )
                send_telegram_async(msg)
        elif miner_online and self.high_reject_alerted and reject_ratio <= 5.0 and total_shares >= 15:
            self.high_reject_alerted = False
            recovery_msg = (
                f"✅ <b>[AntMinerTab 矿池拒绝率恢复正常]</b>\n\n"
                f"<b>设备</b>: Antminer S19 Hydro (10.8.1.86)\n"
                f"<b>当前拒绝率</b>: <b>{reject_ratio:.2f}%</b>\n"
                f"<b>有效份额 (Accepted)</b>: {accepted:,}\n"
                f"<b>拒绝份额 (Rejected)</b>: {rejected:,}\n"
                f"<b>实时算力</b>: {hashrate:,.1f} GH/s\n"
                f"<b>状态</b>: 矿机提交份额已稳定接收，拒绝率已恢复至正常水平。\n"
                f"<b>时间</b>: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}"
            )
            send_telegram_async(recovery_msg)

        # 4. Update 1-Hour Rolling Buffers
        if tin > 0 or tout > 0 or chip_max > 0:
            # 停机断档检测：间隔 >15s 插入断点 NaN，消除跨越斜线！
            if len(self.time_buffer) > 0 and (now - self.time_buffer[-1] > 15.0):
                gap_t = self.time_buffer[-1] + 1.0
                self.time_buffer.append(gap_t)
                self.inlet_buffer.append(float('nan'))
                self.outlet_buffer.append(float('nan'))
                self.chip_max_buffer.append(float('nan'))
                self.chip_avg_buffer.append(float('nan'))

            self.time_buffer.append(now)
            self.inlet_buffer.append(tin)
            self.outlet_buffer.append(tout)
            self.chip_max_buffer.append(chip_max)
            self.chip_avg_buffer.append(chip_avg)

            cutoff = now - self.window_seconds
            while self.time_buffer and self.time_buffer[0] < cutoff:
                self.time_buffer.popleft()
                self.inlet_buffer.popleft()
                self.outlet_buffer.popleft()
                self.chip_max_buffer.popleft()
                self.chip_avg_buffer.popleft()

            x_vals = list(self.time_buffer)

            self.curve_inlet.setData(x_vals, list(self.inlet_buffer))
            self.curve_outlet.setData(x_vals, list(self.outlet_buffer))
            self.curve_chip_max.setData(x_vals, list(self.chip_max_buffer))
            self.curve_chip_avg.setData(x_vals, list(self.chip_avg_buffer))

            # Adaptive Dynamic Y-Axis Scaling: Fit visible line span (filter out NaN)
            raw_visible = list(self.inlet_buffer) + list(self.outlet_buffer) + list(self.chip_max_buffer) + list(self.chip_avg_buffer)
            all_visible = [v for v in raw_visible if v > 0 and v == v]
            if all_visible:
                min_t = min(all_visible)
                max_t = max(all_visible)
                span_t = max_t - min_t
                if span_t < 10.0:
                    mid = (min_t + max_t) / 2.0
                    y_min = max(0.0, mid - 6.0)
                    y_max = mid + 6.0
                else:
                    y_min = max(0.0, min_t - 2.5)
                    y_max = max_t + 3.0
                self.plot_widget.setYRange(y_min, y_max, padding=0.0)

            # Auto Right-Align if user has not panned/zoomed in the last 6 seconds
            if time.time() - self.last_user_interaction_time > 6.0:
                self.plot_widget.setXRange(now - self.window_seconds, now, padding=0.0)

        # 5. Footer Update
        ts = data.get("timestamp", "--:--:--")
        lat = data.get("latency_ms", 0)
        points_cnt = len(self.time_buffer)
        self.footer_updated.setText(f"Last update: {ts} (Latency: {lat}ms | Points: {points_cnt})")

    def closeEvent(self, event):
        self.worker.stop()
        event.accept()


def main():
    app = QApplication(sys.argv)
    app.setStyle("Fusion")

    palette = QPalette()
    palette.setColor(QPalette.Window, QColor(DARK_BG))
    palette.setColor(QPalette.WindowText, QColor(TEXT_WHITE))
    palette.setColor(QPalette.Base, QColor(PANEL_BG))
    palette.setColor(QPalette.Text, QColor(TEXT_WHITE))
    app.setPalette(palette)

    window = MainWindow()
    window.show()
    sys.exit(app.exec_())


if __name__ == "__main__":
    main()
