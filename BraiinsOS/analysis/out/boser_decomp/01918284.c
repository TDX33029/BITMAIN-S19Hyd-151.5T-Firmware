// FUN_01918284 @ 01918284 size=328 calls_out=2 calls_in=0
// strings: 

void FUN_01918284(int *param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x019182ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_019182b0 + *(int *)(&DAT_019182b0 + iVar1 * 4)))();
  return;
}

