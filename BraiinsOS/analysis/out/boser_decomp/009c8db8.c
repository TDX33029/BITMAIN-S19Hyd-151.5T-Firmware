// FUN_009c8db8 @ 009c8db8 size=832 calls_out=10 calls_in=1
// strings: 

void FUN_009c8db8(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  uint local_110;
  undefined4 *local_10c;
  int iStack_108;
  int local_104;
  int local_100;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int aiStack_ec [23];
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined1 auStack_80 [92];
  
  local_10c = &DAT_0056d238;
  iStack_108 = 0;
  local_104 = 0;
  local_100 = 0;
  local_110 = 0;
  local_114 = 4;
  local_118 = 0;
  FUN_006dffd8(&local_f8,param_2 + 0xc);
  local_10c = (undefined4 *)local_f8;
  iStack_108 = iStack_f4;
  local_104 = iStack_f0;
  local_100 = aiStack_ec[0];
  uVar9 = *(uint *)(param_2 + 8);
  if (uVar9 == 0) {
    local_120 = *(int *)(param_2 + 4);
    local_110 = 0;
  }
  else {
    uVar2 = 0x12f684b;
    if ((uint)(iStack_f0 + aiStack_ec[0]) < 0x12f684b) {
      uVar2 = iStack_f0 + aiStack_ec[0];
    }
    uVar12 = 0;
    if ((uVar2 <= uVar9) ||
       (iVar1 = FUN_0132b728(&local_118,0,uVar2,4,0x6c), uVar12 = local_110, iVar1 != -0x7fffffff))
    {
      FUN_0132b704(&local_118,uVar12,uVar9,4,0x6c);
    }
    local_120 = *(int *)(param_2 + 4);
    uVar2 = local_110;
    local_11c = local_114;
    if (local_110 < uVar9) goto LAB_009c8ee8;
  }
  local_11c = local_114;
  iVar11 = uVar9 * 0x6c;
  iVar1 = (local_110 - uVar9) + 1;
  local_110 = uVar9;
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    puVar5 = (undefined4 *)(local_11c + iVar11);
    FUN_019bb7e0(*puVar5,puVar5[1]);
    iVar11 = iVar11 + 0x6c;
    FUN_006c787c(puVar5 + 3);
  }
  uVar2 = uVar9;
LAB_009c8ee8:
  if (uVar2 != 0) {
    iVar1 = 0;
    uVar12 = uVar2;
    do {
      puVar6 = (uint *)(local_11c + iVar1);
      iVar11 = local_120 + iVar1;
      uVar10 = 0;
      uVar8 = *(uint *)(iVar11 + 8);
      uVar3 = *(undefined4 *)(iVar11 + 4);
      uVar4 = *(uint *)(iVar11 + 0x68);
      puVar6[2] = 0;
      puVar6[0x1a] = uVar4;
      if (*puVar6 < uVar8) {
        FUN_00664634(puVar6,0,uVar8);
        uVar10 = puVar6[2];
      }
      FUN_01bed4e2(*(int *)(local_11c + iVar1 + 4) + uVar10,uVar3,uVar8);
      puVar6[2] = uVar10 + uVar8;
      FUN_00981c1c(&local_f8,iVar11 + 0xc);
      iVar11 = local_11c + iVar1 + 0xc;
      FUN_006c787c(iVar11);
      FUN_01bed4e2(iVar11,&local_f8,0x5c);
      iVar1 = iVar1 + 0x6c;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  uVar4 = ((uVar9 - uVar2) * 0x6c >> 2) * 0x684bda13;
  uVar12 = uVar2;
  if (local_118 - uVar2 < uVar4) {
    FUN_0132b898(&local_118,uVar2,uVar4,4,0x6c);
    local_11c = local_114;
    uVar12 = local_110;
  }
  if (uVar9 != uVar2) {
    iVar11 = 0;
    iVar1 = uVar12 * 0x6c;
    do {
      iVar7 = uVar2 * 0x6c + local_120 + iVar11;
      uVar3 = *(undefined4 *)(iVar7 + 0x68);
      FUN_006666fc(&local_90,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8));
      FUN_00981c1c(auStack_80,iVar7 + 0xc);
      local_f8 = local_90;
      iStack_f4 = iStack_8c;
      iStack_f0 = iStack_88;
      FUN_01bed4e2(aiStack_ec,auStack_80,0x5c);
      iVar7 = iVar1 + local_11c + iVar11;
      FUN_01bed4e2(iVar7,&local_f8,0x68);
      iVar11 = iVar11 + 0x6c;
      uVar12 = uVar12 + 1;
      uVar4 = uVar4 - 1;
      *(undefined4 *)(iVar7 + 0x68) = uVar3;
    } while (uVar4 != 0);
  }
  *param_1 = local_118;
  param_1[1] = local_114;
  param_1[2] = uVar12;
  param_1[3] = (int)local_10c;
  param_1[4] = iStack_108;
  param_1[5] = local_104;
  param_1[6] = local_100;
  return;
}

