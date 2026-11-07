// FUN_018460d8 @ 018460d8 size=74 calls_out=1 calls_in=1
// strings: 

uint FUN_018460d8(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = FUN_018460ac(0);
    return uVar1;
  }
  if (param_2 == 1) {
    *param_3 = 0;
    return param_1;
  }
  if (param_1 < param_2) {
    *param_3 = param_1;
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x01846108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(&UNK_018462bd + (LZCOUNT(param_2) - LZCOUNT(param_1)) * -0xe))();
  return uVar1;
}

