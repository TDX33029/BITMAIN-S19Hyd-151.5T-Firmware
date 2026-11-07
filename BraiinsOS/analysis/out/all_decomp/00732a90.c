// FUN_00732a90 @ 00732a90 size=36 calls_out=0 calls_in=2
// strings: 

void FUN_00732a90(byte *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 - 8;
  if (*param_1 < 8 || iVar1 == 0) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00732ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_00732ab4 + (&DAT_00732ab4)[iVar1]))();
  return;
}

