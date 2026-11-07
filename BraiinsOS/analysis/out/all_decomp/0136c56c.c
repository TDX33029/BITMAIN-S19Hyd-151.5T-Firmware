// FUN_0136c56c @ 0136c56c size=336 calls_out=2 calls_in=0
// strings: 

void FUN_0136c56c(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(uint *)*param_1 - 0x29;
  if (*(uint *)*param_1 < 0x29) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0136c590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_0136c594 + (&DAT_0136c594)[iVar1]))();
  return;
}

