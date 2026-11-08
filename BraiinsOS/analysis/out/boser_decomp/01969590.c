// FUN_01969590 @ 01969590 size=52 calls_out=2 calls_in=2
// strings: 

void FUN_01969590(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(4);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,4);
  }
  *puVar1 = param_1;
  return;
}

