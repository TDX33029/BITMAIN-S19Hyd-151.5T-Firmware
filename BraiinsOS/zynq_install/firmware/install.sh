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

# shellcheck disable=SC3043,SC3057
# Note: Using local in POSIX sh - busybox ash supports it

# Stock (Antminer X19) -> BOS nix installation. Runs on the stock firmware
# and writes flash directly - no recovery boot, no factory image:
#   stage 1 (safe, stock still boots): stop stock daemons, back up the stock
#     uImage RAW (bootm-able) to 0x5300000, write FPGA bitstream to
#     fpga1+fpga2, write miner_cfg (MAC/hwid/network), write kernel FIT +
#     squashfs rootfs, stock config + factory config into the env tar
#     region, post-install tarball, nand_env backup and the INSTALLED
#     recovery flag; the overlay region is left erased (first BOS boot
#     UBI-formats it)
#   stage 2 (point of no return, forked via bos-tools daemonize so it
#     survives stopping dropbear): write the BOS U-Boot FIT over the stock
#     uImage at 0x2000000 and the BOS environment to uboot_env, reboot
# If the first BOS boot fails the recovery flag stays FIRST_BOOT and the
# BOS U-Boot restores the raw stock uImage backup over the BOS FIT and
# erases BOS (stock ramfs in mtd1 is intact) - same recover-to-stock
# semantics as AML; BOS then needs a reinstall.

set -e
set -x

ROOT="$PWD"

# Expect all installation files in the same dir as install.sh
BASEDIR=$(dirname "$(readlink -f "$0")")
# shellcheck source=firmware/devices/bm3-am2/scripts/common.sh
. "$BASEDIR/common.sh"

WRITE_ENV=false
while [ "$1" ]; do
    case "$1" in
    "--skip-miner-check")
        # accepted for compatibility with the other platforms' installers
        # and toolbox; there is no miner check on zynq (see below)
        ;;
    "--help")
        echo "Usage: $0 [--skip-miner-check]"
        echo "  --skip-miner-check  Accepted for compatibility, no-op on zynq"
        exit 0
        ;;
    "--write-env")
        WRITE_ENV=true
        ;;
    *)
        echo "Unknown property $1"
        exit 1
        ;;
    esac
    shift
done

# Installation files
BOS_ENV_FILE="$BASEDIR/$BOS_ENV_FILE"
BOS_UBOOT_FILE="$BASEDIR/$BOS_UBOOT_FILE"
BOS_KERNEL_FILE="$BASEDIR/$BOS_KERNEL_FILE"
BOS_ROOTFS_FILE="$BASEDIR/$BOS_ROOTFS_FILE"
BOS_FPGA_FILE="$BASEDIR/$BOS_FPGA_FILE"
BOS_TOOLS="$BASEDIR/$BOS_TOOLS_NAME"
MINER_CFG_IMAGE="$BASEDIR/miner_cfg.bin"
MINER_CFG_CONFIG="$BASEDIR/miner_cfg.config"

# Bundled flash tools - the stock firmware does not ship them (OQ2). They are
# statically-linked armv7 binaries built from nixpkgs, so no interpreter
# symlink is needed - just put the bundle on PATH.
export PATH="$BASEDIR:$PATH"

# Supported platform
CPU_ARCH_NEEDED="armv7l"
HW_MODEL_NAME="Xilinx Zynq"

# Supported stock NAND layout:
# dev:    size   erasesize  name
# mtd0: 02800000 00020000 "BOOT.bin-dts-marker-kernel"
# mtd1: 02000000 00020000 "ramfs"
# mtd2: 00800000 00020000 "configs"
# mtd3: 00200000 00020000 "sig"
# mtd4: 00e00000 00020000 "reserve1"
# mtd5: 01000000 00020000 "upgrade-ramfs"
# mtd6: 03800000 00020000 "upgrade-file"
# mtd7: 05800000 00020000 "reserve2"
PROC_MTD_SHA256="7aca7b8ac3114fd261b219c9b454025bd2e28fc786280f4eb146f27550facb93"

