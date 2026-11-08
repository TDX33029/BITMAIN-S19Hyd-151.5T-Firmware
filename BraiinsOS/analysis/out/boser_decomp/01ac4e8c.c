// FUN_01ac4e8c @ 01ac4e8c size=288 calls_out=2 calls_in=0
// strings: 

void FUN_01ac4e8c(int *param_1)

{
  int iVar1;
  
  iVar1 = 2;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x01ac4eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01ac4eb8 + *(int *)(&DAT_01ac4eb8 + iVar1 * 4)))();
  return;
}

