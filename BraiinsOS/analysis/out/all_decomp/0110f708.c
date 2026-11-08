// FUN_0110f708 @ 0110f708 size=88 calls_out=1 calls_in=0
// strings: 

void FUN_0110f708(byte *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 - 8;
  if (*param_1 < 8 || iVar1 == 0) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0110f724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_0110f728 + (&DAT_0110f728)[iVar1]))();
  return;
}

