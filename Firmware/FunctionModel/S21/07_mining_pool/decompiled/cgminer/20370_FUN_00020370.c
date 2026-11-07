// FUN_00020370 @ 00020370  size=52  callers=1
// program: cgminer


int * FUN_00020370(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  if (iVar1 == iVar2) {
    return (int *)(uint)(param_2[1] < param_1[1]);
  }
  if (iVar2 < iVar1) {
    param_1 = (int *)0x1;
  }
  if (iVar1 < iVar2) {
    param_1 = (int *)0x0;
  }
  return param_1;
}

