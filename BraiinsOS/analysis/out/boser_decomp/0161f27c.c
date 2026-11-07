// FUN_0161f27c @ 0161f27c size=288 calls_out=2 calls_in=0
// strings: Other

void FUN_0161f27c(int *param_1)

{
  int iVar1;
  
  iVar1 = 0x1e;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0161f2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0161f2a8 + *(int *)(&DAT_0161f2a8 + iVar1 * 4)))();
  return;
}

