// FUN_00cbdb78 @ 00cbdb78 size=556 calls_out=10 calls_in=1
// strings: 

undefined1 FUN_00cbdb78(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_c30;
  int *local_c2c;
  uint local_c28;
  undefined4 local_c24;
  undefined4 *local_c20;
  undefined4 uStack_c1c;
  undefined4 uStack_c18;
  uint local_c14;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xc24)) {
  case 0:
    *(undefined1 *)(param_1 + 0xc25) = 1;
    FUN_016dd1aa(&local_c30,param_1,0xc08);
    iVar5 = thunk_FUN_016d4a50(0xc08);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0xc08);
    }
    FUN_016dd1aa(iVar5,param_1,0xc08);
    local_c30 = *(undefined4 *)(param_1 + 0xc18);
    *(undefined1 *)(param_1 + 0xc25) = 0;
    local_c14 = local_c14 & 0xffffff00;
    local_c2c = *(int **)(param_1 + 0xc1c);
    local_c28 = *(uint *)(param_1 + 0xc20);
    puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x20);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x20);
    }
    *puVar4 = local_c30;
    puVar4[1] = local_c2c;
    puVar4[2] = local_c28;
    puVar4[3] = local_c24;
    puVar4[4] = local_c20;
    puVar4[5] = uStack_c1c;
    puVar4[6] = uStack_c18;
    puVar4[7] = local_c14;
    *(int *)(param_1 + 0xc08) = iVar5;
    *(undefined **)(param_1 + 0xc0c) = &DAT_0186f178;
    *(undefined4 **)(param_1 + 0xc10) = puVar4;
    *(undefined **)(param_1 + 0xc14) = &DAT_01876f9c;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01876cbc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01876cbc);
  }
  FUN_00bbba60(&local_c30,param_1 + 0xc08,param_2);
  piVar3 = local_c2c;
  uVar2 = local_c30;
  uVar6 = local_c28 & 0xff;
  if (uVar6 == 4) {
    *(undefined1 *)(param_1 + 0xc24) = 3;
    return 2;
  }
  FUN_00887914(param_1 + 0xc08);
  if (uVar6 == 3) {
    if ((code *)*piVar3 != (code *)0x0) {
      (*(code *)*piVar3)(uVar2);
    }
    if (piVar3[1] == 0) goto LAB_00cbdd64;
    local_c24 = uVar2;
  }
  else {
    if (uVar6 != 2) {
      local_c30 = uVar2;
      if ((code *)*local_c20 != (code *)0x0) {
        (*(code *)*local_c20)(local_c24);
      }
      if (local_c20[1] != 0) {
        thunk_FUN_016d3fb4(local_c24);
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
      goto LAB_00cbdd64;
    }
    if ((code *)*local_c20 != (code *)0x0) {
      (*(code *)*local_c20)(local_c24);
    }
    if (local_c20[1] == 0) goto LAB_00cbdd64;
  }
  thunk_FUN_016d3fb4(local_c24);
LAB_00cbdd64:
  *(undefined1 *)(param_1 + 0xc24) = 1;
  return uVar6 == 3;
}

