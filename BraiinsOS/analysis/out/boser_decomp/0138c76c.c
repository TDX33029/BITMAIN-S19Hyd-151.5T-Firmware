// FUN_0138c76c @ 0138c76c size=40 calls_out=0 calls_in=1
// strings: 

void FUN_0138c76c(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(byte *)(param_2 + 0x20) - 1;
  if (*(byte *)(param_2 + 0x20) == 0 || iVar1 == 0) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0138c790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_0138c794 + (&DAT_0138c794)[iVar1]))();
  return;
}

