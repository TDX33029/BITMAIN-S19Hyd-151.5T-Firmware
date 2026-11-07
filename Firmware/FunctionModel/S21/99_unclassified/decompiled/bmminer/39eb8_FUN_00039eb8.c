// FUN_00039eb8 @ 00039eb8  size=92  callers=2
// program: bmminer


void FUN_00039eb8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[8];
  iVar3 = param_1[7];
  if (iVar1 == iVar3) {
    return;
  }
  iVar2 = param_1[9];
  if (0 < iVar2) {
    memcpy((void *)(*param_1 + iVar3),(void *)(*param_1 + iVar1),param_1[5] - iVar1);
    iVar3 = param_1[7];
    iVar2 = param_1[9];
  }
  param_1[8] = iVar3;
  param_1[6] = iVar3 + iVar2;
  param_1[5] = iVar3 + iVar2;
  return;
}

