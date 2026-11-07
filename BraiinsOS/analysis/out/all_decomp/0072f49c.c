// FUN_0072f49c @ 0072f49c size=300 calls_out=2 calls_in=0
// strings: 

void FUN_0072f49c(int *param_1)

{
  int iVar1;
  
  iVar1 = 8;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0072f4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0072f4c0 + *(int *)(&DAT_0072f4c0 + iVar1 * 4)))();
  return;
}

