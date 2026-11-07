// FUN_0178d0f4 @ 0178d0f4 size=220 calls_out=1 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x0178d180) */

uint FUN_0178d0f4(uint param_1)

{
  uint local_14;
  uint local_10;
  
  if (param_1 >> 0x1c == 0) {
    local_14 = 0x20000;
  }
  else {
    local_14 = 1 << (param_1 >> 0x1c) + 0xe;
  }
  local_10 = FUN_0178cb00();
  if (local_14 <= local_10) {
    local_10 = local_14;
  }
  if (local_10 == 0) {
    local_10 = 0x20000;
  }
  return local_10;
}

