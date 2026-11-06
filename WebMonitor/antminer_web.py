#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
AntMinerTab - Web Server Edition (Listening on 0.0.0.0:20000)
Targets:
- Antminer S19 Hydro: http://10.8.1.86/#dashboard
- Mijia Smart Plug 3 (cuco.plug.v3): 10.8.1.110 (miIO UDP)
- Telegram Alarm Bot: @s332854BOT -> Chat ID 7775553661

Features:
- Binds to 0.0.0.0:20000, accessible via localhost (127.0.0.1:20000), LAN, and Tailscale (tailscale_ip:20000).
- Pure square industrial design (0px border-radius, dark theme matching AntMinerTab desktop GUI).
- Web-based 4-Hour dynamic temperature/hashrate curve rendered with high-DPI smooth HTML5 Canvas:
  * 100% Responsive: Automatically scales and fills the webpage viewport (no fixed height).
  * Interactive Zoom & Pan: Mouse wheel zooms in/out (from 1min to 4hours), drag to pan, double-click to reset.
  * Crosshairs ('+') directly on all 4 temperature curves with Top-Right temperature badges.
  * Hashrate curve on its own right-hand GH/s axis, sampled per 30s bucket.
  * Share histogram on the x-axis: green accepted / red rejected, one bar per 30s, adjacent bars touch.
  * Auto right-align after 6s of no interaction.
