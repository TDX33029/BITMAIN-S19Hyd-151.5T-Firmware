// FUN_00a72a48 @ 00a72a48 size=44 calls_out=0 calls_in=1
// strings: 

void FUN_00a72a48(int *param_1)

{
  int iVar1;
  
  iVar1 = 0x11;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00a72a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00a72a74 + *(int *)(&DAT_00a72a74 + iVar1 * 4)))();
  return;
}

