// FUN_0124b6c4 @ 0124b6c4 size=856 calls_out=6 calls_in=0
// strings: 

void FUN_0124b6c4(int *param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  char *pcVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  uint local_8c;
  undefined4 *local_88;
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
  int local_40 [2];
  undefined4 *local_38;
  uint local_34;
  undefined4 *local_30;
  uint uStack_2c;
  int local_28;
  
  if (*param_3 != '\x04') {
    *param_1 = -0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  uVar5 = *(uint *)(param_2 + 0x14);
  uVar9 = *(uint *)(param_3 + 0xc);
  uVar8 = uVar9 - uVar5;
  if (uVar9 < uVar5) {
    uVar8 = 0;
  }
  bVar13 = 0x3fffffe < uVar8;
  bVar12 = uVar8 == 0x3ffffff;
  uVar1 = uVar8 * 0x40;
  if (uVar8 < 0x4000000) {
    bVar13 = 0x7ffffffb < uVar1;
    bVar12 = uVar1 == 0x7ffffffc;
  }
  if (bVar13 && !bVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (uVar1 == 0) {
    puVar4 = (undefined4 *)&DAT_00000004;
    uVar8 = 0;
  }
  else {
    puVar4 = (undefined4 *)thunk_FUN_016d4a50(uVar1);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar1);
    }
  }
  iVar10 = *(int *)(param_3 + 8);
  local_84 = 0;
  local_8c = uVar8;
  local_88 = puVar4;
  if (uVar5 == 0) {
    iVar11 = iVar10;
    if (uVar9 == 0) goto LAB_0124b8d4;
  }
  else {
    if (uVar9 <= uVar5) goto LAB_0124b8d4;
    iVar11 = iVar10 + uVar5 * 0x18;
  }
  local_40[0] = -0x7fffffff;
  local_40[1] = uVar5;
  local_34 = param_4;
  FUN_011c9534(&local_80,param_2,iVar11,local_40,param_5,param_6);
  if (uVar8 == 0) {
    FUN_011ca644(&local_8c);
    puVar4 = local_88;
  }
  *puVar4 = local_80;
  puVar4[1] = local_7c;
  puVar4[2] = local_78;
  puVar4[3] = uStack_74;
  puVar4[4] = local_70;
  uVar8 = 1;
  puVar4[5] = local_6c;
  puVar4[6] = uStack_68;
  puVar4[7] = uStack_64;
  puVar4[8] = uStack_60;
  puVar4[9] = uStack_5c;
  puVar4[10] = local_58;
  puVar4[0xb] = uStack_54;
  puVar4[0xc] = uStack_50;
  puVar4[0xd] = uStack_4c;
  puVar4[0xe] = uStack_48;
  puVar4[0xf] = uStack_44;
  while (iVar11 = iVar11 + 0x18, local_84 = uVar8, iVar11 != iVar10 + uVar9 * 0x18) {
    local_40[1] = uVar5 + uVar8;
    local_40[0] = -0x7fffffff;
    local_34 = param_4;
    FUN_011c9534(&local_80,param_2,iVar11,local_40,param_5,param_6);
    if (uVar8 == local_8c) {
      FUN_011ca644(&local_8c);
      puVar4 = local_88;
    }
    puVar6 = puVar4 + uVar8 * 0x10;
    uVar8 = uVar8 + 1;
    *puVar6 = local_80;
    puVar6[1] = local_7c;
    puVar6[2] = local_78;
    puVar6[3] = uStack_74;
    puVar6[4] = local_70;
    puVar6[5] = local_6c;
    puVar6[6] = uStack_68;
    puVar6[7] = uStack_64;
    puVar6[8] = uStack_60;
    puVar6[9] = uStack_5c;
    puVar6[10] = local_58;
    puVar6[0xb] = uStack_54;
    puVar6[0xc] = uStack_50;
    puVar6[0xd] = uStack_4c;
    puVar6[0xe] = uStack_48;
    puVar6[0xf] = uStack_44;
  }
LAB_0124b8d4:
  uVar3 = 0;
  puVar6 = puVar4;
  iVar10 = local_84 << 6;
  if (uVar5 < uVar9) {
    uVar3 = 1;
  }
  do {
    iVar11 = iVar10;
    if (iVar11 == 0) {
      local_30 = (undefined4 *)0x0;
      local_40[0] = -0x80000000;
      local_40[1] = local_8c;
      local_38 = puVar4;
      local_34 = local_84;
      goto LAB_0124b940;
    }
    pcVar2 = (char *)(puVar6 + 0xf);
    puVar6 = puVar6 + 0x10;
    iVar10 = iVar11 + -0x40;
  } while (*pcVar2 != '\0');
  local_40[0] = 0;
  local_28 = 0;
  local_38 = (undefined4 *)0x0;
  local_40[1] = 4;
  local_34 = local_8c;
  local_30 = puVar4;
  uStack_2c = local_84;
LAB_0124b940:
  local_78 = CONCAT31(CONCAT21(local_78._2_2_,uVar3),1);
  local_7c = 1;
  local_80 = 1;
  puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x20);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x20);
  }
  *puVar4 = local_80;
  puVar4[1] = local_7c;
  puVar4[2] = local_78;
  puVar4[3] = uStack_74;
  iVar10 = 0x18;
  if (iVar11 == 0) {
    iVar10 = 0x10;
  }
  puVar4[4] = local_70;
  puVar4[5] = local_6c;
  puVar4[6] = uStack_68;
  puVar4[7] = uStack_64;
  piVar7 = *(int **)((int)local_40 + iVar10);
  if (piVar7 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar7;
      bVar12 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar12);
    *piVar7 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01353488(*(undefined4 *)((int)local_40 + iVar10));
    }
  }
  *(undefined4 **)((int)local_40 + iVar10) = puVar4;
  *param_1 = local_40[0];
  param_1[1] = local_40[1];
  param_1[2] = (int)local_38;
  param_1[3] = local_34;
  param_1[4] = (int)local_30;
  param_1[5] = uStack_2c;
  param_1[6] = local_28;
  return;
}

