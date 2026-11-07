// FUN_010bf05c @ 010bf05c size=84 calls_out=3 calls_in=1
// strings: 

void FUN_010bf05c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined1 *)(puVar1 + 2) = 8;
  *puVar1 = 0;
  FUN_010bee58();
  return;
}

