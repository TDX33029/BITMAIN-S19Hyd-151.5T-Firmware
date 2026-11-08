#!/bin/sh
# shellcheck disable=SC1091,SC2004,SC2034,SC2046,SC2086,SC2155,SC2162,SC3043
# Kept in sync with braiins-bin repo — do not fix shellcheck warnings

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

. /lib/functions/common.sh

# Offset of mtd1 subtracted by mtd0 size, so if offset of mtd1 is
# e.g. 0x800000 and mtd0 size is 0x200000, resulting value is 0x600000
OFFSET_FROM_END_MTD0_TO_MTD1=0x600000

# Calculate absolute offset in NAND of given MTD partition
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

    if [ "$device_name" != "mtd0" ]; then
        res=$(printf "0x%X" $((res + OFFSET_FROM_END_MTD0_TO_MTD1)))
    fi
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
    local number=$(/bin/sed -E -n "s/mtd([0-9]+).*\"$name\"/\1/p" /proc/mtd)
    [ -z "$number" ] && return 1
    echo "$number"
}

# system partition where whole BOS system is stored
BOS_SYSTEM_MTD_NUMBER=$(mtd_number_by_name "$BOS_SYSTEM_MTD_NAME")
BOS_SYSTEM_MTD="/dev/mtd$BOS_SYSTEM_MTD_NUMBER"
# overlay partition for BOS RW configuration
BOS_OVERLAY_MTD_NUMBER=$(mtd_number_by_name "$BOS_OVERLAY_MTD_NAME")
BOS_OVERLAY_MTD="/dev/mtd$BOS_OVERLAY_MTD_NUMBER"
# Stock config partition
STOCK_CONFIG_MTD_NUMBER=$(mtd_number_by_name "$BOS_ENV_STOCK_CONFIG")
STOCK_CONFIG_MTD="/dev/mtd$STOCK_CONFIG_MTD_NUMBER"

# BOS nand layout partitions to erase during uninstall
BOS_PARTITIONS_TO_ERASE="$BOS_SYSTEM_MTD $BOS_OVERLAY_MTD"

# absolute address of BOS `system` partition in NAND
GLOBAL_BOS_SYSTEM_OFFSET=$(mtd_device_offset $BOS_SYSTEM_MTD_NUMBER)

LOCAL_BOS_UBOOT_OFFSET_BOS_LAYOUT=$(mtd_local_offset $GLOBAL_BOS_SYSTEM_OFFSET $GLOBAL_BOS_UBOOT_OFFSET)
LOCAL_BOS_DTB_OFFSET_BOS_LAYOUT=$(mtd_local_offset $GLOBAL_BOS_SYSTEM_OFFSET $GLOBAL_BOS_DTB_OFFSET)
LOCAL_BOS_KERNEL_OFFSET_BOS_LAYOUT=$(mtd_local_offset $GLOBAL_BOS_SYSTEM_OFFSET $GLOBAL_BOS_KERNEL_OFFSET)
LOCAL_BOS_ROOTFS_OFFSET_BOS_LAYOUT=$(mtd_local_offset $GLOBAL_BOS_SYSTEM_OFFSET $GLOBAL_BOS_ROOTFS_OFFSET)
LOCAL_RO_ENV_TAR_OFFSET_BOS_LAYOUT=$(mtd_local_offset $GLOBAL_BOS_SYSTEM_OFFSET $GLOBAL_RO_ENV_TAR_OFFSET)
LOCAL_RO_ENV_TAR_LENGTH_OFFSET_BOS_LAYOUT=$(mtd_local_offset $GLOBAL_BOS_SYSTEM_OFFSET $GLOBAL_RO_ENV_TAR_LENGTH_OFFSET)
LOCAL_RO_BACKUP_NAND_ENV_OFFSET_BOS_LAYOUT=$(mtd_local_offset $GLOBAL_BOS_SYSTEM_OFFSET $GLOBAL_RO_NAND_ENV_OFFSET)
LOCAL_RECOVERY_FLAGS_OFFSET_BOS_LAYOUT=$(mtd_local_offset $GLOBAL_BOS_SYSTEM_OFFSET $GLOBAL_RW_FLAGS_OFFSET)
LOCAL_RO_POST_INSTALL_TAR_OFFSET_BOS_LAYOUT=$(mtd_local_offset $GLOBAL_BOS_SYSTEM_OFFSET $GLOBAL_RO_POST_INSTALL_TAR_OFFSET)
LOCAL_RO_POST_INSTALL_TAR_LENGTH_OFFSET_BOS_LAYOUT=$(mtd_local_offset $GLOBAL_BOS_SYSTEM_OFFSET $GLOBAL_RO_POST_INSTALL_TAR_LENGTH_OFFSET)
