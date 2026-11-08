// FUN_01510ca0 @ 01510ca0 size=372 calls_out=3 calls_in=0
// strings: 

void FUN_01510ca0(uint *param_1)

{
  int iVar1;
  
  iVar1 = 0x13;
  if (0x80000000 < *param_1) {
    iVar1 = *param_1 + 0x7fffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x01510cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01510cdc + *(int *)(&DAT_01510cdc + iVar1 * 4)))(0x13,0x23,0x15);
  return;
}

