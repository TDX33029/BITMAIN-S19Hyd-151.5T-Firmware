// FUN_01311d30 @ 01311d30 size=44 calls_out=0 calls_in=1
// strings: 

void FUN_01311d30(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 3;
  if (*param_2 < 0) {
    iVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x01311d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01311d5c + *(int *)(&DAT_01311d5c + iVar1 * 4)))();
  return;
}

