// FUN_00b2237c @ 00b2237c size=56 calls_out=2 calls_in=9
// strings: 

void FUN_00b2237c(undefined4 *param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)thunk_FUN_01be5118(1);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(1,1);
  }
  *param_1 = 1;
  param_1[1] = puVar1;
  param_1[2] = 1;
  *puVar1 = param_2;
  return;
}

