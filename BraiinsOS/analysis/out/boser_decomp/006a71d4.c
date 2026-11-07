// FUN_006a71d4 @ 006a71d4 size=36 calls_out=0 calls_in=102
// strings: 

void FUN_006a71d4(int param_1)

{
  int iVar1;
  
  iVar1 = 2;
  if (*(int *)(param_1 + 0x10) < 0) {
    iVar1 = *(int *)(param_1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x006a71f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_006a71f8 + *(int *)(&DAT_006a71f8 + iVar1 * 4)))
            (param_1,*(int *)(&DAT_006a71f8 + iVar1 * 4),0);
  return;
}

