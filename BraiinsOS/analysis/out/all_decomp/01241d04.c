// FUN_01241d04 @ 01241d04 size=676 calls_out=6 calls_in=0
// strings: 

void FUN_01241d04(int *param_1,undefined4 param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  bool bVar10;
  bool bVar11;
  uint local_8c;
  int local_88;
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_40 [4];
  int local_30;
  uint local_2c;
  int local_28;
  
  if (*param_3 != '\x04') {
    *param_1 = -0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  uVar6 = *(uint *)(param_3 + 0xc);
  bVar11 = 0x3fffffe < uVar6;
  bVar10 = uVar6 == 0x3ffffff;
  uVar1 = uVar6 * 0x40;
  if (uVar6 < 0x4000000) {
    bVar11 = 0x7ffffffb < uVar1;
    bVar10 = uVar1 == 0x7ffffffc;
  }
  if (bVar11 && !bVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (uVar1 == 0) {
    iVar3 = 4;
    local_8c = 0;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(uVar1);
    local_8c = uVar6;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar1);
    }
  }
  local_84 = 0;
  local_88 = iVar3;
  if (uVar6 != 0) {
    iVar7 = *(int *)(param_3 + 8);
    iVar8 = uVar6 * 0x18;
    do {
      uVar1 = local_84;
      local_40[0] = -0x7fffffff;
      local_40[1] = local_84;
      local_40[3] = param_4;
      FUN_011c9534(&local_80,param_2,iVar7,local_40,param_5,param_6);
      if (uVar1 == local_8c) {
        FUN_011ca644(&local_8c);
        iVar3 = local_88;
      }
      puVar9 = (undefined4 *)(iVar3 + uVar1 * 0x40);
      local_84 = uVar1 + 1;
      iVar7 = iVar7 + 0x18;
      *puVar9 = local_80;
      puVar9[1] = local_7c;
      puVar9[2] = local_78;
      puVar9[3] = uStack_74;
      puVar9[4] = local_70;
      iVar8 = iVar8 + -0x18;
      puVar9[5] = local_6c;
      puVar9[6] = uStack_68;
      puVar9[7] = uStack_64;
      puVar9[8] = uStack_60;
      puVar9[9] = uStack_5c;
      puVar9[10] = local_58;
      puVar9[0xb] = uStack_54;
      puVar9[0xc] = uStack_50;
      puVar9[0xd] = uStack_4c;
      puVar9[0xe] = uStack_48;
      puVar9[0xf] = uStack_44;
    } while (iVar8 != 0);
  }
  iVar8 = iVar3;
  iVar7 = local_84 << 6;
  do {
    iVar5 = iVar7;
    if (iVar5 == 0) {
      local_40[0] = -0x80000000;
      local_30 = 0;
      local_40[1] = local_8c;
      local_40[2] = iVar3;
      local_40[3] = local_84;
      goto LAB_01241eec;
    }
    pcVar2 = (char *)(iVar8 + 0x3c);
    iVar8 = iVar8 + 0x40;
    iVar7 = iVar5 + -0x40;
  } while (*pcVar2 != '\0');
  local_40[0] = 0;
  local_28 = 0;
  local_40[2] = 0;
  local_40[1] = 4;
  local_40[3] = local_8c;
  local_30 = iVar3;
  local_2c = local_84;
LAB_01241eec:
  local_7c = 1;
  local_80 = 1;
  local_78._0_2_ = CONCAT11(uVar6 != 0,1);
  puVar9 = (undefined4 *)thunk_FUN_016d4a50(0x20);
  if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x20);
  }
  *puVar9 = local_80;
  puVar9[1] = local_7c;
  puVar9[2] = local_78;
  puVar9[3] = uStack_74;
  puVar9[4] = local_70;
  puVar9[5] = local_6c;
  puVar9[6] = uStack_68;
  puVar9[7] = uStack_64;
  iVar3 = 0x18;
  if (iVar5 == 0) {
    iVar3 = 0x10;
  }
  piVar4 = *(int **)((int)local_40 + iVar3);
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar4;
      bVar10 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar10);
    *piVar4 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01353488(*(undefined4 *)((int)local_40 + iVar3));
    }
  }
  *(undefined4 **)((int)local_40 + iVar3) = puVar9;
  *param_1 = local_40[0];
  param_1[1] = local_40[1];
  param_1[2] = local_40[2];
  param_1[3] = local_40[3];
  param_1[4] = local_30;
  param_1[5] = local_2c;
  param_1[6] = local_28;
  return;
}

