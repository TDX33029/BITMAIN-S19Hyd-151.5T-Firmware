// FUN_00a31754 @ 00a31754 size=328 calls_out=2 calls_in=0
// strings: InvalidECKey

void FUN_00a31754(uint *param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (1 < *param_1) {
    iVar1 = *param_1 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00a3177c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00a31780 + *(int *)(&DAT_00a31780 + iVar1 * 4)))();
  return;
}

