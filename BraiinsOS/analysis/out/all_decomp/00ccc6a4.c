// FUN_00ccc6a4 @ 00ccc6a4 size=532 calls_out=10 calls_in=0
// strings: 

undefined1 FUN_00ccc6a4(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_a8;
  int *local_a4;
  uint local_a0;
  undefined4 local_9c;
  undefined4 *local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint local_8c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x9c)) {
  case 0:
    *(undefined1 *)(param_1 + 0x9d) = 1;
    FUN_016dd1aa(&local_a8,param_1,0x80);
    iVar5 = thunk_FUN_016d4a50(0x80);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar5,param_1,0x80);
    *(undefined1 *)(param_1 + 0x9d) = 0;
    local_a8 = *(undefined4 *)(param_1 + 0x90);
    local_a4 = *(int **)(param_1 + 0x94);
    local_a0 = *(uint *)(param_1 + 0x98);
    local_8c = local_8c & 0xffffff00;
    puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x20);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x20);
    }
    *puVar4 = local_a8;
    puVar4[1] = local_a4;
    puVar4[2] = local_a0;
    puVar4[3] = local_9c;
    puVar4[4] = local_98;
    puVar4[5] = uStack_94;
    puVar4[6] = uStack_90;
    puVar4[7] = local_8c;
    *(int *)(param_1 + 0x80) = iVar5;
    *(undefined **)(param_1 + 0x84) = &DAT_01873ee8;
    *(undefined4 **)(param_1 + 0x88) = puVar4;
    *(undefined **)(param_1 + 0x8c) = &DAT_01876f9c;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01876cbc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01876cbc);
  }
  FUN_00bbba60(&local_a8,param_1 + 0x80,param_2);
  piVar3 = local_a4;
  uVar2 = local_a8;
  uVar6 = local_a0 & 0xff;
  if (uVar6 == 4) {
    *(undefined1 *)(param_1 + 0x9c) = 3;
    return 2;
  }
  FUN_00887914(param_1 + 0x80);
  if (uVar6 == 3) {
    if ((code *)*piVar3 != (code *)0x0) {
      (*(code *)*piVar3)(uVar2);
    }
    if (piVar3[1] == 0) goto LAB_00ccc87c;
    local_9c = uVar2;
  }
  else {
    if (uVar6 != 2) {
      local_a8 = uVar2;
      if ((code *)*local_98 != (code *)0x0) {
        (*(code *)*local_98)(local_9c);
      }
      if (local_98[1] != 0) {
        thunk_FUN_016d3fb4(local_9c);
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
      goto LAB_00ccc87c;
    }
    if ((code *)*local_98 != (code *)0x0) {
      (*(code *)*local_98)(local_9c);
    }
    if (local_98[1] == 0) goto LAB_00ccc87c;
  }
  thunk_FUN_016d3fb4(local_9c);
LAB_00ccc87c:
  *(undefined1 *)(param_1 + 0x9c) = 1;
  return uVar6 == 3;
}

