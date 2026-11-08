// FUN_000202f8 @ 000202f8  size=52  callers=1
// program: cgminer


void FUN_000202f8(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_2;
  iVar1 = *param_1;
  *param_2 = iVar1 - iVar2;
  iVar3 = param_1[1] - param_2[1];
  param_2[1] = iVar3;
  if (iVar3 < 0) {
    *param_2 = (iVar1 - iVar2) + -1;
    param_2[1] = iVar3 + 1000000;
  }
  return;
}

