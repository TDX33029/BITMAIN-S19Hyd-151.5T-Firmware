#!/bin/sh

# Copyright (C) 2026  Braiins Systems s.r.o.
#
# This file is part of Braiins Open-Source Initiative (BOSI).
#
# BOSI is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.
#
# Please, keep in mind that we may also license BOSI or any part thereof
# under a proprietary license. For more information on the terms and conditions
# of such proprietary license or if you have any other questions, please
# contact us at opensource@braiins.com.

GRACEFUL_SHUTDOWN_TIMEOUT_S=60

stop_and_kill_service() {
    service_name=$1
    process_name=$2
    timeout_seconds=${3:-$GRACEFUL_SHUTDOWN_TIMEOUT_S}

    "/etc/init.d/${service_name}" stop &

    # Wait for process to terminate gracefully
    elapsed=0
    while pidof "$process_name" >/dev/null 2>&1 && [ "$elapsed" -lt "$timeout_seconds" ]; do
        sleep 1
        elapsed=$((elapsed + 1))
    done

    # Force kill if still running
    if pidof "$process_name" >/dev/null 2>&1; then
        echo "Warning: $process_name did not terminate after ${timeout_seconds}s, force killing"
        killall -9 "$process_name" 2>/dev/null || true
    fi
}

# Print the first four bytes of stdin as lowercase hex, no separators.
# The BusyBox build ships no od/hexdump/xxd, so the uImage magic check has
# to go through awk (kept identical to install.sh's helper).
magic4() {
    # RS="^$" slurps the whole input as one record, so substr() can index
    # the raw bytes; ord[] maps byte value <- character.
    awk 'BEGIN {
             for (i = 0; i < 256; i++) ord[sprintf("%c", i)] = i
             RS = "^$"
         }
         { for (i = 1; i <= 4; i++) printf "%02x", ord[substr($0, i, 1)] }'
}

set -e
set -x

ROOT="$PWD"

# Get constants
# shellcheck source=/dev/null
. "/lib/functions/common.sh"
# Get local nand offsets
# shellcheck source=/dev/null
. "/lib/functions/system.sh"

# Define uninstall files
# shellcheck disable=SC2034  # Used by external scripts
UNINSTALL_LOG="/var/log/uninstall.log"
STOCK_UIMAGE_FILE="/tmp/stock_uimage"
# stock uImage backup occupies an 8 MiB region -> 64 blocks of 128 KiB
STOCK_UIMAGE_BLOCK_COUNT=64

