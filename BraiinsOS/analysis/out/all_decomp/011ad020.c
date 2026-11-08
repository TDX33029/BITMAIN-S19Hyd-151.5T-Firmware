// FUN_011ad020 @ 011ad020 size=744 calls_out=6 calls_in=0
// strings: 

void FUN_011ad020(int *param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  uint local_8c;
  int local_88;
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint uStack_68;
  undefined4 local_64;
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
  
  if ((*param_3 != '\x04') || (uVar8 = *(uint *)(param_3 + 0xc), uVar8 == 0)) {
    *param_1 = -0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  uVar12 = *(uint *)(param_2 + 8);
  uVar7 = uVar12;
  if (uVar8 < uVar12) {
    uVar7 = uVar8;
  }
  bVar14 = 0x3fffffe < uVar7;
  bVar13 = uVar7 == 0x3ffffff;
  uVar1 = uVar7 * 0x40;
  if (uVar7 < 0x4000000) {
    bVar14 = 0x7ffffffb < uVar1;
    bVar13 = uVar1 == 0x7ffffffc;
  }
  if (bVar14 && !bVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar1);
  }
  if (uVar1 == 0) {
    iVar3 = 4;
    local_8c = 0;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(uVar1);
    local_8c = uVar7;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar1);
    }
  }
  iVar10 = *(int *)(param_3 + 8);
  iVar11 = *(int *)(param_2 + 4);
  local_84 = 0;
  local_88 = iVar3;
  if (uVar12 == 0) {
    uVar12 = 0;
  }
  else {
    do {
      uVar12 = local_84;
      local_40[0] = -0x7fffffff;
      local_40[1] = local_84;
      local_40[3] = param_4;
      FUN_011c9534(&local_80,iVar11,iVar10,local_40,param_5,param_6);
      if (uVar12 == local_8c) {
        FUN_011ca644(&local_8c);
        iVar3 = local_88;
      }
      puVar4 = (undefined4 *)(iVar3 + uVar12 * 0x40);
      local_84 = uVar12 + 1;
      iVar10 = iVar10 + 0x18;
      *puVar4 = local_80;
      puVar4[1] = local_7c;
      puVar4[2] = local_78;
      puVar4[3] = uStack_74;
      puVar4[4] = local_70;
      iVar11 = iVar11 + 0x14;
      puVar4[5] = local_6c;
      puVar4[6] = uStack_68;
      puVar4[7] = local_64;
      puVar4[8] = uStack_60;
      puVar4[9] = uStack_5c;
      puVar4[10] = local_58;
      puVar4[0xb] = uStack_54;
      puVar4[0xc] = uStack_50;
      puVar4[0xd] = uStack_4c;
      puVar4[0xe] = uStack_48;
      puVar4[0xf] = uStack_44;
    } while (uVar7 != local_84);
  }
  uVar5 = 2;
  if (local_84 == uVar8) {
    uVar5 = 1;
  }
  iVar10 = iVar3;
  iVar11 = local_84 << 6;
  do {
    iVar9 = iVar11;
    if (iVar9 == 0) {
      local_30 = 0;
      local_40[0] = -0x80000000;
      local_40[1] = local_8c;
      local_40[2] = iVar3;
      local_40[3] = local_84;
      goto LAB_011ad23c;
    }
    pcVar2 = (char *)(iVar10 + 0x3c);
    iVar10 = iVar10 + 0x40;
    iVar11 = iVar9 + -0x40;
  } while (*pcVar2 != '\0');
  local_40[0] = 0;
  local_40[3] = local_8c;
  local_28 = 0;
  local_40[2] = 0;
  local_40[1] = 4;
  local_30 = iVar3;
  local_2c = local_84;
LAB_011ad23c:
  local_70 = 0;
  local_6c = 0;
  local_64 = 0;
  local_78 = CONCAT22(local_78._2_2_,0x100);
  local_7c = 1;
  local_80 = 1;
  local_78 = CONCAT31(local_78._1_3_,uVar5);
  uStack_68 = uVar12;
  puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x20);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x20);
  }
  *puVar4 = local_80;
  puVar4[1] = local_7c;
  puVar4[2] = local_78;
  puVar4[3] = uStack_74;
  iVar3 = 0x18;
  if (iVar9 == 0) {
    iVar3 = 0x10;
  }
  puVar4[4] = local_70;
  puVar4[5] = local_6c;
  puVar4[6] = uStack_68;
  puVar4[7] = local_64;
  piVar6 = *(int **)((int)local_40 + iVar3);
  if (piVar6 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar6;
      bVar13 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar13);
    *piVar6 = iVar10 + -1;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01353488(*(undefined4 *)((int)local_40 + iVar3));
    }
  }
  *(undefined4 **)((int)local_40 + iVar3) = puVar4;
  *param_1 = local_40[0];
  param_1[1] = local_40[1];
  param_1[2] = local_40[2];
  param_1[3] = local_40[3];
  param_1[4] = local_30;
  param_1[5] = local_2c;
  param_1[6] = local_28;
  return;
}

