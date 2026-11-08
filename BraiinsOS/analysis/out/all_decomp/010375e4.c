// FUN_010375e4 @ 010375e4 size=336 calls_out=2 calls_in=0
// strings: 

void FUN_010375e4(undefined4 *param_1)

{
  ushort uVar1;
  
  uVar1 = 0x10;
  if (1 < *(ushort *)*param_1) {
    uVar1 = *(ushort *)*param_1 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x01037610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01037614 + *(int *)(&DAT_01037614 + (uint)uVar1 * 4)))();
  return;
}

