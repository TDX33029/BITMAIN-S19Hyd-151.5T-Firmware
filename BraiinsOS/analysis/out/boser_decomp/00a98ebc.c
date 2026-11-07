// FUN_00a98ebc @ 00a98ebc size=636 calls_out=8 calls_in=0
// strings: 

void FUN_00a98ebc(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  undefined4 *local_4c;
  undefined4 uStack_48;
  int local_44;
  int local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  int local_2c;
  
  local_4c = &DAT_0056d238;
  uStack_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_50 = 0;
  local_54 = 4;
  local_58 = 0;
  FUN_006dffd8(&local_38,param_2 + 7);
  local_4c = (undefined4 *)local_38;
  uStack_48 = uStack_34;
  local_44 = iStack_30;
  local_40 = local_2c;
  uVar10 = param_2[6];
  if (uVar10 == 0) {
    local_5c = param_2[5];
    uVar5 = 0;
  }
  else {
    uVar5 = iStack_30 + local_2c;
    if (0x7fffffe < uVar5) {
      uVar5 = 0x7ffffff;
    }
    uVar12 = 0;
    if ((uVar5 <= uVar10) ||
       (iVar1 = FUN_0132b728(&local_58,0,uVar5,4,0x10), uVar12 = local_50, iVar1 != -0x7fffffff)) {
      FUN_0132b704(&local_58,uVar12,uVar10,4,0x10);
    }
    local_5c = param_2[5];
    iVar1 = local_54;
    uVar5 = local_50;
    if (local_50 < uVar10) goto LAB_00a98fd8;
  }
  iVar1 = local_54;
  local_50 = uVar10;
  for (uVar12 = uVar10; uVar5 != uVar12; uVar12 = uVar12 + 1) {
    puVar2 = (undefined4 *)(iVar1 + uVar12 * 0x10);
    FUN_019bb7e0(*puVar2,puVar2[1]);
  }
  uVar5 = uVar10;
LAB_00a98fd8:
  if (uVar5 != 0) {
    iVar14 = 0;
    uVar12 = uVar5;
    do {
      puVar9 = (uint *)(iVar1 + iVar14);
      iVar3 = local_5c + iVar14;
      uVar13 = 0;
      uVar8 = *(uint *)(iVar3 + 8);
      uVar11 = *(undefined4 *)(iVar3 + 4);
      uVar4 = *(uint *)(iVar3 + 0xc);
      puVar9[2] = 0;
      puVar9[3] = uVar4;
      if (*puVar9 < uVar8) {
        FUN_00664634(puVar9,0,uVar8);
        uVar13 = puVar9[2];
      }
      FUN_01bed4e2(*(int *)(iVar1 + iVar14 + 4) + uVar13,uVar11,uVar8);
      iVar14 = iVar14 + 0x10;
      uVar12 = uVar12 - 1;
      puVar9[2] = uVar13 + uVar8;
    } while (uVar12 != 0);
  }
  uVar4 = uVar10 - uVar5;
  uVar12 = uVar5;
  if (local_58 - uVar5 < uVar4) {
    FUN_0132b898(&local_58,uVar5,uVar4,4,0x10);
    iVar1 = local_54;
    uVar12 = local_50;
  }
  if (uVar10 != uVar5) {
    uVar10 = 0;
    do {
      iVar14 = local_5c + uVar5 * 0x10 + uVar10 * 0x10;
      iVar3 = *(int *)(iVar14 + 0xc);
      FUN_006666fc(&local_38,*(undefined4 *)(iVar14 + 4),*(undefined4 *)(iVar14 + 8));
      puVar2 = (undefined4 *)(iVar1 + uVar12 * 0x10 + uVar10 * 0x10);
      uVar10 = uVar10 + 1;
      *puVar2 = local_38;
      puVar2[1] = uStack_34;
      puVar2[2] = iStack_30;
      puVar2[3] = iVar3;
      local_2c = iVar3;
    } while (uVar4 != uVar10);
    uVar12 = uVar12 + uVar10;
  }
  param_1[4] = local_58;
  param_1[5] = local_54;
  param_1[6] = uVar12;
  param_1[7] = local_4c;
  param_1[8] = uStack_48;
  param_1[9] = local_44;
  param_1[10] = local_40;
  uVar11 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar11;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  return;
}

