// FUN_015e74e4 @ 015e74e4 size=92 calls_out=3 calls_in=2
// strings: 

void FUN_015e74e4(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(param_3);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_3);
    }
  }
  *param_1 = param_3;
  param_1[1] = iVar1;
  FUN_016dd1aa(iVar1,param_2,param_3);
  param_1[2] = param_3;
  return;
}

