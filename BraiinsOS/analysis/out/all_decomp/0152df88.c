// FUN_0152df88 @ 0152df88 size=340 calls_out=2 calls_in=0
// strings: 

void FUN_0152df88(int *param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0152dfa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0152dfac + *(int *)(&DAT_0152dfac + iVar1 * 4)))();
  return;
}

