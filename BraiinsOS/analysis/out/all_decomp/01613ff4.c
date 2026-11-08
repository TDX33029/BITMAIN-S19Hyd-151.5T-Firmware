// FUN_01613ff4 @ 01613ff4 size=300 calls_out=2 calls_in=0
// strings: 

void FUN_01613ff4(int *param_1)

{
  int iVar1;
  
  iVar1 = 8;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x01614014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01614018 + *(int *)(&DAT_01614018 + iVar1 * 4)))();
  return;
}

