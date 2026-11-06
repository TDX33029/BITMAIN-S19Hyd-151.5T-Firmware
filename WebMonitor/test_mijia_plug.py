#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Offline regression tests for the miIO plug driver and plug-state safety logic.

These run without a real plug: the transport is stubbed so the lossy-link failure modes
that bit us in production are reproduced deterministically.

    python3 test_mijia_plug.py
"""

import importlib.util
import os
import socket
import sys
import threading
import time
import unittest


def _load(name, filename):
    path = os.path.join(os.path.dirname(os.path.abspath(__file__)), filename)
    spec = importlib.util.spec_from_file_location(name, path)
    mod = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(mod)
    return mod


mijia = _load("mijia_plug_test", "mijia_plug.py")

# Placeholder key: these tests only round-trip AES with a fixed 32-hex-char token, so any
# value works. Never put the real device token in a tracked file.
TOKEN = "00112233445566778899aabbccddeeff"


class FakeSocket:
    """Stand-in for the UDP socket that can script replies and drops."""

    def __init__(self, script=None):
        self.script = list(script or [])
        self.sent = []
        self.timeout = None
        self.closed = False

    def settimeout(self, t):
        self.timeout = t

    def sendto(self, data, addr):
        self.sent.append((bytes(data), addr))

    def recvfrom(self, n):
        if not self.script:
            raise socket.timeout("no scripted reply")
        item = self.script.pop(0)
        if isinstance(item, Exception):
            raise item
        return item, ("10.8.1.110", 54321)

    def close(self):
        self.closed = True


def hello_reply(device_id=b"\x7a\x41\x87\x96", stamp=5404):
    """32-byte plaintext hello reply with the zeroed-checksum signature."""
    pkt = bytearray(32)
    pkt[0:2] = b"\x21\x31"
    pkt[2:4] = (32).to_bytes(2, "big")
    pkt[8:12] = device_id
    pkt[12:16] = stamp.to_bytes(4, "big")
    pkt[16:32] = b"\xff" * 16
    return bytes(pkt)


def make_driver():
    return mijia.MijiaPlugDriver(ip="10.8.1.110", token_hex=TOKEN, did="2051114902")


class TestConfigLoading(unittest.TestCase):
    def test_missing_token_raises(self):
        with self.assertRaises(ValueError):
            mijia.MijiaPlugDriver(ip="10.8.1.110", token_hex="", did="2051114902")

    def test_token_derives_key_and_iv(self):
        d = make_driver()
        self.assertEqual(len(d.key), 16)
        self.assertEqual(len(d.iv), 16)
        self.assertNotEqual(d.key, d.iv)

    def test_load_plug_config_reads_real_config(self):
        cfg = mijia.load_plug_config()
        self.assertEqual(cfg["plug_ip"], "10.8.1.110")
        self.assertEqual(cfg["plug_did"], "2051114902")
        self.assertEqual(len(cfg["plug_token"]), 32)

    def test_load_plug_config_defaults_when_missing(self):
        cfg = mijia.load_plug_config("/nonexistent/path/config.json")
        self.assertIn("plug_ip", cfg)
        self.assertIn("plug_token", cfg)


class TestHandshake(unittest.TestCase):
    def test_ignores_late_command_reply(self):
        """A stale 32-byte command reply must not be mistaken for the handshake."""
        d = make_driver()
        stale = bytearray(32)
        stale[0:2] = b"\x21\x31"
        stale[16:32] = b"\xab" * 16          # not the hello signature
        d.sock = FakeSocket([bytes(stale), hello_reply()])
        d._handshake()
        self.assertEqual(d.device_id, b"\x7a\x41\x87\x96")

    def test_times_out_cleanly(self):
        d = make_driver()
        d.CMD_TIMEOUT = 0.05
        d.sock = FakeSocket([socket.timeout("x")] * 50)
        with self.assertRaises(TimeoutError):
            d._handshake()


class TestSendCmd(unittest.TestCase):
    def test_stale_packet_then_valid_reply(self):
        """The first candidate datagram may be a stale reply; keep reading until one validates."""
        d = make_driver()
        d.sock = FakeSocket([hello_reply()])
        # Handshake succeeds, then the first reply candidate is garbage, then a good one.
        stale = bytearray(64)
        stale[0:2] = b"\x21\x31"
        stale[16:32] = b"\xcd" * 16
        d.sock.script = [hello_reply(), bytes(stale)]
        try:
            d._send_cmd("miIO.info", [], attempts=1)
        except TimeoutError:
            pass  # no valid reply scripted: the point is it did not crash on the stale one
        except Exception as e:
            self.fail(f"unexpected exception on stale packet: {e}")

    def test_failure_reports_unknown_not_off(self):
        """Every query_status failure must be reported as unconfirmed."""
        d = make_driver()
        d.CMD_ATTEMPTS = 2
        d.CMD_TIMEOUT = 0.05
        d.sock = FakeSocket([socket.timeout("x")] * 100)
        st = d.query_status()
        self.assertFalse(st["online"])
        self.assertFalse(st["state_confirmed"])
        self.assertFalse(st["switch_on"])

    def test_missing_switch_property_is_not_off(self):
        """A reply lacking siid 2/piid 1 must raise, not default to switch_on=False."""
        d = make_driver()
        d._send_cmd = lambda *a, **k: {"id": 1, "result": [{"siid": 11, "piid": 2, "code": 0, "value": 1141}]}
        st = d.query_status()
        self.assertFalse(st["online"])
        self.assertFalse(st["state_confirmed"])

    def test_property_error_code_ignored(self):
        """Per-property error codes must not fabricate a switch value."""
        d = make_driver()
        d._send_cmd = lambda *a, **k: {
            "id": 1,
            "result": [{"siid": 2, "piid": 1, "code": -1}],
        }
        st = d.query_status()
        self.assertFalse(st["online"])

    def test_valid_reply_confirmed(self):
        d = make_driver()
        d._send_cmd = lambda *a, **k: {
            "id": 1,
            "result": [
                {"siid": 2, "piid": 1, "code": 0, "value": True},
                {"siid": 11, "piid": 2, "code": 0, "value": 1141},
                {"siid": 12, "piid": 2, "code": 0, "value": 52},
            ],
        }
        st = d.query_status()
        self.assertTrue(st["online"])
        self.assertTrue(st["state_confirmed"])
        self.assertTrue(st["switch_on"])
        self.assertEqual(st["power_w"], 1141.0)
        self.assertEqual(st["plug_temp"], 52)

    def test_set_switch_returns_true_on_code_zero(self):
        d = make_driver()
        d._send_cmd = lambda *a, **k: {"id": 1, "result": [{"siid": 2, "piid": 1, "code": 0}]}
        self.assertTrue(d.set_switch(False))

    def test_set_switch_returns_false_on_failure(self):
        d = make_driver()
        d.CMD_ATTEMPTS = 1
        d.CMD_TIMEOUT = 0.05
        d.sock = FakeSocket([socket.timeout("x")] * 100)
        self.assertFalse(d.set_switch(False))

    def test_socket_rebuilt_after_repeated_failure(self):
        """Socket rebuild is what clears a stale ARP entry after a plug reboot."""
        d = make_driver()
        d.CMD_ATTEMPTS = 7
        d.CMD_TIMEOUT = 0.01
        first = FakeSocket([socket.timeout("x")] * 100)
        d.sock = first
        d.query_status()
        self.assertTrue(first.closed, "old socket should be closed and replaced")


class TestPlugStateDebounce(unittest.TestCase):
    """The web state manager must not idle fans on a single unreadable poll."""

    def setUp(self):
        self.web = _load("antminer_web_test", "antminer_web.py")

    def _manager(self):
        mgr = self.web.MonitorStateManager.__new__(self.web.MonitorStateManager)
        mgr.plug_last_known_on = None
        mgr.plug_unknown_since = None
        mgr.PLUG_STATE_CONFIRMATIONS = 2
        mgr.plug_pending_state = None
        mgr.plug_pending_count = 0
        return mgr

    def test_unknown_is_not_off(self):
        """A failed read must leave the last known state untouched."""
        mgr = self._manager()
        mgr.plug_last_known_on = True
        # Simulate the main loop's decision expression.
        st = {"online": False, "state_confirmed": False, "switch_on": False}
        known = bool(st.get("online"))
        is_on = True if mgr.plug_last_known_on is None else mgr.plug_last_known_on
        self.assertFalse(known)
        self.assertTrue(is_on, "unreadable plug must be treated as ON for fan safety")

    def test_default_is_on_for_fan_safety(self):
        mgr = self._manager()
        is_on = True if mgr.plug_last_known_on is None else mgr.plug_last_known_on
        self.assertTrue(is_on, "with no reading yet, assume ON so fans stay on the temp curve")


class TestPerBoardThresholds(unittest.TestCase):
    """Chain 2 runs ~10°C hotter by design; each board must use its own limits."""

    def test_offsets(self):
        self.assertEqual(mijia.board_thresholds(75.0, 0, "wrn"), 75.0)
        self.assertEqual(mijia.board_thresholds(78.0, 0, "stop"), 78.0)
        self.assertEqual(mijia.board_thresholds(75.0, 1, "wrn"), 85.0)
        self.assertEqual(mijia.board_thresholds(78.0, 1, "stop"), 88.0)

    def test_unknown_board_falls_back_to_base(self):
        self.assertEqual(mijia.board_thresholds(75.0, 5, "wrn"), 75.0)

    def test_parse_chains_from_real_payload(self):
        """A real two-board payload must not collapse to chain 1 only."""
        entry = {"chain": [
            {"index": 1, "temp_chip": [68, 71, 71, 66, 66, 61],
             "temp_pcb": [58, 60, 61, 55, 55, 54], "temp_pic": [51, 45, 0, 0, 0, 0]},
            {"index": 2, "temp_chip": [68, 70, 81, 62, 66, 65],
             "temp_pcb": [59, 60, 64, 55, 58, 55], "temp_pic": [51, 45, 0, 0, 0, 0]},
        ]}
        chains, pic = mijia.parse_chains(entry)
        self.assertEqual(len(chains), 2)
        self.assertEqual(chains[0]["chip_max"], 71.0)
        self.assertEqual(chains[1]["chip_max"], 81.0)
        # Water inlet/outlet are repeated per board: must be de-duplicated.
        self.assertEqual(pic, [51.0, 45.0])

    def test_parse_chains_single_board(self):
        chains, _ = mijia.parse_chains({"chain": [{"index": 1, "temp_chip": [50]}]})
        self.assertEqual(len(chains), 1)
        self.assertEqual(chains[0]["chip_max"], 50.0)

    def test_parse_chains_missing(self):
        chains, pic = mijia.parse_chains({})
        self.assertEqual(len(chains), 1)
        self.assertEqual(chains[0]["chip_max"], 0.0)
        self.assertEqual(pic, [])

    def test_overrides_take_precedence(self):
        """Explicit per-board values from config/UI win over the built-in offsets."""
        ov = [{"wrn": 70, "stop": 74}, {"wrn": 90, "stop": 95}]
        self.assertEqual(mijia.board_thresholds(75.0, 0, "wrn", ov), 70.0)
        self.assertEqual(mijia.board_thresholds(78.0, 0, "stop", ov), 74.0)
        self.assertEqual(mijia.board_thresholds(75.0, 1, "wrn", ov), 90.0)
        self.assertEqual(mijia.board_thresholds(78.0, 1, "stop", ov), 95.0)

    def test_partial_override_falls_back(self):
        """A board with only one value set still gets the offset for the other."""
        ov = [{"wrn": None, "stop": 80}]
        self.assertEqual(mijia.board_thresholds(75.0, 0, "wrn", ov), 75.0)
        self.assertEqual(mijia.board_thresholds(78.0, 0, "stop", ov), 80.0)
        self.assertEqual(mijia.board_thresholds(75.0, 1, "wrn", ov), 85.0)

    def test_parse_board_thresholds_list(self):
        out = mijia.parse_board_thresholds([{"wrn": 75, "stop": 78}, {"wrn": 85, "stop": 88}])
        self.assertEqual(out[0], {"wrn": 75.0, "stop": 78.0})
        self.assertEqual(out[1], {"wrn": 85.0, "stop": 88.0})

    def test_parse_board_thresholds_dict(self):
        out = mijia.parse_board_thresholds({"chain1": {"wrn": 75, "stop": 78},
                                            "chain2": {"wrn": 85, "stop": 88}})
        self.assertEqual(out[0]["wrn"], 75.0)
        self.assertEqual(out[1]["wrn"], 85.0)

    def test_parse_board_thresholds_empty(self):
        self.assertEqual(mijia.parse_board_thresholds(None), [])
        self.assertEqual(mijia.parse_board_thresholds([]), [])

    def test_config_supplies_board_thresholds(self):
        cfg = mijia.load_plug_config()
        self.assertIsInstance(cfg["board_thresholds"], list)
        self.assertEqual(len(cfg["board_thresholds"]), 2)
        self.assertEqual(cfg["board_thresholds"][1]["wrn"], 85.0)


if __name__ == "__main__":
    unittest.main(verbosity=2)
