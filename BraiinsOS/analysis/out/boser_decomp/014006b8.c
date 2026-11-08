// FUN_014006b8 @ 014006b8 size=112 calls_out=1 calls_in=0
// strings: 

void FUN_014006b8(ushort *param_1)

{
  ushort uVar1;
  
  uVar1 = 0x10;
  if (1 < *param_1) {
    uVar1 = *param_1 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x014006e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_014006e8 + *(int *)(&DAT_014006e8 + (uint)uVar1 * 4)))();
  return;
}

