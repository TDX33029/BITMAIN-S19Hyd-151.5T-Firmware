// FUN_006c0618 @ 006c0618 size=100 calls_out=4 calls_in=8
// strings: 

void FUN_006c0618(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_006ded7c(&uStack_1c);
  FUN_019bb7e0(uStack_1c,uStack_18);
  puVar1 = (undefined4 *)thunk_FUN_01be5118(7);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  *(undefined4 *)((int)puVar1 + 3) = 0x6e61656c;
  *puVar1 = 0x6c6f6f42;
  *param_1 = 7;
  param_1[1] = puVar1;
  param_1[2] = 7;
  return;
}

