// FUN_01013018 @ 01013018 size=36 calls_out=0 calls_in=1
// strings: 

void FUN_01013018(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(byte *)(param_2 + 0x20) - 1;
  if (*(byte *)(param_2 + 0x20) == 0 || iVar1 == 0) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x01013038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_0101303c + (&DAT_0101303c)[iVar1]))();
  return;
}

