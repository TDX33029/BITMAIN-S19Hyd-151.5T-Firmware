// FUN_00a438cc @ 00a438cc size=64 calls_out=2 calls_in=3
// strings: 

void FUN_00a438cc(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)thunk_FUN_01be5118(3);
  if (puVar1 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,3);
  }
  *param_1 = 3;
  *(undefined1 *)(puVar1 + 1) = 0x30;
  *puVar1 = 0x2e31;
  param_1[1] = puVar1;
  param_1[2] = 3;
  return;
}

