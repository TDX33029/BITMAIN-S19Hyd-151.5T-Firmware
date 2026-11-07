// FUN_016ad314 @ 016ad314 size=572 calls_out=3 calls_in=0
// strings: Duplicate | pattern

void FUN_016ad314(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (*(int *)*param_1 < 0) {
    iVar1 = *(int *)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x016ad33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_016ad340 + *(int *)(&DAT_016ad340 + iVar1 * 4)))();
  return;
}

