// FUN_00981c1c @ 00981c1c size=420 calls_out=3 calls_in=1
// strings: 

void FUN_00981c1c(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
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
  
  FUN_006666fc(&local_80,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  if (*(int *)(param_2 + 0x30) == -0x80000000) {
    local_70 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_70,*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38));
  }
  FUN_006666fc(&local_60,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
  if (*(int *)(param_2 + 0x48) == -0x7fffffff) {
    local_84 = 0x80000001;
  }
  else if (*(int *)(param_2 + 0x48) == -0x80000000) {
    local_84 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_30,*(undefined4 *)(param_2 + 0x4c),*(undefined4 *)(param_2 + 0x50));
    local_84 = local_30;
    local_88 = local_2c;
    local_8c = local_28;
  }
  if (*(int *)(param_2 + 0x3c) == -0x80000000) {
    local_50 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_50,*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44));
  }
  uVar1 = *(undefined1 *)(param_2 + 0x58);
  uVar3 = *(undefined4 *)(param_2 + 0x54);
  FUN_01318534(&local_40,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
  uVar2 = *(undefined1 *)(param_2 + 0x59);
  FUN_00b210c4(&local_30,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c));
  *param_1 = local_80;
  param_1[1] = uStack_7c;
  param_1[2] = uStack_78;
  param_1[0xc] = local_70;
  param_1[0xd] = uStack_6c;
  param_1[0xe] = uStack_68;
  param_1[3] = local_60;
  param_1[4] = uStack_5c;
  param_1[5] = uStack_58;
  param_1[0x14] = local_8c;
  param_1[0x13] = local_88;
  param_1[0x12] = local_84;
  param_1[0xf] = local_50;
  param_1[0x10] = uStack_4c;
  param_1[0x11] = uStack_48;
  *(undefined1 *)(param_1 + 0x16) = uVar1;
  param_1[0x15] = uVar3;
  param_1[6] = local_40;
  param_1[7] = uStack_3c;
  param_1[8] = uStack_38;
  *(undefined1 *)((int)param_1 + 0x59) = uVar2;
  param_1[9] = local_30;
  param_1[10] = local_2c;
  param_1[0xb] = local_28;
  return;
}

