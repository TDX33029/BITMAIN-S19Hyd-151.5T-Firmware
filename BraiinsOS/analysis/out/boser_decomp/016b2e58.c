// FUN_016b2e58 @ 016b2e58 size=420 calls_out=2 calls_in=0
// strings: NFATooManyStartStatesTooManyMatchPatternIDsDFAExceededSizeLimitDeterminizeExceededSizeLimit

void FUN_016b2e58(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(uint *)*param_1 - 0x29;
  if (*(uint *)*param_1 < 0x29) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x016b2e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_016b2e80 + (&DAT_016b2e80)[iVar1]))();
  return;
}

