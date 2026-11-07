// FUN_018eb008 @ 018eb008 size=44 calls_out=0 calls_in=0
// strings: 

void FUN_018eb008(uint *param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (0x80000000 < *param_1) {
    iVar1 = *param_1 + 0x7fffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x018eb030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_018eb034 + *(int *)(&DAT_018eb034 + iVar1 * 4)))();
  return;
}

