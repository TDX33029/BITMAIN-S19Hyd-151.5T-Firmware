// FUN_00679ea4 @ 00679ea4 size=44 calls_out=0 calls_in=2
// strings: 

void FUN_00679ea4(int *param_1)

{
  int iVar1;
  
  iVar1 = 5;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00679ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00679ed0 + *(int *)(&DAT_00679ed0 + iVar1 * 4)))();
  return;
}

