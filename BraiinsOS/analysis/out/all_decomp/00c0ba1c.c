// FUN_00c0ba1c @ 00c0ba1c size=44 calls_out=0 calls_in=1
// strings: 

void FUN_00c0ba1c(uint *param_1)

{
  int iVar1;
  
  iVar1 = 3;
  if (1 < *param_1) {
    iVar1 = *param_1 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00c0ba44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00c0ba48 + *(int *)(&DAT_00c0ba48 + iVar1 * 4)))();
  return;
}

