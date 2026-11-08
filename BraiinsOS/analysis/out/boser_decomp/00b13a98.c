// FUN_00b13a98 @ 00b13a98 size=60 calls_out=2 calls_in=0
// strings: 

void FUN_00b13a98(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(4);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,4);
  }
  *param_1 = 4;
  param_1[1] = puVar1;
  param_1[2] = 4;
  *puVar1 = 0x34333231;
  return;
}

