// FUN_00ccc140 @ 00ccc140 size=532 calls_out=10 calls_in=0
// strings: 

undefined1 FUN_00ccc140(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_d0;
  int *local_cc;
  uint local_c8;
  undefined4 local_c4;
  undefined4 *local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  uint local_b4;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x32)) {
  case 0:
    *(undefined1 *)((int)param_1 + 0xc9) = 1;
    FUN_016dd1aa(&local_d0,param_1 + 3,0xac);
    iVar5 = thunk_FUN_016d4a50(0xac);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xac);
    }
    FUN_016dd1aa(iVar5,param_1 + 3,0xac);
    local_d0 = *param_1;
    local_cc = (int *)param_1[1];
    local_c8 = param_1[2];
    *(undefined1 *)((int)param_1 + 0xc9) = 0;
    local_b4 = local_b4 & 0xffffff00;
    puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x20);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x20);
    }
    *puVar4 = local_d0;
    puVar4[1] = local_cc;
    puVar4[2] = local_c8;
    puVar4[3] = local_c4;
    puVar4[4] = local_c0;
    puVar4[5] = uStack_bc;
    puVar4[6] = uStack_b8;
    puVar4[7] = local_b4;
    param_1[0x2e] = iVar5;
    param_1[0x2f] = &DAT_01871458;
    param_1[0x30] = puVar4;
    param_1[0x31] = &DAT_01876f9c;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01876cbc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01876cbc);
  }
  FUN_00bbba60(&local_d0,param_1 + 0x2e,param_2);
  piVar3 = local_cc;
  uVar2 = local_d0;
  uVar6 = local_c8 & 0xff;
  if (uVar6 == 4) {
    *(undefined1 *)(param_1 + 0x32) = 3;
    return 2;
  }
  FUN_00887914(param_1 + 0x2e);
  if (uVar6 == 3) {
    if ((code *)*piVar3 != (code *)0x0) {
      (*(code *)*piVar3)(uVar2);
    }
    if (piVar3[1] == 0) goto LAB_00ccc318;
    local_c4 = uVar2;
  }
  else {
    if (uVar6 != 2) {
      local_d0 = uVar2;
      if ((code *)*local_c0 != (code *)0x0) {
        (*(code *)*local_c0)(local_c4);
      }
      if (local_c0[1] != 0) {
        thunk_FUN_016d3fb4(local_c4);
      }
      FUN_0076b120(uVar2);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(piVar3);
      }
      goto LAB_00ccc318;
    }
    if ((code *)*local_c0 != (code *)0x0) {
      (*(code *)*local_c0)(local_c4);
    }
    if (local_c0[1] == 0) goto LAB_00ccc318;
  }
  thunk_FUN_016d3fb4(local_c4);
LAB_00ccc318:
  *(undefined1 *)(param_1 + 0x32) = 1;
  return uVar6 == 3;
}

