// FUN_0071d96c @ 0071d96c size=972 calls_out=3 calls_in=1
// strings: 

void FUN_0071d96c(int param_1,short *param_2)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined2 uVar12;
  int iVar13;
  int iVar14;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b0;
  int local_ac;
  undefined2 local_a8;
  short local_a6;
  int local_a4;
  int iStack_a0;
  int iStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined2 local_84;
  short local_82;
  int local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  short local_62;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  short local_52;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  short local_26;
  
  uVar1 = (undefined1)param_2[0x20];
  if (*param_2 == 1) {
    iVar11 = *(int *)(param_2 + 6);
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,iVar11);
    }
    uVar6 = *(undefined4 *)(param_2 + 4);
    uVar8 = 1;
    if (iVar11 == 0) {
      iVar4 = 1;
      local_ac = 0;
    }
    else {
      iVar4 = thunk_FUN_016d4a50(iVar11);
      local_ac = iVar11;
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar11);
      }
    }
    FUN_016dd1aa(iVar4,uVar6,iVar11);
    if (param_2[0x12] == 1) goto LAB_0071d9e0;
LAB_0071da8c:
    local_b0 = *(int *)(param_2 + 0x16);
    local_60 = *(undefined4 *)(param_2 + 0x1a);
    uStack_5c = *(undefined4 *)(param_2 + 0x1c);
    uStack_58 = *(undefined4 *)(param_2 + 0x1e);
    local_84 = 0;
    local_52 = param_2[0x13];
    iVar14 = *(int *)(param_2 + 0x14);
    iVar13 = *(int *)(param_2 + 0x18);
    local_a4 = local_ac;
  }
  else {
    local_62 = param_2[1];
    local_ac = *(int *)(param_2 + 2);
    iVar4 = *(int *)(param_2 + 4);
    iVar11 = *(int *)(param_2 + 6);
    local_50 = *(undefined4 *)(param_2 + 8);
    uStack_4c = *(undefined4 *)(param_2 + 10);
    uStack_48 = *(undefined4 *)(param_2 + 0xc);
    uStack_44 = *(undefined4 *)(param_2 + 0xe);
    uStack_40 = *(undefined4 *)(param_2 + 0x10);
    uVar8 = 0;
    if (param_2[0x12] != 1) goto LAB_0071da8c;
LAB_0071d9e0:
    iVar13 = *(int *)(param_2 + 0x18);
    uVar6 = 0;
    if (iVar13 < 0) {
LAB_0071d9f0:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar6,iVar13);
    }
    uVar6 = *(undefined4 *)(param_2 + 0x16);
    if (iVar13 == 0) {
      iVar14 = 0;
      local_b0 = 1;
    }
    else {
      local_b0 = thunk_FUN_016d4a50(iVar13);
      iVar14 = iVar13;
      if (local_b0 == 0) {
        uVar6 = 1;
        goto LAB_0071d9f0;
      }
    }
    FUN_016dd1aa(local_b0,uVar6,iVar13);
    local_84 = 1;
    local_a4 = local_ac;
  }
  local_74 = local_60;
  local_a6 = local_62;
  local_98 = local_50;
  uStack_94 = uStack_4c;
  uStack_90 = uStack_48;
  uStack_8c = uStack_44;
  uStack_88 = uStack_40;
  local_7c = local_b0;
  local_82 = local_52;
  uStack_70 = uStack_5c;
  uStack_6c = uStack_58;
  sVar3 = param_2[0x42];
  local_a8 = uVar8;
  iStack_a0 = iVar4;
  iStack_9c = iVar11;
  local_80 = iVar14;
  local_78 = iVar13;
  local_68 = uVar1;
  if (param_2[0x22] == 1) {
    iVar11 = *(int *)(param_2 + 0x28);
    uVar6 = 0;
    if (iVar11 < 0) {
LAB_0071db68:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar6,iVar11);
    }
    uVar6 = *(undefined4 *)(param_2 + 0x26);
    uVar8 = 1;
    if (iVar11 == 0) {
      local_ac = 0;
      iVar4 = 1;
    }
    else {
      iVar4 = thunk_FUN_016d4a50(iVar11);
      local_ac = iVar11;
      if (iVar4 == 0) {
        uVar6 = 1;
        goto LAB_0071db68;
      }
    }
    FUN_016dd1aa(iVar4,uVar6,iVar11);
    sVar2 = param_2[0x34];
    uVar6 = local_50;
    uVar5 = uStack_4c;
    uVar7 = uStack_48;
    uVar9 = uStack_44;
    uVar10 = uStack_40;
  }
  else {
    local_ac = *(int *)(param_2 + 0x24);
    iVar4 = *(int *)(param_2 + 0x26);
    local_60 = CONCAT22(local_60._2_2_,param_2[0x23]);
    iVar11 = *(int *)(param_2 + 0x28);
    uVar8 = 0;
    sVar2 = param_2[0x34];
    uVar6 = *(undefined4 *)(param_2 + 0x2a);
    uVar5 = *(undefined4 *)(param_2 + 0x2c);
    uVar7 = *(undefined4 *)(param_2 + 0x2e);
    uVar9 = *(undefined4 *)(param_2 + 0x30);
    uVar10 = *(undefined4 *)(param_2 + 0x32);
  }
  uStack_40 = uVar10;
  uStack_44 = uVar9;
  uStack_48 = uVar7;
  uStack_4c = uVar5;
  local_50 = uVar6;
  if (sVar2 == 1) {
    local_c0 = *(int *)(param_2 + 0x3a);
    uVar6 = 0;
    if (local_c0 < 0) {
LAB_0071dbc8:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar6,local_c0);
    }
    uVar6 = *(undefined4 *)(param_2 + 0x38);
    if (local_c0 == 0) {
      local_bc = 0;
      local_b8 = 1;
    }
    else {
      local_b8 = thunk_FUN_016d4a50(local_c0);
      local_bc = local_c0;
      if (local_b8 == 0) {
        uVar6 = 1;
        goto LAB_0071dbc8;
      }
    }
    FUN_016dd1aa(local_b8,uVar6,local_c0);
    uVar12 = 1;
  }
  else {
    local_bc = *(int *)(param_2 + 0x36);
    uVar12 = 0;
    local_b8 = *(int *)(param_2 + 0x38);
    local_c0 = *(int *)(param_2 + 0x3a);
    local_38 = *(undefined4 *)(param_2 + 0x3c);
    uStack_34 = *(undefined4 *)(param_2 + 0x3e);
    uStack_30 = *(undefined4 *)(param_2 + 0x40);
    local_26 = param_2[0x35];
  }
  *(int *)(param_1 + 0x48) = local_ac;
  *(int *)(param_1 + 0x4c) = iVar4;
  *(int *)(param_1 + 0x50) = iVar11;
  *(undefined2 *)(param_1 + 0x46) = (undefined2)local_60;
  *(undefined2 *)(param_1 + 0x44) = uVar8;
  *(undefined4 *)(param_1 + 0x54) = local_50;
  *(undefined4 *)(param_1 + 0x58) = uStack_4c;
  *(undefined4 *)(param_1 + 0x5c) = uStack_48;
  *(undefined4 *)(param_1 + 0x60) = uStack_44;
  *(undefined4 *)(param_1 + 100) = uStack_40;
  uVar6 = *(undefined4 *)(param_2 + 0x44);
  uVar7 = *(undefined4 *)(param_2 + 0x46);
  uVar9 = *(undefined4 *)(param_2 + 0x48);
  uVar10 = *(undefined4 *)(param_2 + 0x4a);
  uVar5 = *(undefined4 *)(param_2 + 0x4c);
  FUN_016dd1aa(param_1,&local_a8,0x44);
  *(undefined4 *)(param_1 + 0x88) = uVar6;
  *(undefined4 *)(param_1 + 0x8c) = uVar7;
  *(undefined4 *)(param_1 + 0x90) = uVar9;
  *(undefined4 *)(param_1 + 0x94) = uVar10;
  *(short *)(param_1 + 0x6a) = local_26;
  *(int *)(param_1 + 0x6c) = local_bc;
  *(int *)(param_1 + 0x70) = local_b8;
  *(int *)(param_1 + 0x74) = local_c0;
  *(undefined2 *)(param_1 + 0x68) = uVar12;
  *(undefined4 *)(param_1 + 0x98) = uVar5;
  *(char *)(param_1 + 0x84) = (char)sVar3;
  *(undefined4 *)(param_1 + 0x78) = local_38;
  *(undefined4 *)(param_1 + 0x7c) = uStack_34;
  *(undefined4 *)(param_1 + 0x80) = uStack_30;
  return;
}