# Stock mtdparts view of the BOS absolute offsets (stock partitions are
# contiguous, base offsets: mtd0 0x0, mtd4 0x5200000, mtd6 0x7000000,
# mtd7 0xA800000)
STOCK_BOOT_MTD=/dev/mtd0
STOCK_RESERVE1_MTD=/dev/mtd4
STOCK_UPGRADE_FILE_MTD=/dev/mtd6
STOCK_RESERVE2_MTD=/dev/mtd7

# inside stock mtd0
LOCAL_FPGA1_OFFSET=0x1400000            # abs 0x1400000, 2 MiB (16 blocks)
LOCAL_FPGA2_OFFSET=0x1600000            # abs 0x1600000, 2 MiB (16 blocks)
LOCAL_UBOOT_ENV_OFFSET=0x1800000        # abs 0x1800000, 512 KiB (4 blocks)
LOCAL_UBOOT_ENV_REDUND_OFFSET=0x1820000 # redundant env copy @ 0x1820000
LOCAL_MINER_CFG_REDUND_OFFSET=0x18a0000 # redundant miner_cfg copy @ 0x18a0000
LOCAL_STOCK_UIMAGE_OFFSET=0x2000000     # abs 0x2000000, 8 MiB slot (64 blocks)
STOCK_UIMAGE_LENGTH=0x800000
# inside stock mtd4 (reserve1); abs 0x5300000 = BOS stock2 +0x300000
LOCAL_STOCK_FW_BACKUP_OFFSET=0x100000
# inside stock mtd6 (upgrade-file, base 0x7000000 = BOS `system` start)
LOCAL_KERNEL_OFFSET=0x0
LOCAL_ROOTFS_OFFSET=0x800000
# inside stock mtd7 (reserve2, base 0xA800000)
LOCAL_ENV_TAR_LENGTH_OFFSET=0xc00000 # abs 0xB400000
LOCAL_ENV_TAR_OFFSET=0xc10000
LOCAL_POST_INSTALL_TAR_LENGTH_OFFSET=0x1000000 # abs 0xB800000
LOCAL_POST_INSTALL_TAR_OFFSET=0x1010000
LOCAL_NAND_ENV_BACKUP_OFFSET=0x1a00000 # abs 0xC200000
LOCAL_RECOVERY_FLAGS_OFFSET=0x1b00000  # abs 0xC300000

# Stock UBI attachments on the reserve partitions
RESERVE1_MNT="/tmp/miner"
RESERVE1_UBI=2
RESERVE2_MNT="/nvdata"
RESERVE2_UBI=3

# Erase block counts
NAND_UBOOT_BLOCK_COUNT=64 # 8 MiB slot holding the ~1 MiB U-Boot FIT
NAND_FPGA_BLOCK_COUNT=16  # 2 MiB fpga1/fpga2

POST_INSTALL_DIR="$BASEDIR/$POST_INSTALL_DIR"
POST_INSTALL_TAR="/tmp/post_install.tar"
STOCK_UIMAGE_BACKUP="/tmp/stock_uimage"

# Free space required on /tmp in KiB: raw stock uImage backup (8 MiB)
# + 2x content of the stock config partition + margin
REQUIRED_FREE_SPACE_TMP=10240
SIZE_OF_CONFIG=$(df | grep '/config' | awk '{print $3}')
REQUIRED_FREE_SPACE_TMP=$((REQUIRED_FREE_SPACE_TMP + 2 * SIZE_OF_CONFIG))

# shellcheck disable=SC2009  # pgrep is not available on stock
is_process_running() {
    process_name=$1
    [ -z "$process_name" ] && return 1
    first_char=$(printf '%.1s' "$process_name")
    rest=$(echo "$process_name" | cut -c2-)
    ps | grep -q "[${first_char}]${rest}"
}

