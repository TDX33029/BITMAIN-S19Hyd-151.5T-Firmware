// FUN_01020a90 @ 01020a90 size=32 calls_out=0 calls_in=3
// strings: 

void FUN_01020a90(int param_1)

{
  int iVar1;
  
  iVar1 = *(byte *)(param_1 + 0x20) - 1;
  if (*(byte *)(param_1 + 0x20) == 0 || iVar1 == 0) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x01020aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_01020ab0 + (&DAT_01020ab0)[iVar1]))(param_1,0x2a);
  return;
}

