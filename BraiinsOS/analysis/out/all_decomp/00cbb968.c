// FUN_00cbb968 @ 00cbb968 size=548 calls_out=10 calls_in=0
// strings: 

undefined1 FUN_00cbb968(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_7f8;
  int *local_7f4;
  uint local_7f0;
  undefined4 local_7ec;
  undefined4 *local_7e8;
  undefined4 uStack_7e4;
  undefined4 uStack_7e0;
  uint local_7dc;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x7ec)) {
  case 0:
    *(undefined1 *)(param_1 + 0x7ed) = 1;
    FUN_016dd1aa(&local_7f8,param_1,2000);
    iVar5 = thunk_FUN_016d4a50(2000);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,2000);
    }
    FUN_016dd1aa(iVar5,param_1,2000);
    *(undefined1 *)(param_1 + 0x7ed) = 0;
    local_7f8 = *(undefined4 *)(param_1 + 0x7e0);
    local_7f4 = *(int **)(param_1 + 0x7e4);
    local_7f0 = *(uint *)(param_1 + 0x7e8);
    local_7dc = local_7dc & 0xffffff00;
    puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x20);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x20);
    }
    *puVar4 = local_7f8;
    puVar4[1] = local_7f4;
    puVar4[2] = local_7f0;
    puVar4[3] = local_7ec;
    puVar4[4] = local_7e8;
    puVar4[5] = uStack_7e4;
    puVar4[6] = uStack_7e0;
    puVar4[7] = local_7dc;
    *(int *)(param_1 + 2000) = iVar5;
    *(undefined **)(param_1 + 0x7d4) = &DAT_01871448;
    *(undefined4 **)(param_1 + 0x7d8) = puVar4;
    *(undefined **)(param_1 + 0x7dc) = &DAT_01876f9c;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01876cbc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01876cbc);
  }
  FUN_00bbba60(&local_7f8,param_1 + 2000,param_2);
  piVar3 = local_7f4;
  uVar2 = local_7f8;
  uVar6 = local_7f0 & 0xff;
  if (uVar6 == 4) {
    *(undefined1 *)(param_1 + 0x7ec) = 3;
    return 2;
  }
  FUN_00887914(param_1 + 2000);
  if (uVar6 == 3) {
    if ((code *)*piVar3 != (code *)0x0) {
      (*(code *)*piVar3)(uVar2);
    }
    if (piVar3[1] == 0) goto LAB_00cbbb4c;
    local_7ec = uVar2;
  }
  else {
    if (uVar6 != 2) {
      local_7f8 = uVar2;
      if ((code *)*local_7e8 != (code *)0x0) {
        (*(code *)*local_7e8)(local_7ec);
      }
      if (local_7e8[1] != 0) {
        thunk_FUN_016d3fb4(local_7ec);
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
      goto LAB_00cbbb4c;
    }
    if ((code *)*local_7e8 != (code *)0x0) {
      (*(code *)*local_7e8)(local_7ec);
    }
    if (local_7e8[1] == 0) goto LAB_00cbbb4c;
  }
  thunk_FUN_016d3fb4(local_7ec);
LAB_00cbbb4c:
  *(undefined1 *)(param_1 + 0x7ec) = 1;
  return uVar6 == 3;
}

