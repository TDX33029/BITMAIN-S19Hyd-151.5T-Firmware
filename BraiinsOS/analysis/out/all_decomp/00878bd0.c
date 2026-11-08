// FUN_00878bd0 @ 00878bd0 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_00878bd0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_016d4a50(0xb0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xb0);
  }
  *(undefined1 *)(iVar1 + 0xac) = 0;
  *(undefined4 *)(iVar1 + 0xa8) = param_1;
  return;
}

