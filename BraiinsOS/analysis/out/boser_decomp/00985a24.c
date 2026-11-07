// FUN_00985a24 @ 00985a24 size=700 calls_out=4 calls_in=1
// strings: 

void FUN_00985a24(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_006666fc(&local_d0,param_2[0x20],param_2[0x21]);
  if (param_2[0x13] == -0x80000000) {
    local_c0 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_c0,param_2[0x14],param_2[0x15]);
  }
  FUN_009c8db8(&uStack_a0,param_2 + 6);
  local_b0 = param_2[2];
  uStack_ac = param_2[3];
  uStack_a8 = param_2[4];
  local_a4 = param_2[5];
  FUN_006666fc(&local_80,param_2[0x23],param_2[0x24]);
  if (param_2[0x10] == -0x7fffffff) {
    local_d4 = 0x80000001;
  }
  else if (param_2[0x10] == -0x80000000) {
    local_d4 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_30,param_2[0x11],param_2[0x12]);
    local_d4 = local_30;
    local_f4 = local_2c;
    local_f8 = local_28;
  }
  uVar1 = *(undefined1 *)(param_2 + 0x2b);
  uVar2 = *(undefined1 *)(param_2 + 1);
  uVar7 = *param_2;
  if (param_2[0x16] == -0x80000000) {
    local_70 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_70,param_2[0x17],param_2[0x18]);
  }
  if (param_2[0x19] == -0x80000000) {
    local_60 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_60,param_2[0x1a],param_2[0x1b]);
  }
  uVar3 = *(undefined1 *)((int)param_2 + 0xae);
  uVar4 = *(undefined1 *)((int)param_2 + 0xad);
  uVar6 = param_2[0xe];
  FUN_01318534(&local_50,param_2[0x26],param_2[0x27]);
  if (param_2[0x1c] == -0x80000000) {
    local_40 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_40,param_2[0x1d],param_2[0x1e]);
  }
  uVar5 = param_2[0xf];
  FUN_00b210c4(&local_30,param_2[0x29],param_2[0x2a]);
  param_1[0x1f] = local_d0;
  param_1[0x20] = uStack_cc;
  param_1[0x21] = uStack_c8;
  param_1[0x13] = local_c0;
  param_1[0x14] = uStack_bc;
  param_1[0x15] = uStack_b8;
  param_1[2] = local_b0;
  param_1[3] = uStack_ac;
  param_1[4] = uStack_a8;
  param_1[5] = local_a4;
  param_1[6] = uStack_a0;
  param_1[7] = uStack_9c;
  param_1[8] = local_98;
  param_1[9] = uStack_94;
  param_1[10] = uStack_90;
  param_1[0xb] = uStack_8c;
  param_1[0xc] = uStack_88;
  param_1[0xd] = uStack_84;
  param_1[0x22] = local_80;
  param_1[0x23] = uStack_7c;
  param_1[0x24] = uStack_78;
  param_1[0x12] = local_f8;
  param_1[0x11] = local_f4;
  param_1[0x10] = local_d4;
  *(undefined1 *)(param_1 + 0x2b) = uVar1;
  *(undefined1 *)(param_1 + 1) = uVar2;
  *param_1 = uVar7;
  param_1[0x16] = local_70;
  param_1[0x17] = uStack_6c;
  param_1[0x18] = uStack_68;
  param_1[0x19] = local_60;
  param_1[0x1a] = uStack_5c;
  param_1[0x1b] = uStack_58;
  *(undefined1 *)((int)param_1 + 0xae) = uVar3;
  *(undefined1 *)((int)param_1 + 0xad) = uVar4;
  param_1[0xe] = uVar6;
  param_1[0x25] = local_50;
  param_1[0x26] = uStack_4c;
  param_1[0x27] = uStack_48;
  param_1[0x1c] = local_40;
  param_1[0x1d] = uStack_3c;
  param_1[0x1e] = uStack_38;
  param_1[0xf] = uVar5;
  param_1[0x28] = local_30;
  param_1[0x29] = local_2c;
  param_1[0x2a] = local_28;
  return;
}

