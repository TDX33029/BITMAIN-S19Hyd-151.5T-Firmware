// FUN_013d8afc @ 013d8afc size=288 calls_out=2 calls_in=0
// strings: 

void FUN_013d8afc(int *param_1)

{
  int iVar1;
  
  iVar1 = 3;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x013d8b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_013d8b28 + *(int *)(&DAT_013d8b28 + iVar1 * 4)))();
  return;
}

