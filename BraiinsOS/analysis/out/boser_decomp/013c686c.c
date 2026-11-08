// FUN_013c686c @ 013c686c size=112 calls_out=1 calls_in=0
// strings: 

void FUN_013c686c(undefined4 *param_1)

{
  ushort uVar1;
  
  uVar1 = 0x10;
  if (1 < *(ushort *)*param_1) {
    uVar1 = *(ushort *)*param_1 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x013c6898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_013c689c + *(int *)(&DAT_013c689c + (uint)uVar1 * 4)))();
  return;
}

