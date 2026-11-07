// FUN_018462e8 @ 018462e8 size=60 calls_out=1 calls_in=94
// strings: 

void FUN_018462e8(uint param_1,uint param_2)

{
  if (param_2 == 0) {
    FUN_018460ac(0);
    return;
  }
  if (param_2 == 1) {
    return;
  }
  if (param_1 < param_2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01846318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_018464d7 + (LZCOUNT(param_2) - LZCOUNT(param_1)) * -0xe))();
  return;
}

