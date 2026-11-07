// FUN_013cd190 @ 013cd190 size=336 calls_out=2 calls_in=0
// strings: SyntaxgivenExceededSizeLimitInvalidCaptureIndex

void FUN_013cd190(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(uint *)*param_1 - 0x22;
  if (*(uint *)*param_1 < 0x22) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x013cd1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_013cd1b8 + (&DAT_013cd1b8)[iVar1]))();
  return;
}

