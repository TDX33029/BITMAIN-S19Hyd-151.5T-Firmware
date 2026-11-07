// FUN_018d8910 @ 018d8910 size=24 calls_out=0 calls_in=1
// strings: 

void FUN_018d8910(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x018d8924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_018d8928 + *(int *)(&LAB_018d8928 + (param_1 & 0xffff) * 4)))(0x200);
  return;
}

