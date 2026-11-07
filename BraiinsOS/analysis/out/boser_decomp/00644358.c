// FUN_00644358 @ 00644358 size=732 calls_out=2 calls_in=2
// strings: 

void FUN_00644358(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_r8;
  int iVar5;
  int unaff_r11;
  undefined1 in_r12;
  undefined1 extraout_r12;
  int unaff_lr;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  int local_dc;
  undefined1 local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined1 local_88;
  int local_84;
  uint local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  
  iVar3 = param_2[0x12];
  iVar4 = param_2[0x13];
  if (iVar3 != 3 || iVar4 != 0) {
    local_88 = (undefined1)param_2[0x20];
    if (iVar3 != 2 || iVar4 != 0) {
      local_d4 = param_2[0x17];
      unaff_d9 = *(undefined8 *)(param_2 + 0x14);
      unaff_d8 = *(undefined8 *)(param_2 + 0x18);
      local_dc = param_2[0x16];
      local_d8 = (undefined1)param_2[0x1a];
    }
    local_98 = param_2[0x1c];
    local_94 = param_2[0x1d];
    local_90 = param_2[0x1e];
    local_8c = param_2[0x1f];
  }
  iVar1 = param_2[0x22];
  if (iVar1 == 1) {
    unaff_lr = 0x644404;
    FUN_0124f3cc((uint)&local_78 | 4,param_2 + 0x23,param_3,param_4,1);
    in_r12 = extraout_r12;
  }
  local_78 = (uint)(iVar1 == 1);
  iVar1 = *param_2;
  iVar2 = param_2[1];
  if (iVar1 != 2 || iVar2 != 0) {
    local_a8 = param_2[4];
    local_ac = param_2[5];
    local_a0 = param_2[9];
    unaff_lr = param_2[8];
    in_r12 = (undefined1)param_2[0x10];
    local_9c = param_2[0xc];
    local_a4 = param_2[0xd];
    unaff_d13 = *(undefined8 *)(param_2 + 2);
    unaff_d12 = *(undefined8 *)(param_2 + 6);
    unaff_d11 = *(undefined8 *)(param_2 + 10);
    unaff_d10 = *(undefined8 *)(param_2 + 0xe);
  }
  iVar5 = param_2[0x26];
  if (iVar5 != 2) {
    local_bc = param_2[0x27];
    local_b8 = param_2[0x28];
    local_b4 = param_2[0x29];
    local_b0 = param_2[0x2a];
    local_84 = param_2[0x2b];
    local_cc = param_2[0x2e];
    local_c0 = param_2[0x31];
    local_c4 = param_2[0x32];
    unaff_r11 = param_2[0x2c];
    unaff_r8 = param_2[0x2d];
    local_c8 = param_2[0x2f];
    local_d0 = param_2[0x30];
  }
  if (param_2[0x33] == -0x80000000) {
    local_68 = -0x80000000;
  }
  else {
    FUN_0124f414(&local_68,param_2[0x34],param_2[0x35]);
  }
  *(undefined8 *)(param_1 + 0x14) = unaff_d9;
  param_1[0x16] = local_dc;
  *(undefined1 *)(param_1 + 0x20) = local_88;
  param_1[0x1c] = local_98;
  param_1[0x1d] = local_94;
  param_1[0x1e] = local_90;
  param_1[0x1f] = local_8c;
  *(undefined1 *)(param_1 + 0x1a) = local_d8;
  param_1[0x17] = local_d4;
  param_1[0x12] = iVar3;
  *(undefined8 *)(param_1 + 0x18) = unaff_d8;
  param_1[0x13] = iVar4;
  param_1[0x22] = local_78;
  param_1[0x23] = iStack_74;
  param_1[0x24] = iStack_70;
  param_1[0x25] = iStack_6c;
  *param_1 = iVar1;
  param_1[1] = iVar2;
  param_1[4] = local_a8;
  param_1[5] = local_ac;
  param_1[8] = unaff_lr;
  param_1[9] = local_a0;
  param_1[0xc] = local_9c;
  param_1[0x2e] = local_cc;
  param_1[0x2f] = local_c8;
  param_1[0x30] = local_d0;
  param_1[0x27] = local_bc;
  param_1[0x28] = local_b8;
  param_1[0x29] = local_b4;
  param_1[0xd] = local_a4;
  param_1[0x2a] = local_b0;
  param_1[0x2b] = local_84;
  param_1[0x2c] = unaff_r11;
  param_1[0x31] = local_c0;
  param_1[0x32] = local_c4;
  *(undefined8 *)(param_1 + 2) = unaff_d13;
  *(undefined8 *)(param_1 + 6) = unaff_d12;
  *(undefined8 *)(param_1 + 10) = unaff_d11;
  param_1[0x26] = iVar5;
  param_1[0x2d] = unaff_r8;
  *(undefined1 *)(param_1 + 0x10) = in_r12;
  *(undefined8 *)(param_1 + 0xe) = unaff_d10;
  param_1[0x33] = local_68;
  param_1[0x34] = iStack_64;
  param_1[0x35] = iStack_60;
  return;
}

