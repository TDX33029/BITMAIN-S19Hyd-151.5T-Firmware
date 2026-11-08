// FUN_0168f180 @ 0168f180 size=56 calls_out=0 calls_in=5
// strings: 

void FUN_0168f180(int *param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0168f1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0168f1c8 + *(int *)(&DAT_0168f1c8 + *param_1 * 4)))();
  return;
}

