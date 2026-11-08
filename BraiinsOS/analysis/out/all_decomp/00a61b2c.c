// FUN_00a61b2c @ 00a61b2c size=148 calls_out=2 calls_in=0
// strings: 

void FUN_00a61b2c(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_2;
  iVar4 = param_2[1];
  iVar1 = param_1[2];
  uVar2 = iVar4 - iVar3;
  if ((uint)(*param_1 - iVar1) < uVar2) {
    FUN_00a8a86c(param_1,iVar1,uVar2,4,4);
    iVar1 = param_1[2];
  }
  if (iVar4 == iVar3) {
    param_1[2] = iVar1;
    return;
  }
  FUN_016dd1aa(param_1[1] + iVar1 * 4,param_2 + iVar3 + 2,uVar2 * 4);
  param_1[2] = uVar2 + iVar1;
  return;
}

