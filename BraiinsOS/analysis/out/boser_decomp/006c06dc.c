// FUN_006c06dc @ 006c06dc size=96 calls_out=4 calls_in=3
// strings: 

void FUN_006c06dc(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_006c86e0(&uStack_1c);
  FUN_019bb7e0(uStack_1c,uStack_18);
  puVar1 = (undefined4 *)FUN_01298504(6,1);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,6);
  }
  *param_1 = 6;
  *(undefined2 *)(puVar1 + 1) = 0x676e;
  param_1[1] = puVar1;
  param_1[2] = 6;
  *puVar1 = 0x69727453;
  return;
}

