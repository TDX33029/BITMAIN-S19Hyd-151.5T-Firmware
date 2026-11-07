// FUN_0111d9a0 @ 0111d9a0 size=216 calls_out=4 calls_in=0
// strings: 

void FUN_0111d9a0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 0x1e) {
    iVar2 = 0x1e;
    iVar1 = thunk_FUN_016dd50a(param_2,&DAT_003c519d,0x1e);
    if (iVar1 == 0) {
      *param_1 = -0x80000000;
      return;
    }
    iVar1 = thunk_FUN_016d4a50(0x1e);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x1e);
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
  *param_1 = iVar2;
  param_1[1] = iVar1;
  param_1[2] = param_3;
  return;
}

