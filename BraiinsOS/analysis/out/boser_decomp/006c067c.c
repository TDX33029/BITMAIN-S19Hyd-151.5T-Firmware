// FUN_006c067c @ 006c067c size=96 calls_out=4 calls_in=2
// strings: 

void FUN_006c067c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_006aaf00(&uStack_1c);
  FUN_019bb7e0(uStack_1c,uStack_18);
  puVar1 = (undefined4 *)thunk_FUN_01be5118(6);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  *(undefined2 *)(puVar1 + 1) = 0x6570;
  *param_1 = 6;
  param_1[1] = puVar1;
  param_1[2] = 6;
  *puVar1 = 0x79545f5f;
  return;
}

