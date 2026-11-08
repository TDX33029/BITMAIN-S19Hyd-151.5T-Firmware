// FUN_00efe698 @ 00efe698 size=36 calls_out=0 calls_in=2
// strings: 

void FUN_00efe698(int *param_1)

{
  int iVar1;
  
  iVar1 = 3;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00efe6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00efe6bc + *(int *)(&DAT_00efe6bc + iVar1 * 4)))();
  return;
}

