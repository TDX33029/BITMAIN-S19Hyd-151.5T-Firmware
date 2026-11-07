// FUN_013b4d08 @ 013b4d08 size=36 calls_out=0 calls_in=3
// strings: 

void FUN_013b4d08(int param_1)

{
  int iVar1;
  
  iVar1 = *(byte *)(param_1 + 0x20) - 1;
  if (*(byte *)(param_1 + 0x20) == 0 || iVar1 == 0) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x013b4d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_013b4d2c + (&DAT_013b4d2c)[iVar1]))(0x2a);
  return;
}

