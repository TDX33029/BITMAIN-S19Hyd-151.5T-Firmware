// FUN_0127f628 @ 0127f628 size=36 calls_out=0 calls_in=2
// strings: 

void FUN_0127f628(int *param_1)

{
  int iVar1;
  
  iVar1 = 0x15;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0127f648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0127f64c + *(int *)(&DAT_0127f64c + iVar1 * 4)))();
  return;
}

