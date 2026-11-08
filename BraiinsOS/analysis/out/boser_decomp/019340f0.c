// FUN_019340f0 @ 019340f0 size=72 calls_out=2 calls_in=2
// strings: 

void FUN_019340f0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0x240);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(8,0x240);
  }
  param_1[0xd] = 0x80000000;
  *(undefined2 *)(param_1 + 0x1c) = 0x10;
  *param_1 = 8;
  param_1[1] = iVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

