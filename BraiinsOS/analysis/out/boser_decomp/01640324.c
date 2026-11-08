// FUN_01640324 @ 01640324 size=104 calls_out=2 calls_in=1
// strings: 

void FUN_01640324(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 *local_20;
  undefined1 *local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  
  local_1c = &LAB_0193a90c;
  local_20 = &local_34;
  local_14 = &LAB_00632348;
  local_34 = param_3;
  local_18 = param_2;
  FUN_00664898(&local_30,&DAT_005bdba8,&local_20);
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  FUN_0134bd64(*param_2,param_2[1]);
  return;
}

