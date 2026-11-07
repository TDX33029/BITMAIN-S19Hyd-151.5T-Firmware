// FUN_00cbd7a4 @ 00cbd7a4 size=536 calls_out=10 calls_in=0
// strings: 

undefined1 FUN_00cbd7a4(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_120;
  int *local_11c;
  uint local_118;
  undefined4 local_114;
  undefined4 *local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  uint local_104;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x114)) {
  case 0:
    *(undefined1 *)(param_1 + 0x115) = 1;
    FUN_016dd1aa(&local_120,param_1,0xf8);
    iVar5 = thunk_FUN_016d4a50(0xf8);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0xf8);
    }
    FUN_016dd1aa(iVar5,param_1,0xf8);
    *(undefined1 *)(param_1 + 0x115) = 0;
    local_120 = *(undefined4 *)(param_1 + 0x108);
    local_11c = *(int **)(param_1 + 0x10c);
    local_118 = *(uint *)(param_1 + 0x110);
    local_104 = local_104 & 0xffffff00;
    puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x20);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x20);
    }
    *puVar4 = local_120;
    puVar4[1] = local_11c;
    puVar4[2] = local_118;
    puVar4[3] = local_114;
    puVar4[4] = local_110;
    puVar4[5] = uStack_10c;
    puVar4[6] = uStack_108;
    puVar4[7] = local_104;
    *(int *)(param_1 + 0xf8) = iVar5;
    *(undefined **)(param_1 + 0xfc) = &DAT_01871468;
    *(undefined4 **)(param_1 + 0x100) = puVar4;
    *(undefined **)(param_1 + 0x104) = &DAT_01876f9c;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01876cbc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01876cbc);
  }
  FUN_00bbba60(&local_120,param_1 + 0xf8,param_2);
  piVar3 = local_11c;
  uVar2 = local_120;
  uVar6 = local_118 & 0xff;
  if (uVar6 == 4) {
    *(undefined1 *)(param_1 + 0x114) = 3;
    return 2;
  }
  FUN_00887914(param_1 + 0xf8);
  if (uVar6 == 3) {
    if ((code *)*piVar3 != (code *)0x0) {
      (*(code *)*piVar3)(uVar2);
    }
    if (piVar3[1] == 0) goto LAB_00cbd980;
    local_114 = uVar2;
  }
  else {
    if (uVar6 != 2) {
      local_120 = uVar2;
      if ((code *)*local_110 != (code *)0x0) {
        (*(code *)*local_110)(local_114);
      }
      if (local_110[1] != 0) {
        thunk_FUN_016d3fb4(local_114);
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
      goto LAB_00cbd980;
    }
    if ((code *)*local_110 != (code *)0x0) {
      (*(code *)*local_110)(local_114);
    }
    if (local_110[1] == 0) goto LAB_00cbd980;
  }
  thunk_FUN_016d3fb4(local_114);
LAB_00cbd980:
  *(undefined1 *)(param_1 + 0x114) = 1;
  return uVar6 == 3;
}

