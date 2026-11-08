// FUN_009c9274 @ 009c9274 size=820 calls_out=10 calls_in=0
// strings: 

void FUN_009c9274(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int local_1d0;
  int local_1c8;
  int local_1c4;
  uint local_1c0;
  undefined4 *local_1bc;
  int iStack_1b8;
  int local_1b4;
  int local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined1 auStack_198 [176];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  
  local_1bc = &DAT_0056d238;
  iStack_1b8 = 0;
  local_1b4 = 0;
  local_1b0 = 0;
  local_1c0 = 0;
  local_1c4 = 8;
  local_1c8 = 0;
  FUN_006dffd8(&local_d8,param_2 + 0xc);
  local_1bc = (undefined4 *)local_d8;
  iStack_1b8 = iStack_d4;
  local_1b4 = iStack_d0;
  local_1b0 = iStack_cc;
  uVar8 = *(uint *)(param_2 + 8);
  if (uVar8 == 0) {
    local_1d0 = *(int *)(param_2 + 4);
    local_1c0 = 0;
  }
  else {
    uVar2 = 0xaaaaaa;
    if ((uint)(iStack_d0 + iStack_cc) < 0xaaaaaa) {
      uVar2 = iStack_d0 + iStack_cc;
    }
    uVar9 = 0;
    if ((uVar2 <= uVar8) ||
       (iVar1 = FUN_0132b728(&local_1c8,0,uVar2,8,0xc0), uVar9 = local_1c0, iVar1 != -0x7fffffff)) {
      FUN_0132b704(&local_1c8,uVar9,uVar8,8,0xc0);
    }
    local_1d0 = *(int *)(param_2 + 4);
    uVar2 = local_1c0;
    iVar1 = local_1c4;
    if (local_1c0 < uVar8) goto LAB_009c93a0;
  }
  iVar1 = local_1c4;
  iVar4 = (local_1c0 - uVar8) + 1;
  iVar10 = uVar8 * 0xc0;
  local_1c0 = uVar8;
  while (iVar4 = iVar4 + -1, iVar4 != 0) {
    iVar7 = iVar1 + iVar10;
    FUN_019bb7e0(*(undefined4 *)(iVar7 + 0xb4),*(undefined4 *)(iVar7 + 0xb8));
    iVar10 = iVar10 + 0xc0;
    FUN_00985dd4(iVar7);
  }
  uVar2 = uVar8;
LAB_009c93a0:
  if (uVar2 != 0) {
    iVar10 = 0;
    uVar9 = uVar2;
    do {
      iVar7 = 0;
      iVar4 = iVar1 + iVar10;
      iVar11 = local_1d0 + iVar10;
      uVar5 = *(uint *)(iVar11 + 0xbc);
      uVar6 = *(undefined4 *)(iVar11 + 0xb8);
      uVar3 = *(undefined4 *)(iVar11 + 0xb0);
      *(undefined4 *)(iVar4 + 0xbc) = 0;
      *(undefined4 *)(iVar4 + 0xb0) = uVar3;
      if (*(uint *)(iVar4 + 0xb4) < uVar5) {
        FUN_00664634((uint *)(iVar4 + 0xb4),0,uVar5);
        iVar7 = *(int *)(iVar4 + 0xbc);
      }
      FUN_01bed4e2(*(int *)(iVar4 + 0xb8) + iVar7,uVar6,uVar5);
      *(uint *)(iVar4 + 0xbc) = iVar7 + uVar5;
      FUN_00985a24(&local_d8,iVar11);
      FUN_00985dd4(iVar4);
      FUN_01bed4e2(iVar4,&local_d8,0xb0);
      iVar10 = iVar10 + 0xc0;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar5 = ((uVar8 - uVar2) * 0xc0 >> 6) * -0x55555555;
  uVar9 = uVar2;
  if (local_1c8 - uVar2 < uVar5) {
    FUN_0132b898(&local_1c8,uVar2,uVar5,8,0xc0);
    iVar1 = local_1c4;
    uVar9 = local_1c0;
  }
  if (uVar8 != uVar2) {
    iVar4 = 0;
    iVar10 = uVar9 * 0xc0;
    do {
      iVar7 = local_1d0 + uVar2 * 0xc0 + iVar4;
      uVar3 = *(undefined4 *)(iVar7 + 0xb0);
      FUN_006666fc(&local_e8,*(undefined4 *)(iVar7 + 0xb8),*(undefined4 *)(iVar7 + 0xbc));
      FUN_00985a24(&local_d8,iVar7);
      local_1a8 = local_e8;
      uStack_1a4 = uStack_e4;
      uStack_1a0 = uStack_e0;
      FUN_01bed4e2(auStack_198,&local_d8,0xb0);
      iVar7 = iVar1 + iVar10 + iVar4;
      FUN_01bed4e2(iVar7,auStack_198,0xb0);
      *(undefined4 *)(iVar7 + 0xb0) = uVar3;
      iVar4 = iVar4 + 0xc0;
      uVar9 = uVar9 + 1;
      uVar5 = uVar5 - 1;
      *(undefined4 *)(iVar7 + 0xb4) = local_1a8;
      *(undefined4 *)(iVar7 + 0xb8) = uStack_1a4;
      *(undefined4 *)(iVar7 + 0xbc) = uStack_1a0;
    } while (uVar5 != 0);
  }
  *param_1 = local_1c8;
  param_1[1] = local_1c4;
  param_1[2] = uVar9;
  param_1[3] = (int)local_1bc;
  param_1[4] = iStack_1b8;
  param_1[5] = local_1b4;
  param_1[6] = local_1b0;
  return;
}

