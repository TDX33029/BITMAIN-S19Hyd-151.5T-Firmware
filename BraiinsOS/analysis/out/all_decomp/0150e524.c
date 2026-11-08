// FUN_0150e524 @ 0150e524 size=60 calls_out=0 calls_in=15
// strings: 

void FUN_0150e524(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 1;
  if ((int)*param_1 < 0) {
    uVar1 = *param_1 ^ 0x80000000;
  }
                    /* WARNING: Could not recover jumptable at 0x0150e55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0150e560 + *(int *)(&DAT_0150e560 + uVar1 * 4)))(uVar1,uVar1);
  return;
}

