// FUN_01640430 @ 01640430 size=100 calls_out=2 calls_in=16
// strings: 

void FUN_01640430(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 *local_28;
  undefined1 *local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  
  local_1c = &LAB_00632348;
  local_24 = &LAB_00632348;
  local_28 = param_3;
  local_20 = param_2;
  FUN_00664898(&local_38,&DAT_005bdba8,&local_28);
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  FUN_0134bd64(*param_3,param_3[1]);
  FUN_0134bd64(*param_2,param_2[1]);
  return;
}

