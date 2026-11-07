// FUN_00f5e46c @ 00f5e46c size=476 calls_out=6 calls_in=3
// strings: 

void FUN_00f5e46c(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_38;
  uint local_34;
  uint local_30;
  uint *local_2c;
  
  DataMemoryBarrier(0xb);
  if (param_2[2] != 1) {
    if ((int)param_4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,param_4);
    }
    if (param_4 == 0) {
      uVar2 = 0;
      uVar4 = 1;
    }
    else {
      uVar4 = thunk_FUN_016d4a50(param_4);
      uVar2 = param_4;
      if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,param_4);
      }
    }
    puVar3 = param_2 + 2;
    FUN_016dd1aa(uVar4,param_3,param_4);
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar3;
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = uVar5 - 1;
    if (uVar5 == 1) {
      DataMemoryBarrier(0xb);
      if ((int)param_2[1] < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_38,&DAT_0187f9b8,&DAT_0187fa1c);
      }
      thunk_FUN_016d3fb4(*param_2);
      thunk_FUN_016d3fb4(param_2);
    }
    *param_1 = uVar4;
    uVar4 = 0x20 - LZCOUNT(uVar2 >> 10);
    param_1[1] = param_4;
    param_1[2] = uVar2;
    if (6 < uVar4) {
      uVar4 = 7;
    }
    param_1[3] = uVar4 << 2 | 1;
    return;
  }
  uVar5 = *param_2;
  uVar6 = param_2[1];
  thunk_FUN_016d3fb4(param_2);
  uVar4 = param_3 - uVar5;
  param_4 = uVar4 + param_4;
  uVar2 = 0x20 - LZCOUNT(uVar6 >> 10);
  if (6 < uVar2) {
    uVar2 = 7;
  }
  local_2c = (uint *)(uVar2 << 2 | 1);
  local_38 = uVar5;
  local_34 = param_4;
  local_30 = uVar6;
  if (param_3 != uVar5) {
    if (uVar4 < 0x8000000) {
      puVar3 = local_2c + uVar4 * 8;
    }
    else {
      puVar3 = (uint *)thunk_FUN_016d4a50(0x14);
      if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x14);
      }
      puVar3[4] = 1;
      puVar3[3] = (uVar2 << 2 & 0x1f) >> 2;
      puVar3[1] = uVar5;
      puVar3[2] = param_4;
      *puVar3 = uVar6;
    }
    local_34 = param_4 - uVar4;
    local_30 = uVar6 - uVar4;
    if (param_4 < uVar4) {
      local_34 = 0;
    }
    local_38 = uVar5 + uVar4;
    local_2c = puVar3;
  }
  *param_1 = local_38;
  param_1[1] = local_34;
  param_1[2] = local_30;
  param_1[3] = (uint)local_2c;
  return;
}

