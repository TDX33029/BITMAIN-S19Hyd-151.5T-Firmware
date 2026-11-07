// FUN_012e87b0 @ 012e87b0 size=168 calls_out=1 calls_in=0
// strings: 

void FUN_012e87b0(uint *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x012e87cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_012e87d0 + (&DAT_012e87d0)[iVar1]))();
  return;
}

