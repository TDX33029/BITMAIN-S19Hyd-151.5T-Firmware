// FUN_013cd7c4 @ 013cd7c4 size=64 calls_out=0 calls_in=0
// strings: 

void FUN_013cd7c4(uint *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 - 0x22;
  if (*param_1 < 0x22) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x013cd7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_013cd7e4 + (&DAT_013cd7e4)[iVar1]))();
  return;
}

