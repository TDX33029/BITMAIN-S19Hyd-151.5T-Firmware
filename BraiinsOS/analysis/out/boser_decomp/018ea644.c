// FUN_018ea644 @ 018ea644 size=60 calls_out=0 calls_in=3
// strings: 

void FUN_018ea644(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 1;
  if ((int)*param_1 < 0) {
    uVar1 = *param_1 ^ 0x80000000;
  }
                    /* WARNING: Could not recover jumptable at 0x018ea67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_018ea680 + *(int *)(&DAT_018ea680 + uVar1 * 4)))(uVar1,uVar1);
  return;
}