wait_for_termination() {
    process_name=$1
    grace_period=$2
    SLEEP_INTERVAL=1

    while is_process_running "$process_name"; do
        sleep "$SLEEP_INTERVAL"
        grace_period=$((grace_period - SLEEP_INTERVAL))
        [ "$grace_period" -le 0 ] && break
    done || return 0
}

wait_or_kill_process() {
    process_name=$1
    grace_period=$2

    wait_for_termination "$process_name" "$grace_period"
    is_process_running "$process_name" || return 0
    echo "Attempting graceful termination of process $process_name..."
    killall "$process_name" 2>/dev/null || true

    is_process_running "$process_name" || return 0
    echo "Force killing process $process_name..."
    killall -9 "$process_name" 2>/dev/null || true
}

stop_and_kill_service() {
    service_name=$1
    process_name=$2
    max_wait_second=${3:-10}

    full_service_path=/etc/init.d/$service_name
    if [ ! -f "$full_service_path" ]; then
        echo "Service $service_name not present, skipping..."
        return 0
    fi

    echo "Stopping service $service_name..."
    $full_service_path stop &
    wait_or_kill_process "$process_name" "$max_wait_second"
}

file_size() {
    number_base=$2
    decimal_file_size="$(wc -c <"$1")"
    if [ "$number_base" = "10" ]; then
        echo "$decimal_file_size"
        return 0
    fi
    printf "0x%x" "$decimal_file_size"
}

get_net_config() {
    sed -n '/'"$1"'=/s/.*=["]*\([^"]*\)["]*/\1/p' "/config/network.conf"
}

# shellcheck disable=SC2317,SC2329  # Function is called via trap
trap_handler() {
    rc="$?"

    # Keep the temp directory on success - stage 2 still needs it
    if [ "$rc" -eq 0 ]; then
        exit 0
    fi

    echo "Current running processes:"
    ps

    # Stage 2 failure happens after dropbear is gone and possibly with the
    # boot slot erased - the install bundle is then the only local copy of
    # the U-Boot FIT + environment usable for a manual retry over serial,
    # so never delete it there
    if $WRITE_ENV; then
        exit "$rc"
    fi

    echo "Removing temp install directory"
    rm -rf "$(realpath "$BASEDIR")"

    exit "$rc"
}

preinstall_check() {
    # Check we are not running BOS already
    if [ -f "/etc/bos_version" ]; then
        echo "Error: BOS is already installed" >&2
        return 1
    fi

    # Check required files are available
    for i in "$BOS_ENV_FILE" "$BOS_UBOOT_FILE" "$BOS_KERNEL_FILE" \
        "$BOS_ROOTFS_FILE" "$BOS_FPGA_FILE" "$BOS_TOOLS" \
        "$MINER_CFG_IMAGE" "$MINER_CFG_CONFIG"; do
        if [ ! -f "$i" ]; then
            echo "Error: file $i required for installation is missing." >&2
            return 1
        fi
    done

    # Check bundled and stock system utilities
    for i in nandwrite nanddump flash_erase ubidetach fw_setenv fw_printenv \
        wc umount sha256sum grep df awk uname tar ps sync; do
        if ! [ -x "$(command -v "$i")" ]; then
            echo "Error: $i is not installed." >&2
            return 1
        fi
    done

    local tmp_free_space
    tmp_free_space="$(df | grep 'tmpfs.*/tmp' | awk '{print $4}')"
    if [ $REQUIRED_FREE_SPACE_TMP -gt "$tmp_free_space" ]; then
        echo "Error: Insufficient space on /tmp." >&2
        return 1
    fi

    # Check NAND layout
    if ! sha256sum /proc/mtd | grep -q "$PROC_MTD_SHA256"; then
        echo "Error: Unsupported NAND layout" >&2
        cat /proc/mtd >&2
        return 1
    fi

    # Check architecture
    if ! uname -a | grep -q "$CPU_ARCH_NEEDED"; then
        echo "Error: Unsupported architecture (must be $CPU_ARCH_NEEDED)." >&2
        return 1
    fi

    # Check that the control board is Antminer
    if ! grep -q Antminer "/usr/bin/compile_time"; then
        echo "Error: This install script is only for Antminer." >&2
        return 1
    fi

    # Check board model name
    if ! grep -q "$HW_MODEL_NAME" /proc/device-tree/model; then
        echo "Unsupported HW MODEL (must be ${HW_MODEL_NAME})" >&2
        return 1
    fi

    return 0
}

