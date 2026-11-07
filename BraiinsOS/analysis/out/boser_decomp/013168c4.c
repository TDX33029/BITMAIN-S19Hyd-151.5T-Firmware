// FUN_013168c4 @ 013168c4 size=108 calls_out=3 calls_in=1
// strings: Invalid range start.

void FUN_013168c4(undefined4 *param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 & 1) == 0) {
    *param_1 = 7;
    *(short *)(param_1 + 1) = (short)(param_2 >> 0x10);
    return;
  }
  iVar1 = thunk_FUN_01be5118(0x14);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x14);
  }
  FUN_01bed4e2(iVar1,"Invalid range start.",0x14);
  param_1[2] = iVar1;
  *param_1 = 6;
  param_1[1] = 0x14;
  param_1[3] = 0x14;
  return;
}

