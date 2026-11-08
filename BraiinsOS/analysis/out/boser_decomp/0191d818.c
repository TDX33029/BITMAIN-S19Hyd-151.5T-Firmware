// FUN_0191d818 @ 0191d818 size=36 calls_out=0 calls_in=2
// strings: 

void FUN_0191d818(int *param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0191d838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0191d83c + *(int *)(&DAT_0191d83c + iVar1 * 4)))(0);
  return;
}

