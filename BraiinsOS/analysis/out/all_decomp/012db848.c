// FUN_012db848 @ 012db848 size=168 calls_out=1 calls_in=0
// strings: 

void FUN_012db848(uint *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x012db864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_012db868 + (&DAT_012db868)[iVar1]))();
  return;
}

