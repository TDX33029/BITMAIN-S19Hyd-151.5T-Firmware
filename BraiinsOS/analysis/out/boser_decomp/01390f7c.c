// FUN_01390f7c @ 01390f7c size=40 calls_out=0 calls_in=4
// strings: 

void FUN_01390f7c(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(byte *)(param_2 + 0x20) - 1;
  if (*(byte *)(param_2 + 0x20) == 0 || iVar1 == 0) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x01390fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_01390fa4 + (&DAT_01390fa4)[iVar1]))();
  return;
}

