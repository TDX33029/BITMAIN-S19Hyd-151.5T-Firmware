// FUN_014d1d24 @ 014d1d24 size=36 calls_out=0 calls_in=1
// strings: 

void FUN_014d1d24(int *param_1)

{
  int iVar1;
  
  iVar1 = 0xe;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x014d1d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_014d1d48 + *(int *)(&DAT_014d1d48 + iVar1 * 4)))();
  return;
}

