// FUN_00b6a630 @ 00b6a630 size=48 calls_out=2 calls_in=1
// strings: 

void FUN_00b6a630(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}

