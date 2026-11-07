// FUN_01282c88 @ 01282c88 size=120 calls_out=2 calls_in=0
// strings: 

void FUN_01282c88(uint *param_1,uint *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_20 = *param_2;
  DataMemoryBarrier(0xb);
  if ((local_20 & 1) == 0) {
    FUN_01282d4c(param_1);
  }
  else {
    local_1c = (param_3 - local_20) + param_4;
    uVar1 = 0x20 - LZCOUNT(local_1c >> 10);
    if (6 < uVar1) {
      uVar1 = 7;
    }
    local_14 = uVar1 << 2 | 1;
    local_18 = local_1c;
    FUN_01283ef4(&local_20);
    *param_1 = local_20;
    param_1[1] = local_1c;
    param_1[2] = local_18;
    param_1[3] = local_14;
  }
  return;
}

