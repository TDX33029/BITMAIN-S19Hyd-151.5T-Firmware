// FUN_016403ac @ 016403ac size=100 calls_out=2 calls_in=28
// strings: 

void FUN_016403ac(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 *local_20;
  undefined1 *puStack_1c;
  undefined4 *puStack_18;
  undefined1 *puStack_14;
  
  local_20 = (undefined1 *)&local_38;
  puStack_1c = &LAB_018a13b8;
  puStack_14 = &LAB_00632348;
  local_38 = param_3;
  uStack_34 = param_4;
  puStack_18 = param_2;
  FUN_00664898(&local_30,&DAT_005bdba8,&local_20);
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  FUN_0134bd64(*param_2,param_2[1]);
  return;
}

