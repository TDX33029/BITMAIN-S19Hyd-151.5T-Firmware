// FUN_011c0130 @ 011c0130 size=124 calls_out=3 calls_in=2
// strings: 

void FUN_011c0130(undefined1 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,param_3);
  }
  if (param_3 == 0) {
    iVar2 = 0;
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(param_3);
    iVar2 = param_3;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_3);
    }
  }
  FUN_016dd1aa(iVar1,param_2,param_3);
  *(int *)(param_1 + 4) = iVar2;
  *(int *)(param_1 + 8) = iVar1;
  *(int *)(param_1 + 0xc) = param_3;
  *param_1 = 3;
  return;
}

