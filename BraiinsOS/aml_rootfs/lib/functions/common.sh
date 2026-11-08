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

# shellcheck disable=SC2034
# This file defines variables used by install.sh and uninstall.sh that source it

# Define installation and sysupgrade files
BOS_ENV_FILE=nand_env
BOS_UBOOT_FILE=u-boot.bin
BOS_DTB_FILE=dtb
BOS_KERNEL_FILE=uImage
BOS_ROOTFS_FILE=rootfs.img
BOS_TOOLS_NAME=bos-tools

# Define file for log of BOS installation
INSTALL_LOG="/config/install.log"

# name of directory with stock configurations
BOS_ENV_STOCK_CONFIG="stock_config"

# Define nand env device
NAND_ENV_DEVICE=/dev/nand_env

# Temporary files that needs to be writable on both systems stock and BOS:
NAND_ENV_STOCK_FILE=/tmp/nand_env_stock
ENV_TAR=/tmp/env.tar
POST_INSTALL_TAR=/tmp/ro-post_install.tar

# Post install direstory and file
POST_INSTALL_DIR="post_install"
POST_INSTALL_SCRIPT="run.sh"

# Define backup global offsets of bos universal mtd partitions
GLOBAL_BOS_UBOOT_OFFSET=0x000007000000
GLOBAL_BOS_DTB_OFFSET=0x000007500000
GLOBAL_BOS_KERNEL_OFFSET=0x000007800000
GLOBAL_BOS_OVERLAY_OFFSET=0x000004700000
GLOBAL_BOS_ROOTFS_OFFSET=0x00000B800000

GLOBAL_RO_ENV_TAR_LENGTH_OFFSET=0x000009800000
LOCAL_RO_ENV_TAR_OFFSET=0x000000010000
GLOBAL_RO_ENV_TAR_OFFSET=$(printf "0x%X" $((GLOBAL_RO_ENV_TAR_LENGTH_OFFSET + LOCAL_RO_ENV_TAR_OFFSET)))

GLOBAL_RO_POST_INSTALL_TAR_LENGTH_OFFSET=0x000009C00000
LOCAL_POST_INSTALL_TAR_LENGTH_OFFSET=0x000000010000
GLOBAL_RO_POST_INSTALL_TAR_OFFSET=$(printf "0x%X" $((GLOBAL_RO_POST_INSTALL_TAR_LENGTH_OFFSET + LOCAL_POST_INSTALL_TAR_LENGTH_OFFSET)))
POST_INSTALL_TAR_MAX_DECIMAL_SIZE=20905984
# Erase block size is 128.0 KiB and size of post-install nand space is 20 MiB
# so we delete 160 blocks after post-install is executed
POST_INSTALL_TAR_BLOCK_COUNT=160

GLOBAL_RO_NAND_ENV_OFFSET=0x00000B000000
GLOBAL_RW_FLAGS_OFFSET=0x00000B400000

# dd dont take hexadecimal number
STOCK_ENV_LENGTH=65536

# name of BOS `system` partition
BOS_SYSTEM_MTD_NAME="system"
# name of BOS `overlay` RW partition
BOS_OVERLAY_MTD_NAME="overlay"

BOS_OVERLAY_UBI="/dev/ubi0_0"

# Write flag for recovery detection, numbers meaning:
# 1 - After installation of BOS before boot
RECOVERY_FLAG_INSTALLED=0x1

# 2 - First running of uboot, before try to boot BOS
RECOVERY_FLAG_FIRST_BOOT=0x2

# 3 - After successful boot of BOS
RECOVERY_FLAG_SUCCESSFUL=0x3
