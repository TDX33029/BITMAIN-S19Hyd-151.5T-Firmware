// FUN_01389774 @ 01389774 size=28 calls_out=0 calls_in=0
// strings: 

void FUN_01389774(int param_1)

{
  int iVar1;
  
  iVar1 = *(byte *)(param_1 + 0x20) - 1;
  if (*(byte *)(param_1 + 0x20) == 0 || iVar1 == 0) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0138978c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_01389790 + (&DAT_01389790)[iVar1]))();
  return;
}

