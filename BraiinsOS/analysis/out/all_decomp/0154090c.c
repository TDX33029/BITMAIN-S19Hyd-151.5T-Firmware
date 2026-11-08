// FUN_0154090c @ 0154090c size=152 calls_out=3 calls_in=0
// strings: 

void FUN_0154090c(undefined4 param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  iVar3 = param_3[2];
  if (iVar3 == iVar2) {
    FUN_006029c0(param_3);
    iVar2 = *param_3;
  }
  iVar1 = param_3[1];
  *(char *)(iVar1 + iVar3) = (char)param_2;
  iVar3 = iVar3 + 1;
  param_3[2] = iVar3;
  if ((uint)(iVar2 - iVar3) < param_2) {
    FUN_0154e5f8(param_3,iVar3,param_2,1,1);
    iVar1 = param_3[1];
    iVar3 = param_3[2];
  }
  FUN_016dd1aa(iVar1 + iVar3,param_1,param_2);
  param_3[2] = iVar3 + param_2;
  return;
}

