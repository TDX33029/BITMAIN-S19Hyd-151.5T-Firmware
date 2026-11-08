// FUN_01116e4c @ 01116e4c size=288 calls_out=2 calls_in=0
// strings: Offline

void FUN_01116e4c(int *param_1)

{
  int iVar1;
  
  iVar1 = 6;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x01116e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01116e78 + *(int *)(&DAT_01116e78 + iVar1 * 4)))();
  return;
}

