// FUN_01243d98 @ 01243d98 size=84 calls_out=2 calls_in=1
// strings: 

void FUN_01243d98(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(7);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,7);
  }
  param_1[5] = puVar1;
  param_1[4] = 7;
  *(undefined4 *)((int)puVar1 + 3) = 0x746c7561;
  param_1[6] = 7;
  *puVar1 = 0x61666544;
  *param_1 = 2;
  return;
}

