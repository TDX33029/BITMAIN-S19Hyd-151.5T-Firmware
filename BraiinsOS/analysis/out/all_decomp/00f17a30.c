// FUN_00f17a30 @ 00f17a30 size=72 calls_out=0 calls_in=1
// strings: 

void FUN_00f17a30(int *param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00f17a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00f17a80 + *(int *)(&DAT_00f17a80 + *param_1 * 4)))();
  return;
}

