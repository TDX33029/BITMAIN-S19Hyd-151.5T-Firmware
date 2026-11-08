// FUN_00b35568 @ 00b35568 size=60 calls_out=0 calls_in=1
// strings: 

void FUN_00b35568(undefined4 param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = 3;
  if (6 < *param_2) {
    iVar1 = *param_2 - 7;
  }
                    /* WARNING: Could not recover jumptable at 0x00b355a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00b355a4 + *(int *)(&DAT_00b355a4 + iVar1 * 4)))();
  return;
}

