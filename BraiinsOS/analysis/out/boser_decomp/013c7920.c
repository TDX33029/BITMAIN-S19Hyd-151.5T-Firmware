// FUN_013c7920 @ 013c7920 size=36 calls_out=0 calls_in=11
// strings: 

void FUN_013c7920(ushort *param_1)

{
  ushort uVar1;
  
  uVar1 = 0x10;
  if (1 < *param_1) {
    uVar1 = *param_1 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x013c7940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_013c7944 + *(int *)(&DAT_013c7944 + (uint)uVar1 * 4)))();
  return;
}

