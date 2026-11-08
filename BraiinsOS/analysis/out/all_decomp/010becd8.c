// FUN_010becd8 @ 010becd8 size=48 calls_out=2 calls_in=2
// strings: 

void FUN_010becd8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined1 *)(puVar1 + 2) = 3;
  *puVar1 = 0;
  return;
}

