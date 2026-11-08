// FUN_01af0c34 @ 01af0c34 size=328 calls_out=2 calls_in=0
// strings: 

void FUN_01af0c34(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (*(int *)*param_1 < 0) {
    iVar1 = *(int *)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x01af0c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01af0c60 + *(int *)(&DAT_01af0c60 + iVar1 * 4)))();
  return;
}

