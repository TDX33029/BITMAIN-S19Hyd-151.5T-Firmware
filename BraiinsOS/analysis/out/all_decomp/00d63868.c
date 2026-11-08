// FUN_00d63868 @ 00d63868 size=36 calls_out=0 calls_in=0
// strings: 

void FUN_00d63868(uint *param_1)

{
  int iVar1;
  
  iVar1 = 5;
  if (6 < *param_1) {
    iVar1 = *param_1 - 7;
  }
                    /* WARNING: Could not recover jumptable at 0x00d63888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00d6388c + *(int *)(&DAT_00d6388c + iVar1 * 4)))();
  return;
}

