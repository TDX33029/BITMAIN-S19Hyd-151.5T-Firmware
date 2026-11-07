// FUN_018dae74 @ 018dae74 size=72 calls_out=2 calls_in=3
// strings: 

void FUN_018dae74(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0x200);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(8,0x200);
  }
  param_1[6] = 0x80000000;
  *(undefined2 *)(param_1 + 0x1c) = 0xb;
  *param_1 = 8;
  param_1[1] = iVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