- Top 5 Metric Cards (Hashrate, Accepted, Rejected & Ratio, Plug Power, Interactive Plug Switch with password dl.general).
- Dual Cutoff Protection (WRN TEMP 30s cutoff, STOP TEMP instant cutoff, no auto-recovery, Telegram alert).
- Zero external third-party web framework dependencies (built on Python standard library ThreadingHTTPServer).
"""

import argparse
import base64
import bisect
import hashlib
import hmac
import json
import os
import socket
import sys
import threading
import time
from collections import deque
from datetime import datetime
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from typing import Any, Deque, Dict, List, Optional
from urllib.parse import urlparse

import requests
from cryptography.hazmat.backends import default_backend
from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes

from mijia_plug import (MijiaPlugDriver, load_plug_config, parse_chains,
                        board_thresholds, parse_board_thresholds)
from requests.adapters import HTTPAdapter
from requests.auth import HTTPDigestAuth

try:
    import serial
    import serial.tools.list_ports
    HAS_PYSERIAL = True
except ImportError:
    serial = None
    HAS_PYSERIAL = False


# Telegram Credentials
TELEGRAM_TOKEN = "8938811502:AAHSMmrELHYz8OrFmlD8YeaogjmZ7X7-7NE"
TELEGRAM_CHAT_ID = 7775553661


def send_telegram_async(message: str):
    """Send asynchronous HTML message to Telegram without blocking."""
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


class FanControllerDriver:
    """
    Automatic Serial Port Detector & Controller for CoolerHD 6-Channel 12025 Fan Controller.
    - Scans all available serial ports (COMx on Windows, /dev/ttyUSB* or /dev/ttyACM* on Linux).
    - Detects periodic telemetry: "1980,2010,2005,1990,2020,2040\r\n"
    - Continuously updates 6-channel RPM values (id 1-6).
    - Sends fan regulation command: "SELECT <id> <speed>\r\n" (fallback "SET <id> <speed>\r\n").
    - Auto-reconnects on device hotplug or disconnect.
    """

    def __init__(self, preferred_port: Optional[str] = None, baudrate: int = 115200):
        self.preferred_port = preferred_port
        self.baudrate = baudrate
        self.ser: Optional[Any] = None
        self.current_port: str = ""
        self.connected: bool = False
        self.is_scanning: bool = False
        self.rpms: List[int] = [0, 0, 0, 0, 0, 0]
        self.target_rpms: List[int] = [2000, 2000, 2000, 2000, 2000, 2000]
        self.last_seen_time: float = 0.0
        self.lock = threading.RLock()
        self.running: bool = True
        self.cached_ports: List[Dict[str, Any]] = []
        self.last_ports_scan_time: float = 0.0

        self.worker_thread = threading.Thread(target=self._run_loop, daemon=True)
        self.worker_thread.start()

    @staticmethod
    def _parse_telemetry_line(line: str) -> Optional[List[int]]:
        """Parse telemetry string like '1980,2010,2005,1990,2020,2040' into 6 ints."""
        if not line:
            return None
        line = line.strip()
        if line.startswith("$RPM,"):
            line = line[5:]
        parts = [p.strip() for p in line.split(",") if p.strip()]
        if len(parts) == 6:
            try:
                vals = [int(p) for p in parts]
                if all(0 <= v <= 10000 for v in vals):
                    return vals
            except ValueError:
                return None
        return None

    @staticmethod
    def _is_bluetooth_port(port_obj) -> bool:
        """Check if a serial port is a virtual Bluetooth port that causes 30s connection hangs."""
        hwid = (getattr(port_obj, "hwid", "") or "").upper()
        desc = (getattr(port_obj, "description", "") or "").upper()
        name = (getattr(port_obj, "device", "") or "").upper()
        return "BTHENUM" in hwid or "BLUETOOTH" in desc or "蓝牙" in desc or "BTHENUM" in name

    @staticmethod
    def _is_usb_serial_port(port_obj) -> bool:
        """Identify physical USB serial adapters (CH340/1A86, CP210x, FTDI, etc.)."""
        hwid = (getattr(port_obj, "hwid", "") or "").upper()
        desc = (getattr(port_obj, "description", "") or "").upper()
        return "USB" in hwid or "1A86" in hwid or "CH340" in desc or "CP210" in desc or "FTDI" in desc

    @staticmethod
    def get_available_ports() -> List[Dict[str, str]]:
        """List all non-bluetooth hardware serial ports available on system."""
        if not HAS_PYSERIAL or not serial:
            return []
        try:
            ports = list(serial.tools.list_ports.comports())
            res = []
            for p in ports:
                # Exclude virtual bluetooth serial ports that cause blocking
                if FanControllerDriver._is_bluetooth_port(p):
                    continue
                is_usb = FanControllerDriver._is_usb_serial_port(p)
                res.append({
                    "port": p.device,
                    "description": p.description or p.device,
                    "is_usb": is_usb
                })
            # Prioritize USB serial ports (e.g. CH340 on COM6)
            res.sort(key=lambda x: (not x["is_usb"], x["port"]))
            return res
        except Exception:
            return []

    def _open_and_validate_port(self, port_name: str) -> bool:
        """Directly open a serial port and verify telemetry stream within 1.5 seconds."""
        if not HAS_PYSERIAL or not serial:
            return False
        new_ser = None
        try:
            # Open with non-blocking read timeout (0.5s)
            new_ser = serial.Serial(port_name, self.baudrate, timeout=0.5, write_timeout=1.0)
            new_ser.reset_input_buffer()

            # The MCU sends telemetry every 0.5s: "f1,f2,f3,f4,f5,f6\r\n"
            t0 = time.time()
            while time.time() - t0 < 1.6:
                if new_ser.in_waiting > 0:
                    line = new_ser.readline().decode("utf-8", errors="ignore").strip()
                    if line:
                        vals = self._parse_telemetry_line(line)
                        if vals is not None:
                            with self.lock:
                                if self.ser and self.ser != new_ser:
                                    try:
                                        self.ser.close()
                                    except Exception:
                                        pass
                                self.ser = new_ser
                                self.current_port = port_name
                                self.rpms = vals
                                self.last_seen_time = time.time()
                                self.connected = True
                                self.is_scanning = False
                            return True
                else:
                    time.sleep(0.03)

            # If user explicitly preferred this port, keep connection open and probe with STATUS\r\n
            if self.preferred_port and self.preferred_port == port_name:
                try:
                    new_ser.write(b"STATUS\r\n")
                    time.sleep(0.1)
                except Exception:
                    pass
                with self.lock:
                    if self.ser and self.ser != new_ser:
                        try:
                            self.ser.close()
                        except Exception:
                            pass
                    self.ser = new_ser
                    self.current_port = port_name
                    self.connected = True
                    self.last_seen_time = time.time()
                    self.is_scanning = False
                return True
        except Exception as e:
            pass

        if new_ser:
            try:
                new_ser.close()
            except Exception:
                pass
        return False

    def select_port(self, port_name: str):
        """User explicitly selects a port (e.g. 'COM7', '/dev/ttyUSB0', or 'AUTO'). Immediate connect."""
        p = port_name.strip() if port_name else "AUTO"
        with self.lock:
            self.preferred_port = p
            if self.ser:
                try:
                    self.ser.close()
                except Exception:
                    pass
            self.ser = None
            self.connected = False
            self.current_port = ""
            self.last_seen_time = 0.0

        # If a concrete port was selected, immediately attempt connection in worker
        if p != "AUTO":
            self._open_and_validate_port(p)

    def is_alive(self, timeout_sec: float = 4.0) -> bool:
        """Returns True if controller is actively connected and received telemetry within timeout."""
        with self.lock:
            if not self.connected or not self.ser or not self.ser.is_open:
                return False
            if self.last_seen_time <= 0:
                return False
            return (time.time() - self.last_seen_time) < timeout_sec

    def _run_loop(self):
        """Background thread handling fast connect, data stream reading, and auto-reconnect."""
        while self.running:
            if not HAS_PYSERIAL:
                time.sleep(3)
                continue

            # State A: Not connected -> scan / connect
            if not self.connected or not self.ser or not self.ser.is_open:
                with self.lock:
                    self.connected = False
                    self.is_scanning = True

                pref = self.preferred_port
                connected_any = False
                # 1. User preferred port (e.g. COM7)
                if pref and pref != "AUTO":
                    if self._open_and_validate_port(pref):
                        connected_any = True
                        print(f"🌀 [FanController] Connected directly to preferred port {pref}")

                # 2. Auto-scan all available hardware USB ports (filtering out bluetooth)
                if not connected_any:
                    avail_ports = self.get_available_ports()
                    for p_info in avail_ports:
                        port_device = p_info["port"]
                        if self._open_and_validate_port(port_device):
                            connected_any = True
                            print(f"🌀 [FanController] Auto-identified & connected to CoolerHD on {port_device}")
                            break

                if not connected_any:
                    with self.lock:
                        self.current_port = ""
                        self.connected = False
                        self.is_scanning = False
                    time.sleep(1.0)
                    continue

            # State B: Connected -> continuously stream RPM telemetry
            try:
                if self.ser and self.ser.is_open:
                    if self.ser.in_waiting > 0:
                        raw_line = self.ser.readline().decode("utf-8", errors="ignore").strip()
                        if raw_line:
                            vals = self._parse_telemetry_line(raw_line)
                            if vals is not None:
                                with self.lock:
                                    self.rpms = vals
                                    self.last_seen_time = time.time()
                                    self.connected = True
                                    self.is_scanning = False
                    else:
                        time.sleep(0.04)
                else:
                    raise IOError("Serial port not open")
            except Exception as e:
                print(f"⚠️ [FanController] Serial stream lost on {self.current_port}: {e}, reconnecting...")
                try:
                    if self.ser:
                        self.ser.close()
                except Exception:
                    pass
                with self.lock:
                    self.ser = None
                    self.connected = False
                    self.current_port = ""
                    self.is_scanning = False
                time.sleep(0.5)

    def set_speed(self, fan_id: Any, speed: int) -> bool:
        """
        Send speed regulation command to the fan controller.
        Usage: 'SET <id> <speed>\r\n'
        - fan_id: 1~6, or 'ALL'/0 for all fans.
        - speed: target RPM (600~2400 RPM, or 0 for stop).
        """
        if not self.connected or not self.ser or not self.ser.is_open:
            return False

        try:
            target_str = "ALL" if str(fan_id).upper() in ("0", "ALL") else str(int(fan_id))
            speed = int(speed)
            if speed > 0:
                speed = max(600, min(2400, speed))
            else:
                speed = 0

            cmd = f"SET {target_str} {speed}\r\n"

            with self.lock:
                self.ser.write(cmd.encode("utf-8"))
                self.ser.flush()

                # Update target RPM state
                if target_str == "ALL":
                    self.target_rpms = [speed] * 6
                else:
                    idx = int(target_str) - 1
                    if 0 <= idx < 6:
                        self.target_rpms[idx] = speed
            return True
        except Exception as e:
            sys.stderr.write(f"[FanController Send Error] {e}\n")
            return False

    def get_status(self) -> Dict[str, Any]:
        """Return thread-safe snapshot of fan speeds, port selection and connection state."""
        with self.lock:
            alive = False
            if self.connected and self.ser and self.ser.is_open and self.last_seen_time > 0:
                alive = (time.time() - self.last_seen_time) < 4.0

            now_t = time.time()
            lost_sec = (now_t - self.last_seen_time) if self.last_seen_time > 0 else 999.0

            # Cache ports list for 4 seconds to avoid blocking comports() call on every single request
            if not self.cached_ports or (now_t - self.last_ports_scan_time > 4.0):
                self.cached_ports = self.get_available_ports()
                self.last_ports_scan_time = now_t

            return {
                "installed": HAS_PYSERIAL,
                "connected": alive,
                "scanning": self.is_scanning,
                "port": self.current_port if alive else "",
                "preferred_port": self.preferred_port or "AUTO",
                "available_ports": self.cached_ports,
                "rpms": list(self.rpms) if alive else [0, 0, 0, 0, 0, 0],
                "targets": list(self.target_rpms),
                "last_seen": self.last_seen_time,
                "lost_seconds": round(lost_sec, 1),
            }


class MonitorStateManager:
    """Central state & background poller with persistent HTTP and UDP sessions."""

    def __init__(
        self,
        miner_url: str = "http://10.8.1.86",
        username: str = "root",
        password: str = "dl.general",
        plug_ip: str = "10.8.1.110",
        plug_token: str = "",
        plug_did: str = "2051114902",
        interval: float = 1.0,
        wrn_temp: float = 75.0,
        stop_temp: float = 78.0,
        board_overrides: Optional[List[Dict[str, Any]]] = None,
        fan_start_temp: float = 50.0,
        fan_max_temp: float = 70.0,
    ):
        self.miner_url = miner_url.rstrip("/")
        self.username = username
        self.password = password
        self.interval = max(0.5, min(2.0, float(interval)))
        self.wrn_temp = wrn_temp
        self.stop_temp = stop_temp
        # Per-board absolute limits; empty list = fall back to the built-in offsets.
        self.board_overrides: List[Dict[str, Any]] = list(board_overrides or [])
        self.paused = False

        self.lock = threading.Lock()

        # Miner Session with Keep-Alive & Self-Healing
        self.session = self._create_miner_session()

        # Last Valid Miner Metrics (for debouncing & hold-last-good during transient network drops)
        self.last_valid_metrics: Optional[Dict[str, Any]] = None
        self.consecutive_miner_failures: int = 0
        self.max_hold_failures: int = 5  # Hold values for up to 5 consecutive transient failed attempts

        # Plug Driver
        self.plug = MijiaPlugDriver(ip=plug_ip, token_hex=plug_token, did=plug_did)

        # Fan Controller Driver (CoolerHD 6-Channel 12025 Fan Controller on Serial)
        self.fan_driver = FanControllerDriver(preferred_port=os.getenv("FAN_SERIAL_PORT", "AUTO"))

        # 4-Hour buffers (14400 seconds)
        self.window_seconds = 14400.0
        self.time_buffer: Deque[float] = deque()
        self.inlet_buffer: Deque[float] = deque()
        self.outlet_buffer: Deque[float] = deque()
        self.chip_max_buffer: Deque[float] = deque()
        self.chip_avg_buffer: Deque[float] = deque()

        # Hashrate + share histogram. Temperature is appended every poll (1s), but a 4h
        # window of per-second points would be 14k samples, so hashrate is averaged and
        # the cumulative pool share counters are differenced into fixed 30s buckets.
        self.bucket_seconds = 30.0
        # Temperature points are throttled to one per 10s: across a 4h window that is 1440
        # points (sub-pixel on any screen), instead of 14400 points shipped every second.
        # This buffer is display-only; protection decisions use the live live chip_max.
        self.temp_sample_seconds = 10.0
        self._last_temp_sample: Optional[float] = None
        self.share_buckets: Deque[Dict[str, Any]] = deque()
        self._bucket_start: Optional[float] = None
        self._bucket_acc_base = 0
        self._bucket_rej_base = 0
        self._bucket_acc = 0
        self._bucket_rej = 0
        self._bucket_rate_sum = 0.0
        self._bucket_rate_n = 0

        # Protection State
        self.overheat_wrn_seconds = 0
        self.cutoff_triggered = False

        # Reject Ratio Alarm State
        self.high_reject_alerted = False
        self.last_reject_alert_time = 0.0
        self.reject_alert_cooldown = 300.0  # Cooldown 5 minutes between alerts

        # Dynamic Hotspot Closed-Loop Fan Regulation Parameters (600~2400 RPM)
        self.fan_start_temp = float(fan_start_temp)  # 起转温度(对应 600 RPM)
        self.fan_max_temp = float(fan_max_temp)      # 最大转速温度(对应 2400 RPM)
        self.fan_control_mode = "AUTO"               # "AUTO" (线性温控) or "MANUAL" (手动设定)
        self.manual_target_rpm = 1800                # 手动模式目标转速
        self.auto_fan_enabled = True
        self.last_auto_fan_rpm = 0
        self.last_auto_fan_time = 0.0

        # Smart Plug State & 5-minute Auto-Idle Fan Control
        self.plug_off_timestamp: Optional[float] = None
        self.plug_off_duration: float = 0.0
        self.plug_idle_cooldown_reached: bool = False
        # Last confirmed switch state (None = never read yet). Kept across poll failures so a
        # lossy miIO link cannot be mistaken for "plug is off" and idle the fans mid-mining.
        self.plug_last_known_on: Optional[bool] = None
        self.plug_unknown_since: Optional[float] = None
        # Consecutive agreeing reads required before accepting a switch-state change.
        self.PLUG_STATE_CONFIRMATIONS = 2
        self.plug_pending_state: Optional[bool] = None
        self.plug_pending_count: int = 0

        # Latest Snapshot
        self.latest_data: Dict[str, Any] = {
            "timestamp": "--:--:--",
            "latency_ms": 0,
            "miner_online": False,
            "miner_recovering": False,
            "hashrate_ghs": 0.0,
            "accepted_shares": 0,
            "rejected_shares": 0,
            "reject_ratio": 0.0,
            "water_inlet": 0.0,
            "water_outlet": 0.0,
            "water_delta": 0.0,
            "pcb_temps": [],
            "chip_temps": [],
            "chip_max": 0.0,
            "chip_avg": 0.0,
            "plug": {"online": False, "switch_on": False, "power_w": 0.0, "plug_temp": 0},
            "plug_off_duration": 0.0,
            "fan_mode": "AUTO",
            "fan_control_mode": self.fan_control_mode,
            "manual_target_rpm": self.manual_target_rpm,
            "fans": {
                "installed": HAS_PYSERIAL,
                "connected": False,
                "scanning": True,
                "port": "",
                "rpms": [0, 0, 0, 0, 0, 0],
                "targets": [2000, 2000, 2000, 2000, 2000, 2000],
                "last_seen": 0.0,
            },
            "fan_start_temp": self.fan_start_temp,
            "fan_max_temp": self.fan_max_temp,
            "auto_fan_rpm": 600,
            "wrn_temp": self.wrn_temp,
            "stop_temp": self.stop_temp,
            "interval": self.interval,
            "cutoff_triggered": False,
            "overheat_wrn_seconds": 0,
        }

        # Smart Plug poller: miIO on this lossy link can take several seconds to answer,
        # so poll it on its own thread and let the main loop read the cached snapshot.
        self._plug_snapshot: Dict[str, Any] = {
            "online": False, "switch_on": False, "power_w": 0.0, "plug_temp": 0,
            "error": "plug not polled yet",
        }
        self._plug_snapshot_lock = threading.Lock()
        self.plug_poll_seconds = 2.0
        threading.Thread(target=self._plug_poll_loop, daemon=True).start()

        # Start Background Thread
        self.worker_thread = threading.Thread(target=self._run_loop, daemon=True)
        self.worker_thread.start()

    def _plug_poll_loop(self):
        """Continuously refresh the plug snapshot so a slow miIO reply never stalls fans."""
        while True:
            st = self.plug.query_status()
            with self._plug_snapshot_lock:
                self._plug_snapshot = st
            if st.get("online") and st.get("state_confirmed"):
                new_state = bool(st.get("switch_on"))
                if new_state != self.plug_last_known_on:
                    # Debounce state changes: a single odd reply on this lossy link must not
                    # be enough to declare the miner unpowered (or powered) for the fan logic.
                    if self.plug_pending_state != new_state:
                        self.plug_pending_state = new_state
                        self.plug_pending_count = 0
                    self.plug_pending_count += 1
                    if self.plug_pending_count >= self.PLUG_STATE_CONFIRMATIONS:
                        self.plug_last_known_on = new_state
                        self.plug_pending_state = None
                        self.plug_pending_count = 0
                else:
                    self.plug_pending_state = None
                    self.plug_pending_count = 0
                self.plug_unknown_since = None
            elif self.plug_unknown_since is None:
                self.plug_unknown_since = time.time()
            time.sleep(self.plug_poll_seconds)

    def get_plug_snapshot(self) -> Dict[str, Any]:
        with self._plug_snapshot_lock:
            return dict(self._plug_snapshot)

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
            "User-Agent": "AntMinerTab-Web/2.0",
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

    def set_settings(
        self,
        interval: Optional[float] = None,
        wrn: Optional[float] = None,
        stop: Optional[float] = None,
        paused: Optional[bool] = None,
        fan_start: Optional[float] = None,
        fan_max: Optional[float] = None,
        board_thresholds_update: Optional[List[Dict[str, Any]]] = None,
    ):
        with self.lock:
            if interval is not None:
                # Clamped low: this loop is the over-temperature watchdog, so the poll
                # period is also the worst-case delay before STOP can cut the power.
                # 2s keeps that delay acceptable; 60s did not.
                self.interval = max(0.5, min(2.0, float(interval)))
                self.latest_data["interval"] = self.interval
            if wrn is not None:
                self.wrn_temp = float(wrn)
                self.latest_data["wrn_temp"] = self.wrn_temp
            if stop is not None:
                self.stop_temp = float(stop)
                self.latest_data["stop_temp"] = self.stop_temp
            if board_thresholds_update is not None:
                self.board_overrides = list(board_thresholds_update)
                self.latest_data["board_thresholds"] = self.board_overrides
            if paused is not None:
                self.paused = bool(paused)
                self.latest_data["paused"] = self.paused
            if fan_start is not None:
                self.fan_start_temp = float(fan_start)
                self.latest_data["fan_start_temp"] = self.fan_start_temp
            if fan_max is not None:
                self.fan_max_temp = float(fan_max)
                self.latest_data["fan_max_temp"] = self.fan_max_temp

    def set_plug_switch(self, state: bool) -> bool:
        """Switch plug power state and refresh the cached snapshot."""
        res = self.plug.set_switch(state)
        st = self.plug.query_status()
        with self._plug_snapshot_lock:
            self._plug_snapshot = st
        if st.get("online") and st.get("state_confirmed"):
            # An explicit user command is authoritative: adopt the observed state at once
            # instead of waiting for the debounce counter to agree.
            self.plug_last_known_on = bool(st.get("switch_on"))
            self.plug_pending_state = None
            self.plug_pending_count = 0
            self.plug_unknown_since = None
        with self.lock:
            self.latest_data["plug"] = st
        return res

    def set_fan_mode(self, mode: str, speed: Optional[int] = None) -> bool:
        """Switch between AUTO (closed-loop temperature) and MANUAL (user fixed speed)."""
        with self.lock:
            m = mode.upper().strip()
            if m in ("AUTO", "MANUAL"):
                self.fan_control_mode = m
                self.latest_data["fan_control_mode"] = self.fan_control_mode
            if speed is not None:
                self.manual_target_rpm = max(600, min(2400, int(speed)))
                self.latest_data["manual_target_rpm"] = self.manual_target_rpm

        if self.fan_control_mode == "MANUAL":
            res = self.fan_driver.set_speed("ALL", self.manual_target_rpm)
            fan_st = self.fan_driver.get_status()
            with self.lock:
                self.latest_data["fans"] = fan_st
            return res
        return True

    def set_fan_speed(self, fan_id: Any, speed: int) -> bool:
        """Regulate 12025 fan speed via SET <id> <speed>."""
        with self.lock:
            self.manual_target_rpm = max(600, min(2400, int(speed)))
            self.latest_data["manual_target_rpm"] = self.manual_target_rpm
        res = self.fan_driver.set_speed(fan_id, speed)
        fan_st = self.fan_driver.get_status()
        with self.lock:
            self.latest_data["fans"] = fan_st
        return res

    def reset_protection_lock(self):
        with self.lock:
            self.cutoff_triggered = False
            self.overheat_wrn_seconds = 0
            self.latest_data["cutoff_triggered"] = False
            self.latest_data["overheat_wrn_seconds"] = 0

        rst_msg = (
            "ℹ️ <b>[AntMinerTab-Web 保护锁复位通知]</b>\n\n"
            "用户已在 Web 监控页面手动复位了超温断电安全保护锁。\n"
            "系统已恢复正常监控，如需通电请点击开关并输入授权密码。\n"
            f"<b>时间</b>: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}"
        )
        send_telegram_async(rst_msg)

    def clear_history(self):
        """Clear all historical curve data points."""
        with self.lock:
            self.time_buffer.clear()
            self.inlet_buffer.clear()
            self.outlet_buffer.clear()
            self.chip_max_buffer.clear()
            self.chip_avg_buffer.clear()
            self.share_buckets.clear()
            self._bucket_start = None
            self._last_temp_sample = None
            self._bucket_acc_base = 0
            self._bucket_rej_base = 0
            self._bucket_acc = 0
            self._bucket_rej = 0
            self._bucket_rate_sum = 0.0
            self._bucket_rate_n = 0

    def _update_share_buckets(self, now_epoch: float, rate_ghs: float,
                              total_accepted: int, total_rejected: int):
        """Fold per-poll samples into fixed 30s buckets for the hashrate/share chart.

        The pool counters are cumulative, so each bucket stores the delta between its
        start and end. A counter that goes *down* means the miner rebooted its stats;
        the baseline is rebased instead of emitting a negative bar.
        """
        bucket_start = (int(now_epoch) // int(self.bucket_seconds)) * int(self.bucket_seconds)

        if self._bucket_start is None:
            self._bucket_start = bucket_start
            self._bucket_acc_base = total_accepted
            self._bucket_rej_base = total_rejected
        elif bucket_start > self._bucket_start:
            # Emit every elapsed bucket. Idle buckets (miner unreachable) are emitted with
            # zero shares so the histogram shows the gap rather than silently compressing it.
            acc_delta = max(0, total_accepted - self._bucket_acc_base - self._bucket_acc)
            rej_delta = max(0, total_rejected - self._bucket_rej_base - self._bucket_rej)
            avg_rate = (self._bucket_rate_sum / self._bucket_rate_n) if self._bucket_rate_n else 0.0
            self._bucket_acc += acc_delta
            self._bucket_rej += rej_delta
            self.share_buckets.append({
                "t": float(self._bucket_start),
                "accepted": self._bucket_acc,
                "rejected": self._bucket_rej,
                "hashrate": avg_rate,
            })

            # Skip over buckets with no samples at all (e.g. the page was paused).
            elapsed_buckets = int((bucket_start - self._bucket_start) // int(self.bucket_seconds))
            for _ in range(max(0, elapsed_buckets - 1)):
                self._bucket_start += int(self.bucket_seconds)
                self.share_buckets.append({
                    "t": float(self._bucket_start),
                    "accepted": 0, "rejected": 0, "hashrate": 0.0,
                })

            self._bucket_start = bucket_start
            self._bucket_acc_base = total_accepted
            self._bucket_rej_base = total_rejected
            self._bucket_acc = 0
            self._bucket_rej = 0
            self._bucket_rate_sum = 0.0
            self._bucket_rate_n = 0
        else:
            # Counters only ever grow within a miner boot; a drop means a stats reset.
            if total_accepted < self._bucket_acc_base:
                self._bucket_acc_base = total_accepted
                self._bucket_rej_base = total_rejected
            self._bucket_acc = max(0, total_accepted - self._bucket_acc_base)
            self._bucket_rej = max(0, total_rejected - self._bucket_rej_base)

        if rate_ghs > 0:
            self._bucket_rate_sum += rate_ghs
            self._bucket_rate_n += 1

        cutoff_epoch = now_epoch - self.window_seconds
        while self.share_buckets and self.share_buckets[0]["t"] < cutoff_epoch:
            self.share_buckets.popleft()

    def _run_loop(self):
        last_check_time = time.time()
        while True:
            t0 = time.time()
            dt = max(0.1, min(60.0, t0 - last_check_time))
            last_check_time = t0
            with self.lock:
                cur_interval = self.interval
                is_paused = self.paused
                wrn_thresh = self.wrn_temp
                stop_thresh = self.stop_temp

            if not is_paused:
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

                # 1. Fetch Miner Data (with socket connect/read timeout & JSON validation)
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
                    # Self-heal stale Keep-Alive session periodically on repeated errors
                    if self.consecutive_miner_failures % 3 == 0:
                        self._reinit_miner_session()

                is_recovering = False
                if miner_fetch_success:
                    miner_ok = True
                elif self.last_valid_metrics and self.consecutive_miner_failures <= self.max_hold_failures:
                    # Debounce / hold last known good value to prevent zeroing metrics and chart gaps
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

                # 2. Read cached Plug Data (refreshed by the dedicated miIO poller thread)
                plug_data = self.get_plug_snapshot()

                latency_ms = int((time.time() - t0) * 1000)

                inlet_t = temp_pic[0] if len(temp_pic) > 0 else 0.0
                outlet_t = temp_pic[1] if len(temp_pic) > 1 else 0.0
                delta_t = (outlet_t - inlet_t) if (inlet_t > 0 and outlet_t > 0) else 0.0

                chip_max = max(temp_chip) if temp_chip else 0.0
                chip_avg = (sum(temp_chip) / len(temp_chip)) if temp_chip else 0.0

                # Per-board protection: boards run at different temperatures by design, so
                # chain 2 gets a configurable allowance rather than one global threshold.
                # hot_board is the board closest to its own limits.
                hot_board = None
                for i, ct in enumerate(chain_temps):
                    warn_at = board_thresholds(wrn_thresh, i, "wrn", self.board_overrides)
                    stop_at = board_thresholds(stop_thresh, i, "stop", self.board_overrides)
                    margin = stop_at - ct["chip_max"]
                    if hot_board is None or margin < hot_board["margin"]:
                        hot_board = {"index": ct["index"], "chip_max": ct["chip_max"],
                                     "warn_at": warn_at, "stop_at": stop_at, "margin": margin}
                if hot_board:
                    eff_max = hot_board["chip_max"]
                    eff_wrn = hot_board["warn_at"]
                    eff_stop = hot_board["stop_at"]
                    board_label = f"Chain {hot_board['index']}"
                else:
                    eff_max, eff_wrn, eff_stop = chip_max, wrn_thresh, stop_thresh
                    board_label = "All chains"

                # 3. Dual Cutoff Protection Logic
                is_over_wrn = (eff_max >= eff_wrn)
                is_over_stop = (eff_max >= eff_stop)

                with self.lock:
                    if self.cutoff_triggered:
                        if plug_data.get("switch_on", False):
                            self.plug.set_switch(False)
                    else:
                        if is_over_stop:
                            self.cutoff_triggered = True
                            self.plug.set_switch(False)
                            msg = (
                                f"🚨 <b>[AntMinerTab-Web 紧急急停断电告警]</b>\n\n"
                                f"<b>设备</b>: Antminer S19 Hydro ({self.miner_url})\n"
                                f"<b>级别</b>: <b>CRITICAL (达到急停温度 STOP TEMP)</b>\n"
                                f"<b>触发板号</b>: <b>{board_label}</b>\n"
                                f"<b>芯片温度</b>: <b>{eff_max:.1f}°C</b> (该板急停阈值: {eff_stop:.0f}°C)\n"
                                f"<b>水冷回路</b>: 进水 {inlet_t:.1f}°C | 出水 {outlet_t:.1f}°C (ΔT: +{delta_t:.1f}°C)\n"
                                f"<b>动作执行</b>: 米家智能插座已立即<b>硬件切断电源</b>！\n"
                                f"<b>保护机制</b>: 保护锁已死锁，<b>绝不自动恢复</b>，请现场检查水冷管路！\n"
                                f"<b>时间</b>: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}"
                            )
                            send_telegram_async(msg)

                        elif is_over_wrn:
                            self.overheat_wrn_seconds = min(30.0, self.overheat_wrn_seconds + dt)
                            if self.overheat_wrn_seconds >= 30.0:
                                self.cutoff_triggered = True
                                self.plug.set_switch(False)
                                msg = (
                                    f"⚠️ <b>[AntMinerTab-Web 超温持续超时断电告警]</b>\n\n"
                                    f"<b>设备</b>: Antminer S19 Hydro ({self.miner_url})\n"
                                    f"<b>级别</b>: <b>WARNING 超时关机 (WRN TEMP 维持超30秒)</b>\n"
                                    f"<b>触发板号</b>: <b>{board_label}</b>\n"
                                    f"<b>芯片最高温</b>: <b>{eff_max:.1f}°C</b> (该板预警阈值: {eff_wrn:.0f}°C)\n"
                                    f"<b>芯片平均温</b>: {chip_avg:.1f}°C\n"
                                    f"<b>水冷回路</b>: 进水 {inlet_t:.1f}°C | 出水 {outlet_t:.1f}°C (ΔT: +{delta_t:.1f}°C)\n"
                                    f"<b>动作执行</b>: 米家智能插座已执行<b>断电保护</b>！\n"
                                    f"<b>保护机制</b>: 保护锁已激活，<b>绝不自动恢复</b>，请检查进出水温与散热！\n"
                                    f"<b>时间</b>: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}"
                                )
                                send_telegram_async(msg)
                        elif miner_ok:
                            self.overheat_wrn_seconds = 0

                    # 4. High Reject Ratio Telegram Alert (>10%) with Cooldown & Auto-Recovery
                    now_time = time.time()
                    total_shares = total_accepted + total_rejected
                    if miner_ok and total_shares >= 10 and reject_ratio > 10.0:
                        if (not self.high_reject_alerted) or (now_time - self.last_reject_alert_time >= self.reject_alert_cooldown):
                            self.high_reject_alerted = True
                            self.last_reject_alert_time = now_time
                            msg = (
                                f"⚠️ <b>[AntMinerTab-Web 矿池高拒绝率告警]</b>\n\n"
                                f"<b>设备</b>: Antminer S19 Hydro ({self.miner_url})\n"
                                f"<b>当前拒绝率</b>: <b>{reject_ratio:.2f}%</b> (告警阈值: 10.00%)\n"
                                f"<b>有效份额 (Accepted)</b>: {total_accepted:,}\n"
                                f"<b>拒绝份额 (Rejected)</b>: {total_rejected:,}\n"
                                f"<b>总份额数 (Total)</b>: {total_shares:,}\n"
                                f"<b>实时算力</b>: {rate_5s_ghs:,.1f} GH/s\n"
                                f"<b>状态分析</b>: 矿机提交份额被矿池拒绝比例已超 10%，可能存在矿池网络延迟过高、Stratum连接抖动或硬件微错误，请检查网络！\n"
                                f"<b>时间</b>: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}"
                            )
                            send_telegram_async(msg)
                    elif miner_ok and self.high_reject_alerted and reject_ratio <= 5.0 and total_shares >= 15:
                        self.high_reject_alerted = False
                        recovery_msg = (
                            f"✅ <b>[AntMinerTab-Web 矿池拒绝率恢复正常]</b>\n\n"
                            f"<b>设备</b>: Antminer S19 Hydro ({self.miner_url})\n"
                            f"<b>当前拒绝率</b>: <b>{reject_ratio:.2f}%</b>\n"
                            f"<b>有效份额 (Accepted)</b>: {total_accepted:,}\n"
                            f"<b>拒绝份额 (Rejected)</b>: {total_rejected:,}\n"
                            f"<b>实时算力</b>: {rate_5s_ghs:,.1f} GH/s\n"
                            f"<b>状态</b>: 矿机提交份额已稳定接收，拒绝率已恢复至正常水平。\n"
                            f"<b>时间</b>: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}"
                        )
                        send_telegram_async(recovery_msg)

                    # Append to the 4-Hour display buffers (throttled to one point per 10s).
                    # Protection uses chip_max directly below, not these samples, so the
                    # reduced chart resolution never delays a cutoff decision.
                    now_epoch = time.time()
                    due = (self._last_temp_sample is None or
                           now_epoch - self._last_temp_sample >= self.temp_sample_seconds)
                    if due and (inlet_t > 0 or outlet_t > 0 or chip_max > 0):
                        self._last_temp_sample = now_epoch
                        self.time_buffer.append(now_epoch)
                        self.inlet_buffer.append(inlet_t)
                        self.outlet_buffer.append(outlet_t)
                        self.chip_max_buffer.append(chip_max)
                        self.chip_avg_buffer.append(chip_avg)

                        cutoff_epoch = now_epoch - self.window_seconds
                        while self.time_buffer and self.time_buffer[0] < cutoff_epoch:
                            self.time_buffer.popleft()
                            self.inlet_buffer.popleft()
                            self.outlet_buffer.popleft()
                            self.chip_max_buffer.popleft()
                            self.chip_avg_buffer.popleft()

                    # Hashrate / share histogram buckets (fixed 30s, independent of the
                    # temperature sampling rate so the bars line up on the time axis).
                    # Only fed from real reads: the held-over "recovering" values would
                    # otherwise re-count shares that were already in the previous bucket.
                    if miner_fetch_success:
                        self._update_share_buckets(now_epoch, rate_5s_ghs,
                                                   total_accepted, total_rejected)

                    # 5. Safety Interlock 2: While running (plug is ON), if fan controller disconnects > 2min (120s), emergency power off!
                    # A failed poll is NOT proof that the plug is off: this socket's WiFi link
                    # drops most packets, so "unreadable" must be treated as UNKNOWN, never as OFF.
                    # plug_last_known_on / plug_unknown_since are maintained by _plug_poll_loop.
                    plug_state_known = bool(plug_data.get("online", False))

                    # Assume ON when we have never had a reading: keeps fans on the temp curve.
                    is_plug_on = True if self.plug_last_known_on is None else self.plug_last_known_on
                    now_t = time.time()

                    # No fan-disconnect interlock by design: losing the fan controller always
                    # shows up as rising chip temperature, which the WRN/STOP thresholds already
                    # handle. A second, time-based cutoff only caused false power-offs on hosts
                    # where no fan controller is attached at all.

                    # 6. Smart Plug Off & 5-minute Auto-Idle (600 RPM) Fan Control
                    # Only a *confirmed* OFF reading may start the idle countdown. If the plug
                    # is unreadable we keep spinning the fans on the temperature curve instead
                    # of gambling that the miner has no power.
                    plug_confirmed_off = plug_state_known and not is_plug_on
                    if plug_confirmed_off:
                        if self.plug_off_timestamp is None:
                            self.plug_off_timestamp = now_t
                        self.plug_off_duration = now_t - self.plug_off_timestamp
                    else:
                        self.plug_off_timestamp = None
                        self.plug_off_duration = 0.0
                        self.plug_idle_cooldown_reached = False

                    # 7. Fan Speed Regulation: AUTO (Linear Temp) vs MANUAL (User Fixed Target)
                    auto_target_rpm = 600
                    display_fan_mode = self.fan_control_mode

                    if plug_confirmed_off and self.plug_off_duration >= 300.0:
                        # 插座断电已达 5 分钟：强制调整至最低转速 (600 RPM) 怠速静音
                        auto_target_rpm = 600
                        display_fan_mode = "IDLE_600"
                        if self.fan_driver.connected:
                            if (not self.plug_idle_cooldown_reached) or abs(auto_target_rpm - self.last_auto_fan_rpm) >= 20 or (now_t - self.last_auto_fan_time >= 8.0):
                                self.plug_idle_cooldown_reached = True
                                self.last_auto_fan_rpm = auto_target_rpm
                                self.last_auto_fan_time = now_t
                                self.fan_driver.set_speed("ALL", auto_target_rpm)
                    elif plug_confirmed_off:
                        # 插座关闭未满 5 分钟：保持吹风排走余热
                        display_fan_mode = "COOLDOWN_5M"
                        if chip_max > self.fan_start_temp:
                            ratio = (chip_max - self.fan_start_temp) / max(1.0, self.fan_max_temp - self.fan_start_temp)
                            calc_rpm = 600.0 + ratio * (2400.0 - 600.0)
                            auto_target_rpm = max(600, min(2400, int(round(calc_rpm / 10.0) * 10)))
                        else:
                            auto_target_rpm = max(600, self.last_auto_fan_rpm or 600)

                        if self.fan_driver.connected:
                            if abs(auto_target_rpm - self.last_auto_fan_rpm) >= 20 or (now_t - self.last_auto_fan_time >= 8.0):
                                self.last_auto_fan_rpm = auto_target_rpm
                                self.last_auto_fan_time = now_t
                                self.fan_driver.set_speed("ALL", auto_target_rpm)
                    elif self.fan_control_mode == "MANUAL":
                        # 手动模式：执行用户手输目标值
                        auto_target_rpm = self.manual_target_rpm
                        display_fan_mode = "MANUAL"
                        if self.fan_driver.connected:
                            if abs(auto_target_rpm - self.last_auto_fan_rpm) >= 20 or (now_t - self.last_auto_fan_time >= 8.0):
                                self.last_auto_fan_rpm = auto_target_rpm
                                self.last_auto_fan_time = now_t
                                self.fan_driver.set_speed("ALL", auto_target_rpm)
                    elif miner_ok and chip_max > 0:
                        # 自动模式：按热点温度线性调速 (600~2400)
                        display_fan_mode = "AUTO"
                        t_start = self.fan_start_temp
                        t_max = max(t_start + 1.0, self.fan_max_temp)
                        if chip_max <= t_start:
                            auto_target_rpm = 600
                        elif chip_max >= t_max:
                            auto_target_rpm = 2400
                        else:
                            ratio = (chip_max - t_start) / (t_max - t_start)
                            calc_rpm = 600.0 + ratio * (2400.0 - 600.0)
                            auto_target_rpm = int(round(calc_rpm / 10.0) * 10)
                            auto_target_rpm = max(600, min(2400, auto_target_rpm))

                        if self.fan_driver.connected:
                            if abs(auto_target_rpm - self.last_auto_fan_rpm) >= 20 or (now_t - self.last_auto_fan_time >= 8.0):
                                self.last_auto_fan_rpm = auto_target_rpm
                                self.last_auto_fan_time = now_t
                                self.fan_driver.set_speed("ALL", auto_target_rpm)
                    else:
                        auto_target_rpm = 600
                        display_fan_mode = self.fan_control_mode

                    self.latest_data = {
                        "timestamp": datetime.now().strftime("%H:%M:%S"),
                        "time_epoch": now_epoch,
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
                        "chip_max": chip_max,
                        "chip_avg": chip_avg,
                        "pcb_temps": temp_pcb,
                        "chip_temps": temp_chip,
                        "chains": [
                            {"index": ct["index"], "chip_max": ct["chip_max"], "chip_avg": ct["chip_avg"],
                             "warn_at": board_thresholds(wrn_thresh, i, "wrn", self.board_overrides),
                             "stop_at": board_thresholds(stop_thresh, i, "stop", self.board_overrides)}
                            for i, ct in enumerate(chain_temps)
                        ],
                        "hot_board": ({k: v for k, v in hot_board.items() if k != "margin"} if hot_board else None),
                        "plug": plug_data,
                        "plug_state_known": plug_state_known,
                        "plug_unknown_seconds": round(now_t - self.plug_unknown_since, 1) if self.plug_unknown_since else 0.0,
                        "plug_off_duration": round(self.plug_off_duration, 1),
                        "fan_mode": display_fan_mode,
                        "fan_control_mode": self.fan_control_mode,
                        "manual_target_rpm": self.manual_target_rpm,
                        "fans": self.fan_driver.get_status(),
                        "fan_start_temp": self.fan_start_temp,
                        "fan_max_temp": self.fan_max_temp,
                        "auto_fan_rpm": auto_target_rpm,
                        "wrn_temp": self.wrn_temp,
                        "stop_temp": self.stop_temp,
                        "board_thresholds": self.board_overrides,
                        "interval": self.interval,
                        "paused": self.paused,
                        "cutoff_triggered": self.cutoff_triggered,
                        "overheat_wrn_seconds": self.overheat_wrn_seconds,
                    }

            # Sleep slice
            sleep_step = 0.05
            slept = 0.0
            while slept < cur_interval:
                time.sleep(sleep_step)
                slept += sleep_step
                with self.lock:
                    cur_interval = self.interval

    def get_api_payload(self) -> Dict[str, Any]:
        with self.lock:
            data = dict(self.latest_data)
            now_epoch = time.time()
            data["now_epoch"] = now_epoch
            data["fans"] = self.fan_driver.get_status()
            data["fan_start_temp"] = self.fan_start_temp
            data["fan_max_temp"] = self.fan_max_temp
            data["auto_fan_rpm"] = self.latest_data.get("auto_fan_rpm", 600)
            data["fan_mode"] = self.latest_data.get("fan_mode", "AUTO")
            data["fan_control_mode"] = self.fan_control_mode
            data["manual_target_rpm"] = self.manual_target_rpm
            data["plug_off_duration"] = self.latest_data.get("plug_off_duration", 0.0)
            data["curves"] = {
                "x": list(self.time_buffer),
                "inlet": list(self.inlet_buffer),
                "outlet": list(self.outlet_buffer),
                "chip_max": list(self.chip_max_buffer),
                "chip_avg": list(self.chip_avg_buffer),
                # 30s buckets for the hashrate line and the share histogram.
                "buckets": {
                    "t": [b["t"] for b in self.share_buckets],
                    "accepted": [b["accepted"] for b in self.share_buckets],
                    "rejected": [b["rejected"] for b in self.share_buckets],
                    "hashrate": [b["hashrate"] for b in self.share_buckets],
                },
            }
            data["window_seconds"] = self.window_seconds
            data["bucket_seconds"] = self.bucket_seconds
            return data


# Embedded Fully-Responsive High-DPI Canvas HTML/CSS/JS Single-Page Dashboard
HTML_PAGE = """<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>AntMinerTab</title>
<style>
  * { box-sizing: border-box; margin: 0; padding: 0; }
  html, body {
    height: 100%;
    min-height: 100vh;
    display: flex;
    flex-direction: column;
    background-color: #131417;
    color: #e0e2e8;
    font-family: "Consolas", "Ubuntu Mono", "DejaVu Sans Mono", monospace;
    padding: 10px 14px 8px 14px;
    user-select: none;
    overflow-x: hidden;
  }
  /* Pure Square Industrial Theme */
  .header {
    display: flex;
    align-items: center;
    gap: 12px;
    margin-bottom: 8px;
    flex-wrap: wrap;
    flex-shrink: 0;
  }
  .title {
    font-size: 16px;
    font-weight: bold;
    color: #ffffff;
    letter-spacing: 0.5px;
  }
  .badge {
    font-size: 11px;
    font-weight: bold;
    padding: 2px 8px;
    border: 1px solid #4a3e20;
    background: #23211b;
    color: #f4a261;
  }
  .badge.connected {
    border-color: #1e4538;
    background: #14241e;
    color: #00c49f;
  }
  .badge.disconnected {
    border-color: #572635;
    background: #2b171c;
    color: #e76f51;
  }
  .controls {
    margin-left: auto;
    display: flex;
    align-items: center;
    gap: 10px;
    font-size: 12px;
    color: #868c9c;
  }
  input[type="number"] {
    background: #22252e;
    border: 1px solid #2d313b;
    color: #ffd166;
    font-family: inherit;
    font-weight: bold;
    font-size: 12px;
    padding: 2px 6px;
    width: 68px;
    border-radius: 0;
  }
  button {
    background: #22252e;
    border: 1px solid #2d313b;
    color: #e0e2e8;
    font-family: inherit;
    font-size: 12px;
    font-weight: bold;
    padding: 4px 12px;
    cursor: pointer;
    border-radius: 0;
  }
  button:hover {
    background: #2d313d;
    border-color: #00a8e8;
  }
  /* Top 5 Metric Cards */
  .cards-row {
    display: grid;
    grid-template-columns: repeat(5, 1fr);
    gap: 8px;
    margin-bottom: 8px;
    flex-shrink: 0;
  }
  @media (max-width: 900px) {
    .cards-row { grid-template-columns: repeat(2, 1fr); }
  }
  .card {
    background: #1b1d22;
    border: 1px solid #2d313b;
    padding: 8px 10px;
    display: flex;
    flex-direction: column;
    justifyContent: space-between;
  }
  .card-title {
    font-size: 10px;
    font-weight: bold;
    color: #868c9c;
    letter-spacing: 0.5px;
    text-transform: uppercase;
  }
  .card-value {
    font-size: 19px;
    font-weight: bold;
    margin: 2px 0;
  }
  .card-sub {
    font-size: 10px;
    color: #868c9c;
  }
  /* Plug Toggle Button */
  .btn-switch-on {
    background: #1a382c;
    border: 1px solid #00c49f;
    color: #00c49f;
    width: 100%;
    padding: 3px 0;
    margin: 2px 0;
  }
  .btn-switch-off {
    background: #3b1e24;
    border: 1px solid #e76f51;
    color: #e76f51;
    width: 100%;
    padding: 3px 0;
    margin: 2px 0;
  }
  /* Main Grid (Full Height Responsive) */
  .main-grid {
    flex: 1;
    display: grid;
    /* Weighted toward the chart: the sensor column only needs enough width for a
       short label, a thin track and a temperature readout. */
    grid-template-columns: 7.4fr 2.6fr;
    gap: 10px;
    min-height: 380px;
    height: 100%;
  }
  @media (max-width: 1200px) {
    .main-grid { grid-template-columns: 6.6fr 3.4fr; }
  }
  @media (max-width: 900px) {
    .main-grid { grid-template-columns: 1fr; height: auto; }
  }
  .panel {
    background: #1b1d22;
    border: 1px solid #2d313b;
    padding: 10px 12px;
    display: flex;
    flex-direction: column;
    height: 100%;
    overflow-y: auto;
  }
  .panel::-webkit-scrollbar {
    width: 4px;
  }
  .panel::-webkit-scrollbar-track {
    background: transparent;
  }
  .panel::-webkit-scrollbar-thumb {
    background: #2d313b;
  }
  .panel-header {
    display: flex;
    justify-content: space-between;
    align-items: center;
    margin-bottom: 6px;
    font-size: 12px;
    font-weight: bold;
    flex-shrink: 0;
  }
  .water-banner {
    color: #00a8e8;
    font-size: 11px;
  }
  .zoom-hint {
    color: #868c9c;
    font-size: 10px;
    margin-left: 8px;
  }
  /* Canvas Plot Area (Flexible Height) */
  .plot-container {
    position: relative;
    width: 100%;
    flex: 1;
    min-height: 260px;
    background: #1b1d22;
    cursor: crosshair;
  }
  canvas#plotCanvas {
    position: absolute;
    top: 0; left: 0;
    width: 100%;
    height: 100%;
    display: block;
  }
  /* Sensors & Threshold Panel */
  .thresh-row {
    display: flex;
    align-items: center;
    gap: 8px;
    margin-bottom: 8px;
    font-size: 11px;
    font-weight: bold;
    color: #868c9c;
    flex-shrink: 0;
  }
  .alert-banner {
    background: #3b171c;
    border: 1px solid #752834;
    color: #e76f51;
    font-size: 11px;
    font-weight: bold;
    padding: 4px 6px;
    margin-bottom: 6px;
    display: none;
    flex-shrink: 0;
  }
  .btn-reset-lock {
    background: #5e1f2b;
    border: 1px solid #e76f51;
    color: #ffffff;
    font-weight: bold;
    padding: 4px 8px;
    width: 100%;
    margin-bottom: 8px;
    display: none;
    flex-shrink: 0;
  }
  .sec-title {
    font-size: 11px;
    font-weight: bold;
    margin: 4px 0 2px 0;
    flex-shrink: 0;
  }
  .sensor-bar-row {
    display: flex;
    align-items: center;
    height: 18px;
    font-size: 10px;
    font-weight: bold;
  }
  .bar-label { width: 44px; color: #ffffff; }
  .bar-track {
    flex: 1;
    height: 6px;
    background: #252830;
    position: relative;
    margin: 0 6px;
  }
  .bar-fill {
    height: 100%;
    width: 0%;
    background: #00c49f;
  }
  .bar-val { width: 44px; text-align: right; }
  /* Footer */
  .footer {
    display: flex;
    justify-content: space-between;
    margin-top: 8px;
    font-size: 11px;
    color: #868c9c;
    flex-shrink: 0;
  }
  /* Password Modal */
  .modal-overlay {
    position: fixed;
    top: 0; left: 0; width: 100%; height: 100%;
    background: rgba(0,0,0,0.7);
    display: none;
    align-items: center;
    justify-content: center;
    z-index: 999;
  }
  .modal-box {
    background: #1b1d22;
    border: 1px solid #2d313b;
    padding: 16px;
    width: 320px;
  }
  .modal-title {
    font-size: 13px;
    font-weight: bold;
    margin-bottom: 8px;
  }
  .modal-input {
    width: 100%;
    padding: 6px 8px;
    background: #22252e;
    border: 1px solid #2d313b;
    color: #ffffff;
    font-family: inherit;
    font-size: 13px;
    margin-bottom: 8px;
  }
  .modal-err {
    color: #e76f51;
    font-size: 11px;
    margin-bottom: 8px;
    display: none;
  }
  .modal-btns {
    display: flex;
    justify-content: flex-end;
    gap: 8px;
  }
</style>
</head>
<body>

<!-- Header -->
<div class="header">
  <span class="title">AntMinerTab</span>
  <span class="badge" id="statusBadge">[ CONNECTING... ]</span>
  <div class="controls">
    <span>Interval:</span>
    <input type="number" id="intervalInput" min="0.5" max="2" step="0.5" value="1.0" title="采样/保护判定周期。上限 2s 是硬性限制：超过它，STOP 急停的响应延迟会变得不可接受。">
    <button id="pauseBtn">Pause</button>
    <button id="clearChartBtn">Clear Chart</button>
  </div>
</div>

<!-- Top 5 Metric Cards -->
<div class="cards-row">
  <div class="card">
    <div class="card-title">Real-time Hashrate</div>
    <div class="card-value" id="valHashrate" style="color:#00a8e8">-- GH/s</div>
    <div class="card-sub">Real-time 5s hashrate</div>
  </div>
  <div class="card">
    <div class="card-title">Accepted Shares</div>
    <div class="card-value" id="valAccepted" style="color:#00c49f">--</div>
    <div class="card-sub">Cumulative accepted</div>
  </div>
  <div class="card">
    <div class="card-title">Rejected Shares</div>
    <div class="card-value" id="valRejected" style="color:#e76f51">--</div>
    <div class="card-sub" id="valRejectRatio">Ratio: -- %</div>
  </div>
  <div class="card">
    <div class="card-title">Smart Plug Power</div>
    <div class="card-value" id="valPlugPower" style="color:#f4a261">-- W</div>
    <div class="card-sub" id="valPlugLoad">Load: -- kW</div>
  </div>
  <div class="card">
    <div class="card-title">Plug Switch</div>
    <button id="plugSwitchBtn" class="btn-switch-off">OFF</button>
    <div class="card-sub" id="valPlugTemp">Plug: --°C</div>
  </div>
</div>

<!-- Main Section (Flexible Height) -->
<div class="main-grid">
  <!-- Left Panel: Responsive 4-Hour Canvas Plot -->
  <div class="panel">
    <div class="panel-header">
      <div>
        <span style="color:#868c9c">TEMPERATURE / HASHRATE / SHARES</span>
        <span id="chartLegend" style="font-size:10px; font-weight:normal; margin-left:10px;">
          <span style="color:#00a8e8">■ IN</span>
          <span style="color:#f4a261; margin-left:6px">■ OUT</span>
          <span style="color:#e76f51; margin-left:6px">■ CHIP MAX</span>
          <span style="color:#e67e22; margin-left:6px">■ CHIP AVG</span>
          <span style="color:#7aa2d4; margin-left:6px">■ HASH</span>
          <span style="color:#00c49f; margin-left:8px">▮ ACC</span>
          <span style="color:#e76f51; margin-left:4px">▮ REJ</span>
        </span>
        <span class="zoom-hint" id="zoomHint">(Scroll to zoom, drag to pan, dblclick to reset)</span>
      </div>
      <span class="water-banner" id="waterBanner">Inlet: --.-°C | Outlet: --.-°C (ΔT: --.-°C)</span>
    </div>
    <div class="plot-container" id="plotWrapper">
      <canvas id="plotCanvas"></canvas>
    </div>
  </div>

  <!-- Right Panel: Dual Thresholds & Sensor Gauges -->
  <div class="panel">
    <!-- Fan curve inputs. These only modulate fan speed; they never cut power. -->
    <div class="thresh-row" style="flex-wrap: wrap; row-gap: 6px;">
      <span title="风扇起转 600 RPM 温度 (以芯片热点最高温为对象)" style="color:#00c49f;">FAN 600:</span>
      <input type="number" id="fanStartSpin" min="30" max="80" step="1" value="50" style="width:50px;"> °C
      <span title="风扇最大 2400 RPM 温度 (以芯片热点最高温为对象)" style="margin-left:6px; color:#00c49f;">FAN 2400:</span>
      <input type="number" id="fanMaxSpin" min="40" max="90" step="1" value="70" style="width:50px;"> °C
    </div>

    <!-- Per-board power-cutoff limits. Chain 2 runs hotter by design, so each board
         carries its own WRN/STOP pair. Blank means "use the built-in default". -->
    <div class="thresh-row" style="row-gap: 6px; border-top:1px dashed #2d313b; padding-top:5px;">
      <span style="color:#f4a261; width:44px;" title="Chain1 预警温度：持续 30s 超温则断电，留空=默认 75">CH1 WRN:</span>
      <input type="number" id="b1WrnSpin" min="40" max="110" step="1" placeholder="auto" style="width:52px;">
      <span style="color:#f4a261;" title="Chain1 急停温度：即刻断电，留空=默认 78">STOP:</span>
      <input type="number" id="b1StopSpin" min="45" max="115" step="1" placeholder="auto" style="width:52px;">
    </div>
    <div class="thresh-row" style="row-gap: 6px;">
      <span style="color:#e67e22; width:44px;" title="Chain2 预警温度：相对 Chain1 自动 +10，留空=默认 85">CH2 WRN:</span>
      <input type="number" id="b2WrnSpin" min="40" max="110" step="1" placeholder="auto" style="width:52px;">
      <span style="color:#e67e22;" title="Chain2 急停温度：相对 Chain1 自动 +10，留空=默认 88">STOP:</span>
      <input type="number" id="b2StopSpin" min="45" max="115" step="1" placeholder="auto" style="width:52px;">
    </div>

    <div class="alert-banner" id="alertBanner"></div>
    <button class="btn-reset-lock" id="resetLockBtn">RESET PROTECTION LOCK</button>

    <!-- Per-Board Chip Die Sensors (this miner has 2 hash boards) -->
    <div class="sec-title" style="color:#f4a261; margin-top:6px">Chip Die Core Sensors (per board)</div>
    <div id="chainBarsContainer"></div>

    <!-- 12025 Fan Controller (CoolerHD) -->
    <div class="sec-title" style="color:#00c49f; margin-top:10px; display:flex; justify-content:space-between; align-items:center;">
      <span>CoolerHD 12025 Fan Speeds</span>
      <span id="fanPortBadge" style="font-size:10px; color:#868c9c; font-weight:normal;">[ SCANNING... ]</span>
    </div>

    <!-- Serial Port Selector & Auto/Manual Mode Switch Toolbar -->
    <div style="display:flex; align-items:center; justify-content:space-between; margin-bottom:6px; padding:4px 6px; background:#16181d; border:1px solid #2d313b; font-size:11px; flex-wrap:wrap; gap:6px;">
      <!-- Serial Port Dropdown & Connect/Scan -->
      <div style="display:flex; align-items:center; gap:4px;">
        <span style="color:#868c9c; font-size:10px; font-weight:bold;">PORT:</span>
        <select id="fanSerialSelect" style="background:#22252e; border:1px solid #2d313b; color:#ffffff; font-family:inherit; font-size:10px; padding:2px 4px; border-radius:0; max-width:130px;">
          <option value="AUTO">AUTO (Scan All)</option>
        </select>
        <button id="fanScanBtn" style="padding:2px 6px; font-size:10px; background:#22252e; border:1px solid #2d313b; color:#868c9c; cursor:pointer;" title="Rescan available serial ports">SCAN</button>
        <button id="fanConnectBtn" style="padding:2px 6px; font-size:10px; background:#1b382c; border:1px solid #00c49f; color:#00c49f; cursor:pointer;" title="Connect selected port">CONNECT</button>
      </div>

      <!-- Auto / Manual Toggle Mode Switch -->
      <div style="display:flex; align-items:center; gap:6px;">
        <span style="color:#868c9c; font-size:10px; font-weight:bold;">MODE:</span>
        <div style="display:inline-flex; border:1px solid #2d313b;">
          <button id="fanModeAutoBtn" style="padding:2px 8px; font-size:10px; font-weight:bold; cursor:pointer; background:#00c49f; color:#131417; border:none;">AUTO</button>
          <button id="fanModeManualBtn" style="padding:2px 8px; font-size:10px; font-weight:bold; cursor:pointer; background:#22252e; color:#868c9c; border:none;">MANUAL</button>
        </div>
      </div>
    </div>

    <!-- Fan Safety Warning Banner (Displayed when fan disconnected while running or attempting to start) -->

    <div id="fanBarsContainer"></div>

    <!-- Fan Speed Regulation (SET <id> <speed>) -->
    <div style="margin-top:6px; padding:6px 8px; background:#16181d; border:1px solid #2d313b;">
      <div style="display:flex; align-items:center; justify-content:space-between; margin-bottom:4px; font-size:10px; color:#868c9c; font-weight:bold;">
        <span id="fanCtrlTitle">FAN SPEED REGULATION (600-2400 RPM)</span>
        <span id="fanCtrlStatus" style="color:#00c49f;">AUTO: 600 RPM</span>
      </div>
      <div style="display:flex; align-items:center; gap:6px; flex-wrap:wrap;">
        <select id="fanTargetSelect" style="background:#22252e; border:1px solid #2d313b; color:#ffffff; font-family:inherit; font-size:11px; padding:2px 4px; font-weight:bold; border-radius:0;">
          <option value="ALL">All Fans (1-6)</option>
          <option value="1">Fan 1</option>
          <option value="2">Fan 2</option>
          <option value="3">Fan 3</option>
          <option value="4">Fan 4</option>
          <option value="5">Fan 5</option>
          <option value="6">Fan 6</option>
        </select>
        <input type="number" id="fanSpeedInput" min="600" max="2400" step="50" value="1800" style="width:68px; padding:2px 4px; background:#22252e; border:1px solid #2d313b; color:#ffd166; font-weight:bold; font-size:11px; border-radius:0;">
        <span style="font-size:11px; color:#868c9c;">RPM</span>
        <button id="applyFanSpeedBtn" style="padding:3px 8px; font-size:11px; background:#1b382c; border:1px solid #00c49f; color:#00c49f; cursor:pointer;">APPLY</button>
      </div>
      <div style="display:flex; gap:4px; margin-top:5px;">
        <button class="fan-quick-btn" data-rpm="0" style="flex:1; padding:2px 0; font-size:10px; background:#3b1e24; border:1px solid #e76f51; color:#e76f51; cursor:pointer;">STOP</button>
        <button class="fan-quick-btn" data-rpm="600" style="flex:1; padding:2px 0; font-size:10px; background:#22252e; border:1px solid #2d313b; color:#868c9c; cursor:pointer;">600</button>
        <button class="fan-quick-btn" data-rpm="1200" style="flex:1; padding:2px 0; font-size:10px; background:#22252e; border:1px solid #2d313b; color:#868c9c; cursor:pointer;">1200</button>
        <button class="fan-quick-btn" data-rpm="1800" style="flex:1; padding:2px 0; font-size:10px; background:#22252e; border:1px solid #2d313b; color:#868c9c; cursor:pointer;">1800</button>
        <button class="fan-quick-btn" data-rpm="2400" style="flex:1; padding:2px 0; font-size:10px; background:#1f3347; border:1px solid #00a8e8; color:#00a8e8; cursor:pointer;">2400</button>
      </div>
    </div>
  </div>
</div>

<!-- Footer -->
<div class="footer">
  <span>Miner: 10.8.1.86 | Plug: 10.8.1.110 (miIO) | Tailscale/LAN Port 20000</span>
  <span id="footerUpdated">Last update: --:--:--</span>
</div>

<!-- Password Modal -->
<div class="modal-overlay" id="pwdModal">
  <div class="modal-box">
    <div class="modal-title">Power ON Authentication</div>
    <div style="font-size:11px; color:#868c9c; margin-bottom:8px">Enter password to turn ON the smart plug:</div>
    <input type="password" class="modal-input" id="pwdInput" placeholder="Password">
    <div class="modal-err" id="pwdErr">Incorrect password! Try again.</div>
    <div class="modal-btns">
      <button id="pwdConfirmBtn">CONFIRM</button>
      <button id="pwdCancelBtn">CANCEL</button>
    </div>
  </div>
</div>

<script>
  let isPaused = false;
  let currentPlugState = false;
  let plugStateKnown = false;
  let currentBoardThresholds = [];
  let boardThresholdsDirty = false;
  let currentFanMode = "AUTO";
  let curvesData = { x: [], inlet: [], outlet: [], chip_max: [], chip_avg: [], buckets: { t: [], accepted: [], rejected: [], hashrate: [] } };
  let vBucketSeconds = 30;  // Width of one share/hashrate bucket, as reported by the server
  let currentServerNow = Date.now() / 1000;

  function formatClock(epochSec, withSec = false) {
    if (!epochSec || epochSec <= 0) return "--:--";
    const d = new Date(epochSec * 1000);
    const hh = String(d.getHours()).padStart(2, '0');
    const mm = String(d.getMinutes()).padStart(2, '0');
    if (withSec) {
      const ss = String(d.getSeconds()).padStart(2, '0');
      return `${hh}:${mm}:${ss}`;
    }
    return `${hh}:${mm}`;
  }

  // Responsive Zoom & Pan Viewport state
  const WINDOW_SECONDS = 14400;   // Full history window: 4 hours
  let viewSpan = WINDOW_SECONDS;  // Visible time span in seconds (Default 4 hours)
  let viewOffset = 0;             // Shift right edge away from current time (Default 0 = now)
  let hoverX = null;
  let lastMouseMoveTime = 0;
  let isDragging = false;
  let dragStartX = 0;
  let dragStartOffset = 0;

  // Initialize Bars (6 chip sensors per hash board)
  const chainContainer = document.getElementById("chainBarsContainer");
  const fanContainer = document.getElementById("fanBarsContainer");

  for (let b = 1; b <= 2; b++) {
    chainContainer.innerHTML += `
      <div style="font-size:10px; color:#868c9c; margin:6px 0 2px 0;">CHAIN ${b} — <span id="chainThr${b}">--</span> <span id="chainMax${b}" style="font-weight:bold;">--.-°C</span></div>`;
    for (let i = 1; i <= 6; i++) {
      const key = (b - 1) * 6 + i;
      chainContainer.innerHTML += `
      <div class="sensor-bar-row">
        <span class="bar-label">C${key}</span>
        <div class="bar-track"><div class="bar-fill" id="chipFill${key}"></div></div>
        <span class="bar-val" id="chipVal${key}">--.-°C</span>
      </div>`;
    }
  }
  for (let i = 1; i <= 6; i++) {
    fanContainer.innerHTML += `
      <div class="sensor-bar-row">
        <span class="bar-label">Fan-${i}</span>
        <div class="bar-track"><div class="bar-fill" id="fanFill${i}" style="background:#00c49f;"></div></div>
        <span class="bar-val" id="fanVal${i}">-- RPM</span>
      </div>`;
  }

  let pollIntervalMs = 1000;
  let pollTimer = null;

  // Polling Loop with Adaptive Server-side Interval
  async function fetchStatus() {
    try {
      const res = await fetch("/api/status");
      if (res.status === 401) {
        document.getElementById("statusBadge").className = "badge disconnected";
        document.getElementById("statusBadge").innerText = "[ AUTH REQUIRED ]";
        // Do not reload in a loop; pause polling until page is reloaded or authenticated
        return;
      }
      const data = await res.json();
      updateUI(data);

      if (data.interval) {
        pollIntervalMs = Math.max(500, data.interval * 1000);
      }
    } catch (e) {
      document.getElementById("statusBadge").className = "badge disconnected";
      document.getElementById("statusBadge").innerText = "[ DISCONNECTED ]";
    } finally {
      if (pollTimer) clearTimeout(pollTimer);
      pollTimer = setTimeout(fetchStatus, pollIntervalMs);
    }
  }

  function updateUI(d) {
    if (d.now_epoch) currentServerNow = d.now_epoch;
    else currentServerNow = Date.now() / 1000;

    // 1. Badge & Footer
    const badge = document.getElementById("statusBadge");
    if (d.miner_online) {
      if (d.miner_recovering) {
        badge.className = "badge";
        badge.innerText = "[ RETRYING: 10.8.1.86 ]";
      } else {
        badge.className = "badge connected";
        badge.innerText = "[ CONNECTED: 10.8.1.86 ]";
      }
    } else {
      badge.className = "badge disconnected";
      badge.innerText = "[ MINER ERROR ]";
    }
    document.getElementById("footerUpdated").innerText = `Last update: ${d.timestamp} (${d.latency_ms}ms)`;

    // 2. Metric Cards
    const ghs = d.hashrate_ghs !== undefined ? d.hashrate_ghs : (d.hashrate_ths || 0) * 1000;
    document.getElementById("valHashrate").innerText = `${ghs.toLocaleString('en-US', {minimumFractionDigits: 1, maximumFractionDigits: 1})} GH/s`;
    document.getElementById("valAccepted").innerText = d.accepted_shares.toLocaleString();
    document.getElementById("valRejected").innerText = d.rejected_shares.toLocaleString();
    document.getElementById("valRejectRatio").innerText = `Ratio: ${d.reject_ratio.toFixed(2)} %`;

    // Plug Card
    // "Not answered" is not the same as "turned off": this plug drops most packets, so an
    // offline reading must not be rendered as a confirmed OFF state.
    const pBtn = document.getElementById("plugSwitchBtn");
    if (d.plug && d.plug.online && d.plug.state_confirmed) {
      document.getElementById("valPlugPower").innerText = `${Math.round(d.plug.power_w)} W`;
      document.getElementById("valPlugLoad").innerText = `Load: ${(d.plug.power_w/1000).toFixed(2)} kW`;
      currentPlugState = d.plug.switch_on;
      plugStateKnown = true;
      if (d.plug.switch_on) {
        pBtn.className = "btn-switch-on";
        pBtn.innerText = "ON";
        document.getElementById("valPlugTemp").innerText = `Internal Temp: ${d.plug.plug_temp}°C`;
      } else {
        pBtn.className = "btn-switch-off";
        pBtn.innerText = "OFF";
        document.getElementById("valPlugTemp").innerText = `Power Cut Off`;
      }
    } else {
      plugStateKnown = false;
      document.getElementById("valPlugPower").innerText = "LINK LOST";
      document.getElementById("valPlugLoad").innerText = "miIO no reply (retrying)";
      pBtn.className = "btn-switch-off";
      pBtn.innerText = "UNKNOWN";
      document.getElementById("valPlugTemp").innerText = "State not confirmed";
    }

    // 3. Water Banner
    const dtSign = d.water_delta > 0 ? `+${d.water_delta.toFixed(1)}` : `${d.water_delta.toFixed(1)}`;
    latestWaterBannerText = `Inlet: ${d.water_inlet.toFixed(1)}°C | Outlet: ${d.water_outlet.toFixed(1)}°C (ΔT: ${dtSign}°C)`;
    if (hoverX === null) {
      document.getElementById("waterBanner").innerText = latestWaterBannerText;
    }

    // 4. Protection & Alerts
    const alertBox = document.getElementById("alertBanner");
    const rstBtn = document.getElementById("resetLockBtn");

    if (d.cutoff_triggered) {
      alertBox.innerText = "EMERGENCY CUTOFF ACTIVE: Plug cut off.\\nManual reset required.";
      alertBox.style.display = "block";
      rstBtn.style.display = "block";
    } else if (d.overheat_wrn_seconds > 0) {
      const rem = Math.max(0, 30 - d.overheat_wrn_seconds);
      const hot = d.hot_board || {};
      const hotLabel = hot.index !== undefined ? `CHAIN ${hot.index} ` : "";
      const hotTemp = hot.chip_max !== undefined ? hot.chip_max : d.chip_max;
      const hotWrn = hot.warn_at !== undefined ? hot.warn_at : d.wrn_temp;
      alertBox.innerText = `WRN TEMP: ${hotLabel}${hotTemp.toFixed(1)}°C >= ${hotWrn}°C! Cutoff in ${rem}s`;
      alertBox.style.display = "block";
      rstBtn.style.display = "none";
    } else {
      alertBox.style.display = "none";
      rstBtn.style.display = "none";
    }

    // 5. Sync Server-Authoritative Settings across all viewing devices
    // (Focus-aware: do not interrupt user if actively editing that specific input)
    const fanStartInput = document.getElementById("fanStartSpin");
    if (document.activeElement !== fanStartInput && d.fan_start_temp !== undefined) {
      fanStartInput.value = d.fan_start_temp;
    }

    const fanMaxInput = document.getElementById("fanMaxSpin");
    if (document.activeElement !== fanMaxInput && d.fan_max_temp !== undefined) {
      fanMaxInput.value = d.fan_max_temp;
    }

    // Per-board power-cutoff limits. Blank means "use the automatic value" (base / base+offset).
    const bt = d.board_thresholds || [];
    ["b1WrnSpin", "b1StopSpin", "b2WrnSpin", "b2StopSpin"].forEach((id, idx) => {
      const el = document.getElementById(id);
      if (!el || document.activeElement === el) return;
      const boardIdx = Math.floor(idx / 2);
      const key = idx % 2 === 0 ? "wrn" : "stop";
      const v = (bt[boardIdx] || {})[key];
      el.value = (v === null || v === undefined) ? "" : v;
    });
    if (d.board_thresholds !== undefined && !boardThresholdsDirty) {
      currentBoardThresholds = d.board_thresholds || [];
    }

    const intervalInput = document.getElementById("intervalInput");
    if (document.activeElement !== intervalInput && d.interval !== undefined) {
      intervalInput.value = d.interval;
    }

    const pauseBtn = document.getElementById("pauseBtn");
    if (d.paused !== undefined) {
      isPaused = d.paused;
      pauseBtn.innerText = isPaused ? "Resume" : "Pause";
    }

    // 6. Per-board sensor bars. Each board has its own thresholds, so the bar is coloured
    // against that board's WRN/STOP rather than a single global value.
    const chains = d.chains || [];
    for (let b = 0; b < 2; b++) {
      const c = chains[b];
      const thr = document.getElementById(`chainThr${b + 1}`);
      const mx = document.getElementById(`chainMax${b + 1}`);
      if (c) {
        if (thr) thr.innerText = `WRN ${c.warn_at}° / STOP ${c.stop_at}°`;
        if (mx) {
          mx.innerText = `max ${c.chip_max.toFixed(1)}°C`;
          mx.style.color = c.chip_max >= c.stop_at ? "#e76f51"
                          : (c.chip_max >= c.warn_at ? "#f4a261" : "#00c49f");
        }
      } else {
        if (thr) thr.innerText = "no data";
        if (mx) mx.innerText = "--.-°C";
      }
      const boardChip = (c && c.chip_max) ? c.chip_max : 0;
      const boardWrn = c ? c.warn_at : d.wrn_temp;
      for (let i = 0; i < 6; i++) {
        const idx = b * 6 + i;
        updateBar("chip", idx + 1, d.chip_temps[idx] || 0, 85, boardWrn);
      }
    }

    // 7. CoolerHD 12025 Fan Speeds & Control State
    if (d.fans) {

      const fanBadge = document.getElementById("fanPortBadge");
      if (fanBadge) {
        if (d.fans.connected) {
          fanBadge.innerText = `[ CONNECTED: ${d.fans.port} ]`;
          fanBadge.style.color = "#00c49f";
        } else if (d.fans.scanning) {
          fanBadge.innerText = "[ SCANNING... ]";
          fanBadge.style.color = "#868c9c";
        } else {
          fanBadge.innerText = "[ DISCONNECTED ]";
          fanBadge.style.color = "#e76f51";
        }
      }

      // Update Serial Port Dropdown Options (without disrupting active user click)
      const portSelect = document.getElementById("fanSerialSelect");
      if (portSelect && document.activeElement !== portSelect && d.fans.available_ports) {
        const ports = d.fans.available_ports;
        let optHtml = '<option value="AUTO">AUTO (Scan All)</option>';
        ports.forEach(p => {
          const desc = p.description ? ` (${p.description})` : "";
          optHtml += `<option value="${p.port}">${p.port}${desc}</option>`;
        });
        if (portSelect.getAttribute("data-ports-len") !== String(ports.length)) {
          const curVal = portSelect.value || d.fans.preferred_port || "AUTO";
          portSelect.innerHTML = optHtml;
          portSelect.setAttribute("data-ports-len", String(ports.length));
          portSelect.value = curVal;
        }
      }

      // Update Auto / Manual Mode Switch Toggle Buttons
      const isAuto = (d.fan_control_mode !== "MANUAL");
      currentFanMode = isAuto ? "AUTO" : "MANUAL";
      const autoBtn = document.getElementById("fanModeAutoBtn");
      const manualBtn = document.getElementById("fanModeManualBtn");
      const titleSpan = document.getElementById("fanCtrlTitle");
      if (autoBtn && manualBtn) {
        if (isAuto) {
          autoBtn.style.background = "#00c49f";
          autoBtn.style.color = "#131417";
          manualBtn.style.background = "#22252e";
          manualBtn.style.color = "#868c9c";
          if (titleSpan) titleSpan.innerText = "FAN SPEED REGULATION (AUTO - 600~2400 RPM)";
        } else {
          autoBtn.style.background = "#22252e";
          autoBtn.style.color = "#868c9c";
          manualBtn.style.background = "#f4a261";
          manualBtn.style.color = "#131417";
          if (titleSpan) titleSpan.innerText = "FAN SPEED REGULATION (MANUAL TARGET)";
        }
      }

      const rpms = d.fans.rpms || [];
      for (let i = 0; i < 6; i++) {
        const rVal = rpms[i] !== undefined ? rpms[i] : 0;
        updateFanBar(i + 1, rVal, 2400);
      }

      const ctrlStatus = document.getElementById("fanCtrlStatus");
      if (ctrlStatus && ctrlStatus.getAttribute("data-busy") !== "1") {
        const autoRpm = d.auto_fan_rpm || 600;
        if (!isAuto) {
          ctrlStatus.innerText = `MANUAL: ${d.manual_target_rpm || autoRpm} RPM`;
          ctrlStatus.style.color = "#f4a261";
        } else if (d.fan_mode === "IDLE_600") {
          ctrlStatus.innerText = "PLUG OFF: IDLE (600 RPM)";
          ctrlStatus.style.color = "#868c9c";
        } else if (d.fan_mode === "COOLDOWN_5M") {
          const remSec = Math.max(0, Math.round(300 - (d.plug_off_duration || 0)));
          ctrlStatus.innerText = `PLUG OFF: Cool ${remSec}s (${autoRpm} RPM)`;
          ctrlStatus.style.color = "#f4a261";
        } else {
          ctrlStatus.innerText = `AUTO: ${autoRpm} RPM`;
          ctrlStatus.style.color = "#00c49f";
        }
      }
    }

    // 8. Curves data
    if (d.curves) {
      curvesData = d.curves;
      if (d.bucket_seconds) vBucketSeconds = d.bucket_seconds;
      drawCanvasPlot();
    }
  }

  function updateBar(type, idx, val, maxRange, wrn) {
    const fill = document.getElementById(`${type}Fill${idx}`);
    const text = document.getElementById(`${type}Val${idx}`);
    const pct = Math.min(100, Math.max(0, (val / maxRange) * 100));
    fill.style.width = `${pct}%`;
    text.innerText = `${val.toFixed(1)}°C`;

    let color = "#00c49f";
    if (val >= wrn || val >= 78) color = "#e76f51";
    else if (val >= 68) color = "#f4a261";
    else if (val >= 55) color = "#00a8e8";

    fill.style.backgroundColor = color;
    text.style.color = color;
  }

  function updateFanBar(idx, val, maxRange = 2400) {
    const fill = document.getElementById(`fanFill${idx}`);
    const text = document.getElementById(`fanVal${idx}`);
    if (!fill || !text) return;

    const rpm = Math.max(0, Math.round(Number(val) || 0));
    const pct = Math.min(100, Math.max(0, (rpm / maxRange) * 100));
    fill.style.width = `${pct}%`;
    text.innerText = rpm > 0 ? `${rpm} RPM` : `0 RPM`;

    let color = "#00c49f";
    if (rpm === 0) color = "#e76f51";
    else if (rpm < 600) color = "#f4a261";
    else if (rpm >= 2300) color = "#00a8e8";

    fill.style.backgroundColor = color;
    text.style.color = color;
  }

  // --- High-DPI HTML5 Canvas Chart with Full Auto-Resize & Zoom/Pan ---
  const canvas = document.getElementById("plotCanvas");
  const ctx = canvas.getContext("2d");
  const wrapper = document.getElementById("plotWrapper");
  // Right padding is wider than the left because the hashrate curve carries its own
  // right-hand GH/s axis, keeping it independent of the temperature scale.
  const CHART_PAD_L = 42;
  const CHART_PAD_R = 54;

  function resizeCanvas() {
    const dpr = window.devicePixelRatio || 1;
    const rect = wrapper.getBoundingClientRect();
    if (rect.width <= 0 || rect.height <= 0) return;

    canvas.width = Math.round(rect.width * dpr);
    canvas.height = Math.round(rect.height * dpr);
    ctx.resetTransform();
    ctx.scale(dpr, dpr);
    drawCanvasPlot();
  }

  // Use ResizeObserver for instant responsive auto-scaling when window/panel resizes
  const ro = new ResizeObserver(() => {
    resizeCanvas();
  });
  ro.observe(wrapper);

  function drawCanvasPlot() {
    const w = wrapper.clientWidth;
    const h = wrapper.clientHeight;
    if (w <= 0 || h <= 0) return;

    ctx.clearRect(0, 0, w, h);

    const padL = CHART_PAD_L, padR = CHART_PAD_R, padT = 16, padB = 24;
    const plotW = w - padL - padR;
    const plotH = h - padT - padB;
    if (plotW <= 0 || plotH <= 0) return;

    // The share histogram owns a short band sitting on the x-axis; the temperature and
    // hashrate curves get their own area above it, so the bars never cover the curves.
    const histH = Math.max(26, Math.min(44, Math.round(plotH * 0.15)));
    const chartBottom = padT + plotH;
    const histTop = chartBottom - histH;
    const tempBottom = histTop - 6;
    const tempH = Math.max(20, tempBottom - padT);

    // Viewport Time Bounds (Epoch Timestamps)
    const viewRight = currentServerNow - viewOffset;
    const viewLeft = viewRight - viewSpan;

    // Update zoom hint
    const hint = document.getElementById("zoomHint");
    if (viewSpan < WINDOW_SECONDS - 50 || viewOffset > 10) {
      hint.innerText = `[ Zoom: ${(WINDOW_SECONDS/viewSpan).toFixed(1)}x | Span: ${Math.round(viewSpan/60)}m | DblClick to reset ]`;
      hint.style.color = "#ffd166";
    } else {
      hint.innerText = `(Scroll to zoom, drag to pan, dblclick to reset | ${WINDOW_SECONDS/3600}h window)`;
      hint.style.color = "#868c9c";
    }

    // Y Range Adaptive based on visible points in current viewport
    let allVals = [];
    const n = curvesData.x ? curvesData.x.length : 0;
    for (let i = 0; i < n; i++) {
      const tx = curvesData.x[i];
      if (tx >= viewLeft && tx <= viewRight) {
        if (curvesData.inlet[i]) allVals.push(curvesData.inlet[i]);
        if (curvesData.outlet[i]) allVals.push(curvesData.outlet[i]);
        if (curvesData.chip_max[i]) allVals.push(curvesData.chip_max[i]);
        if (curvesData.chip_avg[i]) allVals.push(curvesData.chip_avg[i]);
      }
    }
    allVals = allVals.filter(v => v > 0);

    let minY = 35, maxY = 75;
    if (allVals.length > 0) {
      const minA = Math.min(...allVals);
      const maxA = Math.max(...allVals);
      if (maxA - minA < 10) {
        const mid = (minA + maxA) / 2;
        minY = Math.max(0, mid - 6);
        maxY = mid + 6;
      } else {
        minY = Math.max(0, minA - 2.5);
        maxY = maxA + 3.0;
      }
    }

    // Grid & Y Ticks (temperature scale, applies to the curve area only)
    ctx.strokeStyle = "#242731";
    ctx.lineWidth = 1;
    ctx.fillStyle = "#868c9c";
    ctx.font = "10px Consolas, monospace";
    ctx.textAlign = "right";
    ctx.textBaseline = "middle";

    const yStep = (maxY - minY) / 4;
    for (let i = 0; i <= 4; i++) {
      const yVal = minY + yStep * i;
      const py = tempBottom - (tempH * (yVal - minY) / (maxY - minY));
      ctx.beginPath();
      ctx.moveTo(padL, py);
      ctx.lineTo(padL + plotW, py);
      ctx.stroke();
      ctx.fillText(`${yVal.toFixed(0)}°`, padL - 6, py);
    }

    // Hashrate scale (right-hand axis). It is computed independently of the temperature
    // range so a 67 TH/s rig and a 40-80°C chart can share one plot.
    const buckets = (curvesData.buckets) || { t: [], accepted: [], rejected: [], hashrate: [] };
    const bn = buckets.t ? buckets.t.length : 0;
    let rateMax = 0;
    for (let i = 0; i < bn; i++) {
      const t = buckets.t[i];
      if (t >= viewLeft && t <= viewRight && buckets.hashrate[i] > rateMax) rateMax = buckets.hashrate[i];
    }
    rateMax = rateMax > 0 ? rateMax * 1.15 : 100000;

    if (bn > 0) {
      ctx.textAlign = "left";
      ctx.fillStyle = "#6f8fb5";
      for (let i = 0; i <= 4; i++) {
        const py = tempBottom - (tempH * i / 4);
        const gh = rateMax * i / 4;
        ctx.fillText(gh >= 1000 ? `${(gh/1000).toFixed(1)}T` : `${Math.round(gh)}`, padL + plotW + 6, py);
      }
    }

    // Dynamic X Grid & Ticks (Local Wall-Clock Time: HH:MM / HH:MM:SS)
    ctx.textAlign = "center";
    ctx.textBaseline = "top";

    const tickCount = viewSpan >= 7200 ? 8 : 5;
    const tickStepSec = viewSpan / tickCount;
    const needSec = (viewSpan <= 300); // 视口跨度 <= 5分钟时显示秒
    for (let i = 0; i <= tickCount; i++) {
      const curEpoch = viewLeft + tickStepSec * i;
      const px = padL + plotW * ((curEpoch - viewLeft) / viewSpan);

      ctx.strokeStyle = "#242731";
      ctx.beginPath();
      ctx.moveTo(px, padT);
      ctx.lineTo(px, chartBottom);
      ctx.stroke();

      const lbl = formatClock(curEpoch, needSec);
      ctx.fillStyle = "#868c9c";
      ctx.fillText(lbl, px, chartBottom + 6);
    }

    // Hashrate / share histogram band (sits on the x-axis, below the curves)
    drawShareHistogram(buckets, viewLeft, viewRight);

    // Outer Plot Border
    ctx.strokeStyle = "#2d313b";
    ctx.strokeRect(padL, padT, plotW, plotH);

    // Map X / Y
    function getX(sec) {
      return padL + plotW * ((sec - viewLeft) / viewSpan);
    }
    function getY(temp) {
      return tempBottom - (tempH * Math.min(1.0, Math.max(0.0, (temp - minY) / (maxY - minY))));
    }
    function getRateY(ghs) {
      return tempBottom - (tempH * Math.min(1.0, Math.max(0.0, ghs / rateMax)));
    }

    // Draw 4 Temperature Curves + the Hashrate Curve
    if (n > 0) {
      ctx.save();
      // Clip to the curve area so lines don't bleed into the histogram band during zoom/pan
      ctx.beginPath();
      ctx.rect(padL, padT, plotW, tempH);
      ctx.clip();

      drawCurve(curvesData.inlet, "#00a8e8", 2.0);
      drawCurve(curvesData.outlet, "#f4a261", 2.0);
      drawCurve(curvesData.chip_max, "#e76f51", 2.0);
      drawCurve(curvesData.chip_avg, "#e67e22", 1.5, true);

      ctx.restore();
    }

    // Hashrate curve uses the right-hand axis, so it is drawn un-clipped against its own
    // scale. It spans the bucket series (30s resolution) rather than the 1s temperature
    // series, which keeps the line light across a 4-hour window.
    if (bn > 1) {
      ctx.save();
      ctx.beginPath();
      ctx.rect(padL, padT, plotW, tempH);
      ctx.clip();
      ctx.strokeStyle = "#7aa2d4";
      ctx.lineWidth = 1.6;
      ctx.globalAlpha = 0.9;
      ctx.beginPath();
      let started = false;
      for (let i = 0; i < bn; i++) {
        const t = buckets.t[i];
        if (t < viewLeft - 60 || t > viewRight + 60) continue;
        const px = getX(t);
        const py = getRateY(buckets.hashrate[i] || 0);
        if (!started || (i > 0 && Math.abs(buckets.t[i] - buckets.t[i - 1]) > 90)) {
          ctx.moveTo(px, py);
          started = true;
        } else {
          ctx.lineTo(px, py);
        }
      }
      ctx.stroke();
      ctx.restore();
    }

    function drawCurve(series, color, lineWidth, isDash = false) {
      ctx.save();
      ctx.strokeStyle = color;
      ctx.lineWidth = lineWidth;
      if (isDash) ctx.setLineDash([4, 3]);
      ctx.beginPath();
      let started = false;
      // Points arrive every 10s (server-throttled). A gap well past that means the miner
      // was actually offline, so the line breaks instead of drawing a false straight段.
      const maxGapSec = 25;
      for (let i = 0; i < n; i++) {
        const tx = curvesData.x[i];
        if (tx < viewLeft - 30 || tx > viewRight + 30) continue;
        const px = getX(tx);
        const py = getY(series[i]);
        if (!started || (i > 0 && Math.abs(curvesData.x[i] - curvesData.x[i - 1]) > maxGapSec)) {
          ctx.moveTo(px, py);
          started = true;
        } else {
          ctx.lineTo(px, py);
        }
      }
      ctx.stroke();
      ctx.restore();
    }

    // Share histogram: one bar per 30s bucket, green = accepted, red = rejected stacked on
    // top. Bars are sized to the bucket's pixel width so neighbouring bars touch instead of
    // leaving gaps, and the whole band is short enough not to cover the temperature curves.
    function drawShareHistogram(bk, vl, vr) {
      if (!bk.t || bk.t.length === 0) return;

      const barSec = vBucketSeconds || 30;
      const barW = (barSec / viewSpan) * plotW;

      let peak = 0;
      for (let i = 0; i < bk.t.length; i++) {
        const t = bk.t[i];
        if (t < vl - barSec || t > vr) continue;
        const tot = (bk.accepted[i] || 0) + (bk.rejected[i] || 0);
        if (tot > peak) peak = tot;
      }
      // Round the ceiling up so the tallest bar never touches the band's top edge.
      peak = peak > 0 ? peak * 1.2 : 1;

      ctx.save();
      ctx.beginPath();
      ctx.rect(padL, histTop, plotW, histH);
      ctx.clip();

      for (let i = 0; i < bk.t.length; i++) {
        const t = bk.t[i];
        if (t < vl - barSec || t > vr) continue;
        const acc = bk.accepted[i] || 0;
        const rej = bk.rejected[i] || 0;
        if (acc + rej <= 0) continue;

        // Left edge of the bucket, so consecutive buckets produce touching bars.
        const px = getX(t);
        const w = Math.max(1, barW + 0.5);  // +0.5 removes hairline seams from antialiasing
        const accH = histH * (acc / peak);
        const rejH = histH * (rej / peak);

        if (accH > 0) {
          ctx.fillStyle = "rgba(0, 196, 159, 0.78)";
          ctx.fillRect(px, histTop + histH - accH, w, accH);
        }
        if (rejH > 0) {
          ctx.fillStyle = "rgba(231, 111, 81, 0.88)";
          ctx.fillRect(px, histTop + histH - accH - rejH, w, rejH);
        }
      }
      ctx.restore();

      // Band baseline only. The colour key lives in the panel header legend, so nothing
      // is drawn over the bars themselves.
      ctx.strokeStyle = "#2d313b";
      ctx.lineWidth = 1;
      ctx.beginPath();
      ctx.moveTo(padL, histTop);
      ctx.lineTo(padL + plotW, histTop);
      ctx.stroke();
    }

    // Interactive Hover Crosshairs & Top-Right Badges
    if (hoverX !== null && n > 0 && hoverX >= padL && hoverX <= padL + plotW) {
      const cursorSec = viewLeft + ((hoverX - padL) / plotW) * viewSpan;
      let closestIdx = -1;
      let minDiff = Infinity;
      for (let i = 0; i < n; i++) {
        const diff = Math.abs(curvesData.x[i] - cursorSec);
        if (diff < minDiff) {
          minDiff = diff;
          closestIdx = i;
        }
      }

      if (closestIdx >= 0) {
        const snapPx = getX(curvesData.x[closestIdx]);

        // 1. Vertical Line
        ctx.save();
        ctx.strokeStyle = "#8890a0";
        ctx.setLineDash([3, 3]);
        ctx.beginPath();
        ctx.moveTo(snapPx, padT);
        ctx.lineTo(snapPx, chartBottom);
        ctx.stroke();
        ctx.restore();

        // 2. Crosshairs & Top-Right Badges on 4 curves
        const items = [
          { val: curvesData.inlet[closestIdx], col: "#00a8e8" },
          { val: curvesData.outlet[closestIdx], col: "#f4a261" },
          { val: curvesData.chip_max[closestIdx], col: "#e76f51" },
          { val: curvesData.chip_avg[closestIdx], col: "#e67e22" },
        ];

        // Nearest 30s bucket, for the hashrate value and the share counts on the banner.
        let bi = -1;
        if (bn > 0) {
          let bestDiff = Infinity;
          for (let i = 0; i < bn; i++) {
            const diff = Math.abs(buckets.t[i] - cursorSec);
            if (diff < bestDiff) { bestDiff = diff; bi = i; }
          }
          if (bestDiff > vBucketSeconds * 2) bi = -1;
        }

        // Top Banner shows authentic wall-clock time
        const snapClock = formatClock(curvesData.x[closestIdx], true);
        let banner = `[${snapClock}] In:${curvesData.inlet[closestIdx].toFixed(1)}°C | Out:${curvesData.outlet[closestIdx].toFixed(1)}°C | ChipMax:${curvesData.chip_max[closestIdx].toFixed(1)}°C | ChipAvg:${curvesData.chip_avg[closestIdx].toFixed(1)}°C`;
        if (bi >= 0) {
          const gh = buckets.hashrate[bi] || 0;
          banner += ` | Hash:${gh.toFixed(1)} GH/s | ACC:${buckets.accepted[bi] || 0} REJ:${buckets.rejected[bi] || 0}`;
        }
        document.getElementById("waterBanner").innerText = banner;

        items.forEach(item => {
          if (!item.val) return;
          const py = getY(item.val);

          // '+' Crosshair
          ctx.strokeStyle = item.col;
          ctx.lineWidth = 2;
          ctx.beginPath();
          ctx.moveTo(snapPx - 6, py); ctx.lineTo(snapPx + 6, py);
          ctx.moveTo(snapPx, py - 6); ctx.lineTo(snapPx, py + 6);
          ctx.stroke();

          // Top-Right Badge (Strictly Top-Right to prevent line overlap)
          const text = `${item.val.toFixed(1)}°C`;
          ctx.font = "bold 11px Consolas, monospace";
          const tw = ctx.measureText(text).width;
          const th = 14;

          let bx = snapPx + 5;
          let by = py - th - 3;
          if (bx + tw + 6 > padL + plotW) bx = snapPx - tw - 10; // Flip near edge
          if (by < padT) by = py + 5; // Flip bottom if at top edge

          ctx.fillStyle = "rgba(24, 26, 32, 0.92)";
          ctx.fillRect(bx, by, tw + 6, th);
          ctx.strokeStyle = item.col;
          ctx.lineWidth = 1;
          ctx.strokeRect(bx, by, tw + 6, th);

          ctx.fillStyle = item.col;
          ctx.textAlign = "left";
          ctx.textBaseline = "middle";
          ctx.fillText(text, bx + 3, by + th / 2);
        });
      }
    }
  }

  // --- Zoom, Pan & Hover Event Listeners ---
  wrapper.addEventListener("mousemove", e => {
    const rect = canvas.getBoundingClientRect();
    hoverX = e.clientX - rect.left;
    lastMouseMoveTime = Date.now();

    if (isDragging) {
      const dx = e.clientX - dragStartX;
      const plotW = wrapper.clientWidth - CHART_PAD_L - CHART_PAD_R;
      const dt = (dx / plotW) * viewSpan;
      viewOffset = Math.max(0, Math.min(WINDOW_SECONDS - viewSpan, dragStartOffset + dt));
    }

    drawCanvasPlot();
  });

  wrapper.addEventListener("mousedown", e => {
    if (e.button === 0) {
      isDragging = true;
      dragStartX = e.clientX;
      dragStartOffset = viewOffset;
    }
  });

  window.addEventListener("mouseup", () => {
    isDragging = false;
  });

  let latestWaterBannerText = "Inlet: --.-°C | Outlet: --.-°C (ΔT: --.-°C)";

  wrapper.addEventListener("mouseleave", () => {
    hoverX = null;
    isDragging = false;
    document.getElementById("waterBanner").innerText = latestWaterBannerText;
    drawCanvasPlot();
  });

  // Mouse Wheel Zoom In / Out
  wrapper.addEventListener("wheel", e => {
    e.preventDefault();
    lastMouseMoveTime = Date.now();
    const zoomFactor = e.deltaY < 0 ? 0.75 : 1.33;
    viewSpan = Math.max(60, Math.min(WINDOW_SECONDS, viewSpan * zoomFactor));
    viewOffset = Math.max(0, Math.min(WINDOW_SECONDS - viewSpan, viewOffset));
    drawCanvasPlot();
  }, { passive: false });

  // Double click resets zoom to the full 4-hour window
  wrapper.addEventListener("dblclick", () => {
    viewSpan = WINDOW_SECONDS;
    viewOffset = 0;
    drawCanvasPlot();
  });

  // Auto right-align reset after 6s of no mouse interaction
  setInterval(() => {
    if (Date.now() - lastMouseMoveTime > 6000) {
      if (hoverX !== null || viewSpan !== WINDOW_SECONDS || viewOffset !== 0) {
        hoverX = null;
        viewSpan = WINDOW_SECONDS;
        viewOffset = 0;
        drawCanvasPlot();
      }
    }
  }, 1000);

  // Settings & Buttons Event Listeners
  document.getElementById("intervalInput").addEventListener("change", async e => {
    await fetch("/api/settings", {
      method: "POST",
      headers: { "Content-Type": "application/json" },
      body: JSON.stringify({ interval: parseFloat(e.target.value) })
    });
  });

  document.getElementById("fanStartSpin").addEventListener("change", async e => {
    await fetch("/api/settings", {
      method: "POST",
      headers: { "Content-Type": "application/json" },
      body: JSON.stringify({ fan_start_temp: parseFloat(e.target.value) })
    });
  });

  document.getElementById("fanMaxSpin").addEventListener("change", async e => {
    await fetch("/api/settings", {
      method: "POST",
      headers: { "Content-Type": "application/json" },
      body: JSON.stringify({ fan_max_temp: parseFloat(e.target.value) })
    });
  });

  // Per-board threshold inputs. Blank clears that override (back to automatic).
  ["b1WrnSpin", "b1StopSpin", "b2WrnSpin", "b2StopSpin"].forEach((id, idx) => {
    document.getElementById(id).addEventListener("change", async e => {
      const bt = (currentBoardThresholds || []).slice();
      while (bt.length < 2) bt.push({});
      const boardIdx = Math.floor(idx / 2);
      const key = idx % 2 === 0 ? "wrn" : "stop";
      if (!bt[boardIdx]) bt[boardIdx] = {};
      const raw = e.target.value.trim();
      bt[boardIdx] = { ...bt[boardIdx], [key]: raw === "" ? null : parseFloat(raw) };
      currentBoardThresholds = bt;
      await fetch("/api/settings", {
        method: "POST",
        headers: { "Content-Type": "application/json" },
        body: JSON.stringify({ board_thresholds: bt })
      });
    });
  });

  document.getElementById("pauseBtn").addEventListener("click", async () => {
    isPaused = !isPaused;
    document.getElementById("pauseBtn").innerText = isPaused ? "Resume" : "Pause";
    await fetch("/api/settings", {
      method: "POST",
      headers: { "Content-Type": "application/json" },
      body: JSON.stringify({ paused: isPaused })
    });
  });

  document.getElementById("clearChartBtn").addEventListener("click", async () => {
    await fetch("/api/clear_history", { method: "POST" });
    curvesData = { x: [], inlet: [], outlet: [], chip_max: [], chip_avg: [],
                   buckets: { t: [], accepted: [], rejected: [], hashrate: [] } };
    hoverX = null;
    drawCanvasPlot();
  });

  document.getElementById("resetLockBtn").addEventListener("click", async () => {
    await fetch("/api/reset_lock", { method: "POST" });
  });

  // Fan Speed Regulation Listeners (SET <id> <speed>)
  document.getElementById("applyFanSpeedBtn").addEventListener("click", async () => {
    const fanId = document.getElementById("fanTargetSelect").value;
    const speed = parseInt(document.getElementById("fanSpeedInput").value) || 0;
    const statusElem = document.getElementById("fanCtrlStatus");
    statusElem.setAttribute("data-busy", "1");
    statusElem.innerText = "SENDING...";
    statusElem.style.color = "#ffd166";
    try {
      const res = await fetch("/api/fan/set", {
        method: "POST",
        headers: { "Content-Type": "application/json" },
        body: JSON.stringify({ fan_id: fanId, speed: speed })
      });
      const data = await res.json();
      if (res.ok && data.ok) {
        statusElem.innerText = `OK (${speed} RPM)`;
        statusElem.style.color = "#00c49f";
      } else {
        statusElem.innerText = "FAILED / OFFLINE";
        statusElem.style.color = "#e76f51";
      }
    } catch (e) {
      statusElem.innerText = "ERROR";
      statusElem.style.color = "#e76f51";
    }
    setTimeout(() => {
      statusElem.setAttribute("data-busy", "0");
    }, 3000);
  });

  document.querySelectorAll(".fan-quick-btn").forEach(btn => {
    btn.addEventListener("click", () => {
      const rpm = btn.getAttribute("data-rpm");
      document.getElementById("fanSpeedInput").value = rpm;
      document.getElementById("applyFanSpeedBtn").click();
    });
  });

  // Fan Serial Port Scan & Connect Listeners
  document.getElementById("fanScanBtn").addEventListener("click", async () => {
    const sel = document.getElementById("fanSerialSelect");
    sel.disabled = true;
    try {
      const res = await fetch("/api/fan/ports");
      const data = await res.json();
      if (data && data.ports) {
        let optHtml = '<option value="AUTO">AUTO (Scan All)</option>';
        data.ports.forEach(p => {
          const desc = p.description ? ` (${p.description})` : "";
          optHtml += `<option value="${p.port}">${p.port}${desc}</option>`;
        });
        sel.innerHTML = optHtml;
      }
    } catch (e) {
      console.error(e);
    } finally {
      sel.disabled = false;
    }
  });

  document.getElementById("fanConnectBtn").addEventListener("click", async () => {
    const port = document.getElementById("fanSerialSelect").value;
    const badge = document.getElementById("fanPortBadge");
    if (badge) {
      badge.innerText = `[ CONNECTING ${port}... ]`;
      badge.style.color = "#ffd166";
    }
    try {
      await fetch("/api/fan/select_port", {
        method: "POST",
        headers: { "Content-Type": "application/json" },
        body: JSON.stringify({ port: port })
      });
      // Immediately trigger status refresh
      setTimeout(fetchStatus, 300);
    } catch (e) {
      console.error(e);
    }
  });

  document.getElementById("fanSerialSelect").addEventListener("change", async (e) => {
    try {
      await fetch("/api/fan/select_port", {
        method: "POST",
        headers: { "Content-Type": "application/json" },
        body: JSON.stringify({ port: e.target.value })
      });
      setTimeout(fetchStatus, 300);
    } catch (e) {
      console.error(e);
    }
  });

  // Fan Mode (AUTO / MANUAL) Toggle Buttons
  document.getElementById("fanModeAutoBtn").addEventListener("click", async () => {
    await fetch("/api/fan/mode", {
      method: "POST",
      headers: { "Content-Type": "application/json" },
      body: JSON.stringify({ mode: "AUTO" })
    });
  });

  document.getElementById("fanModeManualBtn").addEventListener("click", async () => {
    const spd = parseInt(document.getElementById("fanSpeedInput").value) || 1800;
    await fetch("/api/fan/mode", {
      method: "POST",
      headers: { "Content-Type": "application/json" },
      body: JSON.stringify({ mode: "MANUAL", speed: spd })
    });
  });

  // Plug Switch & Password Modal
  const modal = document.getElementById("pwdModal");
  const pwdInput = document.getElementById("pwdInput");
  const pwdErr = document.getElementById("pwdErr");

  document.getElementById("plugSwitchBtn").addEventListener("click", async () => {
    if (!plugStateKnown) {
      alert("插座当前状态未确认（miIO 无响应）。\\n\\n无法判断矿机是否已通电，因此已屏蔽切换操作以避免误操作。\\n请确认插座在线后重试。");
      return;
    }
    if (currentPlugState) {
      await fetch("/api/switch", {
        method: "POST",
        headers: { "Content-Type": "application/json" },
        body: JSON.stringify({ state: false })
      });
    } else {
      pwdErr.style.display = "none";
      pwdInput.value = "";
      modal.style.display = "flex";
      pwdInput.focus();
    }
  });

  document.getElementById("pwdConfirmBtn").addEventListener("click", async () => {
    const pwd = pwdInput.value;
    try {
      const res = await fetch("/api/switch", {
        method: "POST",
        headers: { "Content-Type": "application/json" },
        body: JSON.stringify({ state: true, password: pwd })
      });
      const data = await res.json();
      if (res.ok && data.ok) {
        modal.style.display = "none";
      } else {
        pwdErr.innerText = data.msg || "Incorrect password! Try again.";
        pwdErr.style.display = "block";
        pwdInput.select();
      }
    } catch (e) {
      pwdErr.innerText = "Network / Request Error";
      pwdErr.style.display = "block";
      pwdInput.select();
    }
  });

  pwdInput.addEventListener("keydown", e => {
    if (e.key === "Enter") {
      document.getElementById("pwdConfirmBtn").click();
    } else if (e.key === "Escape") {
      modal.style.display = "none";
    }
  });

  document.getElementById("pwdCancelBtn").addEventListener("click", () => {
    modal.style.display = "none";
  });

  // Initial setup & start
  resizeCanvas();
  fetchStatus();
</script>
</body>
</html>
"""


def get_config_path(custom_path: Optional[str] = None) -> str:
    """Find config.json path from custom arg, CWD, or script directory."""
    if custom_path and os.path.exists(custom_path):
        return os.path.abspath(custom_path)
    
    # 1. Check current working directory
    cwd_cfg = os.path.abspath("config.json")
    if os.path.exists(cwd_cfg):
        return cwd_cfg

    # 2. Check script directory
    script_dir_cfg = os.path.join(os.path.dirname(os.path.abspath(__file__)), "config.json")
    if os.path.exists(script_dir_cfg):
        return script_dir_cfg

    # 3. Default fallback to script directory path
    return script_dir_cfg


def load_config(config_path: Optional[str] = None) -> Dict[str, str]:
    """Load or create config.json for the web passwords and smart plug identity."""
    resolved_path = get_config_path(config_path)
    default_config = {
        "login_password": "antminer",
        "power_password": "dl.general",
        "plug_ip": "10.8.1.110",
        "plug_did": "2051114902",
        "plug_token": "",
    }

    if not os.path.exists(resolved_path):
        try:
            with open(resolved_path, "w", encoding="utf-8") as f:
                json.dump(default_config, f, indent=2, ensure_ascii=False)
                f.write("\n")
        except Exception as e:
            sys.stderr.write(f"[Config Warning] Failed to create {resolved_path}: {e}\n")
        return default_config

    try:
        with open(resolved_path, "r", encoding="utf-8") as f:
            cfg = json.load(f)
            return {
                "login_password": str(cfg.get("login_password", default_config["login_password"])),
                "power_password": str(cfg.get("power_password", default_config["power_password"])),
                "plug_ip": str(cfg.get("plug_ip", default_config["plug_ip"])),
                "plug_did": str(cfg.get("plug_did", default_config["plug_did"])),
                "plug_token": str(cfg.get("plug_token", default_config["plug_token"])),
                "board_thresholds": parse_board_thresholds(cfg.get("board_thresholds")),
                "_path": resolved_path,
            }
    except Exception as e:
        sys.stderr.write(f"[Config Warning] Failed to parse {resolved_path}: {e}. Using defaults.\n")
        return default_config


class AntMinerWebHandler(BaseHTTPRequestHandler):
    """Threading HTTP Handler serving Single Page App and REST APIs with Password-only Auth."""

    def log_message(self, format, *args):
        pass

    def get_login_password(self) -> str:
        """Dynamically get the latest login password from server or reloaded config."""
        config_path = getattr(self.server, "config_path", None)
        if config_path and os.path.exists(config_path):
            try:
                cfg = load_config(config_path)
                return str(cfg.get("login_password", getattr(self.server, "login_password", "antminer"))).strip()
            except Exception:
                pass
        return str(getattr(self.server, "login_password", "antminer")).strip()

    def get_power_password(self) -> str:
        """Dynamically get the latest power password from server or reloaded config."""
        config_path = getattr(self.server, "config_path", None)
        if config_path and os.path.exists(config_path):
            try:
                cfg = load_config(config_path)
                return str(cfg.get("power_password", getattr(self.server, "power_password", "dl.general"))).strip()
            except Exception:
                pass
        return str(getattr(self.server, "power_password", "dl.general")).strip()

    def check_basic_auth(self) -> bool:
        """Verify HTTP Authentication: Password only, username is not required."""
        if not getattr(self.server, "auth_enabled", True):
            return True

        auth_header = self.headers.get("Authorization")
        if not auth_header:
            self.send_auth_challenge()
            return False

        auth_parts = auth_header.strip().split(None, 1)
        if len(auth_parts) != 2 or auth_parts[0].lower() != "basic":
            self.send_auth_challenge()
            return False

        try:
            encoded_creds = auth_parts[1].strip()
            decoded = base64.b64decode(encoded_creds).decode("utf-8", errors="ignore").strip()
            if ":" in decoded:
                user, password = decoded.split(":", 1)
            else:
                user, password = "", decoded

            user = user.strip()
            password = password.strip()
            expected_pass = self.get_login_password()

            # 宽容匹配：用户输入在密码框、或输入在用户名框、或两处都输入，均视为有效！
            if hmac.compare_digest(password, expected_pass) or hmac.compare_digest(user, expected_pass):
                return True
        except Exception:
            pass

        self.send_auth_challenge()
        return False

    def send_auth_challenge(self):
        """Send 401 Unauthorized response with standard WWW-Authenticate header."""
        self.send_response(401)
        self.send_header("WWW-Authenticate", 'Basic realm="AntMinerTab"')
        if self.path.startswith("/api/"):
            self.send_header("Content-Type", "application/json; charset=utf-8")
            self.send_header("Access-Control-Allow-Origin", "*")
            self.end_headers()
            self.wfile.write(b'{"ok":false,"error":"Unauthorized","msg":"Password authentication required"}')
        else:
            self.send_header("Content-Type", "text/html; charset=utf-8")
            self.end_headers()
            html = (
                '<!DOCTYPE html><html><head><meta charset="UTF-8">'
                '<title>401 Unauthorized - AntMinerTab</title>'
                '<style>'
                'body{background:#131417;color:#e0e2e8;font-family:Consolas,monospace;'
                'display:flex;justify-content:center;align-items:center;height:100vh;margin:0;}'
                '.box{border:1px solid #572635;background:#2b171c;padding:32px 48px;text-align:center;box-shadow:0 8px 24px rgba(0,0,0,0.5);}'
                'h2{color:#e76f51;font-size:20px;margin-bottom:12px;letter-spacing:1px;}'
                'p{color:#868c9c;font-size:13px;line-height:1.6;}'
                '</style></head>'
                '<body><div class="box">'
                '<h2>[ 401 UNAUTHORIZED ]</h2>'
                '<p>Authentication Required: Please enter your login password.<br>'
                '(Username is not required / ignored)<br>'
                'AntMinerTab Industrial Monitoring Console</p>'
                '</div></body></html>'
            )
            self.wfile.write(html.encode("utf-8"))

    def do_OPTIONS(self):
        self.send_response(204)
        self.send_header("Access-Control-Allow-Origin", "*")
        self.send_header("Access-Control-Allow-Methods", "GET, POST, OPTIONS")
        self.send_header("Access-Control-Allow-Headers", "Content-Type, Authorization")
        self.end_headers()

    def do_GET(self):
        if not self.check_basic_auth():
            return

        parsed = urlparse(self.path)
        if parsed.path == "/" or parsed.path == "/index.html":
            self.send_response(200)
            self.send_header("Content-Type", "text/html; charset=utf-8")
            self.send_header("Cache-Control", "no-cache")
            self.end_headers()
            self.wfile.write(HTML_PAGE.encode("utf-8"))
        elif parsed.path == "/api/status":
            self.send_response(200)
            self.send_header("Content-Type", "application/json; charset=utf-8")
            self.send_header("Access-Control-Allow-Origin", "*")
            self.end_headers()
            payload = self.server.state_manager.get_api_payload()
            self.wfile.write(json.dumps(payload).encode("utf-8"))
        elif parsed.path == "/api/fan/ports":
            self.send_response(200)
            self.send_header("Content-Type", "application/json; charset=utf-8")
            self.send_header("Access-Control-Allow-Origin", "*")
            self.end_headers()
            ports = self.server.state_manager.fan_driver.get_available_ports()
            self.wfile.write(json.dumps({"ok": True, "ports": ports}).encode("utf-8"))
        else:
            self.send_response(404)
            self.end_headers()

    def do_POST(self):
        if not self.check_basic_auth():
            return

        parsed = urlparse(self.path)
        try:
            content_len_str = self.headers.get("Content-Length", "0")
            length = int(content_len_str)
            if length < 0 or length > 1048576:  # Max 1MB payload
                self.send_response(413)
                self.end_headers()
                return
            body = self.rfile.read(length).decode("utf-8") if length > 0 else "{}"
            req_data = json.loads(body)
        except Exception:
            req_data = {}

        if parsed.path == "/api/switch":
            state = req_data.get("state", False)
            pwd = str(req_data.get("password", ""))
            if state:
                expected_power_pwd = self.get_power_password()
                if not hmac.compare_digest(pwd, expected_power_pwd):
                    self.send_response(403)
                    self.send_header("Content-Type", "application/json")
                    self.end_headers()
                    self.wfile.write(b'{"ok":false,"msg":"Invalid password"}')
                    return

            res = self.server.state_manager.set_plug_switch(bool(state))
            self.send_response(200)
            self.send_header("Content-Type", "application/json")
            self.end_headers()
            self.wfile.write(json.dumps({"ok": res, "state": state}).encode("utf-8"))

        elif parsed.path == "/api/settings":
            board_cfg = req_data.get("board_thresholds")
            self.server.state_manager.set_settings(
                interval=req_data.get("interval"),
                wrn=req_data.get("wrn_temp"),
                stop=req_data.get("stop_temp"),
                paused=req_data.get("paused"),
                fan_start=req_data.get("fan_start_temp"),
                fan_max=req_data.get("fan_max_temp"),
                board_thresholds_update=parse_board_thresholds(board_cfg) if board_cfg is not None else None,
            )
            self.send_response(200)
            self.send_header("Content-Type", "application/json")
            self.end_headers()
            self.wfile.write(b'{"ok":true}')

        elif parsed.path == "/api/reset_lock":
            self.server.state_manager.reset_protection_lock()
            self.send_response(200)
            self.send_header("Content-Type", "application/json")
            self.end_headers()
            self.wfile.write(b'{"ok":true}')

        elif parsed.path == "/api/clear_history":
            self.server.state_manager.clear_history()
            self.send_response(200)
            self.send_header("Content-Type", "application/json")
            self.end_headers()
            self.wfile.write(b'{"ok":true}')

        elif parsed.path == "/api/fan/set":
            fan_id = req_data.get("fan_id", "ALL")
            speed = req_data.get("speed", 2000)
            res = self.server.state_manager.set_fan_speed(fan_id, speed)
            self.send_response(200)
            self.send_header("Content-Type", "application/json")
            self.end_headers()
            self.wfile.write(json.dumps({"ok": res, "fan_id": fan_id, "speed": speed}).encode("utf-8"))

        elif parsed.path == "/api/fan/select_port":
            port = req_data.get("port", "AUTO")
            self.server.state_manager.fan_driver.select_port(str(port))
            self.send_response(200)
            self.send_header("Content-Type", "application/json")
            self.end_headers()
            self.wfile.write(json.dumps({"ok": True, "port": port}).encode("utf-8"))

        elif parsed.path == "/api/fan/mode":
            mode = req_data.get("mode", "AUTO")
            speed = req_data.get("speed")
            res = self.server.state_manager.set_fan_mode(mode, speed)
            self.send_response(200)
            self.send_header("Content-Type", "application/json")
            self.end_headers()
            self.wfile.write(json.dumps({"ok": res, "mode": mode, "speed": speed}).encode("utf-8"))
        else:
            self.send_response(404)
            self.end_headers()


def main():
    parser = argparse.ArgumentParser(description="AntMinerTab Web Server Edition (Port 20000)")
    parser.add_argument("--host", default=os.getenv("ANTMINER_HOST", "0.0.0.0"), help="Host address to bind (default: 0.0.0.0)")
    parser.add_argument("--port", type=int, default=int(os.getenv("ANTMINER_PORT", "20000")), help="Port to listen on (default: 20000)")
    parser.add_argument("--config", default=None, help="Path to config.json (default: search ./config.json or script directory)")

    args = parser.parse_args()

    # Load configuration from local config file
    config = load_config(args.config)
    resolved_config_path = config.get("_path", get_config_path(args.config))
    login_password = config["login_password"]
    power_password = config["power_password"]
    fan_start_temp = float(config.get("fan_start_temp", 50.0))
    fan_max_temp = float(config.get("fan_max_temp", 70.0))
    plug_ip = config.get("plug_ip") or "10.8.1.110"
    plug_did = config.get("plug_did") or "2051114902"
    plug_token = (config.get("plug_token") or "").strip()

    print("=" * 72)
    print(" 🚀 AntMinerTab Web Server Starting...")
    print(f" Target Miner: http://10.8.1.86")
    print(f" Target Plug:  {plug_ip} (Mijia Smart Plug 3, did={plug_did})")
    print(f" Plug Token:   {'configured' if plug_token else '*** MISSING - set plug_token in config.json ***'}")
    print(f" Fan Device:   CoolerHD 12025 Fan Controller (Auto Serial 115200)")
    print(f" Fan Curve:    Linear 600 RPM @ {fan_start_temp:.0f}°C -> 2400 RPM @ {fan_max_temp:.0f}°C (Chip Hotspot)")
    print(f" Telegram Bot: @s332854BOT (7775553661)")
    print("=" * 72)
    print(f" Config File:   {resolved_config_path}")
    print(f" Web Password:  [{login_password}] (动态读取/热更新)")
    print(f" Power Auth:    [{power_password}] (动态读取/热更新)")
    print(f" Auth Mode:     Password Only (用户名无需填写)")
    print("=" * 72)
    print(f" Local Access:     http://127.0.0.1:{args.port}")
    print(f" Tailscale Access: http://<tailscale-ip>:{args.port}")
    print(f" LAN Access:       http://<host-ip>:{args.port}")
    print("=" * 72)

    if not plug_token:
        sys.stderr.write(
            "[ERROR] plug_token is empty in %s.\n"
            "        The smart plug cannot be controlled without it. Add the 32-hex miIO\n"
            '        token as "plug_token": "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" and restart.\n' % resolved_config_path
        )

    state_mgr = MonitorStateManager(
        plug_ip=plug_ip,
        plug_token=plug_token,
        plug_did=plug_did,
        wrn_temp=float(config.get("wrn_temp", 75.0)),
        stop_temp=float(config.get("stop_temp", 78.0)),
        board_overrides=config.get("board_thresholds") or [],
        fan_start_temp=fan_start_temp,
        fan_max_temp=fan_max_temp,
    )

    server = ThreadingHTTPServer((args.host, args.port), AntMinerWebHandler)
    server.state_manager = state_mgr
    server.auth_enabled = True
    server.config_path = resolved_config_path
    server.login_password = login_password
    server.power_password = power_password

    try:
        server.serve_forever()
    except KeyboardInterrupt:
        print("\nStopping AntMinerTab Web Server...")
        server.server_close()
        sys.exit(0)


if __name__ == "__main__":
    main()
