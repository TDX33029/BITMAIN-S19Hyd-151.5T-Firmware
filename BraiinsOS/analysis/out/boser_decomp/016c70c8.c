// FUN_016c70c8 @ 016c70c8 size=104 calls_out=1 calls_in=0
// strings: Syntaxgiven

void FUN_016c70c8(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(uint *)*param_1 - 0x22;
  if (*(uint *)*param_1 < 0x22) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x016c70ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_016c70f0 + (&DAT_016c70f0)[iVar1]))();
  return;
}

