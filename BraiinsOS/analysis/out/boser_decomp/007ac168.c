// FUN_007ac168 @ 007ac168 size=292 calls_out=2 calls_in=0
// strings: 

void FUN_007ac168(uint *param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (0x80000000 < *param_1) {
    iVar1 = *param_1 + 0x7fffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x007ac190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_007ac194 + *(int *)(&DAT_007ac194 + iVar1 * 4)))();
  return;
}

