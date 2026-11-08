// FUN_01bf1250 @ 01bf1250 size=60 calls_out=1 calls_in=51
// strings: 

void FUN_01bf1250(uint param_1,uint param_2)

{
  if (param_2 == 0) {
    FUN_01bf1014(0);
    return;
  }
  if (param_2 == 1) {
    return;
  }
  if (param_1 < param_2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01bf1280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_01bf143f + (LZCOUNT(param_2) - LZCOUNT(param_1)) * -0xe))();
  return;
}

