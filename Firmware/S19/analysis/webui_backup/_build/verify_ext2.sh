#!/bin/sh
IMG="$1"
BASE="$2"
mkdir -p /tmp/out
for f in index.7b063c.js dashboard.f675cc.js blog.07d12d.js; do
  debugfs -R "dump /www/pages/js/$f /tmp/out/$f" "$IMG" >/dev/null 2>&1
  a=$(md5sum "/tmp/out/$f" | cut -d' ' -f1)
  b=$(md5sum "$BASE/$f" | cut -d' ' -f1)
  if [ "$a" = "$b" ]; then r=OK; else r=MISMATCH; fi
  echo "$f  $r  img=$a"
done
echo "--- other files intact (spot check) ---"
debugfs -R "stat /www/pages/index.html" "$IMG" 2>/dev/null | grep -E "Size|Mode"
debugfs -R "stat /usr/bin/cgminer-api" "$IMG" 2>/dev/null | grep -E "Size|Mode"
