// FUN_0070a8d0 @ 0070a8d0 size=680 calls_out=0 calls_in=0
// strings: 

void FUN_0070a8d0(undefined4 *param_1,int *param_2)

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
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_44;
  undefined4 local_40;
  
  uVar23 = CONCAT44(local_40,local_44);
  uVar22 = CONCAT44(local_50,local_54);
  uVar21 = CONCAT44(local_60,local_64);
  uVar20 = CONCAT44(local_70,local_74);
  uVar19 = CONCAT44(local_80,local_84);
  uVar18 = CONCAT44(local_90,local_94);
  uVar17 = CONCAT44(local_a0,local_a4);
  uVar16 = CONCAT44(local_b0,local_b4);
  uVar15 = CONCAT44(local_c0,local_c4);
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar15 = *(undefined8 *)(param_2 + 1);
    if (*param_2 != 1) {
      uVar15 = (**(code **)(param_2[2] + 0x10))();
    }
    uVar1 = 1;
  }
  uVar2 = 0;
  if (param_2[3] != 0) {
    uVar16 = *(undefined8 *)(param_2 + 4);
    if (param_2[3] != 1) {
      uVar16 = (**(code **)(param_2[5] + 0x10))();
    }
    uVar2 = 1;
  }
  uVar3 = 0;
  if (param_2[6] != 0) {
    uVar17 = *(undefined8 *)(param_2 + 7);
    if (param_2[6] != 1) {
      uVar17 = (**(code **)(param_2[8] + 0x10))();
    }
    uVar3 = 1;
  }
  uVar4 = 0;
  if (param_2[9] != 0) {
    uVar18 = *(undefined8 *)(param_2 + 10);
    if (param_2[9] != 1) {
      uVar18 = (**(code **)(param_2[0xb] + 0x10))();
    }
    uVar4 = 1;
  }
  uVar5 = 0;
  if (param_2[0xc] != 0) {
    uVar19 = *(undefined8 *)(param_2 + 0xd);
    if (param_2[0xc] != 1) {
      uVar19 = (**(code **)(param_2[0xe] + 0x10))();
    }
    uVar5 = 1;
  }
  uVar6 = 0;
  if (param_2[0xf] != 0) {
    uVar20 = *(undefined8 *)(param_2 + 0x10);
    if (param_2[0xf] != 1) {
      uVar20 = (**(code **)(param_2[0x11] + 0x10))();
    }
    uVar6 = 1;
  }
  uVar7 = 0;
  if (param_2[0x12] != 0) {
    uVar21 = *(undefined8 *)(param_2 + 0x13);
    if (param_2[0x12] != 1) {
      uVar21 = (**(code **)(param_2[0x14] + 0x10))();
    }
    uVar7 = 1;
  }
  uVar8 = 0;
  if (param_2[0x15] != 0) {
    uVar22 = *(undefined8 *)(param_2 + 0x16);
    if (param_2[0x15] != 1) {
      uVar22 = (**(code **)(param_2[0x17] + 0x10))();
    }
    uVar8 = 1;
  }
  uVar9 = 0;
  if (param_2[0x18] != 0) {
    uVar23 = *(undefined8 *)(param_2 + 0x19);
    if (param_2[0x18] != 1) {
      uVar23 = (**(code **)(param_2[0x1a] + 0x10))();
    }
    uVar9 = 1;
  }
  uVar10 = param_2[0x1b];
  uVar24 = *(undefined8 *)(param_2 + 0x1c);
  if (1 < uVar10) {
    uVar24 = (**(code **)(param_2[0x1d] + 0x10))();
    uVar10 = 1;
  }
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 1) = uVar15;
  param_1[3] = uVar2;
  *(undefined8 *)(param_1 + 4) = uVar16;
  param_1[6] = uVar3;
  *(undefined8 *)(param_1 + 7) = uVar17;
  param_1[9] = uVar4;
  *(undefined8 *)(param_1 + 10) = uVar18;
  param_1[0xc] = uVar5;
  *(undefined8 *)(param_1 + 0xd) = uVar19;
  param_1[0xf] = uVar6;
  *(undefined8 *)(param_1 + 0x10) = uVar20;
  param_1[0x12] = uVar7;
  *(undefined8 *)(param_1 + 0x13) = uVar21;
  param_1[0x15] = uVar8;
  *(undefined8 *)(param_1 + 0x16) = uVar22;
  param_1[0x18] = uVar9;
  *(undefined8 *)(param_1 + 0x19) = uVar23;
  param_1[0x1c] = (int)uVar24;
  param_1[0x1b] = uVar10;
  param_1[0x1d] = (int)((ulonglong)uVar24 >> 0x20);
  iVar11 = param_2[0x1f];
  iVar12 = param_2[0x20];
  iVar13 = param_2[0x21];
  iVar14 = param_2[0x22];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = iVar11;
  param_1[0x20] = iVar12;
  param_1[0x21] = iVar13;
  param_1[0x22] = iVar14;
  return;
}

