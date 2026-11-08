// FUN_01014e94 @ 01014e94 size=264 calls_out=1 calls_in=3
// strings: 

void FUN_01014e94(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
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
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_2 == 0) {
    *param_1 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_70,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
    FUN_006666fc(&local_60,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
    FUN_006666fc(&local_50,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
    FUN_006666fc(&local_40,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c));
    FUN_006666fc(&local_30,*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38));
    uVar1 = *(undefined4 *)(param_2 + 0x3c);
    *param_1 = local_70;
    param_1[1] = uStack_6c;
    param_1[2] = uStack_68;
    param_1[3] = local_60;
    param_1[4] = uStack_5c;
    param_1[5] = uStack_58;
    param_1[6] = local_50;
    param_1[7] = uStack_4c;
    param_1[8] = uStack_48;
    param_1[9] = local_40;
    param_1[10] = uStack_3c;
    param_1[0xb] = uStack_38;
    param_1[0xc] = local_30;
    param_1[0xd] = uStack_2c;
    param_1[0xe] = uStack_28;
    param_1[0xf] = uVar1;
  }
  return;
}

