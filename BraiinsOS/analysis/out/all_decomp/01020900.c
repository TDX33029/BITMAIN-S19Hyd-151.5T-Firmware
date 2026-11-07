// FUN_01020900 @ 01020900 size=28 calls_out=0 calls_in=0
// strings: 

void FUN_01020900(int param_1)

{
  int iVar1;
  
  iVar1 = *(byte *)(param_1 + 0x20) - 1;
  if (*(byte *)(param_1 + 0x20) == 0 || iVar1 == 0) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x01020918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_0102091c + (&DAT_0102091c)[iVar1]))();
  return;
}

