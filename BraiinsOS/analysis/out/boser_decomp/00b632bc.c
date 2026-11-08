// FUN_00b632bc @ 00b632bc size=96 calls_out=4 calls_in=11
// strings: 

void FUN_00b632bc(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_006bdfbc(&uStack_1c);
  FUN_019bb7e0(uStack_1c,uStack_18);
  puVar1 = (undefined4 *)thunk_FUN_01be5118(5);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  *(undefined1 *)(puVar1 + 1) = 0x74;
  *param_1 = 5;
  param_1[1] = puVar1;
  param_1[2] = 5;
  *puVar1 = 0x616f6c46;
  return;
}

