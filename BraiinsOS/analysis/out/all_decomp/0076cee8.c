// FUN_0076cee8 @ 0076cee8 size=72 calls_out=3 calls_in=0
// strings: 

void FUN_0076cee8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = thunk_FUN_016d4a50(0x21);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x21);
  }
  FUN_016dd1aa(iVar1,param_2,0x21);
  *param_1 = 0;
  param_1[1] = iVar1;
  param_1[2] = 0x21;
  return;
}

