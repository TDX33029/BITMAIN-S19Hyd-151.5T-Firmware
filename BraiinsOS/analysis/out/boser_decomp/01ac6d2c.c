// FUN_01ac6d2c @ 01ac6d2c size=112 calls_out=2 calls_in=29
// strings: 

void FUN_01ac6d2c(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  uVar1 = param_3 - param_2;
  if ((uint)(*param_1 - iVar2) < uVar1) {
    FUN_006520b4(param_1,iVar2,uVar1,1,1);
    iVar2 = param_1[2];
  }
  FUN_01bed4e2(param_1[1] + iVar2,param_2,uVar1);
  param_1[2] = iVar2 + uVar1;
  return;
}

