#!/bin/sh
# shellcheck disable=SC1091,SC2006,SC2010,SC2086,SC2164
# Kept in sync with braiins-bin repo — do not fix shellcheck warnings

wipe_network=
[ "$1" = "--wipe-network" ] && wipe_network=1

echo "starting recovery factory"
/etc/init.d/S99bosminer stop || true
/etc/init.d/S98boser stop || true
/etc/init.d/S50dropbear stop || true

cd /etc/
rm_files=$(ls /etc/ | grep -v miner_hwid)
rm -rf $rm_files

# /etc/network.conf symlinks into /mnt/stock_config and survives the rm
# above; empty it so S38network reseeds stock defaults (BOS-3820).
if [ -n "$wipe_network" ]; then
    . /lib/functions/common.sh 2>/dev/null
    : "${BOS_ENV_STOCK_CONFIG:=stock_config}"
    if [ -d "/mnt/$BOS_ENV_STOCK_CONFIG" ]; then
        : >"/mnt/$BOS_ENV_STOCK_CONFIG/network.conf" \
            || echo "WARNING: failed to clear $BOS_ENV_STOCK_CONFIG/network.conf" >&2
    else
        echo "WARNING: /mnt/$BOS_ENV_STOCK_CONFIG not found, network NOT wiped" >&2
    fi
fi

sync

echo "recovery factory complete, rebooting"

reboot -f
