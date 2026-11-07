// FUN_012ef6a4 @ 012ef6a4 size=168 calls_out=1 calls_in=0
// strings: 

void FUN_012ef6a4(uint *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x012ef6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_012ef6c4 + (&DAT_012ef6c4)[iVar1]))();
  return;
}

