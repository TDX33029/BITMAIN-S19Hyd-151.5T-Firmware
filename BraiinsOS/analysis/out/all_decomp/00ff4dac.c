// FUN_00ff4dac @ 00ff4dac size=620 calls_out=3 calls_in=1
// strings: DelegateProtocol | inner | inner

void FUN_00ff4dac(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 9;
  if (*(int *)*param_1 < 0) {
    iVar1 = *(int *)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00ff4dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00ff4dd8 + *(int *)(&DAT_00ff4dd8 + iVar1 * 4)))();
  return;
}

