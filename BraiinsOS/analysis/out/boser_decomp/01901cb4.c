// FUN_01901cb4 @ 01901cb4 size=48 calls_out=0 calls_in=2
// strings: 

void FUN_01901cb4(undefined4 param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = 0x13;
  if (0x80000000 < *param_2) {
    iVar1 = *param_2 + 0x7fffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x01901ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01901ce4 + *(int *)(&DAT_01901ce4 + iVar1 * 4)))();
  return;
}

