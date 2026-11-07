// FUN_018e0fa8 @ 018e0fa8 size=156 calls_out=1 calls_in=0
// strings: 

void FUN_018e0fa8(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(int *)*param_1 < 0) {
    iVar1 = *(int *)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x018e0fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_018e0fd4 + *(int *)(&DAT_018e0fd4 + iVar1 * 4)))();
  return;
}

