// FUN_0125c19c @ 0125c19c size=44 calls_out=1 calls_in=0
// strings: 

void FUN_0125c19c(uint *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar1 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x0125c1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0125c1bc + *(int *)(&DAT_0125c1bc + iVar1 * 4)))();
  return;
}

