// FUN_006d0110 @ 006d0110 size=112 calls_out=4 calls_in=2
// strings: 

void FUN_006d0110(undefined4 *param_1)

{
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_18;
  undefined1 *local_14;
  
  FUN_006aaf00(&local_24);
  FUN_019bb7e0(local_24,local_20);
  FUN_006d1ab4(&local_24);
  local_14 = &LAB_00632348;
  local_18 = &local_24;
  FUN_00664898(&local_30,&DAT_005791cb,&local_18);
  FUN_019bb7e0(local_24,local_20);
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  return;
}

