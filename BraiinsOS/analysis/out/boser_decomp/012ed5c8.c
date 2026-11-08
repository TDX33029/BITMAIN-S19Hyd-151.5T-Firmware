// FUN_012ed5c8 @ 012ed5c8 size=332 calls_out=2 calls_in=0
// strings: FromUtf8Error

void FUN_012ed5c8(int *param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x012ed5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_012ed5f4 + *(int *)(&DAT_012ed5f4 + iVar1 * 4)))();
  return;
}

