// FUN_0104bc48 @ 0104bc48 size=1624 calls_out=3 calls_in=1
// strings: 

void FUN_0104bc48(int param_1,undefined2 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined2 uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined2 uVar17;
  short *psVar18;
  undefined4 uVar19;
  int local_124;
  int local_120;
  int local_11c;
  int local_110;
  int local_10c;
  int local_100;
  int local_fc;
  undefined2 local_f8;
  short local_f6;
  int local_f4;
  int local_f0;
  int local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined2 local_d4;
  undefined2 local_d2;
  int local_d0;
  int local_cc;
  int local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined2 local_74;
  short local_72;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  short local_52;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  short local_3a;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  short local_2a;
  
  psVar18 = *(short **)(param_2 + 2);
  uVar1 = (undefined1)psVar18[0x20];
  if (*psVar18 == 1) {
    iVar13 = *(int *)(psVar18 + 6);
    if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,iVar13);
    }
    uVar10 = *(undefined4 *)(psVar18 + 4);
    if (iVar13 == 0) {
      local_100 = 0;
      local_fc = 1;
    }
    else {
      local_fc = thunk_FUN_016d4a50(iVar13);
      local_100 = iVar13;
      if (local_fc == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar13);
      }
    }
    FUN_016dd1aa(local_fc,uVar10,iVar13);
    uVar12 = 1;
    if (psVar18[0x12] == 1) goto LAB_0104bcc8;
LAB_0104bd84:
    local_110 = *(int *)(psVar18 + 0x14);
    iVar15 = *(int *)(psVar18 + 0x16);
    iVar11 = *(int *)(psVar18 + 0x18);
    local_50 = *(undefined4 *)(psVar18 + 0x1a);
    uStack_4c = *(undefined4 *)(psVar18 + 0x1c);
    uStack_48 = *(undefined4 *)(psVar18 + 0x1e);
    uVar17 = 0;
    local_b0 = CONCAT22(local_b0._2_2_,psVar18[0x13]);
  }
  else {
    local_3a = psVar18[1];
    local_100 = *(int *)(psVar18 + 2);
    local_fc = *(int *)(psVar18 + 4);
    iVar13 = *(int *)(psVar18 + 6);
    local_98 = *(undefined4 *)(psVar18 + 8);
    local_94 = *(int *)(psVar18 + 10);
    local_90 = *(int *)(psVar18 + 0xc);
    local_8c = *(int *)(psVar18 + 0xe);
    local_88 = *(undefined4 *)(psVar18 + 0x10);
    uVar12 = 0;
    if (psVar18[0x12] != 1) goto LAB_0104bd84;
LAB_0104bcc8:
    iVar11 = *(int *)(psVar18 + 0x18);
    uVar10 = 0;
    if (iVar11 < 0) {
LAB_0104bcd8:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar10,iVar11);
    }
    uVar10 = *(undefined4 *)(psVar18 + 0x16);
    uVar17 = 1;
    if (iVar11 == 0) {
      iVar15 = 1;
      local_110 = 0;
    }
    else {
      iVar15 = thunk_FUN_016d4a50(iVar11,uVar10);
      local_110 = iVar11;
      if (iVar15 == 0) {
        uVar10 = 1;
        goto LAB_0104bcd8;
      }
    }
    FUN_016dd1aa(iVar15,uVar10,iVar11);
  }
  local_f4 = local_100;
  local_f6 = local_3a;
  local_e8 = local_98;
  uStack_e4 = local_94;
  uStack_e0 = local_90;
  uStack_dc = local_8c;
  uStack_d8 = local_88;
  psVar18 = *(short **)(param_2 + 4);
  local_d2 = (undefined2)local_b0;
  local_c4 = local_50;
  uStack_c0 = uStack_4c;
  uStack_bc = uStack_48;
  uVar10 = *(undefined4 *)(param_2 + 6);
  uVar3 = param_2[1];
  uVar4 = *param_2;
  uVar2 = (undefined1)psVar18[0x20];
  local_f8 = uVar12;
  local_f0 = local_fc;
  local_ec = iVar13;
  local_d4 = uVar17;
  local_d0 = local_110;
  local_cc = iVar15;
  local_c8 = iVar11;
  local_b8 = uVar1;
  if (*psVar18 == 1) {
    iVar13 = *(int *)(psVar18 + 6);
    uVar8 = 0;
    if (iVar13 < 0) {
LAB_0104be6c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar8,iVar13);
    }
    uVar8 = *(undefined4 *)(psVar18 + 4);
    if (iVar13 == 0) {
      local_100 = 0;
      local_fc = 1;
    }
    else {
      local_fc = thunk_FUN_016d4a50(iVar13);
      local_100 = iVar13;
      if (local_fc == 0) {
        uVar8 = 1;
        goto LAB_0104be6c;
      }
    }
    FUN_016dd1aa(local_fc,uVar8,iVar13);
    uVar12 = 1;
    if (psVar18[0x12] != 1) goto LAB_0104bf70;
