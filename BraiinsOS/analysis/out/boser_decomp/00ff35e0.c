// FUN_00ff35e0 @ 00ff35e0 size=964 calls_out=1 calls_in=1
// strings: 

void FUN_00ff35e0(undefined4 *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined4 local_d4;
  undefined4 local_d0;
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
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar24 = CONCAT44(local_50,local_54);
  uVar23 = CONCAT44(local_60,local_64);
  uVar22 = CONCAT44(local_70,local_74);
  uVar21 = CONCAT44(local_80,local_84);
  uVar20 = CONCAT44(local_90,local_94);
  uVar19 = CONCAT44(local_a0,local_a4);
  uVar18 = CONCAT44(local_b0,local_b4);
  uVar17 = CONCAT44(local_c0,local_c4);
  uVar16 = CONCAT44(local_d0,local_d4);
  uVar6 = 0;
  if (*param_2 != 0) {
    iVar3 = param_2[1];
    iVar4 = param_2[2];
    uVar16 = *(undefined8 *)(param_2 + 1);
    if (*param_2 != 1) {
      do {
        iVar5 = *param_3;
        bVar2 = (bool)hasExclusiveAccess(param_3);
      } while (!bVar2);
      *param_3 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_00ff39a0;
      uVar16 = (**(code **)(iVar4 + 0x10))(iVar3,param_3);
    }
    uVar6 = 1;
  }
  uVar7 = 0;
  if (param_2[3] != 0) {
    iVar3 = param_2[4];
    iVar4 = param_2[5];
    uVar17 = *(undefined8 *)(param_2 + 4);
    if (param_2[3] != 1) {
      do {
        iVar5 = *param_3;
        bVar2 = (bool)hasExclusiveAccess(param_3);
      } while (!bVar2);
      *param_3 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_00ff39a0;
      uVar17 = (**(code **)(iVar4 + 0x10))(iVar3,param_3);
    }
    uVar7 = 1;
  }
  uVar8 = 0;
  if (param_2[6] != 0) {
    iVar3 = param_2[7];
    iVar4 = param_2[8];
    uVar18 = *(undefined8 *)(param_2 + 7);
    if (param_2[6] != 1) {
      do {
        iVar5 = *param_3;
        bVar2 = (bool)hasExclusiveAccess(param_3);
      } while (!bVar2);
      *param_3 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_00ff39a0;
      uVar18 = (**(code **)(iVar4 + 0x10))(iVar3,param_3);
    }
    uVar8 = 1;
  }
  uVar9 = 0;
  if (param_2[9] != 0) {
    iVar3 = param_2[10];
    iVar4 = param_2[0xb];
    uVar19 = *(undefined8 *)(param_2 + 10);
    if (param_2[9] != 1) {
      do {
        iVar5 = *param_3;
        bVar2 = (bool)hasExclusiveAccess(param_3);
      } while (!bVar2);
      *param_3 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_00ff39a0;
      uVar19 = (**(code **)(iVar4 + 0x10))(iVar3,param_3);
    }
    uVar9 = 1;
  }
  uVar10 = 0;
  if (param_2[0xc] != 0) {
    iVar3 = param_2[0xd];
    iVar4 = param_2[0xe];
    uVar20 = *(undefined8 *)(param_2 + 0xd);
    if (param_2[0xc] != 1) {
      do {
        iVar5 = *param_3;
        bVar2 = (bool)hasExclusiveAccess(param_3);
      } while (!bVar2);
      *param_3 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_00ff39a0;
      uVar20 = (**(code **)(iVar4 + 0x10))(iVar3,param_3);
    }
    uVar10 = 1;
  }
  uVar11 = 0;
  if (param_2[0xf] != 0) {
    iVar3 = param_2[0x10];
    iVar4 = param_2[0x11];
    uVar21 = *(undefined8 *)(param_2 + 0x10);
    if (param_2[0xf] != 1) {
      do {
        iVar5 = *param_3;
        bVar2 = (bool)hasExclusiveAccess(param_3);
      } while (!bVar2);
      *param_3 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_00ff39a0;
      uVar21 = (**(code **)(iVar4 + 0x10))(iVar3,param_3);
    }
    uVar11 = 1;
  }
  uVar12 = 0;
  if (param_2[0x12] != 0) {
    iVar3 = param_2[0x13];
    iVar4 = param_2[0x14];
    uVar22 = *(undefined8 *)(param_2 + 0x13);
    if (param_2[0x12] != 1) {
      do {
        iVar5 = *param_3;
        bVar2 = (bool)hasExclusiveAccess(param_3);
      } while (!bVar2);
      *param_3 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_00ff39a0;
      uVar22 = (**(code **)(iVar4 + 0x10))(iVar3,param_3);
    }
    uVar12 = 1;
  }
  uVar13 = 0;
  if (param_2[0x15] != 0) {
    iVar3 = param_2[0x16];
    iVar4 = param_2[0x17];
    uVar23 = *(undefined8 *)(param_2 + 0x16);
    if (param_2[0x15] != 1) {
      do {
        iVar5 = *param_3;
        bVar2 = (bool)hasExclusiveAccess(param_3);
      } while (!bVar2);
      *param_3 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_00ff39a0;
      uVar23 = (**(code **)(iVar4 + 0x10))(iVar3,param_3);
    }
    uVar13 = 1;
  }
  uVar14 = 0;
  if (param_2[0x18] != 0) {
    iVar3 = param_2[0x19];
    iVar4 = param_2[0x1a];
    uVar24 = *(undefined8 *)(param_2 + 0x19);
    if (param_2[0x18] != 1) {
      do {
        iVar5 = *param_3;
        bVar2 = (bool)hasExclusiveAccess(param_3);
      } while (!bVar2);
      *param_3 = iVar5 + 1;
      if (iVar5 < 0) {
LAB_00ff39a0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xff39a0);
        (*pcVar1)();
      }
      uVar24 = (**(code **)(iVar4 + 0x10))(iVar3,param_3);
    }
    uVar14 = 1;
  }
  FUN_00ff3c38(&local_30,param_2 + 0x1b,param_3);
  *param_1 = uVar6;
  *(undefined8 *)(param_1 + 1) = uVar16;
  param_1[3] = uVar7;
  *(undefined8 *)(param_1 + 4) = uVar17;
  param_1[6] = uVar8;
  *(undefined8 *)(param_1 + 7) = uVar18;
  param_1[9] = uVar9;
  *(undefined8 *)(param_1 + 10) = uVar19;
  param_1[0xc] = uVar10;
  *(undefined8 *)(param_1 + 0xd) = uVar20;
  param_1[0xf] = uVar11;
  *(undefined8 *)(param_1 + 0x10) = uVar21;
  param_1[0x12] = uVar12;
  *(undefined8 *)(param_1 + 0x13) = uVar22;
  param_1[0x15] = uVar13;
  *(undefined8 *)(param_1 + 0x16) = uVar23;
  param_1[0x18] = uVar14;
  *(undefined8 *)(param_1 + 0x19) = uVar24;
  param_1[0x1b] = local_30;
  param_1[0x1c] = uStack_2c;
  param_1[0x1d] = uStack_28;
  iVar3 = param_2[0x1f];
  iVar4 = param_2[0x20];
  iVar5 = param_2[0x21];
  iVar15 = param_2[0x22];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = iVar3;
  param_1[0x20] = iVar4;
  param_1[0x21] = iVar5;
  param_1[0x22] = iVar15;
  return;
}

