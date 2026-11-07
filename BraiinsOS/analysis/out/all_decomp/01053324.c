// FUN_01053324 @ 01053324 size=108 calls_out=1 calls_in=0
// strings: 

void FUN_01053324(undefined4 *param_1)

{
  ushort uVar1;
  
  uVar1 = 7;
  if (1 < *(ushort *)*param_1) {
    uVar1 = *(ushort *)*param_1 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x01053350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01053354 + *(int *)(&DAT_01053354 + (uint)uVar1 * 4)))();
  return;
}

