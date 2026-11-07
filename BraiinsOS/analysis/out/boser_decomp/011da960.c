// FUN_011da960 @ 011da960 size=48 calls_out=2 calls_in=0
// strings: 

void FUN_011da960(undefined4 param_1)

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

