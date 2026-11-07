// FUN_00ff969c @ 00ff969c size=472 calls_out=6 calls_in=1
// strings: 

void FUN_00ff969c(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_90;
  int local_8c;
  int local_88;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  int local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  puVar10 = *(uint **)(param_3 + 0xc);
  uVar1 = 9;
  if ((int)*puVar10 < 0) {
    uVar1 = *puVar10 ^ 0x80000000;
  }
  if (uVar1 == 3) {
    if ((char)puVar10[4] != '\x01') {
LAB_00ff97b0:
      local_88 = 0;
      local_8c = 1;
      local_90 = 0;
      FUN_00ffeed8(param_3,&local_90);
      local_44 = local_90;
      iStack_40 = local_8c;
      iStack_3c = local_88;
      local_48 = 6;
      goto LAB_00ff9824;
    }
  }
  else if (uVar1 == 4) {
    iVar7 = *(int *)(param_3 + 8) * 0x24;
    iVar2 = *(int *)(param_3 + 4);
    do {
      if (iVar7 == 0) goto LAB_00ff97b0;
      iVar3 = FUN_00ffee5c(iVar2);
      iVar7 = iVar7 + -0x24;
      iVar2 = iVar2 + 0x24;
    } while (iVar3 != 0);
  }
  local_4c = *(undefined1 *)(param_3 + 0x20);
  local_64 = *(undefined4 *)(param_3 + 0x10);
  local_60 = *(undefined4 *)(param_3 + 0x14);
  local_50 = *(undefined4 *)(param_3 + 0x18);
  local_54 = 0;
  local_58 = 1;
  local_5c = 0;
  local_68 = 1;
  FUN_00ff3f58(puVar10,&local_5c,1);
  FUN_00ffc1cc(&local_90,&local_68,param_2);
  puVar6 = (undefined4 *)((uint)&local_90 | 4);
  uVar8 = puVar6[1];
  uVar9 = puVar6[2];
  uVar11 = puVar6[3];
  uVar12 = puVar6[4];
  if (local_90 == 0x18) {
    *param_1 = *puVar6;
    param_1[1] = uVar8;
    param_1[2] = uVar9;
    param_1[3] = uVar11;
    param_1[4] = uVar12;
    if (local_5c == 0) {
      return;
    }
    thunk_FUN_016d3fb4(local_58);
    return;
  }
  local_48 = local_90;
  local_30 = local_78;
  iStack_2c = iStack_74;
  iStack_28 = iStack_70;
  iStack_24 = iStack_6c;
  puVar5 = (undefined4 *)((uint)&local_48 | 4);
  *puVar5 = *puVar6;
  puVar5[1] = uVar8;
  puVar5[2] = uVar9;
  puVar5[3] = uVar11;
  puVar5[4] = uVar12;
  if (local_5c != 0) {
    thunk_FUN_016d3fb4(local_58);
  }
LAB_00ff9824:
  iVar7 = *(int *)(param_2 + 0x3c);
  if (iVar7 == *(int *)(param_2 + 0x34)) {
    FUN_01000664();
  }
  piVar4 = (int *)(*(int *)(param_2 + 0x38) + iVar7 * 0x28);
  *piVar4 = local_48;
  piVar4[1] = local_44;
  piVar4[2] = iStack_40;
  piVar4[3] = iStack_3c;
  piVar4[4] = iStack_38;
  piVar4[5] = local_34;
  piVar4[6] = local_30;
  piVar4[7] = iStack_2c;
  piVar4[8] = iStack_28;
  piVar4[9] = iStack_24;
  *param_1 = 0x12;
  *(int *)(param_2 + 0x3c) = iVar7 + 1;
  return;
}

