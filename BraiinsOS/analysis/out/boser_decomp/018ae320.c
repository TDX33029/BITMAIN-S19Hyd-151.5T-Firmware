// FUN_018ae320 @ 018ae320 size=484 calls_out=2 calls_in=0
// strings: 

void FUN_018ae320(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 3;
  if (*(int *)*param_1 < 0) {
    iVar1 = *(int *)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x018ae348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_018ae34c + *(int *)(&DAT_018ae34c + iVar1 * 4)))();
  return;
}

