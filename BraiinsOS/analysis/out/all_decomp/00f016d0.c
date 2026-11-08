// FUN_00f016d0 @ 00f016d0 size=320 calls_out=2 calls_in=0
// strings: 

void FUN_00f016d0(int *param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00f016f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00f016f8 + *(int *)(&DAT_00f016f8 + iVar1 * 4)))();
  return;
}

