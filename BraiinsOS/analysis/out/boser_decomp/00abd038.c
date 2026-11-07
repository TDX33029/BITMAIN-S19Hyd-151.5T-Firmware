// FUN_00abd038 @ 00abd038 size=96 calls_out=4 calls_in=4
// strings: 

void FUN_00abd038(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_006c8168(&uStack_1c);
  FUN_019bb7e0(uStack_1c,uStack_18);
  puVar1 = (undefined4 *)thunk_FUN_01be5118(6);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  *(undefined2 *)(puVar1 + 1) = 0x676e;
  *param_1 = 6;
  param_1[1] = puVar1;
  param_1[2] = 6;
  *puVar1 = 0x69727453;
  return;
}

