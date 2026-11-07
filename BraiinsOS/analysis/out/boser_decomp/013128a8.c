// FUN_013128a8 @ 013128a8 size=44 calls_out=0 calls_in=1
// strings: 

void FUN_013128a8(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 3;
  if (*param_2 < 0) {
    iVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x013128d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_013128d4 + *(int *)(&DAT_013128d4 + iVar1 * 4)))();
  return;
}

