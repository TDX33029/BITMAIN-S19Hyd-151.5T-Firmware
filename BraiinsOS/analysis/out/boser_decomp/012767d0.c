// FUN_012767d0 @ 012767d0 size=304 calls_out=6 calls_in=2
// strings: 

void FUN_012767d0(int param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = 4;
  if (1 < *param_2) {
    iVar1 = *param_2 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x012767f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_012767fc + *(int *)(&DAT_012767fc + iVar1 * 4)))(param_1 + 8);
  return;
}

