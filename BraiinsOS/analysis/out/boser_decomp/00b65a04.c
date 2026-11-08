// FUN_00b65a04 @ 00b65a04 size=92 calls_out=4 calls_in=7
// strings: 

void FUN_00b65a04(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_006ce45c(&uStack_1c);
  FUN_019bb7e0(uStack_1c,uStack_18);
  puVar1 = (undefined2 *)thunk_FUN_01be5118(3);
  if (puVar1 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  *(undefined1 *)(puVar1 + 1) = 0x74;
  *puVar1 = 0x6e49;
  *param_1 = 3;
  param_1[1] = puVar1;
  param_1[2] = 3;
  return;
}

