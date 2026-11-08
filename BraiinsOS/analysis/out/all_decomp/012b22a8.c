// FUN_012b22a8 @ 012b22a8 size=168 calls_out=1 calls_in=0
// strings: 

void FUN_012b22a8(uint *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x012b22c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_012b22c8 + (&DAT_012b22c8)[iVar1]))();
  return;
}

