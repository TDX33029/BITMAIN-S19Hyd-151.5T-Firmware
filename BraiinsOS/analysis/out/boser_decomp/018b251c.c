// FUN_018b251c @ 018b251c size=76 calls_out=0 calls_in=3
// strings: 

void FUN_018b251c(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (*param_2 < 0) {
    iVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x018b2564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_018b2568 + *(int *)(&DAT_018b2568 + iVar1 * 4)))();
  return;
}

