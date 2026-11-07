// FUN_012c2734 @ 012c2734 size=116 calls_out=0 calls_in=0
// strings: 

void FUN_012c2734(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(uint *)(param_2 + 0x38) - 6;
  if (*(uint *)(param_2 + 0x38) < 6) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x012c2798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_012c279c + (&DAT_012c279c)[iVar1]))();
  return;
}

