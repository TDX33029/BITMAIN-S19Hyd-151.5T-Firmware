// FUN_01095888 @ 01095888 size=336 calls_out=2 calls_in=0
// strings: 

void FUN_01095888(undefined4 *param_1)

{
  ushort uVar1;
  
  uVar1 = 0x10;
  if (1 < *(ushort *)*param_1) {
    uVar1 = *(ushort *)*param_1 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x010958b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_010958b8 + *(int *)(&DAT_010958b8 + (uint)uVar1 * 4)))();
  return;
}