# No bosminer compatibility check on zynq: bosminer detects the hashboards
# through the BOS FPGA design (plug pins), but on stock the Bitmain
# bitstream is loaded and the FPGA cannot be reprogrammed from the stock
# system, so `bosminer model --installation-compatibility-check` always
# fails with "Cannot detect mining hardware" here. The legacy LEDE
# installer never had this check either; the model is verified on the
# first BOS boot instead. Re-adding it depends on loading the BOS
# bitstream before BOS boots (separate ticket).
stop_mining() {
    # The stop function of some services does nothing, kill them nevertheless
    stop_and_kill_service S71monitorcg S71monitorcg 1
    stop_and_kill_service S70cgminer cgminer 50
    stop_and_kill_service S70cgminer bmminer
    stop_and_kill_service S70cgminer bitmain_logrotate
    stop_and_kill_service S71monitor-cminer S71monitor-cminer 1
    stop_and_kill_service S70cminer cminer 50
}

stop_stock_services() {
    stop_and_kill_service S50lighttpd lighttpd
    stop_and_kill_service S52miner_act S52miner_act 1
    stop_and_kill_service S66monitor-recobtn monitor-recobtn
    stop_and_kill_service S01syslogd syslogd
    stop_and_kill_service S41ntp ntpd
    stop_and_kill_service S50avahi-daemon avahi-daemon
}

detach_stock_ubi() {
    # Detach unconditionally: keying this off the expected mount point
    # silently skipped the detach when the volume was attached but not
    # mounted there, and UBI then kept the MTD busy - the reserve1
    # flash_erase/nandwrite in write_stage1 had no effect and the device
    # was left with no stock uImage backup to recover from.
    if grep -q "$RESERVE1_MNT" /proc/mounts; then
        umount -l "$RESERVE1_MNT"
        sleep 1
    fi
    if grep -q "$RESERVE2_MNT" /proc/mounts; then
        umount -l "$RESERVE2_MNT"
        sleep 1
    fi
    # ENODEV means "was not attached", which is the state we want
    ubidetach /dev/ubi_ctrl -d "$RESERVE1_UBI" 2>/dev/null || true
    ubidetach /dev/ubi_ctrl -d "$RESERVE2_UBI" 2>/dev/null || true
    sync
}

