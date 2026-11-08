// FUN_00f5eda0 @ 00f5eda0 size=112 calls_out=3 calls_in=0
// strings: 

void FUN_00f5eda0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,param_4);
  }
  if (param_4 == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(param_4);
    iVar1 = param_4;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_4);
    }
  }
  *param_1 = iVar1;
  param_1[1] = iVar2;
  FUN_016dd1aa(iVar2,param_3,param_4);
  param_1[2] = param_4;
  return;
}

