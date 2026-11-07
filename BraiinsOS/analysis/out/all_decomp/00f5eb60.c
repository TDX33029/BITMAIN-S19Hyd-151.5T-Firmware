// FUN_00f5eb60 @ 00f5eb60 size=232 calls_out=3 calls_in=0
// strings: 

void FUN_00f5eb60(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint *local_24;
  
  DataMemoryBarrier(0xb);
  if ((*param_2 & 1) == 0) {
    FUN_00f5e46c();
    return;
  }
  local_30 = *param_2 & 0xfffffffe;
  uVar2 = param_3 - local_30;
  local_2c = uVar2 + param_4;
  uVar1 = 0x20 - LZCOUNT(local_2c >> 10);
  if (6 < uVar1) {
    uVar1 = 7;
  }
  local_24 = (uint *)(uVar1 << 2 | 1);
  local_28 = local_2c;
  if (param_3 != local_30) {
    if (uVar2 < 0x8000000) {
      local_24 = local_24 + uVar2 * 8;
    }
    else {
      local_24 = (uint *)thunk_FUN_016d4a50(0x14);
      if (local_24 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x14);
      }
      local_24[4] = 1;
      local_24[3] = (uVar1 << 2 & 0x1f) >> 2;
      local_24[1] = local_30;
      local_24[2] = local_2c;
      *local_24 = local_2c;
    }
    bVar3 = local_2c < uVar2;
    local_2c = local_2c - uVar2;
    if (bVar3) {
      local_2c = 0;
    }
    local_30 = local_30 + uVar2;
    local_28 = param_4;
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  param_1[3] = (uint)local_24;
  return;
}

