// FUN_00f3375c @ 00f3375c size=36 calls_out=0 calls_in=1
// strings: 

void FUN_00f3375c(int *param_1)

{
  int iVar1;
  
  iVar1 = 5;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00f3377c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00f33780 + *(int *)(&DAT_00f33780 + iVar1 * 4)))();
  return;
}

