// FUN_010e7e8c @ 010e7e8c size=40 calls_out=0 calls_in=0
// strings: 

void FUN_010e7e8c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x010e7eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_010e7eb4 +
            *(int *)(&LAB_010e7eb4 + (*param_1 + 0x80000001U & *param_1 >> 0x1f) * 4)))();
  return;
}

