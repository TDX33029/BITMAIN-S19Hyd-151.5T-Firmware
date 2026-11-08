// FUN_00f90294 @ 00f90294 size=1052 calls_out=9 calls_in=1
// strings: 

void FUN_00f90294(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  int local_a4;
  int local_a0 [2];
  int local_98;
  int local_94;
  int local_90;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60 [2];
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  FUN_00f8a844(param_2,0);
  local_68 = 0;
  local_6c = 0;
  local_74 = 0;
  local_78 = 0;
  local_80 = 0;
  local_54 = 0;
  local_50 = 0;
  local_60[0] = 0;
  local_70 = 4;
  local_7c = 4;
  local_a0[0] = 2;
  local_58 = param_2;
  piVar1 = (int *)FUN_00f74c20(local_60,local_a0,param_3,param_4);
  puVar8 = &local_80;
  if (piVar1 != (int *)0x0) {
    uVar2 = (uint)*(byte *)(param_2 + 0x144);
    bVar14 = (*(byte *)(param_2 + 0x144) & 1) == 0;
    if (bVar14) {
      uVar2 = *(uint *)(param_2 + 0x148);
    }
    if ((bVar14 && (uVar2 & 1) == 0) || ((*(byte *)((int)piVar1 + 0xbd) & 0x1d) == 0xc)) {
      *param_1 = 0x80000000;
      param_1[1] = piVar1;
      FUN_00f90750(puVar8);
      if (local_a0[0] == 2) {
        return;
      }
      puVar8 = (undefined4 *)(local_94 + 4);
      for (iVar6 = local_90; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (puVar8[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar8);
        }
        puVar8 = puVar8 + 3;
      }
      if (local_98 == 0) {
        return;
      }
      iVar9 = local_94;
      goto LAB_00f9068c;
    }
    if (piVar1[4] != 0) {
      thunk_FUN_016d3fb4(piVar1[5]);
    }
    iVar6 = piVar1[8];
    for (iVar9 = piVar1[9]; iVar9 != 0; iVar9 = iVar9 + -1) {
      FUN_00f74b44(iVar6);
      iVar6 = iVar6 + 0x10;
    }
    if (piVar1[7] != 0) {
      thunk_FUN_016d3fb4(piVar1[8]);
    }
    iVar6 = *piVar1;
    bVar14 = iVar6 != 2;
    if (bVar14) {
      iVar6 = piVar1[1];
    }
    if (bVar14 && iVar6 != 0) {
      thunk_FUN_016d3fb4(piVar1[2]);
      iVar6 = piVar1[0xd];
    }
    else {
      iVar6 = piVar1[0xd];
    }
    if (iVar6 != 0) {
      puVar10 = (undefined4 *)piVar1[0xe];
      pcVar5 = (code *)*puVar10;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(iVar6);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(iVar6);
      }
    }
    if ((-0x7fffffff < piVar1[10]) && (piVar1[10] != 0)) {
      thunk_FUN_016d3fb4(piVar1[0xb]);
    }
    thunk_FUN_016d3fb4(piVar1);
  }
  iVar6 = 0;
  local_44 = 0;
  local_a4 = 4;
  local_48 = 4;
  local_4c = 0;
  while( true ) {
    iVar7 = *(int *)(param_2 + 0x48);
    iVar11 = *(int *)(param_2 + 0x4c);
    puVar10 = (undefined4 *)&DAT_00000134;
    iVar9 = iVar7;
    while (iVar3 = iVar9, iVar3 != iVar11 * 0x134 + iVar7) {
      puVar10 = (undefined4 *)(uint)*(byte *)(iVar3 + 0x11c);
      iVar9 = iVar3 + 0x134;
      if ((*(byte *)(iVar3 + 0x11c) & 2) != 0) {
        uVar12 = *(undefined4 *)(iVar3 + 0x114);
        uVar13 = *(undefined4 *)(iVar3 + 0x118);
        if (iVar6 == local_4c) {
          FUN_00f991dc(&local_4c,iVar6,1,4,8);
          local_a4 = local_48;
        }
        puVar10 = (undefined4 *)(local_a4 + iVar6 * 8);
        *puVar10 = uVar12;
        iVar6 = iVar6 + 1;
        puVar10[1] = uVar13;
        local_44 = iVar6;
      }
    }
    iVar9 = puVar8[6];
    if (iVar9 != 0) {
      puVar10 = *(undefined4 **)(param_2 + 100);
    }
    if (iVar9 == 0 || puVar10 == (undefined4 *)0x0) break;
    param_2 = *(int *)(param_2 + 0x60);
    iVar11 = (int)puVar10 * 0x16c + param_2;
    uVar12 = *(undefined4 *)(iVar9 + 4);
    iVar7 = *(int *)(iVar9 + 8);
    while ((iVar7 != *(int *)(param_2 + 0x120) ||
           (iVar3 = thunk_FUN_016dd50a(uVar12,*(undefined4 *)(param_2 + 0x11c),iVar7), iVar3 != 0)))
    {
      if (*(int *)(param_2 + 0x28) != 0) {
        piVar1 = (int *)(*(int *)(param_2 + 0x24) + 4);
        iVar3 = *(int *)(param_2 + 0x28) * 0xc;
        do {
          if ((iVar7 == *piVar1) &&
             (iVar4 = thunk_FUN_016dd50a(uVar12,piVar1[-1],iVar7), iVar4 == 0)) goto LAB_00f90514;
          piVar1 = piVar1 + 3;
          iVar3 = iVar3 + -0xc;
        } while (iVar3 != 0);
      }
      param_2 = param_2 + 0x16c;
      if (param_2 == iVar11) goto LAB_00f9059c;
    }
LAB_00f90514:
    puVar8 = (undefined4 *)(iVar9 + 0xc);
  }
LAB_00f9059c:
  iVar9 = local_48;
  local_2c = 0;
  local_30 = 4;
  local_34 = 0;
  local_38 = 0;
  local_3c = 4;
  local_40 = 0;
  FUN_00f9b93c(local_a0,local_48,iVar6,&local_40);
  FUN_00f9b0ec(&local_40);
  local_40 = local_80;
  local_3c = local_7c;
  local_38 = local_78;
  local_34 = local_74;
  local_30 = local_70;
  local_2c = local_6c;
  uStack_28 = local_68;
  if (local_a0[0] != 2) {
    puVar8 = (undefined4 *)(local_94 + 4);
    for (iVar6 = local_90; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (puVar8[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar8);
      }
      puVar8 = puVar8 + 3;
    }
    if (local_98 != 0) {
      thunk_FUN_016d3fb4(local_94);
    }
  }
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = local_38;
  param_1[3] = local_34;
  param_1[4] = local_30;
  param_1[5] = local_2c;
  param_1[6] = uStack_28;
  if (local_4c == 0) {
    return;
  }
LAB_00f9068c:
  thunk_FUN_016d3fb4(iVar9);
  return;
}

