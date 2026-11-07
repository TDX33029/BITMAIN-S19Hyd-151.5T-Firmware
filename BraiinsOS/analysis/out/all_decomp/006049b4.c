// FUN_006049b4 @ 006049b4 size=116 calls_out=4 calls_in=1
// strings: 

void FUN_006049b4(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_01714f1c(param_2);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar1);
  }
  if (iVar1 == 0) {
    iVar1 = 0;
    iVar2 = 1;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(iVar1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar1);
    }
  }
  *param_1 = iVar1;
  param_1[1] = iVar2;
  iVar1 = FUN_017155bc(param_2,iVar2);
  param_1[2] = iVar1;
  return;
}

