// FUN_013486cc @ 013486cc size=100 calls_out=2 calls_in=1
// strings: 

void FUN_013486cc(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  iVar1 = param_2[1];
  if (iVar2 == -0x80000000) {
    FUN_006643f0(param_1,iVar1,param_2[2]);
    return;
  }
  FUN_006643f0(param_1,iVar1,param_2[2]);
  if (*param_1 == -0x80000000) {
    iVar1 = param_2[1];
    iVar2 = param_2[2];
    *param_1 = *param_2;
    param_1[1] = iVar1;
    param_1[2] = iVar2;
    return;
  }
  FUN_0134bd64(iVar2,iVar1);
  return;
}

