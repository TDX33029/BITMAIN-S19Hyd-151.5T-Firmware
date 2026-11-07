// FUN_00f55604 @ 00f55604 size=36 calls_out=0 calls_in=1
// strings: 

void FUN_00f55604(int *param_1)

{
  int iVar1;
  
  iVar1 = 0x15;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00f55624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00f55628 + *(int *)(&DAT_00f55628 + iVar1 * 4)))();
  return;
}

