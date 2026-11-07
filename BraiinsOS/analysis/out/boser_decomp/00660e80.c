// FUN_00660e80 @ 00660e80 size=40 calls_out=2 calls_in=3
// strings: 

void FUN_00660e80(undefined1 param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)thunk_FUN_01be5118(2);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(1,2);
  }
  *puVar1 = param_1;
  return;
}

