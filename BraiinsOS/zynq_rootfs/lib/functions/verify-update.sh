# shellcheck shell=sh disable=SC3043
# Sysupgrade package signature verification. The package carries a fwtool
# trailer (metadata JSON + usign signature over the sha256 of everything
# before the signature block) - the same format the legacy LEDE sysupgrade
# verifies; the check below mirrors its firmware_check_signature.

signature_hint() {
    echo "Download the firmware package from the official source https://feeds.braiins-os.com/ or" >&2
    echo "use the Braiins Toolbox. To install an unsigned package anyway run: sysupgrade -F <package>" >&2
}

# Verify the usign signature of the given package against /etc/opkg/keys.
check_update_signature() {
    local package="$1"
    local sig="/tmp/sysupgrade.sig"

    # signature is stored at the end of the package
    if ! fwtool -q -s "$sig" "$package"; then
        echo "ERROR: package is not signed or is damaged" >&2
        signature_hint
        return 1
    fi

    # the last 4 bytes contain the size of the signature metadata
    local metadata_size=$((0x$(tail -c 4 "$package" | hexdump -v -n 4 -e '1/1 "%02x"')))
    local file_size
    file_size=$(wc -c <"$package")
    local hash_size=$((file_size - metadata_size))

    # sha256 of the package without the signature metadata
    local full_block_size=65536
    local full_blocks_count=$((hash_size / full_block_size))
    local leftover_size=$((hash_size % full_block_size))
    local image_digest
    image_digest=$({
        [ $full_blocks_count -gt 0 ] && dd bs=$full_block_size count=$full_blocks_count 2>/dev/null
        [ $leftover_size -gt 0 ] && dd bs=$leftover_size count=1 2>/dev/null
    } <"$package" | sha256sum | awk '{print $1}')

    if ! printf '%s' "$image_digest" | usign -V -q -m - -x "$sig" -P "/etc/opkg/keys"; then
        echo "ERROR: package signature is not valid or not signed by Braiins" >&2
        signature_hint
        rm -f "$sig"
        return 1
    fi

    rm -f "$sig"
    return 0
}
