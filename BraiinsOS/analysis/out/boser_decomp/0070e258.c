// FUN_0070e258 @ 0070e258 size=36 calls_out=0 calls_in=1
// strings: 

void FUN_0070e258(int *param_1)

{
  int iVar1;
  
  iVar1 = 6;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0070e278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0070e27c + *(int *)(&DAT_0070e27c + iVar1 * 4)))();
  return;
}

