// FUN_018e9a80 @ 018e9a80 size=36 calls_out=0 calls_in=4
// strings: 

void FUN_018e9a80(uint *param_1)

{
  int iVar1;
  
  iVar1 = 0x13;
  if (0x80000000 < *param_1) {
    iVar1 = *param_1 + 0x7fffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x018e9aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_018e9aa4 + *(int *)(&DAT_018e9aa4 + iVar1 * 4)))(0xb);
  return;
}

