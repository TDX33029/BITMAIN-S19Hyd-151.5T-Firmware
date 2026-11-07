// FUN_0130a9b0 @ 0130a9b0 size=116 calls_out=3 calls_in=0
// strings: 

void FUN_0130a9b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int local_20;
  int iStack_1c;
  int iStack_18;
  
  uVar1 = FUN_0130a360(param_2);
  FUN_01328ef8(&local_20,param_3,uVar1);
  if ((local_20 == 4) && (FUN_01309af8(&local_20,param_2,param_3), local_20 == 4)) {
    *param_1 = 4;
    return;
  }
  *param_1 = local_20;
  param_1[1] = iStack_1c;
  param_1[2] = iStack_18;
  return;
}

