// FUN_01a32dc4 @ 01a32dc4 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_01a32dc4(int param_1)

{
  undefined1 *puVar1;
  
  *(undefined1 *)(param_1 + 4) = 1;
  puVar1 = (undefined1 *)thunk_FUN_01be5118(1);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(1,1);
  }
  *puVar1 = 0x1b;
  return;
}

