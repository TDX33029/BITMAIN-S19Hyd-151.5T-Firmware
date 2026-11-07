// FUN_008500f0 @ 008500f0 size=200 calls_out=1 calls_in=2
// strings: 

void FUN_008500f0(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
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
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_006666fc(&local_60,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  uVar1 = *(undefined1 *)(param_2 + 0x30);
  FUN_006666fc(&local_50,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
  FUN_006666fc(&local_40,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
  if (*(int *)(param_2 + 0x24) == -0x80000000) {
    local_30 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_30,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c));
  }
  *param_1 = local_60;
  param_1[1] = uStack_5c;
  param_1[2] = uStack_58;
  *(undefined1 *)(param_1 + 0xc) = uVar1;
  param_1[3] = local_50;
  param_1[4] = uStack_4c;
  param_1[5] = uStack_48;
  param_1[6] = local_40;
  param_1[7] = uStack_3c;
  param_1[8] = uStack_38;
  param_1[9] = local_30;
  param_1[10] = uStack_2c;
  param_1[0xb] = uStack_28;
  return;
}

