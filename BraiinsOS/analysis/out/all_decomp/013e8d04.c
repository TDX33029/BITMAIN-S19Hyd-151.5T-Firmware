// FUN_013e8d04 @ 013e8d04 size=60 calls_out=0 calls_in=3
// strings: 

void FUN_013e8d04(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  while (iVar1 == 5) {
    param_3 = (int *)param_3[1];
    iVar1 = *param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x013e8d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_013e8d40 + *(int *)(&DAT_013e8d40 + iVar1 * 4)))();
  return;
}

