// FUN_012b2fd4 @ 012b2fd4 size=112 calls_out=2 calls_in=14
// strings: 

void FUN_012b2fd4(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if ((uint)(*param_1 - iVar1) < param_3) {
    FUN_006520b4(param_1,iVar1,param_3,1,1);
    iVar1 = param_1[2];
  }
  FUN_01bed4e2(param_1[1] + iVar1,param_2,param_3);
  param_1[2] = iVar1 + param_3;
  return;
}

