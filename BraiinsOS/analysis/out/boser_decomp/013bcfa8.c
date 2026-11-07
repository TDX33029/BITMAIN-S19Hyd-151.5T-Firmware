// FUN_013bcfa8 @ 013bcfa8 size=52 calls_out=0 calls_in=1
// strings: 

void FUN_013bcfa8(ushort *param_1)

{
  ushort uVar1;
  
  uVar1 = 0x10;
  if (1 < *param_1) {
    uVar1 = *param_1 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x013bcfd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_013bcfdc + *(int *)(&DAT_013bcfdc + (uint)uVar1 * 4)))();
  return;
}

