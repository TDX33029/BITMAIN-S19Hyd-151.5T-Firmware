// FUN_01388e98 @ 01388e98 size=36 calls_out=0 calls_in=3
// strings: 

void FUN_01388e98(int param_1)

{
  int iVar1;
  
  iVar1 = *(byte *)(param_1 + 0x20) - 1;
  if (*(byte *)(param_1 + 0x20) == 0 || iVar1 == 0) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x01388eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_01388ebc + (&DAT_01388ebc)[iVar1]))(0x2a);
  return;
}

