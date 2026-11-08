// FUN_00944c58 @ 00944c58 size=796 calls_out=5 calls_in=0
// strings: 

void FUN_00944c58(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  uint local_dc;
  int local_d8;
  undefined4 local_d4;
  uint local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int iStack_90;
  int local_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined1 uStack_31;
  
  FUN_016716cc(&local_e8);
  FUN_016716cc(&local_dc,param_2);
  iVar1 = *param_2;
  if (iVar1 == 1) {
    iVar1 = 6;
    if (1 < (uint)param_2[0x17]) {
      iVar1 = param_2[0x17] - 2;
    }
                    /* WARNING: Could not recover jumptable at 0x00944cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00944cb4 + *(int *)(&DAT_00944cb4 + iVar1 * 4)))();
    return;
  }
  if (iVar1 == 0) {
    local_a0 = CONCAT31(local_a0._1_3_,8);
    FUN_00f3ce3c(&local_d0,&local_a0,&uStack_31,&DAT_01867be8);
  }
  else if (iVar1 == 2) {
    iVar3 = param_2[0x13];
    iVar1 = param_2[0x14];
    local_70 = param_2[0x16];
    local_6c = param_2[0x17];
    local_68 = param_2[0x18];
    local_a0 = param_2[4];
    local_9c = param_2[5];
    local_98 = param_2[6];
    local_94 = param_2[7];
    iStack_90 = param_2[8];
    local_8c = param_2[9];
    local_88 = param_2[10];
    iStack_84 = param_2[0xb];
    iStack_80 = param_2[0xc];
    iStack_7c = param_2[0xd];
    iStack_78 = param_2[0xe];
    iStack_74 = param_2[0xf];
    if ((param_2[0x10] != -0x7ffffffd) && (0 < param_2[0x10])) {
      thunk_FUN_016d3fb4(param_2[0x11]);
    }
    if ((iVar3 != -0x7ffffffd) && (0 < iVar3)) {
      thunk_FUN_016d3fb4(iVar1);
    }
    FUN_009242b8(&local_d0,&local_a0);
  }
  else {
    local_98 = param_2[4];
    local_a0 = param_2[5];
    local_94 = local_a0 + param_2[6] * 0x70;
    local_9c = local_a0;
    FUN_00925440(&local_d0,&local_a0);
  }
  if (local_d0 == 2) {
LAB_0094517c:
    *param_1 = 2;
    param_1[1] = 1;
    param_1[2] = local_cc;
    return;
  }
  if ((local_d0 & 1) == 0) {
    local_cc = local_d8;
    if (local_dc == 2) goto LAB_0094517c;
    param_1[2] = local_d4;
    param_1[3] = uStack_c4;
    param_1[4] = uStack_c0;
    param_1[5] = uStack_bc;
    param_1[6] = uStack_b8;
    param_1[7] = local_b4;
    param_1[8] = uStack_b0;
    param_1[9] = uStack_ac;
    param_1[10] = uStack_a8;
    param_1[0xb] = uStack_a4;
    param_1[1] = local_d8;
    local_a0 = param_1[1];
    local_9c = param_1[2];
    local_98 = param_1[3];
    local_94 = param_1[4];
    iStack_90 = param_1[5];
    local_8c = param_1[6];
    local_88 = param_1[7];
    iStack_84 = param_1[8];
    iStack_80 = param_1[9];
    iStack_7c = param_1[10];
    iStack_78 = param_1[0xb];
    uVar2 = 1;
    if ((local_dc & 1) == 0) {
      local_9c = uStack_e0;
      local_a0 = iStack_e4;
      uVar2 = local_e8;
    }
  }
  else {
    param_1[2] = local_c8;
    param_1[3] = uStack_c4;
    param_1[4] = uStack_c0;
    param_1[5] = uStack_bc;
    param_1[6] = uStack_b8;
    param_1[7] = local_b4;
    param_1[8] = uStack_b0;
    param_1[9] = uStack_ac;
    param_1[10] = uStack_a8;
    param_1[0xb] = uStack_a4;
    param_1[1] = local_cc;
    local_a0 = param_1[1];
    local_9c = param_1[2];
    local_98 = param_1[3];
    local_94 = param_1[4];
    iStack_90 = param_1[5];
    local_8c = param_1[6];
    local_88 = param_1[7];
    iStack_84 = param_1[8];
    iStack_80 = param_1[9];
    iStack_7c = param_1[10];
    iStack_78 = param_1[0xb];
    uVar2 = 1;
  }
  *param_1 = uVar2;
  param_1[1] = local_a0;
  param_1[2] = local_9c;
  param_1[3] = local_98;
  param_1[4] = local_94;
  param_1[5] = iStack_90;
  param_1[6] = local_8c;
  param_1[7] = local_88;
  param_1[8] = iStack_84;
  param_1[9] = iStack_80;
  param_1[10] = iStack_7c;
  param_1[0xb] = iStack_78;
  return;
}

