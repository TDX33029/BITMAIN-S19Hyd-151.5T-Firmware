// FUN_00f08060 @ 00f08060 size=40 calls_out=0 calls_in=0
// strings: 

void FUN_00f08060(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00f08084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00f08088 +
            *(int *)(&DAT_00f08088 + (*param_1 + 0x80000001U & *param_1 >> 0x1f) * 4)))();
  return;
}

