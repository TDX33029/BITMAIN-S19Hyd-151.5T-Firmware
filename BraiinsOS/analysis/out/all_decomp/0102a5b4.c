// FUN_0102a5b4 @ 0102a5b4 size=100 calls_out=3 calls_in=7
// strings: 

undefined8 FUN_0102a5b4(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (param_2 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(param_2);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_2);
    }
  }
  FUN_016dd1aa(iVar1,param_1,param_2);
  return CONCAT44(param_2,iVar1);
}

