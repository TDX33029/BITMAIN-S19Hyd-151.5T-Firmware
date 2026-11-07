// FUN_007929b8 @ 007929b8 size=40 calls_out=0 calls_in=2
// strings: 

void FUN_007929b8(uint *param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (1 < *param_1) {
    iVar1 = *param_1 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x007929dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_007929e0 + *(int *)(&DAT_007929e0 + iVar1 * 4)))();
  return;
}

