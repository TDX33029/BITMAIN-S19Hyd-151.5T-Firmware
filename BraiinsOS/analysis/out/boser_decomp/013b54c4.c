// FUN_013b54c4 @ 013b54c4 size=28 calls_out=0 calls_in=0
// strings: 

void FUN_013b54c4(int param_1)

{
  int iVar1;
  
  iVar1 = *(byte *)(param_1 + 0x20) - 1;
  if (*(byte *)(param_1 + 0x20) == 0 || iVar1 == 0) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x013b54dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_013b54e0 + (&DAT_013b54e0)[iVar1]))();
  return;
}

