// FUN_01115464 @ 01115464 size=52 calls_out=0 calls_in=2
// strings: 

void FUN_01115464(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 0x15;
  if (*param_2 < 0) {
    iVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x01115494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01115498 + *(int *)(&DAT_01115498 + iVar1 * 4)))();
  return;
}

