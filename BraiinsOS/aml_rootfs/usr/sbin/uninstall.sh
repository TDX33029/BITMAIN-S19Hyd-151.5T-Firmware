#!/bin/sh

# Copyright (C) 2022  Braiins Systems s.r.o.
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

# Using hidden `--write-env` parameter will exclude checks, and only write to nand_env
# This feature is being used to perform forking to background, so when SSH connection is interrupted
if [ "$1" != "--write-env" ]; then
    for i in dd nanddump grep cksum flash_eraseall; do
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

    # 1. Get nand_env from backup
    nanddump -s "$LOCAL_RO_BACKUP_NAND_ENV_OFFSET_BOS_LAYOUT" -l "$STOCK_ENV_LENGTH" "$BOS_SYSTEM_MTD" >"$NAND_ENV_STOCK_FILE"

    # 2. Start task on background to rewrite nand env
    cd "$ROOT" || exit 1
    echo "Creating background task to write to $NAND_ENV_DEVICE."
    "$BOS_TOOLS_NAME" daemonize /bin/sh -- -c "$0 --write-env" 2>&1 0</dev/null
    exit 0
fi

# This part of install script is run on background
# 3. Terminate dropbear
stop_and_kill_service S50dropbear dropbear 3

# 4. flash nand_env script
sum_env_file=$(cksum "$NAND_ENV_STOCK_FILE" | awk '{print $1, $2}')

# Write to /dev/nand_env, and check if the write is correct with check sum
dd if="$NAND_ENV_STOCK_FILE" bs="$STOCK_ENV_LENGTH" of="$NAND_ENV_DEVICE"

sum_device=$(cksum "$NAND_ENV_DEVICE" | awk '{print $1, $2}')
if [ ! "$sum_device" = "$sum_env_file" ]; then
    echo "Error: Write of $NAND_ENV_DEVICE failed." >&2
    shutdown -r now
    exit 1
fi

echo "$NAND_ENV_DEVICE successfully writen."

# Erase install log, but don't stop script if it is not possible
{
    # Use ubi 2 so there is place for overlay partition and possible some other
    ubi_number=2
    ubi_dev_config="/dev/ubi${ubi_number}_0"
    tmp="/tmp"
    mount_point="$tmp/config"
    ubiattach -m "$STOCK_CONFIG_MTD_NUMBER" -d "$ubi_number"
    mkdir -p "$mount_point"
    mount -t ubifs "$ubi_dev_config" "$mount_point"
    # shellcheck disable=SC2153  # INSTALL_LOG is defined in common.sh, not a misspelling of UNINSTALL_LOG
    rm -f "${mount_point}/$(basename "$INSTALL_LOG")"
} || true

# Erase all bos partition defined in common.sh
for partition in $BOS_PARTITIONS_TO_ERASE; do
    flash_eraseall "$partition"
done
echo "Rebooting now."
shutdown -r now
exit 0
