// FUN_019023f4 @ 019023f4 size=136 calls_out=5 calls_in=0
// strings: 

void FUN_019023f4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_64 [28];
  undefined1 auStack_48 [12];
  undefined1 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar1 = param_1[1];
  FUN_015e8ad4(auStack_48,uVar1,param_1[2]);
  local_3c = *(undefined1 *)(param_1 + 3);
  FUN_0191e300(auStack_64,auStack_48,param_2,param_3);
  FUN_0191e1a8(&local_38,auStack_64);
  FUN_0191e3c0(&local_38,param_4);
  FUN_0134bd64(*param_1,uVar1);
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  return;
}

