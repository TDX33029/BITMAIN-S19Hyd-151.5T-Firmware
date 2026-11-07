// FUN_00f4b814 @ 00f4b814 size=44 calls_out=0 calls_in=1
// strings: 

void FUN_00f4b814(int param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = 4;
  if (1 < *param_2) {
    iVar1 = *param_2 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00f4b83c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00f4b840 + *(int *)(&DAT_00f4b840 + iVar1 * 4)))(param_1 + 8);
  return;
}

