// FUN_009ebac8 @ 009ebac8 size=792 calls_out=8 calls_in=1
// strings: 

void FUN_009ebac8(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  uint local_9c;
  int local_98;
  uint local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined *local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 auStack_50 [3];
  undefined4 *local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 local_28;
  undefined1 local_26;
  
  uVar6 = param_1[3];
  local_9c = 0;
  bVar11 = 0x3fffffe < uVar6;
  bVar10 = uVar6 == 0x3ffffff;
  uVar3 = uVar6 * 0x40;
  if (uVar6 < 0x4000000) {
    bVar11 = 0x7ffffff7 < uVar3;
    bVar10 = uVar3 == 0x7ffffff8;
  }
  if (bVar11 && !bVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  if (uVar3 == 0) {
    local_98 = 8;
  }
  else {
    local_98 = thunk_FUN_016d4a50(uVar3);
    local_9c = uVar6;
    if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,uVar3);
    }
  }
  uVar3 = uVar6 - 1;
  if (uVar6 == 0) {
    uVar3 = 0;
  }
  local_94 = 0;
  if (local_9c < uVar3) {
    FUN_009f4d18(&local_9c,0,uVar3,8,0x40);
  }
  uVar3 = local_94;
  iVar2 = local_98;
  if (1 < uVar6) {
    puVar8 = (undefined4 *)((uint)&local_90 | 3);
    iVar7 = local_98 + local_94 * 0x40;
    iVar9 = 0x30;
    iVar5 = 0;
    do {
      *puVar8 = &DAT_005674cc;
      puVar8[3] = 0;
      puVar8[2] = 0;
      puVar8[1] = 0;
      local_38 = local_90;
      uStack_34 = local_8c;
      uStack_30 = local_88;
      uStack_2c = local_84;
      iVar4 = iVar7 + iVar5 * 0x40;
      local_26 = local_80._2_1_;
      iVar1 = iVar7 + iVar9;
      local_28 = (undefined2)local_80;
      *(undefined1 *)(iVar1 + -0x14) = 0;
      *(undefined4 *)(iVar1 + -0x30) = 0;
      *(undefined4 *)(iVar1 + -0x2c) = 0;
      *(undefined4 *)(iVar1 + -0x28) = 0;
      *(undefined4 *)(iVar1 + -0x24) = 0;
      *(undefined4 *)(iVar1 + -0x20) = 0;
      *(undefined4 *)(iVar1 + -0x1c) = 0;
      *(undefined4 *)(iVar1 + -0x18) = 0;
      FUN_016dd1aa(iVar4 + 0x1d,&local_38,0x13);
      iVar5 = iVar5 + 1;
      *(undefined **)(iVar7 + iVar9) = &DAT_018ae714;
      *(undefined4 *)(iVar4 + 0x38) = 3;
      iVar9 = iVar9 + 0x40;
      *(int *)(iVar4 + 0x3c) = iVar5;
    } while (uVar6 - 1 != iVar5);
    uVar3 = uVar3 + iVar5;
  }
  local_4d = &DAT_005674cc;
  local_8c = 0;
  local_90 = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = local_74 & 0xffffff00;
  local_54 = 0x400000;
  local_49 = 0;
  local_45 = 0;
  local_41 = 0;
  local_58 = 3;
  local_94 = uVar3;
  FUN_016dd1aa((int)&local_74 + 1,auStack_50,0x13);
  local_60 = &DAT_018ae714;
  if (uVar3 == local_9c) {
    FUN_016a85c0(&local_9c);
    iVar2 = local_98;
  }
  puVar8 = (undefined4 *)(iVar2 + uVar3 * 0x40);
  uVar3 = uVar3 + 1;
  *puVar8 = local_90;
  puVar8[1] = local_8c;
  puVar8[2] = local_88;
  puVar8[3] = local_84;
  puVar8[4] = local_80;
  puVar8[5] = local_7c;
  puVar8[6] = local_78;
  puVar8[7] = local_74;
  puVar8[8] = uStack_70;
  puVar8[9] = uStack_6c;
  puVar8[10] = uStack_68;
  puVar8[0xb] = uStack_64;
  puVar8[0xc] = local_60;
  puVar8[0xd] = uStack_5c;
  puVar8[0xe] = local_58;
  puVar8[0xf] = local_54;
  iVar2 = local_98;
  local_94 = uVar3;
  if (uVar3 < local_9c) {
    if (uVar3 == 0) {
      thunk_FUN_016d3fb4(local_98);
      iVar2 = 8;
      iVar5 = *param_1;
      goto joined_r0x009ebd4c;
    }
    iVar2 = thunk_FUN_016d4ea4(local_98,uVar3 * 0x40);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,uVar3 * 0x40);
    }
  }
  iVar5 = *param_1;
joined_r0x009ebd4c:
  if (iVar5 != 0) {
    iVar9 = param_1[1];
    iVar1 = iVar9 + 1;
    iVar7 = iVar5 + 0x20;
    while (iVar1 = iVar1 + -1, iVar1 != 0) {
      FUN_010cdcec(iVar7);
      iVar7 = iVar7 + 0x40;
    }
    if (iVar9 != 0) {
      thunk_FUN_016d3fb4(iVar5);
    }
  }
  *param_1 = iVar2;
  param_1[1] = uVar3;
  return;
}

