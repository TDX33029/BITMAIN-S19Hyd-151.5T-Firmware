// FUN_0121efc4 @ 0121efc4 size=36 calls_out=0 calls_in=16
// strings: 

void FUN_0121efc4(int *param_1)

{
  int iVar1;
  
  iVar1 = 0xb;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0121efe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0121efe8 + *(int *)(&DAT_0121efe8 + iVar1 * 4)))();
  return;
}

