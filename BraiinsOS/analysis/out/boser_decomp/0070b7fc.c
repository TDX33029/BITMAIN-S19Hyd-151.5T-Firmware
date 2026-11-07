// FUN_0070b7fc @ 0070b7fc size=716 calls_out=2 calls_in=3
// strings: 

void FUN_0070b7fc(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  int local_40;
  int iStack_3c;
  int iStack_38;
  undefined1 local_30 [4];
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  
  uVar20 = CONCAT44(local_48,local_4c);
  uVar19 = CONCAT44(local_58,local_5c);
  uVar18 = CONCAT44(local_68,local_6c);
  uVar17 = CONCAT44(local_78,local_7c);
  uVar16 = CONCAT44(local_88,local_8c);
  uVar15 = CONCAT44(local_98,local_9c);
  uVar14 = CONCAT44(local_a8,local_ac);
  uVar13 = CONCAT44(local_b8,local_bc);
  uVar12 = CONCAT44(uStack_c8,uStack_cc);
  iVar10 = *param_2;
  if (iVar10 != 0) {
    iVar1 = 0x14;
    if (iVar10 != 1) {
      iVar1 = 0xc;
    }
    uVar12 = (**(code **)(param_2[2] + iVar1))(param_2[1]);
  }
  iVar1 = param_2[3];
  if (iVar1 != 0) {
    iVar2 = 0x14;
    if (iVar1 != 1) {
      iVar2 = 0xc;
    }
    uVar13 = (**(code **)(param_2[5] + iVar2))(param_2[4]);
  }
  iVar2 = param_2[6];
  if (iVar2 != 0) {
    iVar3 = 0x14;
    if (iVar2 != 1) {
      iVar3 = 0xc;
    }
    uVar14 = (**(code **)(param_2[8] + iVar3))(param_2[7]);
  }
  iVar3 = param_2[9];
  if (iVar3 != 0) {
    iVar4 = 0x14;
    if (iVar3 != 1) {
      iVar4 = 0xc;
    }
    uVar15 = (**(code **)(param_2[0xb] + iVar4))(param_2[10]);
  }
  iVar4 = param_2[0xc];
  if (iVar4 != 0) {
    iVar5 = 0x14;
    if (iVar4 != 1) {
      iVar5 = 0xc;
    }
    uVar16 = (**(code **)(param_2[0xe] + iVar5))(param_2[0xd]);
  }
  iVar5 = param_2[0xf];
  if (iVar5 != 0) {
    iVar6 = 0x14;
    if (iVar5 != 1) {
      iVar6 = 0xc;
    }
    uVar17 = (**(code **)(param_2[0x11] + iVar6))(param_2[0x10]);
  }
  iVar6 = param_2[0x12];
  if (iVar6 != 0) {
    iVar7 = 0x14;
    if (iVar6 != 1) {
      iVar7 = 0xc;
    }
    uVar18 = (**(code **)(param_2[0x14] + iVar7))(param_2[0x13]);
  }
  iVar7 = param_2[0x15];
  if (iVar7 != 0) {
    iVar8 = 0x14;
    if (iVar7 != 1) {
      iVar8 = 0xc;
    }
    uVar19 = (**(code **)(param_2[0x17] + iVar8))(param_2[0x16]);
  }
  iVar8 = param_2[0x18];
  if (iVar8 != 0) {
    iVar9 = 0x14;
    if (iVar8 != 1) {
      iVar9 = 0xc;
    }
    uVar20 = (**(code **)(param_2[0x1a] + iVar9))(param_2[0x19]);
  }
  FUN_00711b60(&local_40,param_2 + 0x1b);
  uVar11 = param_2[0x1e];
  if (1 < uVar11) {
    FUN_012841fc((uint)local_30 | 4,param_2[0x1f],param_2[0x20]);
  }
  *param_1 = iVar10;
  *(undefined8 *)(param_1 + 1) = uVar12;
  param_1[3] = iVar1;
  *(undefined8 *)(param_1 + 4) = uVar13;
  param_1[6] = iVar2;
  *(undefined8 *)(param_1 + 7) = uVar14;
  param_1[9] = iVar3;
  *(undefined8 *)(param_1 + 10) = uVar15;
  param_1[0xc] = iVar4;
  *(undefined8 *)(param_1 + 0xd) = uVar16;
  param_1[0xf] = iVar5;
  *(undefined8 *)(param_1 + 0x10) = uVar17;
  param_1[0x12] = iVar6;
  *(undefined8 *)(param_1 + 0x13) = uVar18;
  param_1[0x15] = iVar7;
  *(undefined8 *)(param_1 + 0x16) = uVar19;
  param_1[0x18] = iVar8;
  *(undefined8 *)(param_1 + 0x19) = uVar20;
  param_1[0x1b] = local_40;
  param_1[0x1c] = iStack_3c;
  param_1[0x1d] = iStack_38;
  param_1[0x1e] = uVar11;
  param_1[0x1f] = iStack_2c;
  param_1[0x20] = iStack_28;
  param_1[0x21] = iStack_24;
  param_1[0x22] = iStack_20;
  return;
}

