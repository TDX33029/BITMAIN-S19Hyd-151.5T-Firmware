// FUN_00b81f38 @ 00b81f38 size=28 calls_out=0 calls_in=3
// strings: 

void FUN_00b81f38(uint *param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (0x80000015 < *param_1) {
    iVar1 = *param_1 + 0x7fffffea;
  }
                    /* WARNING: Could not recover jumptable at 0x00b81f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00b81f54 + *(int *)(&DAT_00b81f54 + iVar1 * 4)))();
  return;
}

