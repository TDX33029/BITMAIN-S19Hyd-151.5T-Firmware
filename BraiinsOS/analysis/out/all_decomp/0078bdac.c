// FUN_0078bdac @ 0078bdac size=40 calls_out=0 calls_in=1
// strings: 

void FUN_0078bdac(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078bdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0078bdd4 +
            *(int *)(&DAT_0078bdd4 + (*param_1 + 0x80000001U & *param_1 >> 0x1f) * 4)))();
  return;
}

