// FUN_00c99d44 @ 00c99d44 size=532 calls_out=10 calls_in=0
// strings: 

undefined1 FUN_00c99d44(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_90;
  int *local_8c;
  uint local_88;
  undefined4 local_84;
  undefined4 *local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint local_74;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x84)) {
  case 0:
    *(undefined1 *)(param_1 + 0x85) = 1;
    FUN_016dd1aa(&local_90,param_1,0x68);
    iVar5 = thunk_FUN_016d4a50(0x68);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x68);
    }
    FUN_016dd1aa(iVar5,param_1,0x68);
    *(undefined1 *)(param_1 + 0x85) = 0;
    local_90 = *(undefined4 *)(param_1 + 0x78);
    local_8c = *(int **)(param_1 + 0x7c);
    local_88 = *(uint *)(param_1 + 0x80);
    local_74 = local_74 & 0xffffff00;
    puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x20);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x20);
    }
    *puVar4 = local_90;
    puVar4[1] = local_8c;
    puVar4[2] = local_88;
    puVar4[3] = local_84;
    puVar4[4] = local_80;
    puVar4[5] = uStack_7c;
    puVar4[6] = uStack_78;
    puVar4[7] = local_74;
    *(int *)(param_1 + 0x68) = iVar5;
    *(undefined **)(param_1 + 0x6c) = &DAT_01873ef8;
    *(undefined4 **)(param_1 + 0x70) = puVar4;
    *(undefined **)(param_1 + 0x74) = &DAT_01876f9c;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01876cbc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01876cbc);
  }
  FUN_00bbba60(&local_90,param_1 + 0x68,param_2);
  piVar3 = local_8c;
  uVar2 = local_90;
  uVar6 = local_88 & 0xff;
  if (uVar6 == 4) {
    *(undefined1 *)(param_1 + 0x84) = 3;
    return 2;
  }
  FUN_00887914(param_1 + 0x68);
  if (uVar6 == 3) {
    if ((code *)*piVar3 != (code *)0x0) {
      (*(code *)*piVar3)(uVar2);
    }
    if (piVar3[1] == 0) goto LAB_00c99f1c;
    local_84 = uVar2;
  }
  else {
    if (uVar6 != 2) {
      local_90 = uVar2;
      if ((code *)*local_80 != (code *)0x0) {
        (*(code *)*local_80)(local_84);
      }
      if (local_80[1] != 0) {
        thunk_FUN_016d3fb4(local_84);
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
      goto LAB_00c99f1c;
    }
    if ((code *)*local_80 != (code *)0x0) {
      (*(code *)*local_80)(local_84);
    }
    if (local_80[1] == 0) goto LAB_00c99f1c;
  }
  thunk_FUN_016d3fb4(local_84);
LAB_00c99f1c:
  *(undefined1 *)(param_1 + 0x84) = 1;
  return uVar6 == 3;
}

