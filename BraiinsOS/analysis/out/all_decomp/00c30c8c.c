// FUN_00c30c8c @ 00c30c8c size=1200 calls_out=7 calls_in=2
// strings: 

void FUN_00c30c8c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 uVar15;
  int local_10c;
  int local_108;
  undefined4 local_104;
  undefined4 local_100;
  int local_e0;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94;
  int local_90;
  undefined1 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar12 = param_2[0x3e];
  local_c8 = -0x80000000;
  if (param_2[0x35] == -0x80000000) {
    local_cc = -0x80000000;
    iVar1 = param_2[0x38];
  }
  else {
    local_cc = param_2[0x37];
    uVar7 = param_2[0x36];
    if (local_cc == 0) {
      local_108 = 1;
    }
    else {
      local_108 = thunk_FUN_016d4a50(local_cc);
      if (local_108 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_cc);
      }
    }
    FUN_016dd1aa(local_108,uVar7);
    iVar1 = param_2[0x38];
  }
  if (iVar1 != -0x80000000) {
    local_c8 = param_2[0x3a];
    uVar7 = param_2[0x39];
    if (local_c8 == 0) {
      local_10c = 1;
    }
    else {
      local_10c = thunk_FUN_016d4a50();
      if (local_10c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_c8);
      }
    }
    FUN_016dd1aa(local_10c,uVar7,local_c8);
  }
  iVar4 = param_2[0x2e];
  iVar1 = 1;
  uVar7 = param_2[0x2d];
  local_c4 = 1;
  if ((iVar4 != 0) && (iVar1 = thunk_FUN_016d4a50(iVar4), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar4);
  }
  FUN_016dd1aa(iVar1,uVar7);
  iVar5 = param_2[0x31];
  uVar7 = param_2[0x30];
  if ((iVar5 != 0) && (local_c4 = thunk_FUN_016d4a50(iVar5), local_c4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar5);
  }
  FUN_016dd1aa(local_c4,uVar7);
  iVar11 = param_2[0x14];
  uVar7 = param_2[0x13];
  if (iVar11 == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(iVar11);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar11);
    }
  }
  FUN_016dd1aa(iVar2,uVar7,iVar11);
  local_74 = param_2[0x1d];
  local_70 = param_2[0x1e];
  local_64 = *(undefined1 *)(param_2 + 0x21);
  uVar7 = param_2[10];
  local_94 = param_2[0x15];
  local_90 = param_2[0x16];
  local_6c = param_2[0x1f];
  local_a8 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = param_2[0xb];
  local_8c = *(undefined1 *)(param_2 + 0x17);
  local_68 = param_2[0x20];
  if (param_2[0xc] == -0x80000000) {
    local_c0 = 0x80000000;
    local_ac = uVar7;
  }
  else {
    FUN_00cdfedc(&local_c0,param_2[0xd],param_2[0xe]);
    local_ac = param_2[0xf];
    local_100 = local_bc;
    local_104 = local_b8;
  }
  local_88 = param_2[0x18];
  uStack_84 = param_2[0x19];
  uStack_80 = param_2[0x1a];
  uStack_7c = param_2[0x1b];
  uStack_78 = param_2[0x1c];
  local_b0 = local_104;
  local_b4 = local_100;
  local_b8 = local_c0;
  local_bc = uVar3;
  local_a0 = iVar11;
  local_9c = iVar2;
  local_98 = iVar11;
  if (param_2[0x3b] == -0x80000000) {
    iVar11 = -0x80000000;
    local_e0 = local_90;
  }
  else {
    iVar11 = param_2[0x3d];
    uVar3 = param_2[0x3c];
    if (iVar11 == 0) {
      local_e0 = 1;
    }
    else {
      local_c0 = uVar7;
      local_e0 = thunk_FUN_016d4a50(iVar11);
      uVar7 = local_c0;
      if (local_e0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar11);
      }
    }
    local_c0 = uVar7;
    FUN_016dd1aa(local_e0,uVar3,iVar11);
    uVar7 = local_c0;
  }
  local_c0 = uVar7;
  FUN_00cce57c(&local_60,param_2[0x33],param_2[0x34]);
  if (param_2[0x41] == 0) {
    local_48 = 0;
    local_50 = 0;
  }
  else {
    if (param_2[0x3f] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ac52c);
    }
    FUN_00c45038(&local_50,param_2[0x3f],param_2[0x40]);
  }
  iVar2 = param_2[4];
  iVar14 = param_2[5];
  uVar7 = param_2[0x22];
  uVar3 = param_2[0x23];
  uVar15 = *(undefined8 *)(param_2 + 2);
  uVar10 = *param_2;
  uVar13 = param_2[1];
  if (iVar2 != 5 || iVar14 != 0) {
    local_40 = param_2[6];
    uStack_3c = param_2[7];
    uStack_38 = param_2[8];
    uStack_34 = param_2[9];
  }
  uVar6 = param_2[0x25];
  uVar8 = param_2[0x26];
  uVar9 = param_2[0x27];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = uVar6;
  param_1[0x26] = uVar8;
  param_1[0x27] = uVar9;
  uVar6 = param_2[0x29];
  uVar8 = param_2[0x2a];
  uVar9 = param_2[0x2b];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = uVar6;
  param_1[0x2a] = uVar8;
  param_1[0x2b] = uVar9;
  param_1[0x35] = local_cc;
  param_1[0x37] = local_cc;
  param_1[0x36] = local_108;
  param_1[0x38] = local_c8;
  param_1[0x3a] = local_c8;
  param_1[0x39] = local_10c;
  param_1[0x3e] = uVar12;
  param_1[0x2d] = iVar1;
  param_1[0x2c] = iVar4;
  param_1[0x2e] = iVar4;
  param_1[0x30] = local_c4;
  param_1[0x2f] = iVar5;
  param_1[0x31] = iVar5;
  FUN_016dd1aa(param_1 + 10,&local_c0,0x60);
  param_1[0x3f] = local_50;
  *param_1 = uVar10;
  param_1[1] = uVar13;
  param_1[0x32] = local_60;
  param_1[0x33] = uStack_5c;
  param_1[0x34] = uStack_58;
  param_1[0x3c] = local_e0;
  param_1[0x3b] = iVar11;
  param_1[0x3d] = iVar11;
  param_1[0x22] = uVar7;
  param_1[5] = iVar14;
  param_1[4] = iVar2;
  param_1[0x23] = uVar3;
  *(undefined8 *)(param_1 + 2) = uVar15;
  param_1[0x40] = local_4c;
  param_1[0x41] = local_48;
  param_1[6] = local_40;
  param_1[7] = uStack_3c;
  param_1[8] = uStack_38;
  param_1[9] = uStack_34;
  return;
}

