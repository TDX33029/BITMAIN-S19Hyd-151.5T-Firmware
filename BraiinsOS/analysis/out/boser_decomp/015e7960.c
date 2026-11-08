// FUN_015e7960 @ 015e7960 size=44 calls_out=0 calls_in=2
// strings: 

void FUN_015e7960(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 4;
  if (*param_2 < 0) {
    iVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x015e7988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_015e798c + *(int *)(&DAT_015e798c + iVar1 * 4)))();
  return;
}

