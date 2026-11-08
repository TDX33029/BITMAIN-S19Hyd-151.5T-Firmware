// FUN_00cbdf64 @ 00cbdf64 size=532 calls_out=10 calls_in=0
// strings: 

undefined1 FUN_00cbdf64(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_a0;
  int *local_9c;
  uint local_98;
  undefined4 local_94;
  undefined4 *local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint local_84;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x94)) {
  case 0:
    *(undefined1 *)(param_1 + 0x95) = 1;
    FUN_016dd1aa(&local_a0,param_1,0x78);
    iVar5 = thunk_FUN_016d4a50(0x78);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x78);
    }
    FUN_016dd1aa(iVar5,param_1,0x78);
    *(undefined1 *)(param_1 + 0x95) = 0;
    local_a0 = *(undefined4 *)(param_1 + 0x88);
    local_9c = *(int **)(param_1 + 0x8c);
    local_98 = *(uint *)(param_1 + 0x90);
    local_84 = local_84 & 0xffffff00;
    puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x20);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x20);
    }
    *puVar4 = local_a0;
    puVar4[1] = local_9c;
    puVar4[2] = local_98;
    puVar4[3] = local_94;
    puVar4[4] = local_90;
    puVar4[5] = uStack_8c;
    puVar4[6] = uStack_88;
    puVar4[7] = local_84;
    *(int *)(param_1 + 0x78) = iVar5;
    *(undefined **)(param_1 + 0x7c) = &DAT_01873ec8;
    *(undefined4 **)(param_1 + 0x80) = puVar4;
    *(undefined **)(param_1 + 0x84) = &DAT_01876f9c;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01876cbc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01876cbc);
  }
  FUN_00bbba60(&local_a0,param_1 + 0x78,param_2);
  piVar3 = local_9c;
  uVar2 = local_a0;
  uVar6 = local_98 & 0xff;
  if (uVar6 == 4) {
    *(undefined1 *)(param_1 + 0x94) = 3;
    return 2;
  }
  FUN_00887914(param_1 + 0x78);
  if (uVar6 == 3) {
    if ((code *)*piVar3 != (code *)0x0) {
      (*(code *)*piVar3)(uVar2);
    }
    if (piVar3[1] == 0) goto LAB_00cbe13c;
    local_94 = uVar2;
  }
  else {
    if (uVar6 != 2) {
      local_a0 = uVar2;
      if ((code *)*local_90 != (code *)0x0) {
        (*(code *)*local_90)(local_94);
      }
      if (local_90[1] != 0) {
        thunk_FUN_016d3fb4(local_94);
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
      goto LAB_00cbe13c;
    }
    if ((code *)*local_90 != (code *)0x0) {
      (*(code *)*local_90)(local_94);
    }
    if (local_90[1] == 0) goto LAB_00cbe13c;
  }
  thunk_FUN_016d3fb4(local_94);
LAB_00cbe13c:
  *(undefined1 *)(param_1 + 0x94) = 1;
  return uVar6 == 3;
}

