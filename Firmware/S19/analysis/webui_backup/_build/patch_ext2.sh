#!/bin/sh
set -e
IMG="$1"
BASE="$2"
for f in index.7b063c.js dashboard.f675cc.js blog.07d12d.js; do
  echo "== $f =="
  debugfs -w -R "rm /www/pages/js/$f" "$IMG" >/dev/null 2>&1 || true
  debugfs -w -R "write $BASE/$f /www/pages/js/$f" "$IMG" 2>&1 | tail -2
  debugfs -w -R "sif /www/pages/js/$f mode 0100755" "$IMG" >/dev/null 2>&1 || true
  debugfs -w -R "sif /www/pages/js/$f uid 0" "$IMG" >/dev/null 2>&1 || true
  debugfs -w -R "sif /www/pages/js/$f gid 0" "$IMG" >/dev/null 2>&1 || true
  debugfs -R "stat /www/pages/js/$f" "$IMG" 2>/dev/null | grep -E "Mode|User|Size|Blockcount"
done
