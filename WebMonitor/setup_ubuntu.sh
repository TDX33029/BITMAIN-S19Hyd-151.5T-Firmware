#!/usr/bin/env bash
# ==============================================================================
# AntMinerTab - Ubuntu 22.04 LTS One-Click Setup Script
# ==============================================================================

set -e

echo "=========================================================="
echo " 🚀 AntMinerTab: Initializing setup for Ubuntu 22.04 LTS"
echo "=========================================================="

# 1. Update APT repository
echo "[1/4] Updating APT package repositories..."
sudo apt update -y

# 2. Install Python 3, PyQt5, PyQtGraph, Cryptography & Requests via APT
# Using native Ubuntu APT packages avoids wheel compilation issues
echo "[2/4] Installing system dependencies and Python packages..."
sudo apt install -y \
    python3 \
    python3-pip \
    python3-requests \
    python3-cryptography \
    python3-pyqt5 \
    python3-pyqtgraph \
    fonts-dejavu \
    fonts-ubuntu

# 3. Grant execute permissions to scripts
echo "[3/4] Granting execution permissions..."
chmod +x antminer_gui.py antminer_monitor.py antminer_web.py

# 4. Ensure config.json exists (plug token & passwords live here; it is not in git)
if [ ! -f config.json ]; then
    echo "    config.json not found - creating from config.example.json..."
    cp config.example.json config.json
    chmod 600 config.json
    echo ""
    echo "    !! You must edit config.json before the monitor can control the plug:"
    echo "       plug_token  - the 32-hex miIO token of the Mijia Smart Plug"
    echo "       plug_ip     - the plug's static IP (default 10.8.1.110)"
    echo "       plug_did    - the plug's device id"
    echo ""
else
    chmod 600 config.json
    echo "    Found existing config.json (permissions set to 600)."
fi

# 5. Verification
echo "[5/5] Verifying Python module availability and plug config..."
python3 -c "
import requests
import cryptography
import PyQt5
import pyqtgraph
print('  ✓ requests: OK')
print('  ✓ cryptography: OK')
print('  ✓ PyQt5: OK')
print('  ✓ pyqtgraph: OK')
"
python3 -c "
import json, sys
try:
    cfg = json.load(open('config.json', encoding='utf-8'))
except Exception as e:
    sys.exit('  ✗ config.json unreadable: %s' % e)
tok = str(cfg.get('plug_token', '')).strip()
if not tok:
    sys.exit('  ✗ plug_token is EMPTY in config.json - set it before starting the service')
if len(tok) != 32:
    sys.exit('  ✗ plug_token should be 32 hex chars, got %d' % len(tok))
print('  ✓ plug config: ip=%s did=%s token=set' % (cfg.get('plug_ip'), cfg.get('plug_did')))
" || echo "    (Fix the above before running antminer_monitor.py)"

echo "=========================================================="
echo " ✅ Installation Successful!"
echo ""
echo " To run Desktop GUI Monitor:"
echo "   python3 antminer_gui.py"
echo ""
echo " To run Headless Terminal / Server Monitor (with auto-protection & Telegram):"
echo "   python3 antminer_monitor.py --watch"
echo ""
echo " To install as a systemd service:"
echo "   sudo cp antminer.service /etc/systemd/system/"
echo "   sudo systemctl daemon-reload && sudo systemctl enable --now antminer"
echo "=========================================================="
