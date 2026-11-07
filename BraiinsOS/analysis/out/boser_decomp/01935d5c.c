// FUN_01935d5c @ 01935d5c size=80 calls_out=2 calls_in=6
// strings: 

void FUN_01935d5c(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = param_3[2];
  if (iVar1 == *param_3) {
    FUN_006666a0(param_3);
  }
  *(char *)(param_3[1] + iVar1) = (char)param_2;
  param_3[2] = iVar1 + 1;
  FUN_01ac6cbc(param_3,param_1,param_2);
  return;
}

