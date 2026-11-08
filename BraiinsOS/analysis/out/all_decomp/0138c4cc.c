// FUN_0138c4cc @ 0138c4cc size=128 calls_out=1 calls_in=1
// strings: 

void FUN_0138c4cc(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = param_1[2];
  if ((uint)(*param_1 - iVar2) < 2) {
    FUN_013c4434(param_1,iVar2,2,4,4);
    iVar2 = param_1[2];
  }
  piVar3 = (int *)param_1[1];
  piVar3[iVar2] = param_2;
  (piVar3 + iVar2)[1] = param_3;
  iVar1 = *piVar3;
  param_1[2] = iVar2 + 2;
  *piVar3 = iVar1 + 1;
  return;
}

