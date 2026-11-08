// FUN_01135cd0 @ 01135cd0 size=40 calls_out=0 calls_in=1
// strings: 

void FUN_01135cd0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x01135cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01135cf8 +
            *(int *)(&DAT_01135cf8 + (*param_1 + 0x80000001U & *param_1 >> 0x1f) * 4)))();
  return;
}

