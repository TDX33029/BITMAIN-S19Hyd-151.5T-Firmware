// FUN_009465dc @ 009465dc size=36 calls_out=0 calls_in=0
// strings: 

void FUN_009465dc(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009465fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_00946600 +
            *(int *)(&LAB_00946600 + (*param_1 + 0x80000001U & *param_1 >> 0x1f) * 4)))();
  return;
}

