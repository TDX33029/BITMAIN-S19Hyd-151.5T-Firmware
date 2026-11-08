// FUN_00e103e0 @ 00e103e0 size=352 calls_out=6 calls_in=2
// strings: internal error: entered unreachable code

void FUN_00e103e0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 **ppuVar5;
  undefined1 *local_8b0;
  undefined1 *local_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined1 auStack_8a0 [712];
  int local_5d8;
  int local_5d4;
  undefined1 *local_5d0;
  undefined1 *local_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined1 auStack_5c0 [712];
  undefined1 auStack_2f8 [712];
  undefined1 *local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar4 = param_2 + 0x2c8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x590)) {
  case 0:
    FUN_01bed4e2(iVar4,param_2,0x2c8);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1f170);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1f170);
  }
  FUN_00df9fa8(&local_5d8,iVar4,param_3);
  if (local_5d8 == 0x1e && local_5d4 == 0) {
    *param_1 = &DAT_80000005;
    uVar1 = 3;
  }
  else {
    ppuVar5 = &local_30;
    local_30 = local_5cc;
    uStack_2c = uStack_5c8;
    uStack_28 = uStack_5c4;
    FUN_01bed4e2(auStack_2f8,auStack_5c0,0x2c8);
    FUN_00df9ef8(iVar4);
    if (!(local_5d8 == 0x1d && local_5d4 == 0)) {
      FUN_01bed4e2(auStack_8a0,auStack_2f8,0x2c8);
      local_8ac = local_30;
      uStack_8a8 = uStack_2c;
      uStack_8a4 = uStack_28;
      local_8b0 = local_5d0;
      if (local_5d8 != 6 || local_5d4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1f170);
      }
      ppuVar5 = &local_8b0;
      local_5d0 = &DAT_80000004;
    }
    puVar2 = ppuVar5[1];
    puVar3 = ppuVar5[2];
    param_1[1] = *ppuVar5;
    param_1[2] = puVar2;
    param_1[3] = puVar3;
    uVar1 = 1;
    *param_1 = local_5d0;
  }
  *(undefined1 *)(param_2 + 0x590) = uVar1;
  return;
}

