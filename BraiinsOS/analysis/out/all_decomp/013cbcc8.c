// FUN_013cbcc8 @ 013cbcc8 size=44 calls_out=0 calls_in=3
// strings: 

void FUN_013cbcc8(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 4;
  if (*param_2 < 0) {
    iVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x013cbcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_013cbcf4 + *(int *)(&DAT_013cbcf4 + iVar1 * 4)))();
  return;
}

