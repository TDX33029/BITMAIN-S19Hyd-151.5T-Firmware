// FUN_016ac888 @ 016ac888 size=336 calls_out=2 calls_in=0
// strings: 

void FUN_016ac888(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(uint *)*param_1 - 0x29;
  if (*(uint *)*param_1 < 0x29) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x016ac8ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_016ac8b0 + (&DAT_016ac8b0)[iVar1]))();
  return;
}

