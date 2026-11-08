// FUN_016acd1c @ 016acd1c size=336 calls_out=2 calls_in=0
// strings: SyntaxgivenExceededSizeLimitInvalidCaptureIndex

void FUN_016acd1c(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(uint *)*param_1 - 0x22;
  if (*(uint *)*param_1 < 0x22) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x016acd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_016acd44 + (&DAT_016acd44)[iVar1]))();
  return;
}

