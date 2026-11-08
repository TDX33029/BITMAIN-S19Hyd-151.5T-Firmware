// FUN_012bb980 @ 012bb980 size=112 calls_out=2 calls_in=2
// strings: 

void FUN_012bb980(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 local_28;
  int local_24;
  int local_20;
  
  local_20 = 0;
  local_24 = 1;
  local_28 = 0;
  FUN_006520b4(&local_28,0,param_3,1,1);
  iVar1 = local_20;
  FUN_01bed4e2(local_24 + local_20,param_2,param_3);
  *param_1 = local_28;
  param_1[1] = local_24;
  param_1[2] = iVar1 + param_3;
  return;
}

