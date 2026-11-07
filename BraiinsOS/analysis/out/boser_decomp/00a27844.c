// FUN_00a27844 @ 00a27844 size=632 calls_out=1 calls_in=3
// strings: 

void FUN_00a27844(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar1 = *param_2;
  uVar14 = param_2[1];
  uVar2 = param_2[3];
  uVar3 = param_2[4];
  uVar4 = param_2[6];
  uVar5 = param_2[7];
  uVar6 = param_2[8];
  uVar7 = param_2[9];
  uVar20 = param_2[5];
  uVar21 = param_2[0x22];
  uVar18 = param_2[0x23];
  uVar15 = param_2[2];
  if (param_2[10] == -0x80000000) {
    local_34 = 0x80000000;
  }
  else {
    FUN_00b1e2c0(&local_30,param_2[0xb],param_2[0xc]);
    local_34 = local_30;
    local_80 = local_2c;
    local_84 = local_28;
  }
  uVar8 = param_2[0x12];
  uVar9 = param_2[0x13];
  uVar17 = param_2[0xe];
  uVar16 = param_2[0xf];
  uVar23 = param_2[0x10];
  uVar24 = param_2[0x11];
  if (param_2[0x14] == -0x80000000) {
    local_3c = 0x80000000;
  }
  else {
    FUN_00b1e2c0(&local_30,param_2[0x15],param_2[0x16]);
    local_3c = local_30;
    local_88 = local_2c;
    local_8c = local_28;
  }
  uVar10 = param_2[0x1a];
  uVar11 = param_2[0x1b];
  uVar12 = param_2[0x1c];
  uVar13 = param_2[0x1d];
  uVar22 = param_2[0x18];
  uVar19 = param_2[0x19];
  if (param_2[0x1e] == -0x80000000) {
    local_30 = 0x80000000;
  }
  else {
    FUN_00b1e2c0(&local_30,param_2[0x1f],param_2[0x20]);
  }
  param_1[0x1e] = local_30;
  param_1[0x1f] = local_2c;
  param_1[0x20] = local_28;
  *param_1 = uVar1;
  param_1[1] = uVar14;
  param_1[2] = uVar15;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  param_1[5] = uVar20;
  param_1[6] = uVar4;
  param_1[7] = uVar5;
  param_1[8] = uVar6;
  param_1[9] = uVar7;
  param_1[0xd] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = uVar10;
  param_1[0xc] = local_84;
  param_1[0x1b] = uVar11;
  param_1[0xf] = uVar16;
  param_1[0x10] = uVar23;
  param_1[0x11] = uVar24;
  param_1[0x1c] = uVar12;
  param_1[0x12] = uVar8;
  param_1[0x1d] = uVar13;
  param_1[0x13] = uVar9;
  param_1[0xe] = uVar17;
  param_1[0x16] = local_8c;
  param_1[0x18] = uVar22;
  param_1[0x19] = uVar19;
  param_1[0x22] = uVar21;
  param_1[0x23] = uVar18;
  param_1[10] = local_34;
  param_1[0xb] = local_80;
  param_1[0x14] = local_3c;
  param_1[0x15] = local_88;
  return;
}

