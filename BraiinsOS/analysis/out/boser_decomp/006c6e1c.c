// FUN_006c6e1c @ 006c6e1c size=752 calls_out=8 calls_in=1
// strings: 

void FUN_006c6e1c(int *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  undefined4 *local_9c;
  int iStack_98;
  int local_94;
  int local_90;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  local_9c = &DAT_0056d238;
  iStack_98 = 0;
  local_94 = 0;
  local_90 = 0;
  local_a0 = 0;
  local_a4 = 8;
  local_a8 = 0;
  FUN_006dffd8(&local_58,param_2 + 0xc);
  local_9c = (undefined4 *)local_58;
  iStack_98 = iStack_54;
  local_94 = iStack_50;
  local_90 = iStack_4c;
  uVar10 = *(uint *)(param_2 + 8);
  if (uVar10 == 0) {
    local_ac = *(int *)(param_2 + 4);
    local_a0 = 0;
  }
  else {
    uVar8 = 0x1ffffff;
    if ((uint)(iStack_50 + iStack_4c) < 0x1ffffff) {
      uVar8 = iStack_50 + iStack_4c;
    }
    uVar13 = 0;
    if ((uVar8 <= uVar10) ||
       (iVar3 = FUN_00702534(&local_a8,0), uVar13 = local_a0, iVar3 != -0x7fffffff)) {
      FUN_00702520(&local_a8,uVar13,uVar10);
    }
    local_ac = *(int *)(param_2 + 4);
    uVar8 = local_a0;
    iVar3 = local_a4;
    if (local_a0 < uVar10) goto LAB_006c6f24;
  }
  iVar3 = local_a4;
  iVar4 = (local_a0 - uVar10) + 1;
  iVar11 = local_a4 + uVar10 * 0x40;
  local_a0 = uVar10;
  while (iVar4 = iVar4 + -1, iVar4 != 0) {
    FUN_006c426c(iVar11);
    iVar11 = iVar11 + 0x40;
  }
  uVar8 = uVar10;
LAB_006c6f24:
  if (uVar8 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    do {
      piVar12 = (int *)(iVar3 + uVar13 * 0x40);
      iVar11 = local_ac + uVar13 * 0x40;
      piVar9 = *(int **)(iVar11 + 0x30);
      piVar12[0xe] = *(int *)(iVar11 + 0x38);
      do {
        iVar4 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iVar4 + 1;
      if (iVar4 < 0) goto LAB_006c7108;
      piVar5 = (int *)piVar12[0xc];
      iVar4 = *(int *)(iVar11 + 0x34);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(piVar12[0xc],piVar12[0xd]);
      }
      piVar12[0xc] = (int)piVar9;
      piVar12[0xd] = iVar4;
      FUN_006c1008(&local_58,iVar11);
      FUN_006c40f4(piVar12);
      uVar13 = uVar13 + 1;
      *piVar12 = local_58;
      piVar12[1] = iStack_54;
      piVar12[2] = iStack_50;
      piVar12[3] = iStack_4c;
      piVar12[4] = iStack_48;
      piVar12[5] = iStack_44;
      piVar12[6] = local_40;
      piVar12[7] = iStack_3c;
      piVar12[8] = iStack_38;
      piVar12[9] = iStack_34;
      piVar12[10] = iStack_30;
      piVar12[0xb] = iStack_2c;
    } while (uVar13 != uVar8);
    uVar13 = local_a0;
  }
  uVar7 = uVar10 - uVar8;
  if (local_a8 - uVar13 < uVar7) {
    FUN_0132b898(&local_a8,uVar13,uVar7,8,0x40);
    uVar13 = local_a0;
  }
  iVar3 = local_a4;
  if (uVar10 != uVar8) {
    uVar10 = 0;
    do {
      iVar11 = local_ac + uVar8 * 0x40 + uVar10 * 0x40;
      piVar9 = *(int **)(iVar11 + 0x30);
      iVar4 = *(int *)(iVar11 + 0x38);
      do {
        iVar6 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iVar6 + 1;
      if (iVar6 < 0) {
LAB_006c7108:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x6c7108);
        (*pcVar1)();
      }
      iVar11 = *(int *)(iVar11 + 0x34);
      FUN_006c1008(&local_58);
      uVar10 = uVar10 + 1;
      local_88 = local_58;
      iStack_84 = iStack_54;
      iStack_80 = iStack_50;
      iStack_7c = iStack_4c;
      iStack_78 = iStack_48;
      iStack_74 = iStack_44;
      local_70 = local_40;
      iStack_6c = iStack_3c;
      iStack_68 = iStack_38;
      iStack_64 = iStack_34;
      iStack_60 = iStack_30;
      iStack_5c = iStack_2c;
      piVar12 = (int *)(iVar3 + uVar13 * 0x40);
      uVar13 = uVar13 + 1;
      *piVar12 = local_58;
      piVar12[1] = iStack_54;
      piVar12[2] = iStack_50;
      piVar12[3] = iStack_4c;
      piVar12[4] = iStack_48;
      piVar12[5] = iStack_44;
      piVar12[6] = local_40;
      piVar12[7] = iStack_3c;
      piVar12[8] = iStack_38;
      piVar12[9] = iStack_34;
      piVar12[10] = iStack_30;
      piVar12[0xb] = iStack_2c;
      piVar12[0xd] = iVar11;
      piVar12[0xc] = (int)piVar9;
      piVar12[0xe] = iVar4;
    } while (uVar10 != uVar7);
  }
  *param_1 = local_a8;
  param_1[1] = local_a4;
  param_1[2] = uVar13;
  param_1[3] = (int)local_9c;
  param_1[4] = iStack_98;
  param_1[5] = local_94;
  param_1[6] = local_90;
  return;
}

