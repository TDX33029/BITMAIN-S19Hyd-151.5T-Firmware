// FUN_01a4d3c0 @ 01a4d3c0 size=36 calls_out=0 calls_in=1
// strings: 

void FUN_01a4d3c0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x01a4d3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_01a4d3e4 +
            *(int *)(&LAB_01a4d3e4 + (*param_1 + 0x80000001U & *param_1 >> 0x1f) * 4)))();
  return;
}

