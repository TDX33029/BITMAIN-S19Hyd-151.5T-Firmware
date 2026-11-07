// FUN_00a35560 @ 00a35560 size=1008 calls_out=13 calls_in=3
// strings: 

void FUN_00a35560(uint *param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  uint local_1fc;
  uint local_1f4;
  uint local_1f0;
  uint local_1ec;
  undefined4 *local_1e8;
  uint uStack_1e4;
  uint local_1e0;
  uint local_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  uint local_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  uint local_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint local_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  
  puVar1 = (uint *)FUN_00a359d4(param_2);
  uVar11 = 0;
  if (puVar1 == (uint *)0x0) goto LAB_00a3588c;
  local_1e8 = &DAT_0056d238;
  uStack_1e4 = 0;
  local_1e0 = 0;
  local_1dc = 0;
  local_1ec = 0;
  local_1f0 = 8;
  local_1f4 = 0;
  FUN_006dffd8(&local_f0,puVar1 + 7);
  local_1e8 = (undefined4 *)local_f0;
  uStack_1e4 = uStack_ec;
  local_1e0 = uStack_e8;
  local_1dc = local_e4;
  uVar11 = puVar1[6];
  if (uVar11 == 0) {
    local_1fc = puVar1[5];
    local_1ec = 0;
LAB_00a35654:
    uVar4 = local_1f0;
    iVar5 = uVar11 * 0xd8;
    iVar2 = (local_1ec - uVar11) + 1;
    local_1ec = uVar11;
    while (iVar2 = iVar2 + -1, iVar2 != 0) {
      iVar7 = uVar4 + iVar5;
      FUN_019bb7e0(*(undefined4 *)(iVar7 + 0xcc),*(undefined4 *)(iVar7 + 0xd0));
      iVar5 = iVar5 + 0xd8;
      FUN_009636a4(iVar7);
    }
    uVar9 = uVar11;
  }
  else {
    uVar4 = 0x97b425;
    if (uStack_e8 + local_e4 < 0x97b425) {
      uVar4 = uStack_e8 + local_e4;
    }
    uVar9 = 0;
    if ((uVar4 <= uVar11) ||
       (iVar2 = FUN_01a54c4c(&local_1f4,0,uVar4,0xd8), uVar9 = local_1ec, iVar2 != -0x7fffffff)) {
      FUN_01a54c38(&local_1f4,uVar9,uVar11,0xd8);
    }
    local_1fc = puVar1[5];
    uVar9 = local_1ec;
    uVar4 = local_1f0;
    if (uVar11 <= local_1ec) goto LAB_00a35654;
  }
  if (uVar9 != 0) {
    iVar2 = 0;
    uVar12 = uVar9;
    do {
      iVar8 = 0;
      iVar5 = uVar4 + iVar2;
      iVar7 = local_1fc + iVar2;
      uVar6 = *(uint *)(iVar7 + 0xd4);
      uVar10 = *(undefined4 *)(iVar7 + 0xd0);
      uVar3 = *(undefined4 *)(iVar7 + 200);
      *(undefined4 *)(iVar5 + 0xd4) = 0;
      *(undefined4 *)(iVar5 + 200) = uVar3;
      if (*(uint *)(iVar5 + 0xcc) < uVar6) {
        FUN_00664634((uint *)(iVar5 + 0xcc),0,uVar6);
        iVar8 = *(int *)(iVar5 + 0xd4);
      }
      FUN_01bed4e2(*(int *)(iVar5 + 0xd0) + iVar8,uVar10,uVar6);
      *(uint *)(iVar5 + 0xd4) = iVar8 + uVar6;
      FUN_00981e54(&local_f0,iVar7);
      FUN_009636a4(iVar5);
      FUN_01bed4e2(iVar5,&local_f0,200);
      iVar2 = iVar2 + 0xd8;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  uVar12 = ((uVar11 - uVar9) * 0xd8 >> 3) * 0x684bda13;
  uStack_ec = uVar9;
  if (local_1f4 - uVar9 < uVar12) {
    FUN_0132b898(&local_1f4,uVar9,uVar12,8,0xd8);
    uVar4 = local_1f0;
    uStack_ec = local_1ec;
  }
  if (uVar11 != uVar9) {
    iVar5 = 0;
    iVar2 = uStack_ec * 0xd8;
    do {
      iVar7 = uVar9 * 0xd8 + local_1fc + iVar5;
      uVar3 = *(undefined4 *)(iVar7 + 200);
      FUN_006666fc(&local_100,*(undefined4 *)(iVar7 + 0xd0),*(undefined4 *)(iVar7 + 0xd4));
      FUN_00981e54(&local_f0,iVar7);
      local_1d8 = local_100;
      uStack_1d4 = uStack_fc;
      uStack_1d0 = uStack_f8;
      FUN_01bed4e2(&local_1c8,&local_f0,200);
      iVar7 = iVar2 + uVar4 + iVar5;
      FUN_01bed4e2(iVar7,&local_1c8,200);
      *(undefined4 *)(iVar7 + 200) = uVar3;
      iVar5 = iVar5 + 0xd8;
      uStack_ec = uStack_ec + 1;
      uVar12 = uVar12 - 1;
      *(undefined4 *)(iVar7 + 0xcc) = local_1d8;
      *(undefined4 *)(iVar7 + 0xd0) = uStack_1d4;
      *(undefined4 *)(iVar7 + 0xd4) = uStack_1d0;
    } while (uVar12 != 0);
  }
  local_f0 = local_1f0;
  uStack_e8 = (uint)local_1e8;
  local_e4 = uStack_1e4;
  uStack_e0 = local_1e0;
  uStack_dc = local_1dc;
  uVar11 = local_1f0;
  local_1ec = uStack_ec;
  if (local_1f4 != 0x80000000) {
    uVar11 = puVar1[1];
    uVar4 = puVar1[2];
    uVar9 = puVar1[3];
    *param_1 = *puVar1;
    param_1[1] = uVar11;
    param_1[2] = uVar4;
    param_1[3] = uVar9;
    param_1[4] = local_1f4;
    param_1[5] = local_1f0;
    param_1[6] = uStack_ec;
    param_1[7] = (uint)local_1e8;
    param_1[8] = uStack_1e4;
    param_1[9] = local_1e0;
    param_1[10] = local_1dc;
    param_1[0xb] = uStack_d8;
    return;
  }
LAB_00a3588c:
  uVar13 = thunk_FUN_01bee35a(uVar11,0x2c0);
  puVar1 = (uint *)((int)uVar13 + (int)((ulonglong)uVar13 >> 0x20));
  if ((char)puVar1[4] == '\0') {
    FUN_019ae6ac(&local_1c8);
    *puVar1 = local_1c8;
    puVar1[1] = uStack_1c4;
    puVar1[2] = uStack_1c0;
    puVar1[3] = uStack_1bc;
    *(undefined1 *)(puVar1 + 4) = 1;
  }
  uVar11 = *puVar1;
  uVar4 = puVar1[1];
  uVar12 = puVar1[2];
  param_1[6] = 0;
  param_1[4] = 0;
  *puVar1 = uVar11 + 1;
  puVar1[1] = uVar4 + (0xfffffffe < uVar11);
  param_1[5] = 8;
  uVar9 = puVar1[3];
  param_1[7] = (uint)&DAT_0056d238;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[3] = uVar9;
  *param_1 = uVar11;
  param_1[1] = uVar4;
  param_1[2] = uVar12;
  return;
}

