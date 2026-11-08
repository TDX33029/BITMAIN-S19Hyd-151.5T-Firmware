#!/bin/sh
# shellcheck disable=SC1091,SC2004,SC2034,SC2046,SC2086,SC2155,SC2162,SC3043

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

. /lib/functions/common.sh

# Calculate absolute offset in NAND of given MTD partition
# (zynq mtdparts are contiguous, absolute offset = sum of previous sizes)
mtd_device_offset() {
    local device_number=$1
    local device_name="mtd$device_number"

    local res=0x0
    while read line; do
        if [ "$line" = "dev:    size   erasesize  name" ]; then
            continue
        fi
        device=$(echo $line | awk '{print $1}')
        size=$(echo $line | awk '{print "0x"$2}')
        if [ "$device" = "$device_name:" ]; then
            break
        fi
        res=$(printf "0x%X" $((res + size)))
    done <"/proc/mtd"

    echo $res
}

# Calculate local offset form global partition offset and global desired offset
mtd_local_offset() {
    local mtd_partition_global_offset=$1
    local global_offset=$2
    printf "0x%X" $((global_offset - mtd_partition_global_offset))
}

# Get number of MTD device by its name in /proc/mtd
mtd_number_by_name() {
    local name="$1"
    local number=$(sed -E -n "s/mtd([0-9]+).*\"$name\"/\1/p" /proc/mtd)
    [ -z "$number" ] && return 1
    echo "$number"
}

# system partition where whole BOS system is stored
BOS_SYSTEM_MTD_NUMBER=$(mtd_number_by_name "$BOS_SYSTEM_MTD_NAME")
BOS_SYSTEM_MTD="/dev/mtd$BOS_SYSTEM_MTD_NUMBER"
# overlay partition for BOS RW configuration
BOS_OVERLAY_MTD_NUMBER=$(mtd_number_by_name "$BOS_OVERLAY_MTD_NAME")
BOS_OVERLAY_MTD="/dev/mtd$BOS_OVERLAY_MTD_NUMBER"
# stock Antminer config partition (UBIFS volume config_data/configs)
STOCK_CONFIG_MTD_NUMBER=$(mtd_number_by_name "$BOS_ENV_STOCK_CONFIG_MTD_NAME")
STOCK_CONFIG_MTD="/dev/mtd$STOCK_CONFIG_MTD_NUMBER"
# partition with the BOS U-Boot FIT
BOS_UBOOT_MTD_NUMBER=$(mtd_number_by_name "$BOS_UBOOT_MTD_NAME")
BOS_UBOOT_MTD="/dev/mtd$BOS_UBOOT_MTD_NUMBER"
# U-Boot environment partition
BOS_UBOOT_ENV_MTD_NUMBER=$(mtd_number_by_name "$BOS_UBOOT_ENV_MTD_NAME")
BOS_UBOOT_ENV_MTD="/dev/mtd$BOS_UBOOT_ENV_MTD_NUMBER"
# miner configuration partition
BOS_MINER_CFG_MTD_NUMBER=$(mtd_number_by_name "$BOS_MINER_CFG_MTD_NAME")
BOS_MINER_CFG_MTD="/dev/mtd$BOS_MINER_CFG_MTD_NUMBER"
# FPGA bitstream partitions
BOS_FPGA1_MTD_NUMBER=$(mtd_number_by_name "$BOS_FPGA1_MTD_NAME")
BOS_FPGA1_MTD="/dev/mtd$BOS_FPGA1_MTD_NUMBER"
BOS_FPGA2_MTD_NUMBER=$(mtd_number_by_name "$BOS_FPGA2_MTD_NAME")
BOS_FPGA2_MTD="/dev/mtd$BOS_FPGA2_MTD_NUMBER"
# stock region with the raw stock uImage backup
BOS_STOCK2_MTD_NUMBER=$(mtd_number_by_name "$BOS_STOCK2_MTD_NAME")
BOS_STOCK2_MTD="/dev/mtd$BOS_STOCK2_MTD_NUMBER"

# BOS nand layout partitions to erase during uninstall
# (miner_cfg and uboot_env are BOS-only; stock keeps its own config in
# the untouched antminer_configs partition)
BOS_PARTITIONS_TO_ERASE="$BOS_SYSTEM_MTD $BOS_OVERLAY_MTD $BOS_FPGA1_MTD $BOS_FPGA2_MTD $BOS_UBOOT_ENV_MTD $BOS_MINER_CFG_MTD"

# absolute addresses of BOS partitions in NAND
GLOBAL_BOS_SYSTEM_OFFSET=$(mtd_device_offset $BOS_SYSTEM_MTD_NUMBER)
GLOBAL_BOS_UBOOT_PART_OFFSET=$(mtd_device_offset $BOS_UBOOT_MTD_NUMBER)
GLOBAL_BOS_STOCK2_OFFSET=$(mtd_device_offset $BOS_STOCK2_MTD_NUMBER)

LOCAL_BOS_KERNEL_OFFSET_BOS_LAYOUT=$(mtd_local_offset $GLOBAL_BOS_SYSTEM_OFFSET $GLOBAL_BOS_KERNEL_OFFSET)
LOCAL_BOS_ROOTFS_OFFSET_BOS_LAYOUT=$(mtd_local_offset $GLOBAL_BOS_SYSTEM_OFFSET $GLOBAL_BOS_ROOTFS_OFFSET)
LOCAL_RO_ENV_TAR_OFFSET_BOS_LAYOUT=$(mtd_local_offset $GLOBAL_BOS_SYSTEM_OFFSET $GLOBAL_RO_ENV_TAR_OFFSET)
LOCAL_RO_ENV_TAR_LENGTH_OFFSET_BOS_LAYOUT=$(mtd_local_offset $GLOBAL_BOS_SYSTEM_OFFSET $GLOBAL_RO_ENV_TAR_LENGTH_OFFSET)
LOCAL_RO_BACKUP_NAND_ENV_OFFSET_BOS_LAYOUT=$(mtd_local_offset $GLOBAL_BOS_SYSTEM_OFFSET $GLOBAL_RO_NAND_ENV_OFFSET)
LOCAL_RECOVERY_FLAGS_OFFSET_BOS_LAYOUT=$(mtd_local_offset $GLOBAL_BOS_SYSTEM_OFFSET $GLOBAL_RW_FLAGS_OFFSET)
LOCAL_RO_POST_INSTALL_TAR_OFFSET_BOS_LAYOUT=$(mtd_local_offset $GLOBAL_BOS_SYSTEM_OFFSET $GLOBAL_RO_POST_INSTALL_TAR_OFFSET)
LOCAL_RO_POST_INSTALL_TAR_LENGTH_OFFSET_BOS_LAYOUT=$(mtd_local_offset $GLOBAL_BOS_SYSTEM_OFFSET $GLOBAL_RO_POST_INSTALL_TAR_LENGTH_OFFSET)
LOCAL_BOS_UBOOT_OFFSET_BOS_LAYOUT=$(mtd_local_offset $GLOBAL_BOS_UBOOT_PART_OFFSET $GLOBAL_BOS_UBOOT_OFFSET)
LOCAL_STOCK_FW_BACKUP_OFFSET_BOS_LAYOUT=$(mtd_local_offset $GLOBAL_BOS_STOCK2_OFFSET $GLOBAL_RO_STOCK_FW_BACKUP_OFFSET)
