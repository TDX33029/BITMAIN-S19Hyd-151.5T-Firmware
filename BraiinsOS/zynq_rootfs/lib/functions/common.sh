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

# shellcheck disable=SC2034,SC3043
# This file defines variables used by install.sh, uninstall.sh, COMMAND and
# the init scripts that source it

# Define installation and sysupgrade files
BOS_ENV_FILE=nand_env
BOS_UBOOT_FILE=uImage.itb
BOS_KERNEL_FILE=kernel
BOS_ROOTFS_FILE=rootfs.img
BOS_FPGA_FILE=system.bit.gz
BOS_TOOLS_NAME=bos-tools

# Define file for log of BOS installation
INSTALL_LOG="/config/install.log"

# Name of the MTD partition holding the stock Antminer configuration. This is
# the vendor's own partition name and must NOT be renamed: stock U-Boot and the
# stock firmware restored by uninstall.sh both expect it, and the partition is
# deliberately left untouched so the miner boots back to stock with its config.
BOS_ENV_STOCK_CONFIG_MTD_NAME="antminer_configs"

# Mount point (under /mnt) and env-tar directory for the stock configuration.
# Kept identical to the other platforms (am3-aml, am3-bbb, cvitek-bm1) so the
# shared scripts - factory_config_reset.sh in particular - find it at the same
# path everywhere. On those platforms the partition happens to be named
# "stock_config" too; on zynq the partition name differs, hence the split above.
BOS_ENV_STOCK_CONFIG="stock_config"

# Temporary files that needs to be writable on both systems stock and BOS:
ENV_TAR=/tmp/env.tar
POST_INSTALL_TAR=/tmp/ro-post_install.tar

# Post install directory and file
POST_INSTALL_DIR="post_install"
POST_INSTALL_SCRIPT="run.sh"

# Define global offsets of BOS images in NAND
# BOS mtdparts (stock/LEDE physical layout up to `stock2`; the former
# 114m firmware region is split 84m(system) + 60m(overlay) - the system
# tail regions end at 0xC400000 and everything above is user overlay):
#   8m(boot),12m(boot-failover),2m(fpga1),2m(fpga2),512k(uboot_env),
#   512k(miner_cfg),15m(uboot),32m(stock1),8m(antminer_configs),
#   32m(stock2),84m(system),60m(overlay)
# BOS U-Boot FIT lives at uboot+0x700000 (LEDE-compatible location)
GLOBAL_BOS_UBOOT_OFFSET=0x000002000000
# kernel FIT (zImage+dtb) at system+0x0, 8 MiB slot
GLOBAL_BOS_KERNEL_OFFSET=0x000007000000
# squashfs rootfs (mkimage ramdisk) at system+0x800000
GLOBAL_BOS_ROOTFS_OFFSET=0x000007800000

# Define global and local offsets for BOS read-only regions in `system` tail
GLOBAL_RO_ENV_TAR_LENGTH_OFFSET=0x00000B400000
LOCAL_RO_ENV_TAR_OFFSET=0x000000010000
GLOBAL_RO_ENV_TAR_OFFSET=$(printf "0x%X" $((GLOBAL_RO_ENV_TAR_LENGTH_OFFSET + LOCAL_RO_ENV_TAR_OFFSET)))

GLOBAL_RO_POST_INSTALL_TAR_LENGTH_OFFSET=0x00000B800000
LOCAL_POST_INSTALL_TAR_LENGTH_OFFSET=0x000000010000
GLOBAL_RO_POST_INSTALL_TAR_OFFSET=$(printf "0x%X" $((GLOBAL_RO_POST_INSTALL_TAR_LENGTH_OFFSET + LOCAL_POST_INSTALL_TAR_LENGTH_OFFSET)))
POST_INSTALL_TAR_MAX_DECIMAL_SIZE=10420224
# Erase block size is 128.0 KiB and size of post-install nand space is 10 MiB
# so we delete 80 blocks after post-install is executed
POST_INSTALL_TAR_BLOCK_COUNT=80

# backup of BOS default U-Boot environment (recover_env source)
GLOBAL_RO_NAND_ENV_OFFSET=0x00000C200000
# recovery flags in `system` tail
GLOBAL_RW_FLAGS_OFFSET=0x00000C300000

