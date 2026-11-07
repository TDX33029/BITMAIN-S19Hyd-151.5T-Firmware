// FUN_010beca8 @ 010beca8 size=48 calls_out=2 calls_in=2
// strings: 

void FUN_010beca8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined2 *)(puVar1 + 2) = 0x401;
  *puVar1 = 0;
  return;
}

