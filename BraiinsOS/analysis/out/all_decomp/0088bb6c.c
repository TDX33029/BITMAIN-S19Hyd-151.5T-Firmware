// FUN_0088bb6c @ 0088bb6c size=628 calls_out=11 calls_in=0
// strings: 

undefined4 FUN_0088bb6c(int param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 local_150;
  int *local_14c;
  uint local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  uint local_134;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x144)) {
  case 0:
    *(undefined1 *)(param_1 + 0x145) = 1;
    FUN_016dd1aa(&local_150,param_1,0x128);
    iVar9 = thunk_FUN_016d4a50(0x128);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x128);
    }
    FUN_016dd1aa(iVar9,param_1,0x128);
    *(undefined1 *)(param_1 + 0x145) = 0;
    local_150 = *(undefined4 *)(param_1 + 0x138);
    local_14c = *(int **)(param_1 + 0x13c);
    local_148 = *(uint *)(param_1 + 0x140);
    local_134 = local_134 & 0xffffff00;
    puVar8 = (undefined4 *)thunk_FUN_016d4a50(0x20);
    if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x20);
    }
    *puVar8 = local_150;
    puVar8[1] = local_14c;
    puVar8[2] = local_148;
    puVar8[3] = uStack_144;
    puVar8[4] = local_140;
    puVar8[5] = uStack_13c;
    puVar8[6] = uStack_138;
    puVar8[7] = local_134;
    *(int *)(param_1 + 0x128) = iVar9;
    *(undefined **)(param_1 + 300) = &DAT_0185e43c;
    *(undefined4 **)(param_1 + 0x130) = puVar8;
    *(undefined **)(param_1 + 0x134) = &DAT_0185ebb8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01876cbc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01876cbc);
  case 3:
    iVar9 = *(int *)(param_1 + 0x128);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00408976,0x18,&DAT_018a4d54);
    }
  }
  puVar10 = *(undefined4 **)(param_1 + 300);
  (*(code *)puVar10[3])(iVar9,param_2);
  puVar8 = *(undefined4 **)(param_1 + 0x134);
  uVar6 = *(undefined4 *)(param_1 + 0x130);
  (*(code *)puVar8[3])(&local_150,uVar6,param_2);
  piVar2 = local_14c;
  uVar3 = local_150;
  uVar7 = local_148 & 0xff;
  if (uVar7 == 3) {
    uVar5 = 3;
    uVar3 = 1;
  }
  else {
    pcVar4 = (code *)*puVar8;
    *(undefined4 *)(param_1 + 0x128) = 0;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar6);
    }
    if (puVar8[1] != 0) {
      thunk_FUN_016d3fb4(uVar6);
    }
    FUN_00887914((undefined4 *)(param_1 + 0x128));
    if (uVar7 == 2) {
      if ((code *)*puVar10 != (code *)0x0) {
        (*(code *)*puVar10)(iVar9);
      }
      uVar5 = 1;
      uVar3 = 0;
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(iVar9);
        *(undefined1 *)(param_1 + 0x144) = 1;
        return 0;
      }
    }
    else {
      local_150 = uVar3;
      if ((code *)*puVar10 != (code *)0x0) {
        (*(code *)*puVar10)(iVar9);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(iVar9);
      }
      FUN_0076b120(uVar3);
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar9 + -1;
      uVar5 = 1;
      uVar3 = 0;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(piVar2);
        *(undefined1 *)(param_1 + 0x144) = 1;
        return 0;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x144) = uVar5;
  return uVar3;
}

