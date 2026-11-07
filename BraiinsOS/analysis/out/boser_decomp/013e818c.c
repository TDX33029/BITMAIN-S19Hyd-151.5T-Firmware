// FUN_013e818c @ 013e818c size=108 calls_out=1 calls_in=0
// strings: 

void FUN_013e818c(undefined4 *param_1)

{
  ushort uVar1;
  
  uVar1 = 7;
  if (1 < *(ushort *)*param_1) {
    uVar1 = *(ushort *)*param_1 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x013e81b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_013e81bc + *(int *)(&DAT_013e81bc + (uint)uVar1 * 4)))();
  return;
}

