#!/bin/sh
# shellcheck disable=SC2034,SC2086
# Kept in sync with braiins-bin repo — do not fix shellcheck warnings

# BOS runtime defaults
# Read from /etc/bos_* files created by Nix module

BOARD_NAME=$(cat /etc/bos_platform)
BOS_BUILD=$(cat /etc/bos_build)
BOS_MODE=$(cat /etc/bos_mode)
BOS_VERSION=$(cat /etc/bos_version)
BOS_VERSION_SUFFIX=${BOS_VERSION#*-*-*-*-*-}

BOS_SUPPORT_FACTORY_RESET="no"
BOS_SUPPORT_RUN_RECOVERY="no"

get_env_config() {
    # BOS factory config is available in NAND and eMMC modes
    { [ "$BOS_MODE" = "nand" ] || [ "$BOS_MODE" = "emmc" ]; } \
        && /usr/bin/bos-tools print-env --factory-config "/tmp/bos_factory.json" $1 2>/dev/null || echo ""
}
