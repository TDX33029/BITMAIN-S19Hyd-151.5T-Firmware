// FUN_00643b88 @ 00643b88 size=416 calls_out=2 calls_in=0
// strings: inner | inner

void FUN_00643b88(uint *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar1 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00643bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00643bb0 + *(int *)(&DAT_00643bb0 + iVar1 * 4)))();
  return;
}