write_miner_cfg() {
    local ethaddr miner_hwid serial_number
    local hostname ipaddress netmask gateway dnsservers

    ethaddr=$(cat /sys/class/net/eth0/address)
    serial_number=""

    # Try to read serial number from stock config
    if [ -f "/config/sn" ]; then
        serial_number=$(tr -d '\n\r ' </config/sn)
    fi

    # Generate hwid from hash of serial number and MAC address
    # This ensures persistent device_id across reinstalls
    local input_string="bitmain-serial-${serial_number}-mac-${ethaddr}"

    # Use md5sum to generate hash and base64 to have bigger space in
    # 16 characters (busybox compatible hex-to-binary conversion)
    miner_hwid=$(printf '%s' "${input_string}" | md5sum | awk '{print $1}' \
        | sed 's/../\\x&/g' | xargs -0 printf | head -c 12 | base64 | tr "+/" "ab")

    # Get stock network settings
    hostname=$(get_net_config "hostname")
    ipaddress=$(get_net_config "ipaddress")
    netmask=$(get_net_config "netmask")
    gateway=$(get_net_config "gateway")
    dnsservers=$(get_net_config "dnsservers" | tr " " ,)

    # Write the empty redundant-env template, then fill it via fw_setenv
    nandwrite -p -s $LOCAL_MINER_CFG_REDUND_OFFSET $STOCK_BOOT_MTD "$MINER_CFG_IMAGE"
    fw_setenv -c "$MINER_CFG_CONFIG" --script - <<-EOF
	ethaddr ${ethaddr}
	miner_hwid ${miner_hwid}
	# Network settings
	net_hostname ${hostname}
	net_ip ${ipaddress}
	net_mask ${netmask}
	net_gateway ${gateway}
	net_dns_servers ${dnsservers}
	EOF
    fw_printenv -c "$MINER_CFG_CONFIG"
}

# Print the first four bytes of stdin as lowercase hex, no separators.
# The stock BusyBox this script runs on has no od/hexdump/xxd/dd/cmp, so
# the uImage magic check has to go through awk, which is present.
magic4() {
    # RS="^$" slurps the whole input as one record, so substr() can index
    # the raw bytes; ord[] maps byte value <- character.
    awk 'BEGIN {
             for (i = 0; i < 256; i++) ord[sprintf("%c", i)] = i
             RS = "^$"
         }
         { for (i = 1; i <= 4; i++) printf "%02x", ord[substr($0, i, 1)] }'
}

