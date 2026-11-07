# WebMonitor

Web dashboard, Antminer monitor, and CoolerHD STM32 fan-controller firmware.

`backup_pre_fix` is a historical snapshot; deploy the top-level files only.

## Web setup

1. For a new install, copy `config.example.json` to `config.json`. For an existing install, add the missing fields without replacing its current passwords. Set private web, power-on, and miner passwords plus the 32-character hexadecimal Mijia token. `config.json` is ignored by Git; restrict it to the service account (`chmod 600 config.json` on Linux).
2. Optional Telegram alerts use `telegram_token` and `telegram_chat_id` in the local config. The same values can be supplied with `ANTMINER_TELEGRAM_TOKEN` and `ANTMINER_TELEGRAM_CHAT_ID`.
3. Install dependencies with `./setup_ubuntu.sh` on Ubuntu. This includes `python3-serial`, required for CoolerHD fan control.
4. Start the dashboard with `python3 antminer_web.py`. It binds to `127.0.0.1:20000` by default.

Use a TLS reverse proxy for remote access. If binding the application directly to a LAN interface, credentials and control requests travel over unencrypted HTTP. Do not expose the port to an untrusted network.

Environment variables can override local configuration: `ANTMINER_LOGIN_PASSWORD`, `ANTMINER_POWER_PASSWORD`, `ANTMINER_MINER_URL`, `ANTMINER_MINER_USERNAME`, `ANTMINER_MINER_PASSWORD`, `ANTMINER_PLUG_IP`, `ANTMINER_PLUG_TOKEN`, `ANTMINER_TELEGRAM_TOKEN`, and `ANTMINER_TELEGRAM_CHAT_ID`.

The terminal monitor accepts `--pwd` and `--plug-token`; both default to their respective environment variables. GUI and CLI Telegram alerts are disabled when Telegram credentials are unset.

The `antminer.service` template requires `/etc/antminer/antminer.env`. Set `ANTMINER_MINER_PASSWORD` and `ANTMINER_PLUG_TOKEN` there before enabling it, then restrict the file to root (`chmod 600`).

## Protection behavior

- Missing or invalid chip-temperature readings are held briefly using the last valid sample. During recovery the fan target is raised to 2400 RPM. If telemetry remains unavailable while the miner is known or believed to be powered, the monitor trips the protection lock and repeatedly requests plug shutdown.
- A shutdown is shown as confirmed only after an online plug status reports the switch off. An offline plug is treated as unknown, and shutdown requests continue to retry.
- Monitoring cannot be paused while the miner is powered, and the API refuses power-on while monitoring is paused or the protection lock is active.
- Temperature settings are checked on the server for valid ranges and threshold ordering.

The Telegram bot token and Mijia token previously present in source files should be rotated before deployment. Removing them from the working tree does not remove them from earlier Git history or copies.
