// FUN_018766d4 @ 018766d4 size=92 calls_out=2 calls_in=4
// strings: 

void FUN_018766d4(undefined4 *param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0x2000);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x2000);
  }
  param_1[8] = 0x66000;
  *(undefined1 *)(param_1 + 9) = param_2;
  *param_1 = 0x2000;
  param_1[1] = iVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 4;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

