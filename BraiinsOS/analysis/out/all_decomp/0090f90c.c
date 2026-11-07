// FUN_0090f90c @ 0090f90c size=228 calls_out=3 calls_in=1
// strings: 

void FUN_0090f90c(undefined4 *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 4) {
    if (*param_2 == 0x6c6f6f70) {
      param_1[2] = 0x80000015;
      *param_1 = 2;
      return;
    }
    iVar2 = 4;
    iVar1 = thunk_FUN_016d4a50(4);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,4);
    }
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,param_3);
    }
    if (param_3 == 0) {
      iVar1 = 1;
      iVar2 = 0;
    }
    else {
      iVar1 = thunk_FUN_016d4a50(param_3);
      iVar2 = param_3;
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,param_3);
      }
    }
  }
  FUN_016dd1aa(iVar1,param_2,param_3);
  param_1[3] = iVar2;
  param_1[2] = &DAT_8000000c;
  param_1[4] = iVar1;
  param_1[5] = param_3;
  *param_1 = 2;
  return;
}