write_stage1() {
    # Back up the stock uImage RAW (uncompressed!) so the BOS U-Boot
    # fallback can nand read + bootm it directly
    nanddump -s $LOCAL_STOCK_UIMAGE_OFFSET -q -l $STOCK_UIMAGE_LENGTH \
        $STOCK_BOOT_MTD >"$STOCK_UIMAGE_BACKUP"
    # Refuse to continue if what we just read is not a uImage - stage 2
    # overwrites the only bootable image with the BOS FIT, so a bogus
    # backup means an unrecoverable device
    if [ "$(magic4 <"$STOCK_UIMAGE_BACKUP")" != "27051956" ]; then
        echo "Error: stock uImage at $LOCAL_STOCK_UIMAGE_OFFSET is not a uImage." >&2
        exit 1
    fi
    flash_erase $STOCK_RESERVE1_MTD 0 0
    nandwrite -p -s $LOCAL_STOCK_FW_BACKUP_OFFSET $STOCK_RESERVE1_MTD \
        "$STOCK_UIMAGE_BACKUP"
    # Read the backup back: UBI holding the MTD open, a bad block or a
    # silently ignored erase all produce a "successful" write that did
    # not land. Verifying here is what keeps recover-to-stock possible.
    if [ "$(nanddump -s $LOCAL_STOCK_FW_BACKUP_OFFSET -q -l 4 $STOCK_RESERVE1_MTD 2>/dev/null \
        | magic4)" != "27051956" ]; then
        echo "Error: stock uImage backup did not land in $STOCK_RESERVE1_MTD." >&2
        exit 1
    fi
    rm -f "$STOCK_UIMAGE_BACKUP"

    # Write the FPGA bitstream (same file the legacy LEDE build uses);
    # U-Boot loads it from fpga1 on every boot, fpga2 is the B copy
    flash_erase $STOCK_BOOT_MTD $LOCAL_FPGA1_OFFSET $NAND_FPGA_BLOCK_COUNT
    nandwrite -p -s $LOCAL_FPGA1_OFFSET $STOCK_BOOT_MTD "$BOS_FPGA_FILE"
    flash_erase $STOCK_BOOT_MTD $LOCAL_FPGA2_OFFSET $NAND_FPGA_BLOCK_COUNT
    nandwrite -p -s $LOCAL_FPGA2_OFFSET $STOCK_BOOT_MTD "$BOS_FPGA_FILE"

    # Erase uboot_env + miner_cfg and write the miner configuration
    # (ethaddr, hwid, network); the BOS environment itself is written in
    # stage 2 - until then the stock boot flow stays intact
    flash_erase $STOCK_BOOT_MTD $LOCAL_UBOOT_ENV_OFFSET 8
    write_miner_cfg

    # Write kernel FIT + squashfs rootfs at their offsets inside the
    # future `system` partition (stock upgrade-file is expendable)
    flash_erase $STOCK_UPGRADE_FILE_MTD 0 0
    nandwrite -p -s $LOCAL_KERNEL_OFFSET $STOCK_UPGRADE_FILE_MTD "$BOS_KERNEL_FILE"
    nandwrite -p -s $LOCAL_ROOTFS_OFFSET $STOCK_UPGRADE_FILE_MTD "$BOS_ROOTFS_FILE"

    # Erase the whole reserve2 region: `system` tail (env tar, post
    # install, nand_env backup, recovery flags) + `overlay` (left erased,
    # the first BOS boot UBI-formats it [P3])
    flash_erase $STOCK_RESERVE2_MTD 0 0

    # Preserve the stock config content + factory configuration in the
    # env tar region (BOS init extracts it to /tmp on every boot)
    local env_path=/tmp/env
    mkdir -p "$env_path"
    cp -aR /config "$env_path/$BOS_ENV_STOCK_CONFIG"
    "$BOS_TOOLS" create-factory-conf -o "$env_path/bos_factory.json"
    tar -cvf "$ENV_TAR" -C "$env_path" .

    # The env tar region ends where the post-install record begins; the
    # copied stock /config content is unbounded, so check the size before
    # nandwrite silently overlaps and corrupts the post-install data
    local env_tar_max_size=$((LOCAL_POST_INSTALL_TAR_LENGTH_OFFSET - LOCAL_ENV_TAR_OFFSET))
    if [ "$(file_size "$ENV_TAR" 10)" -gt "$env_tar_max_size" ]; then
        echo "Error: $ENV_TAR too big to fit in nand space." >&2
        return 1
    fi

    printf "0x%.8x\0" "$(file_size "$ENV_TAR")" \
        | nandwrite -p -s $LOCAL_ENV_TAR_LENGTH_OFFSET $STOCK_RESERVE2_MTD -
    nandwrite -p -s $LOCAL_ENV_TAR_OFFSET $STOCK_RESERVE2_MTD "$ENV_TAR"

    # Create the post-install tarball (stock config snapshot + runner)
    mkdir -p "$POST_INSTALL_DIR"
    "$BOS_TOOLS" create-stock-conf -o "$POST_INSTALL_DIR/stock_config.json"
    # Extract stock model ID from compile_time (line 2) for ambiguous
    # model resolution
    if [ -s "/usr/bin/compile_time" ]; then
        sed -n '2p' /usr/bin/compile_time >"$POST_INSTALL_DIR/stock_model_id"
    fi
    cp "$BASEDIR/run.sh" "$POST_INSTALL_DIR/$POST_INSTALL_SCRIPT"

    tar -cvf "$POST_INSTALL_TAR" -C "$BASEDIR" "$(basename "$POST_INSTALL_DIR")"

    local decimal_post_install_size
    decimal_post_install_size=$(file_size "$POST_INSTALL_TAR" 10)
    if [ "$decimal_post_install_size" -gt "$POST_INSTALL_TAR_MAX_DECIMAL_SIZE" ]; then
        echo "Error: $POST_INSTALL_TAR too big to fit in nand space." >&2
        return 1
    fi
    printf "0x%.8x\0" "$decimal_post_install_size" \
        | nandwrite -p -s $LOCAL_POST_INSTALL_TAR_LENGTH_OFFSET $STOCK_RESERVE2_MTD -
    nandwrite -p -s $LOCAL_POST_INSTALL_TAR_OFFSET $STOCK_RESERVE2_MTD "$POST_INSTALL_TAR"

    # Backup of the BOS default environment (recover_env source)
    nandwrite -p -s $LOCAL_NAND_ENV_BACKUP_OFFSET $STOCK_RESERVE2_MTD "$BOS_ENV_FILE"

    # Recovery flag INSTALLED - the BOS U-Boot cycles it 0x1 -> 0x2 -> 0x3
    # shellcheck disable=SC2059  # command substitution generates the flag byte
    printf "$(printf '\\x%x' "$RECOVERY_FLAG_INSTALLED")" \
        | nandwrite -p -s $LOCAL_RECOVERY_FLAGS_OFFSET $STOCK_RESERVE2_MTD -

    sync
    return 0
}

