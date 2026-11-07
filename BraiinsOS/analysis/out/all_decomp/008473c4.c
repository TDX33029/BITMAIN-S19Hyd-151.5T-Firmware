// FUN_008473c4 @ 008473c4 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_008473c4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_016d4a50(0x60);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x60);
  }
  *(undefined1 *)(iVar1 + 0x5c) = 0;
  *(undefined4 *)(iVar1 + 0x58) = param_1;
  return;
}

