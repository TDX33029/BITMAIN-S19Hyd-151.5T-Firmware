// FUN_00a30e4c @ 00a30e4c size=40 calls_out=0 calls_in=1
// strings: 

void FUN_00a30e4c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a30e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00a30e74 +
            *(int *)(&DAT_00a30e74 + (*param_1 + 0x80000001U & *param_1 >> 0x1f) * 4)))();
  return;
}

