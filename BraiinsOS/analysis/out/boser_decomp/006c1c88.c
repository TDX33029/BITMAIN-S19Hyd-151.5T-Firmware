// FUN_006c1c88 @ 006c1c88 size=72 calls_out=0 calls_in=7
// strings: 

void FUN_006c1c88(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0x80000007;
    return;
  }
  iVar1 = 7;
  if (*(int *)(param_2 + 0x10) < 0) {
    iVar1 = *(int *)(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x006c1cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_006c1cbc + *(int *)(&DAT_006c1cbc + iVar1 * 4)))();
  return;
}

