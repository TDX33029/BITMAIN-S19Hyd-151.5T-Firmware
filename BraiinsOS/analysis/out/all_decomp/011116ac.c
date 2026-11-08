// FUN_011116ac @ 011116ac size=88 calls_out=1 calls_in=0
// strings: 

void FUN_011116ac(int *param_1)

{
  int iVar1;
  
  iVar1 = 8;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x011116cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_011116d0 + *(int *)(&DAT_011116d0 + iVar1 * 4)))();
  return;
}

