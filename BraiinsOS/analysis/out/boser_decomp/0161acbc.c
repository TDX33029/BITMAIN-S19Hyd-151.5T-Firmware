// FUN_0161acbc @ 0161acbc size=120 calls_out=1 calls_in=0
// strings: 

void FUN_0161acbc(int *param_1)

{
  int iVar1;
  
  iVar1 = 3;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0161ace8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0161acec + *(int *)(&DAT_0161acec + iVar1 * 4)))();
  return;
}