# Using hidden `--restore-stock` parameter will exclude checks and only restore
# the stock uImage and erase BOS partitions. This feature is being used to
# perform forking to background, so when SSH connection is interrupted
if [ "$1" != "--restore-stock" ]; then
    for i in dd nanddump grep cksum flash_erase flash_eraseall nandwrite; do
        if ! [ -x "$(command -v "$i")" ]; then
            echo "Error: $i is not installed." >&2
            exit 1
        fi
    done
    if ! nanddump -h | grep -q "Usage: nanddump \[OPTIONS\] MTD-device"; then
        echo "Error: Unsupported nanddump utility." >&2
        exit 1
    fi
    if ! nanddump -h | grep -q "\-s addr"; then
        echo "Error: Unsupported nanddump utility." >&2
        exit 1
    fi

    # Stop bosminer and wait
    stop_and_kill_service S99bosminer bosminer
    stop_and_kill_service S98boser boser

    # BOS writes network.conf into the stock config volume (S38network keeps
    # it in sync). Make sure it is left exactly as stock expects it - owned
    # by the stock web user (www-data, uid/gid 33; not in the BOS passwd,
    # hence numeric) and mode 0755 - otherwise stock's lighttpd CGI cannot
    # save network settings after the uninstall.
    if [ -f "/mnt/$BOS_ENV_STOCK_CONFIG/network.conf" ]; then
        chown 33:33 "/mnt/$BOS_ENV_STOCK_CONFIG/network.conf" || true
        chmod 0755 "/mnt/$BOS_ENV_STOCK_CONFIG/network.conf" || true
    fi
    # install.sh logs stage 2 into the stock config partition (kept only for
    # failed installs); make sure no copy survives the uninstall
    # shellcheck disable=SC2153  # INSTALL_LOG comes from common.sh
    rm -f "/mnt/$BOS_ENV_STOCK_CONFIG/$(basename "$INSTALL_LOG")"
    sync

    # Try to umount, but not end with error, if device is busy
    if grep -q "$BOS_OVERLAY_UBI" /proc/mounts; then
        umount "$BOS_OVERLAY_UBI" || true
        ubidetach -m "$BOS_OVERLAY_MTD_NUMBER" || true
    fi

    # 1. Get raw stock uImage from backup (written by install.sh)
    nanddump -s "$LOCAL_STOCK_FW_BACKUP_OFFSET_BOS_LAYOUT" -l "$STOCK_FW_BACKUP_LENGTH" \
        "$BOS_STOCK2_MTD" >"$STOCK_UIMAGE_FILE"

    # Verify the backup before the point of no return: the restore erases
    # the only bootable U-Boot FIT and writes this dump in its place, so a
    # blank/corrupt backup (interrupted install, bad blocks) would brick
    # the board with no SSH to recover it
    if [ "$(magic4 <"$STOCK_UIMAGE_FILE")" != "27051956" ]; then
        echo "Error: stock uImage backup is invalid (bad uImage magic), aborting uninstall." >&2
        exit 1
    fi

    # 2. Start task on background to restore stock firmware
    cd "$ROOT" || exit 1
    echo "Creating background task to restore the stock firmware."
    "$BOS_TOOLS_NAME" daemonize sh -- -c "$0 --restore-stock" 2>&1 0</dev/null
    exit 0
fi

# This part of uninstall script is run on background

# Re-verify the dump before the point of no return. The check above runs in the
# FIRST phase; this phase is re-entered as a separate process (`$0
# --restore-stock`), so it cannot assume that phase ran or that /tmp survived
# in between. Without this, `--restore-stock` on its own erased the only
# bootable U-Boot FIT and only THEN discovered there was nothing to write back
# ("nandwrite: Data was only partially written"), bricking the board - exactly
# the outcome the first-phase check exists to prevent.
if [ ! -s "$STOCK_UIMAGE_FILE" ] \
    || [ "$(magic4 <"$STOCK_UIMAGE_FILE")" != "27051956" ]; then
    echo "Error: $STOCK_UIMAGE_FILE is missing or not a uImage;" \
        "refusing to erase the U-Boot partition." >&2
    exit 1
fi

# 3. Terminate dropbear
stop_and_kill_service S50dropbear dropbear 3

# 4. Restore the stock uImage to its original location (uboot+0x700000,
# absolute 0x2000000) where the untouched stock BOOT.bin expects it;
# this also removes the BOS U-Boot FIT living at the same offset
# (verified read-back: with SSH gone and the BOS FIT erased, an unverified
# failed write would only show up as a dead board after the reboot below).
# On failure stop here without rebooting - the running system is the only
# way left to retry over serial.
if ! nand_write_verified "$STOCK_UIMAGE_FILE" "$BOS_UBOOT_MTD" \
    "$LOCAL_BOS_UBOOT_OFFSET_BOS_LAYOUT" "$STOCK_UIMAGE_BLOCK_COUNT"; then
    echo "Error: restoring the stock uImage failed; NOT rebooting." >&2
    exit 1
fi

# 5. Erase the raw stock uImage backup: it sits in stock's reserve1 region,
# which stock attaches as UBI - leftover raw data makes that attach fail
flash_erase "$BOS_STOCK2_MTD" "$LOCAL_STOCK_FW_BACKUP_OFFSET_BOS_LAYOUT" "$STOCK_UIMAGE_BLOCK_COUNT"

# 6. Erase all bos partitions defined in system.sh
for partition in $BOS_PARTITIONS_TO_ERASE; do
    flash_eraseall "$partition"
done
sync
echo "Rebooting now."
shutdown -r now
exit 0