# raw (uncompressed, bootm-able) backup of the stock uImage taken from
# 0x2000000 during install; U-Boot's recover_to_stock writes it back over
# the BOS FIT when the recovery flag is stuck at FIRST_BOOT (stock ramfs in
# the untouched stock1 region keeps the stock system complete)
GLOBAL_RO_STOCK_FW_BACKUP_OFFSET=0x000005300000
STOCK_FW_BACKUP_LENGTH=0x800000

# Define U-Boot ENV image size (one copy; redundant copy right after it)
BOS_ENV_SIZE=0x20000

# name of BOS `system` partition
BOS_SYSTEM_MTD_NAME="system"
# name of BOS `overlay` RW partition
BOS_OVERLAY_MTD_NAME="overlay"
# name of partition holding the BOS U-Boot FIT
BOS_UBOOT_MTD_NAME="uboot"
# name of U-Boot environment partition (redundant env, 2x 128 KiB)
BOS_UBOOT_ENV_MTD_NAME="uboot_env"
# name of miner configuration partition (ethaddr, hwid, network)
BOS_MINER_CFG_MTD_NAME="miner_cfg"
# FPGA bitstream partitions (fpga1 loaded on every boot, fpga2 unused B copy)
BOS_FPGA1_MTD_NAME="fpga1"
BOS_FPGA2_MTD_NAME="fpga2"
# stock region holding the raw stock uImage backup
BOS_STOCK2_MTD_NAME="stock2"

BOS_OVERLAY_UBI="/dev/ubi0_0"
# UBI device holding the overlay volume. ubimkvol only accepts the node,
# while ubinfo can be asked by number and so needs no node to exist.
BOS_OVERLAY_UBI_DEV="/dev/ubi0"
BOS_OVERLAY_UBI_NUMBER=0

# Bad-PEB reserve for `ubiattach -b`, in PEBs per 1024 of the WHOLE CHIP.
# UBI scales this by the chip size (2048 PEBs on the 256 MB NAND), not by the
# partition, so the default of 20 reserves 20*2048/1024 = 40 PEBs regardless
# of how small the partition is. Both UBI partitions here are far smaller
# than the chip:
#   overlay           60 MB = 480 PEBs -> 40 reserved is 8%, and with a few
#                     factory-bad blocks it starves `ubimkvol -m` of most of
#                     the space users should get
#   antminer_configs   8 MB =  64 PEBs -> 40 does not even fit, hence the
#                     kernel's "reserved 4, need 40" warning
# 2 per 1024 gives 2*2048/1024 = 4 PEBs, a real reserve (1.7% of the overlay)
# that still leaves the volume usable.
BOS_UBI_MAX_BEB_PER1024=2

# Write flag for recovery detection, numbers meaning:
# 1 - After installation of BOS before boot
RECOVERY_FLAG_INSTALLED=0x1

# 2 - First running of uboot, before try to boot BOS
RECOVERY_FLAG_FIRST_BOOT=0x2

# 3 - After successful boot of BOS
RECOVERY_FLAG_SUCCESSFUL=0x3

# Erase + write + read-back verify of a NAND region; retries once. Used
# wherever a failed write would only surface as a dead board: install.sh
# stage 2 (bootloader replaced with SSH already gone) and uninstall.sh
# (stock uImage written over the only bootable U-Boot). COMMAND carries
# its own copy - the LEDE upgrade ramfs has no common.sh.
nand_write_verified() {
    local file="$1"
    local mtd="$2"
    local offset="$3"
    local block_count="$4"
    local size checksum attempt

    size=$(wc -c <"$file")
    checksum="/tmp/nand_write.checksum"
    sha256sum <"$file" >"$checksum"

    for attempt in 1 2; do
        flash_erase "$mtd" "$offset" "$block_count" || continue
        nandwrite -p -s "$offset" "$mtd" "$file" || continue
        # mtd-utils 1.5 nanddump pads -l up to a whole page, so cut the read-back
        # to the file size before hashing
        if nanddump -s "$offset" -q -l "$size" "$mtd" 2>/dev/null | head -c "$size" \
            | sha256sum -c "$checksum" >/dev/null 2>&1; then
            rm -f "$checksum"
            return 0
        fi
        echo "Error: verification of NAND write at $mtd:$offset failed (attempt $attempt)" >&2
    done

    rm -f "$checksum"
    return 1
}
