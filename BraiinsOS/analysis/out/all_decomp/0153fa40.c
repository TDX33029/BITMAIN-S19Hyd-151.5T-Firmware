// FUN_0153fa40 @ 0153fa40 size=160 calls_out=3 calls_in=1
// strings: 

void FUN_0153fa40(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*param_2 != -0x80000000) {
    iVar3 = param_2[1];
    iVar2 = param_2[2];
    *param_1 = *param_2;
    param_1[1] = iVar3;
    param_1[2] = iVar2;
    return;
  }
  iVar3 = param_2[2];
  iVar2 = 0;
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar3);
  }
  iVar4 = param_2[1];
  if (iVar3 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(iVar3);
    iVar2 = iVar3;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar3);
    }
  }
  *param_1 = iVar2;
  param_1[1] = iVar1;
  FUN_016dd1aa(iVar1,iVar4,iVar3);
  param_1[2] = iVar3;
  return;
}

