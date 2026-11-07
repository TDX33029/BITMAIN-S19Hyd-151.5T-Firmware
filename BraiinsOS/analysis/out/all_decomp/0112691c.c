// FUN_0112691c @ 0112691c size=104 calls_out=3 calls_in=13
// strings: 

void FUN_0112691c(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,param_3);
  }
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
  FUN_016dd1aa(iVar1,param_2,param_3);
  *param_1 = iVar1;
  param_1[1] = param_3;
  return;
}

