// FUN_01312f4c @ 01312f4c size=44 calls_out=0 calls_in=1
// strings: 

void FUN_01312f4c(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 3;
  if (*param_2 < 0) {
    iVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x01312f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01312f78 + *(int *)(&DAT_01312f78 + iVar1 * 4)))();
  return;
}

