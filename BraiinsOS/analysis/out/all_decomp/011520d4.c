// FUN_011520d4 @ 011520d4 size=100 calls_out=3 calls_in=1
// strings: 

void FUN_011520d4(undefined1 *param_1,undefined4 param_2,int param_3)

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
  *(int *)(param_1 + 4) = param_3;
  *(int *)(param_1 + 8) = iVar1;
  FUN_016dd1aa(iVar1,param_2,param_3);
  *(int *)(param_1 + 0xc) = param_3;
  *param_1 = 9;
  return;
}

