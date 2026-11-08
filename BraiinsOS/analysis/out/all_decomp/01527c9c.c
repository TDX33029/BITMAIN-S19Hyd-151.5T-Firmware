// FUN_01527c9c @ 01527c9c size=80 calls_out=2 calls_in=1
// strings: 

void FUN_01527c9c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  local_18 = 0;
  local_20 = 0;
  uStack_1c = 1;
  FUN_0150e524(param_2,&local_20,0x80000000);
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  param_1[2] = local_18;
  FUN_016dd1aa(param_1 + 3,param_2,0x6c);
  return;
}

