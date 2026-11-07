// FUN_00adab5c @ 00adab5c size=340 calls_out=5 calls_in=2
// strings: trigger | brightness | max_brightness

void FUN_00adab5c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  uint local_38;
  uint local_34;
  undefined4 uStack_30;
  undefined4 *local_2c;
  undefined2 *local_28;
  
  local_28 = &DAT_0132b6a0;
  local_2c = &uStack_5c;
  uStack_5c = param_2;
  uStack_58 = param_3;
  FUN_00664898(&local_54,&DAT_005b5790,&local_2c);
  FUN_019a66e4(&local_2c,local_50,local_4c,"trigger",7);
  FUN_00a52038(&local_38,&local_2c,&DAT_0056d26c,4);
  if (((char)local_38 == '\x04') || ((local_38 & 0xff) == 4)) {
    FUN_019a66e4(&local_48,local_50,local_4c,"brightness",10);
    FUN_019a66e4(&local_2c,local_50,local_4c,"max_brightness",0xe);
    FUN_0125e64c(&local_38,&local_2c);
    if (local_38 == 0x80000000) {
      *param_1 = 0x80000000;
      param_1[1] = local_34;
      param_1[2] = uStack_30;
      FUN_019bb7e0(local_48,local_44);
    }
    else {
      *param_1 = local_48;
      param_1[1] = local_44;
      param_1[2] = uStack_40;
      param_1[4] = local_34;
      param_1[5] = uStack_30;
      param_1[3] = local_38;
    }
  }
  else {
    *param_1 = 0x80000000;
    param_1[1] = local_38;
    param_1[2] = local_34;
  }
  FUN_019bb7e0(local_54,local_50);
  return;
}