LAB_0104bec4:
    iVar15 = *(int *)(psVar18 + 0x18);
    uVar8 = 0;
    if (iVar15 < 0) {
LAB_0104bed4:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar8,iVar15);
    }
    uVar8 = *(undefined4 *)(psVar18 + 0x16);
    if (iVar15 == 0) {
      iVar11 = 0;
      local_10c = 1;
    }
    else {
      local_10c = thunk_FUN_016d4a50(iVar15);
      iVar11 = iVar15;
      if (local_10c == 0) {
        uVar8 = 1;
        goto LAB_0104bed4;
      }
    }
    FUN_016dd1aa(local_10c,uVar8,iVar15);
    local_74 = 1;
  }
  else {
    local_52 = psVar18[1];
    local_100 = *(int *)(psVar18 + 2);
    iVar13 = *(int *)(psVar18 + 6);
    local_50 = *(undefined4 *)(psVar18 + 8);
    uStack_4c = *(undefined4 *)(psVar18 + 10);
    uStack_48 = *(undefined4 *)(psVar18 + 0xc);
    uStack_44 = *(undefined4 *)(psVar18 + 0xe);
    uStack_40 = *(undefined4 *)(psVar18 + 0x10);
    uVar12 = 0;
    local_fc = *(int *)(psVar18 + 4);
    if (psVar18[0x12] == 1) goto LAB_0104bec4;
LAB_0104bf70:
    local_10c = *(int *)(psVar18 + 0x16);
    local_b0 = *(undefined4 *)(psVar18 + 0x1a);
    uStack_ac = *(undefined4 *)(psVar18 + 0x1c);
    uStack_a8 = *(undefined4 *)(psVar18 + 0x1e);
    local_3a = psVar18[0x13];
    iVar11 = *(int *)(psVar18 + 0x14);
    iVar15 = *(int *)(psVar18 + 0x18);
    local_74 = 0;
  }
  local_90 = local_fc;
  local_94 = local_100;
  local_98 = CONCAT22(local_52,uVar12);
  local_88 = local_50;
  uStack_84 = uStack_4c;
  uStack_80 = uStack_48;
  uStack_7c = uStack_44;
  uStack_78 = uStack_40;
  sVar6 = psVar18[0x42];
  local_6c = local_10c;
  local_72 = local_3a;
  local_64 = local_b0;
  uStack_60 = uStack_ac;
  uStack_5c = uStack_a8;
  local_8c = iVar13;
  local_70 = iVar11;
  local_68 = iVar15;
  local_58 = uVar2;
  if (psVar18[0x22] == 1) {
    iVar11 = *(int *)(psVar18 + 0x28);
    uVar8 = 0;
    if (iVar11 < 0) {
LAB_0104c054:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar8,iVar11);
    }
    uVar8 = *(undefined4 *)(psVar18 + 0x26);
    uVar12 = 1;
    if (iVar11 == 0) {
      local_100 = 0;
      iVar15 = 1;
    }
    else {
      iVar15 = thunk_FUN_016d4a50(iVar11);
      local_100 = iVar11;
      if (iVar15 == 0) {
        uVar8 = 1;
        goto LAB_0104c054;
      }
    }
    FUN_016dd1aa(iVar15,uVar8,iVar11);
    sVar5 = psVar18[0x34];
    sVar7 = local_3a;
    iVar13 = local_100;
    uVar8 = local_50;
    uVar9 = uStack_4c;
    uVar14 = uStack_48;
    uVar16 = uStack_44;
    uVar19 = uStack_40;
  }
  else {
    iVar15 = *(int *)(psVar18 + 0x26);
    iVar11 = *(int *)(psVar18 + 0x28);
    uVar12 = 0;
    sVar5 = psVar18[0x34];
    sVar7 = psVar18[0x23];
    iVar13 = *(int *)(psVar18 + 0x24);
    uVar8 = *(undefined4 *)(psVar18 + 0x2a);
    uVar9 = *(undefined4 *)(psVar18 + 0x2c);
    uVar14 = *(undefined4 *)(psVar18 + 0x2e);
    uVar16 = *(undefined4 *)(psVar18 + 0x30);
    uVar19 = *(undefined4 *)(psVar18 + 0x32);
  }
  uStack_40 = uVar19;
  uStack_44 = uVar16;
  uStack_48 = uVar14;
  uStack_4c = uVar9;
  local_50 = uVar8;
  local_3a = sVar7;
  if (sVar5 == 1) {
    local_120 = *(int *)(psVar18 + 0x3a);
    uVar8 = 0;
    if (local_120 < 0) {
LAB_0104c0ac:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar8,local_120);
    }
    uVar8 = *(undefined4 *)(psVar18 + 0x38);
    if (local_120 == 0) {
      local_124 = 0;
      local_11c = 1;
    }
    else {
      local_11c = thunk_FUN_016d4a50(local_120);
      local_124 = local_120;
      if (local_11c == 0) {
        uVar8 = 1;
        goto LAB_0104c0ac;
      }
    }
    FUN_016dd1aa(local_11c,uVar8,local_120);
    uVar17 = 1;
  }
  else {
    local_124 = *(int *)(psVar18 + 0x36);
    local_11c = *(int *)(psVar18 + 0x38);
    local_120 = *(int *)(psVar18 + 0x3a);
    local_38 = *(undefined4 *)(psVar18 + 0x3c);
    uStack_34 = *(undefined4 *)(psVar18 + 0x3e);
    uStack_30 = *(undefined4 *)(psVar18 + 0x40);
    local_2a = psVar18[0x35];
    uVar17 = 0;
  }
  local_52 = local_3a;
  local_b0 = local_50;
  uStack_ac = uStack_4c;
  uStack_a8 = uStack_48;
  uStack_a4 = uStack_44;
  uStack_a0 = uStack_40;
  uVar8 = *(undefined4 *)(psVar18 + 0x46);
  uVar9 = *(undefined4 *)(psVar18 + 0x48);
  uVar14 = *(undefined4 *)(psVar18 + 0x44);
  uVar19 = *(undefined4 *)(psVar18 + 0x4a);
  uVar16 = *(undefined4 *)(psVar18 + 0x4c);
  FUN_016dd1aa(param_1 + 0x44,&local_98,0x44);
  FUN_016dd1aa(param_1,&local_f8,0x44);
  *(undefined4 *)(param_1 + 0xe4) = uVar10;
  *(undefined2 *)(param_1 + 0xe2) = uVar3;
  *(undefined2 *)(param_1 + 0xe0) = uVar4;
  *(undefined2 *)(param_1 + 0x88) = uVar12;
  *(int *)(param_1 + 0x8c) = iVar13;
  *(int *)(param_1 + 0x90) = iVar15;
  *(short *)(param_1 + 0x8a) = local_52;
  *(int *)(param_1 + 0x94) = iVar11;
  *(undefined4 *)(param_1 + 0x98) = local_b0;
  *(undefined4 *)(param_1 + 0x9c) = uStack_ac;
  *(undefined4 *)(param_1 + 0xa0) = uStack_a8;
  *(undefined4 *)(param_1 + 0xa4) = uStack_a4;
  *(undefined4 *)(param_1 + 0xa8) = uStack_a0;
  *(undefined4 *)(param_1 + 0xd0) = uVar8;
  *(undefined4 *)(param_1 + 0xd4) = uVar9;
  *(short *)(param_1 + 0xae) = local_2a;
  *(undefined2 *)(param_1 + 0xac) = uVar17;
  *(int *)(param_1 + 0xb0) = local_124;
  *(int *)(param_1 + 0xb4) = local_11c;
  *(int *)(param_1 + 0xb8) = local_120;
  *(undefined4 *)(param_1 + 0xcc) = uVar14;
  *(undefined4 *)(param_1 + 0xd8) = uVar19;
  *(undefined4 *)(param_1 + 0xdc) = uVar16;
  *(char *)(param_1 + 200) = (char)sVar6;
  *(undefined4 *)(param_1 + 0xbc) = local_38;
  *(undefined4 *)(param_1 + 0xc0) = uStack_34;
  *(undefined4 *)(param_1 + 0xc4) = uStack_30;
  return;
}

