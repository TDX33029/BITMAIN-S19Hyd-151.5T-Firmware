// FUN_0159df7c @ 0159df7c size=52 calls_out=0 calls_in=1
// strings: 

void FUN_0159df7c(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 0x11;
  if (*param_2 < 0) {
    iVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x0159dfac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0159dfb0 + *(int *)(&DAT_0159dfb0 + iVar1 * 4)))();
  return;
}

