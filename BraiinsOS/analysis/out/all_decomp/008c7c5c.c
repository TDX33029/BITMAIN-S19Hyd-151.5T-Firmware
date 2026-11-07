// FUN_008c7c5c @ 008c7c5c size=56 calls_out=2 calls_in=0
// strings: 

void FUN_008c7c5c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_016d4a50(0x90);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x90);
  }
  *(undefined1 *)(iVar1 + 0x8c) = 0;
  *(undefined4 *)(iVar1 + 0x88) = param_1;
  return;
}

