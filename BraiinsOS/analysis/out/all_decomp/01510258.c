// FUN_01510258 @ 01510258 size=268 calls_out=4 calls_in=0
// strings: 

void FUN_01510258(uint *param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (0x80000000 < *param_1) {
    iVar1 = *param_1 + 0x7fffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x0151027c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01510280 + *(int *)(&DAT_01510280 + iVar1 * 4)))();
  return;
}

