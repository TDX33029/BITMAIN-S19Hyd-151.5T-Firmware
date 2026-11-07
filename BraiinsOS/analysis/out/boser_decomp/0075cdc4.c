// FUN_0075cdc4 @ 0075cdc4 size=56 calls_out=0 calls_in=1
// strings: 

void FUN_0075cdc4(int *param_1)

{
  if (*param_1 == 4) {
                    /* WARNING: Could not recover jumptable at 0x0075cde8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0075cdec + *(int *)(&DAT_0075cdec + param_1[2] * 4)))(0xc);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0075cec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0075cec4 + *(int *)(&DAT_0075cec4 + *param_1 * 4)))(4);
  return;
}

