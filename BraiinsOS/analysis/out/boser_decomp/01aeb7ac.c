// FUN_01aeb7ac @ 01aeb7ac size=52 calls_out=0 calls_in=2
// strings: 

void FUN_01aeb7ac(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 4;
  if (*param_2 < 0) {
    iVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x01aeb7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01aeb7e0 + *(int *)(&DAT_01aeb7e0 + iVar1 * 4)))(param_2 + 2);
  return;
}

