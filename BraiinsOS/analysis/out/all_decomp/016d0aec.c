// FUN_016d0aec @ 016d0aec size=104 calls_out=1 calls_in=1
// strings: 

void FUN_016d0aec(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *param_3;
  if (-1 < iVar1) {
    iVar1 = 4;
  }
  iVar2 = 4;
  if (*param_2 < 0) {
    iVar2 = *param_2;
  }
  piVar4 = param_3;
  if (*(uint *)(&DAT_00424988 + iVar2 * 4) < *(uint *)(&DAT_00424a3c + iVar1 * 4)) {
    piVar4 = param_2;
    param_2 = param_3;
  }
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  param_1[3] = iVar3;
  iVar1 = param_2[5];
  iVar2 = param_2[6];
  iVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = iVar1;
  param_1[6] = iVar2;
  param_1[7] = iVar3;
  FUN_016c3a1c(piVar4);
  return;
}

