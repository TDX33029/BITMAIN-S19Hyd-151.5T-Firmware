// FUN_00633474 @ 00633474 size=288 calls_out=2 calls_in=0
// strings: InvalidClientDescriptorUnchangedPatternMismatch

void FUN_00633474(int *param_1)

{
  int iVar1;
  
  iVar1 = 3;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0063349c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_006334a0 + *(int *)(&DAT_006334a0 + iVar1 * 4)))();
  return;
}