trap "trap_handler" EXIT

# Using hidden `--write-env` parameter will exclude checks and only write the
# U-Boot FIT + environment. This part is forked to background so the install
# survives the SSH connection being killed with dropbear.
if ! $WRITE_ENV; then
    preinstall_check || exit 1

    # Rename/stop stock mining daemons
    stop_mining

    stop_stock_services
    detach_stock_ubi

    # NOTE: plain call - `write_stage1 || exit 1` would disable `set -e`
    # inside the whole function and let a failed flash operation slip
    # through to the point of no return
    write_stage1

    cd "$ROOT"
    touch "$INSTALL_LOG"
    # Let the `miner` user read the log in case of failed installation
    chmod 666 "$INSTALL_LOG"
    echo "Creating background task to write U-Boot + env. Log: $INSTALL_LOG."
    # `.` instead of `source` - stage 2 runs under the stock BusyBox ash
    # shellcheck disable=SC2016  # $0 is expanded by the daemonized shell
    "$BOS_TOOLS" daemonize /bin/sh -- -c '. "$0"' "$0" "--write-env" \
        >>"$INSTALL_LOG" 2>&1 0</dev/null

    exit 0
fi

# Stage 2 - runs in background, point of no return

# bos-tools daemonize points the child's stdout/stderr at /dev/kmsg, so the
# redirect on the daemonize call above never sees this stage; log from inside
exec >>"$INSTALL_LOG" 2>&1

# Terminate dropbear
stop_and_kill_service S50dropbear dropbear

# Write the BOS U-Boot FIT over the stock uImage (the raw backup at
# 0x5300000 keeps recover-to-stock possible); verified read-back - a bad
# bootloader write is unrecoverable in the field
nand_write_verified "$BOS_UBOOT_FILE" $STOCK_BOOT_MTD \
    $LOCAL_STOCK_UIMAGE_OFFSET $NAND_UBOOT_BLOCK_COUNT

# Write the BOS environment (redundant copy right after the first one);
# both copies share the 4-block region, so erase it once and verify the
# copies separately
flash_erase $STOCK_BOOT_MTD $LOCAL_UBOOT_ENV_OFFSET 4
nandwrite -p -s $LOCAL_UBOOT_ENV_OFFSET $STOCK_BOOT_MTD "$BOS_ENV_FILE"
nandwrite -p -s $LOCAL_UBOOT_ENV_REDUND_OFFSET $STOCK_BOOT_MTD "$BOS_ENV_FILE"

echo "Removing temp install directory"
rm -rf "$(realpath "$BASEDIR")"

# The log lives in the stock /config partition so a failed install can be
# read from stock afterwards. On success it would be the one BOS trace left
# in stock's config after a later uninstall / recover_to_stock (U-Boot
# cannot clean a UBIFS), so drop it now; the same lines went to kmsg.
echo "Rebooting to BOS..."
exec >/dev/kmsg 2>&1
rm -f "$INSTALL_LOG"
sync
reboot
exit 0
