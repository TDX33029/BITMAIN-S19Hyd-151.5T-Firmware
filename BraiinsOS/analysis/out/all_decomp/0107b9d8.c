// FUN_0107b9d8 @ 0107b9d8 size=336 calls_out=2 calls_in=0
// strings: 

void FUN_0107b9d8(ushort *param_1)

{
  ushort uVar1;
  
  uVar1 = 0x10;
  if (1 < *param_1) {
    uVar1 = *param_1 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x0107ba04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0107ba08 + *(int *)(&DAT_0107ba08 + (uint)uVar1 * 4)))();
  return;
}

