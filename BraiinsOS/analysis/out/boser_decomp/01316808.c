// FUN_01316808 @ 01316808 size=108 calls_out=3 calls_in=1
// strings: Invalid start.

void FUN_01316808(undefined4 *param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 & 1) == 0) {
    *param_1 = 7;
    *(short *)(param_1 + 1) = (short)(param_2 >> 0x10);
    return;
  }
  iVar1 = thunk_FUN_01be5118(0xe);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0xe);
  }
  FUN_01bed4e2(iVar1,"Invalid start.",0xe);
  param_1[2] = iVar1;
  *param_1 = 6;
  param_1[1] = 0xe;
  param_1[3] = 0xe;
  return;
}

