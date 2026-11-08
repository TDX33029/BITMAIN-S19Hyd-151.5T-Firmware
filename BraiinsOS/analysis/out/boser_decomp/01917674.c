// FUN_01917674 @ 01917674 size=40 calls_out=0 calls_in=2
// strings: 

void FUN_01917674(uint *param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (0x80000000 < *param_1) {
    iVar1 = *param_1 + 0x7fffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x01917698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0191769c + *(int *)(&DAT_0191769c + iVar1 * 4)))();
  return;
}

