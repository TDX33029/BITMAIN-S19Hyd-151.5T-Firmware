// FUN_00e67430 @ 00e67430 size=644 calls_out=1 calls_in=1
// strings: 

undefined4 * FUN_00e67430(uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_40 [2];
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  
  uVar9 = *param_2;
  uVar11 = param_2[1];
  if (uVar9 == 7 && uVar11 == 0) {
    uVar9 = *param_1;
    *param_1 = uVar9 + 1;
    param_1[1] = param_1[1] + (uint)(0xfffffffe < uVar9);
    return (undefined4 *)0x0;
  }
  puVar4 = (undefined1 *)param_2[8];
  uVar7 = *param_1;
  if (puVar4 == &DAT_3b9aca00) {
    iVar8 = param_1[1] + (uint)(0xfffffffc < uVar7);
    puVar4 = (undefined1 *)param_2[0xc];
  }
  else {
    uVar10 = param_2[7];
    uVar2 = 1;
    if (((uVar10 != 0 || uVar10 < (0xfa < param_2[6])) &&
        (uVar2 = 3, uVar10 != 0 || uVar10 < (0xffff < param_2[6]))) && (uVar2 = 9, uVar10 == 0)) {
      uVar2 = 5;
    }
    bVar12 = CARRY4(uVar7,uVar2);
    uVar2 = uVar7 + uVar2;
    uVar10 = 5;
    if (puVar4 < (undefined1 *)0x10000) {
      uVar10 = 3;
    }
    if (puVar4 < (undefined1 *)0xfb) {
      uVar10 = 1;
    }
    uVar7 = uVar2 + uVar10;
    iVar8 = param_1[1] + (uint)bVar12 + (uint)CARRY4(uVar2,uVar10) + (uint)(0xfffffffc < uVar7);
    puVar4 = (undefined1 *)param_2[0xc];
  }
  uVar7 = uVar7 + 3;
  if (puVar4 == &DAT_3b9aca00) {
    iVar8 = iVar8 + (uint)(0xfffffffe < uVar7);
    puVar4 = (undefined1 *)param_2[0x10];
  }
  else {
    uVar10 = param_2[0xb];
    uVar2 = 1;
    if (((uVar10 != 0 || uVar10 < (0xfa < param_2[10])) &&
        (uVar2 = 3, uVar10 != 0 || uVar10 < (0xffff < param_2[10]))) && (uVar2 = 9, uVar10 == 0)) {
      uVar2 = 5;
    }
    bVar12 = CARRY4(uVar7,uVar2);
    uVar2 = uVar7 + uVar2;
    uVar10 = 5;
    if (puVar4 < (undefined1 *)0x10000) {
      uVar10 = 3;
    }
    if (puVar4 < (undefined1 *)0xfb) {
      uVar10 = 1;
    }
    uVar7 = uVar2 + uVar10;
    iVar8 = iVar8 + (uint)bVar12 + (uint)CARRY4(uVar2,uVar10) + (uint)(0xfffffffe < uVar7);
    puVar4 = (undefined1 *)param_2[0x10];
  }
  if (puVar4 == &DAT_3b9aca00) {
    uVar2 = uVar7 + 2;
    iVar8 = iVar8 + (uint)(0xfffffffe < uVar7 + 1);
  }
  else {
    uVar10 = uVar7 + 2;
    uVar7 = iVar8 + (uint)(0xfffffffe < uVar7 + 1);
    *param_1 = uVar10;
    param_1[1] = uVar7;
    local_4c = 0;
    local_50 = 0;
    local_48 = 0;
    FUN_015f3c24(local_40,param_2 + 0xe,&local_50);
    if ((local_40[0] & 1) != 0) {
      iVar8 = thunk_FUN_016d4a50(0x28);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x28);
      }
      FUN_016dd1aa(iVar8,&DAT_003594c0,0x28);
      puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      *puVar1 = 0x28;
      puVar1[1] = iVar8;
      puVar1[2] = 0x28;
      return puVar1;
    }
    uVar3 = 1;
    if (((uStack_34 != 0 || uStack_34 < (0xfa < local_38)) &&
        (uVar3 = 3, uStack_34 != 0 || uStack_34 < (0xffff < local_38))) &&
       (uVar3 = 9, uStack_34 == 0)) {
      uVar3 = 5;
    }
    uVar5 = 5;
    if (uStack_30 < 0x10000) {
      uVar5 = 3;
    }
    if (uStack_30 < 0xfb) {
      uVar5 = 1;
    }
    uVar2 = uVar5 + uVar10 + uVar3;
    iVar8 = uVar7 + CARRY4(uVar5,uVar10) + (uint)CARRY4(uVar5 + uVar10,uVar3);
  }
  uVar7 = 5;
  if (param_2[0x12] < 0x10000) {
    uVar7 = 3;
  }
  if (param_2[0x12] < 0xfb) {
    uVar7 = 1;
  }
  uVar10 = uVar2 + uVar7;
  iVar6 = 2;
  if ((uint)(uVar9 < 5) <= -uVar11) {
    iVar6 = uVar9 - 5;
  }
  if (iVar6 == 0) {
    bVar12 = 0xfffffffe < uVar10;
    uVar10 = uVar10 + 1;
  }
  else {
    if (iVar6 != 1) {
                    /* WARNING: Could not recover jumptable at 0x00e6769c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar1 = (undefined4 *)(*(code *)(&DAT_00e676a0 + *(int *)(&DAT_00e676a0 + uVar9 * 4)))();
      return puVar1;
    }
    bVar12 = 0xfffffff6 < uVar10;
    uVar10 = uVar10 + 9;
  }
  *param_1 = uVar10;
  param_1[1] = iVar8 + (uint)CARRY4(uVar2,uVar7) + (uint)bVar12;
  return (undefined4 *)0x0;
}

