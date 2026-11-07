// FUN_016da51c @ 016da51c size=252 calls_out=2 calls_in=3
// strings: 

void FUN_016da51c(int param_1,uint *param_2,int *param_3)

{
  bool bVar1;
  undefined1 *extraout_r1;
  uint uVar2;
  uint *puVar3;
  uint local_38;
  uint local_34;
  undefined *local_30;
  undefined1 auStack_2c [8];
  int local_24;
  int local_20;
  undefined1 auStack_18 [8];
  
  puVar3 = (uint *)(undefined1 *)0x0;
  if (param_2 == (uint *)0x0) goto LAB_016da5cc;
  local_38 = *param_2;
  if (local_38 < 2) {
LAB_016da5a8:
    uVar2 = param_2[0x21];
  }
  else {
    puVar3 = (uint *)(&DAT_018ddd58 + (param_1 - 1U >> 5) * 4);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar3);
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = *puVar3 | 1 << (param_1 - 1U & 0x1f);
    DataMemoryBarrier(0x1b);
    if ((DAT_018ddb09 == '\0') && (DAT_018ddd60 == 0)) {
      local_24 = DAT_018ddd60;
      local_20 = 3;
      software_interrupt(0);
      DAT_018ddd60 = 1;
    }
    uVar2 = param_2[0x21];
    if (-1 < (int)(uVar2 << 3)) {
      DataMemoryBarrier(0x1b);
      DAT_018ddd54 = 1;
      DataMemoryBarrier(0x1b);
      local_38 = *param_2;
      goto LAB_016da5a8;
    }
    local_38 = *param_2;
  }
  local_34 = uVar2 | 0x4000000;
  if ((int)(uVar2 << 0x1d) < 0) {
    local_30 = &DAT_016da477;
  }
  else {
    local_30 = &DAT_016da471;
  }
  FUN_016dd1aa(auStack_2c,param_2 + 1,8);
  puVar3 = &local_38;
LAB_016da5cc:
  software_interrupt(0);
  if (param_1 == 0 && param_3 != (int *)0x0) {
    *param_3 = local_24;
    param_3[0x21] = local_20;
    FUN_016dd1aa(param_3 + 1,auStack_18,8);
    puVar3 = (uint *)extraout_r1;
  }
  FUN_016d3496(param_1,puVar3);
  return;
}

