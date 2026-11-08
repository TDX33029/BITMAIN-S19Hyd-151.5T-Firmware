// FUN_018f51ec @ 018f51ec size=144 calls_out=1 calls_in=0
// strings: 

void FUN_018f51ec(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0xe;
  if (*(int *)*param_1 < 0) {
    iVar1 = *(int *)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x018f5210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_018f5214 + *(int *)(&DAT_018f5214 + iVar1 * 4)))();
  return;
}

