// FUN_013be128 @ 013be128 size=52 calls_out=0 calls_in=1
// strings: 

void FUN_013be128(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  while (iVar1 == 5) {
    param_2 = (int *)param_2[1];
    iVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x013be158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_013be15c + *(int *)(&DAT_013be15c + iVar1 * 4)))();
  return;
}

