// FUN_010bec78 @ 010bec78 size=48 calls_out=2 calls_in=3
// strings: 

void FUN_010bec78(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined1 *)(puVar1 + 2) = 2;
  *puVar1 = 0;
  return;
}

