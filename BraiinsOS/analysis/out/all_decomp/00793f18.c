// FUN_00793f18 @ 00793f18 size=112 calls_out=3 calls_in=0
// strings: 

void FUN_00793f18(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*param_2 == -0x80000000) {
    *param_1 = -0x80000000;
    return;
  }
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  if (iVar3 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(iVar3);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar3);
    }
  }
  FUN_016dd1aa(iVar1,iVar2,iVar3);
  *param_1 = iVar3;
  param_1[1] = iVar1;
  param_1[2] = iVar3;
  return;
}

