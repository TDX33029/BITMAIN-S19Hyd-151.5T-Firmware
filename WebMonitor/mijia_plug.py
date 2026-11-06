#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Shared Mijia Smart Plug (miIO) driver for AntMinerTab.

Used by antminer_web.py, antminer_gui.py and antminer_monitor.py so the miIO transport
only has to be maintained (and hardened) in one place.

The plug in this deployment (cuco.plug.v3 on ESP32C3) sits on a lossy WiFi link: measured
~37% ICMP loss against 0% to the gateway, with multi-second blackouts. Everything below is
shaped by that: short per-attempt timeouts, generous retries, a session that survives a
dropped packet, and strict separation between "reported off" and "could not be read".
"""

import hashlib
import json
import socket
import threading
import time
from typing import Any, Dict, Optional

from cryptography.hazmat.backends import default_backend
from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes

HELLO_PACKET = bytes.fromhex("21310020ffffffffffffffffffffffffffffffffffffffffffffffffffffffff")
PLUG_PORT = 54321


class MijiaPlugDriver:
    """Robust native miIO UDP client with persistent socket & timestamp sync."""

    # Tuned for the lossy link: a few short attempts ride out packet loss without the
    # worst case blowing past the caller's polling interval.
    CMD_ATTEMPTS = 10
    CMD_TIMEOUT = 0.9

    def __init__(self, ip: str = "10.8.1.110", token_hex: str = "", did: str = "2051114902",
                 attempts: Optional[int] = None, timeout: Optional[float] = None):
        if not token_hex:
            raise ValueError("miIO token is required (set plug_token in config.json)")
        self.ip = ip
        self.did = str(did)
        self.token = bytes.fromhex(token_hex)
        self.key = hashlib.md5(self.token).digest()
        self.iv = hashlib.md5(self.key + self.token).digest()

        if attempts is not None:
            self.CMD_ATTEMPTS = attempts
        if timeout is not None:
            self.CMD_TIMEOUT = timeout

        self.device_id: Optional[bytes] = None
        self.stamp_offset: Optional[int] = None
        self._msg_id = 0
        self._lock = threading.Lock()

        self.sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.sock.settimeout(self.CMD_TIMEOUT)

    def _encrypt(self, plaintext: bytes) -> bytes:
        pad_len = 16 - (len(plaintext) % 16)
        padded = plaintext + bytes([pad_len] * pad_len)
        cipher = Cipher(algorithms.AES(self.key), modes.CBC(self.iv), backend=default_backend())
        encryptor = cipher.encryptor()
        return encryptor.update(padded) + encryptor.finalize()

    def _decrypt(self, ciphertext: bytes) -> bytes:
        cipher = Cipher(algorithms.AES(self.key), modes.CBC(self.iv), backend=default_backend())
        decryptor = cipher.decryptor()
        padded = decryptor.update(ciphertext) + decryptor.finalize()
        return padded[:-padded[-1]]

    def _reset_socket(self):
        """Recreate the UDP socket.

        A fresh socket restarts the kernel's neighbor lookup for the target, which is what
        clears a stale ARP/neighbor entry after the plug reboots or the LAN is power-cycled.
        Reusing an old socket keeps sending to a MAC that no longer answers until the entry
        expires (observed: connection stayed dead until ARP was flushed manually).
        """
        try:
            self.sock.close()
        except Exception:
            pass
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.sock.settimeout(self.CMD_TIMEOUT)

    def _handshake(self):
        self.sock.sendto(HELLO_PACKET, (self.ip, PLUG_PORT))
        deadline = time.time() + self.CMD_TIMEOUT * 2
        while True:
            remaining = deadline - time.time()
            if remaining <= 0:
                raise TimeoutError("miIO handshake timed out")
            self.sock.settimeout(remaining)
            data, _ = self.sock.recvfrom(1024)
            # Skip anything that is not a hello reply (a late command response can be
            # sitting in the receive queue and must not be mistaken for the handshake).
            if len(data) < 32 or data[:2] != b"\x21\x31" or data[16:32] != b"\xff" * 16:
                self.sock.sendto(HELLO_PACKET, (self.ip, PLUG_PORT))
                continue
            self.device_id = data[8:12]
            dev_stamp = int.from_bytes(data[12:16], "big")
            self.stamp_offset = dev_stamp - int(time.time())
            return

    def _send_cmd(self, method: str, params: Any, attempts: Optional[int] = None) -> Dict[str, Any]:
        attempts = self.CMD_ATTEMPTS if attempts is None else attempts
        with self._lock:
            last_err: Optional[Exception] = None
            for attempt in range(attempts):
                try:
                    # Handshake once and keep it: requiring two consecutive successful
                    # exchanges (hello + command) per retry multiplies the loss rate and
                    # makes long retry streaks fail more often, not less.
                    if self.device_id is None or self.stamp_offset is None:
                        self._handshake()

                    self._msg_id += 1
                    now_stamp = (int(time.time()) + self.stamp_offset) & 0xFFFFFFFF
                    payload = json.dumps({"id": self._msg_id, "method": method, "params": params},
                                         separators=(",", ":")).encode("utf-8")
                    encrypted = self._encrypt(payload)

                    packet_len = 32 + len(encrypted)
                    header = bytearray(32)
                    header[0:2] = b"\x21\x31"
                    header[2:4] = packet_len.to_bytes(2, "big")
                    header[8:12] = self.device_id
                    header[12:16] = now_stamp.to_bytes(4, "big")
                    header[16:32] = hashlib.md5(header[:16] + self.token + encrypted).digest()

                    self.sock.settimeout(self.CMD_TIMEOUT)
                    self.sock.sendto(header + encrypted, (self.ip, PLUG_PORT))

                    # The reply to an earlier, timed-out attempt may still arrive. Read until
                    # one validates, instead of treating the first stray datagram as the answer.
                    reply_deadline = time.time() + self.CMD_TIMEOUT
                    res = None
                    while True:
                        remaining = reply_deadline - time.time()
                        if remaining <= 0:
                            raise TimeoutError("no reply")
                        self.sock.settimeout(remaining)
                        cand, _ = self.sock.recvfrom(4096)
                        # Hello replies carry no payload (32 bytes, zeroed checksum field).
                        if len(cand) <= 32 or cand[16:32] == b"\xff" * 16:
                            continue
                        expected = hashlib.md5(cand[:16] + self.token + cand[32:]).digest()
                        if cand[16:32] != expected:
                            # Genuinely undecryptable (stale packet from another token/session).
                            continue
                        res = cand
                        break

                    decrypted = self._decrypt(res[32:])
                    return json.loads(decrypted.decode("utf-8"))
                except Exception as e:
                    last_err = e
                    # Only drop the session when the handshake itself is the problem;
                    # a dropped command packet leaves the session perfectly valid.
                    if self.device_id is None:
                        self.stamp_offset = None
                    # Rebuild the socket every few failures so the OS re-resolves the
                    # neighbor entry (recovers from a plug reboot without manual ARP flush).
                    if attempt > 0 and attempt % 3 == 0:
                        self._reset_socket()
            raise TimeoutError(f"miIO communication failed after {attempts} attempts: {last_err}")

    def query_status(self) -> Dict[str, Any]:
        """Read switch/power/temperature.

        On success the result carries ``state_confirmed: True``. On failure it reports
        ``online: False`` and must NOT be read as "the plug is off" — callers that make
        safety decisions have to treat it as unknown.
        """
        try:
            props = [
                {"did": self.did, "siid": 2, "piid": 1},   # Switch Status (bool)
                {"did": self.did, "siid": 11, "piid": 2},  # Electric Power (W)
                {"did": self.did, "siid": 12, "piid": 2},  # Internal Temp (°C)
            ]
            res_json = self._send_cmd("get_properties", props)

            # Never default these to a "plausible" value: a missing/error property must be
            # reported as unknown, or a partial reply reads as a confirmed powered-off plug.
            switch_on: Optional[bool] = None
            power_w: Optional[float] = None
            temp_c: Optional[int] = None

            for item in res_json.get("result", []):
                if item.get("code", 0) != 0:
                    continue
                siid = item.get("siid")
                piid = item.get("piid")
                val = item.get("value")
                if siid == 2 and piid == 1 and val is not None:
                    switch_on = bool(val)
                elif siid == 11 and piid == 2 and val is not None:
                    power_w = float(val)
                elif siid == 12 and piid == 2 and val is not None:
                    temp_c = int(val)

            if switch_on is None:
                raise ValueError(f"device replied without a valid switch state: {res_json}")

            return {
                "online": True,
                "state_confirmed": True,
                "switch_on": switch_on,
                "power_w": power_w if power_w is not None else 0.0,
                "plug_temp": temp_c if temp_c is not None else 0,
            }
        except Exception as e:
            return {
                "online": False,
                "state_confirmed": False,
                "error": str(e),
                "switch_on": False,
                "power_w": 0.0,
                "plug_temp": 0,
            }

    def set_switch(self, state: bool) -> bool:
        try:
            props = [{"did": self.did, "siid": 2, "piid": 1, "value": bool(state)}]
            # Power switching is safety-critical: give it the full retry budget so a single
            # dropped packet cannot turn a CUTOFF command into a silent no-op.
            res = self._send_cmd("set_properties", props)
            for item in res.get("result", []):
                if item.get("code") == 0:
                    return True
            return False
        except Exception:
            return False

    def close(self):
        try:
            self.sock.close()
        except Exception:
            pass


def load_plug_config(custom_path: Optional[str] = None) -> Dict[str, str]:
    """Read plug_ip / plug_did / plug_token from config.json.

    Search order: explicit path, then CWD, then the directory holding this module.
    """
    import os

    candidates = []
    if custom_path:
        candidates.append(os.path.abspath(custom_path))
    candidates.append(os.path.abspath("config.json"))
    candidates.append(os.path.join(os.path.dirname(os.path.abspath(__file__)), "config.json"))

    defaults = {"plug_ip": "10.8.1.110", "plug_did": "2051114902", "plug_token": "",
                "board_thresholds": []}
    for path in candidates:
        if not os.path.exists(path):
            continue
        try:
            with open(path, "r", encoding="utf-8") as f:
                cfg = json.load(f)
            return {
                "plug_ip": str(cfg.get("plug_ip", defaults["plug_ip"])),
                "plug_did": str(cfg.get("plug_did", defaults["plug_did"])),
                "plug_token": str(cfg.get("plug_token", defaults["plug_token"])).strip(),
                "board_thresholds": parse_board_thresholds(cfg.get("board_thresholds")),
                "_path": path,
            }
        except Exception:
            continue
    return defaults


def parse_board_thresholds(raw) -> list:
    """Normalise a config ``board_thresholds`` section into per-board absolute limits.

    Accepted shapes (both optional per board):
        [{"wrn": 75, "stop": 78}, {"wrn": 85, "stop": 88}]
        {"chain1": {"wrn": 75, "stop": 78}, "chain2": {"wrn": 85, "stop": 88}}
    """
    if isinstance(raw, dict):
        out = []
        for i in range(1, 9):
            entry = raw.get(f"chain{i}") or raw.get(str(i))
            if entry is None:
                out.append({})
            elif isinstance(entry, dict):
                out.append({
                    "wrn": float(entry["wrn"]) if entry.get("wrn") is not None else None,
                    "stop": float(entry["stop"]) if entry.get("stop") is not None else None,
                })
            else:
                out.append({})
        return out
    if isinstance(raw, list):
        out = []
        for entry in raw:
            if isinstance(entry, dict):
                out.append({
                    "wrn": float(entry["wrn"]) if entry.get("wrn") is not None else None,
                    "stop": float(entry["stop"]) if entry.get("stop") is not None else None,
                })
            else:
                out.append({})
        return out
    return []


# ---------------------------------------------------------------------------
# Multi-chain (per hash board) temperature handling
# ---------------------------------------------------------------------------

# Per-board overheat thresholds. Boards run at different temperatures by design (cooling
# path, position in the loop), so each board carries its own pair of limits instead of
# sharing one global value. Index 0 = chain 1, index 1 = chain 2, ...
# These offsets are the built-in fallback; config.json / the UI override them per board.
BOARD_THRESHOLD_OFFSETS = (0.0, 10.0)


def board_thresholds(base: float, board_pos: int, kind: str = "wrn", overrides=None) -> float:
    """Return the effective threshold for one board.

    ``kind`` is ``"wrn"`` or ``"stop"``. ``overrides`` is an optional list of per-board
    ``{"wrn": x, "stop": y}`` dicts (absolute values from config.json / the UI); a missing
    entry falls back to ``base`` plus that board's default offset.
    """
    if overrides and 0 <= board_pos < len(overrides):
        entry = overrides[board_pos] or {}
        value = entry.get(kind)
        if value is not None:
            return float(value)
    if 0 <= board_pos < len(BOARD_THRESHOLD_OFFSETS):
        return base + BOARD_THRESHOLD_OFFSETS[board_pos]
    return base


def parse_chains(stats_entry: Dict[str, Any]):
    """Split a stats.cgi STATS entry into per-board temperature lists.

    Returns ``(chain_temps, water_pic)`` where ``chain_temps`` is a list of dicts, one per
    hash board, each with ``index``/``chip``/``pcb``/``chip_max``. ``water_pic`` holds the
    de-duplicated non-zero inlet/outlet readings (they repeat on every board).
    """
    chains = stats_entry.get("chain") or [{}]
    chain_temps = []
    pic_all = []
    for pos, chain in enumerate(chains, start=1):
        chip = [float(x) for x in chain.get("temp_chip", [])]
        pcb = [float(x) for x in chain.get("temp_pcb", [])]
        pic_all.extend(float(x) for x in chain.get("temp_pic", []))
        chain_temps.append({
            "index": int(chain.get("index", pos)),
            "chip": chip,
            "pcb": pcb,
            "chip_max": max(chip) if chip else 0.0,
            "chip_avg": (sum(chip) / len(chip)) if chip else 0.0,
        })

    water_pic = []
    for v in pic_all:
        if v > 0 and v not in water_pic:
            water_pic.append(v)

    return chain_temps, water_pic

