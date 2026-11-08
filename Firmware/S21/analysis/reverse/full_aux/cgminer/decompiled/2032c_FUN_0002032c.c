// FUN_0002032c @ 0002032c  size=68  callers=1
// program: cgminer


void FUN_0002032c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  *param_2 = iVar1 + iVar2;
  iVar3 = param_1[1] + param_2[1];
  param_2[1] = iVar3;
  if (999999 < iVar3) {
    *param_2 = iVar1 + iVar2 + 1;
    param_2[1] = iVar3 + -1000000;
  }
  return;
}

