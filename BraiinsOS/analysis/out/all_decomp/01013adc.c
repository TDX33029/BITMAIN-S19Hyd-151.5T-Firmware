// FUN_01013adc @ 01013adc size=36 calls_out=0 calls_in=2
// strings: 

void FUN_01013adc(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(byte *)(param_2 + 0x20) - 1;
  if (*(byte *)(param_2 + 0x20) == 0 || iVar1 == 0) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x01013afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_01013b00 + (&DAT_01013b00)[iVar1]))();
  return;
}

