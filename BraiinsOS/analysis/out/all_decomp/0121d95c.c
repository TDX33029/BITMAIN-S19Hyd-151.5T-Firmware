// FUN_0121d95c @ 0121d95c size=340 calls_out=2 calls_in=0
// strings: SyntaxgivenExceededSizeLimitInvalidCaptureIndex

void FUN_0121d95c(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(uint *)*param_1 - 0x22;
  if (*(uint *)*param_1 < 0x22) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0121d980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_0121d984 + (&DAT_0121d984)[iVar1]))();
  return;
}

