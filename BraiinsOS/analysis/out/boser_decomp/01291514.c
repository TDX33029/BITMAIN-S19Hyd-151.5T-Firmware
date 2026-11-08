// FUN_01291514 @ 01291514 size=116 calls_out=1 calls_in=0
// strings: SystemTimeTransitionRuleUnsupportedTzFileUnsupportedTzStringa formatted date strin

void FUN_01291514(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0xa;
  if (&DAT_3b9ac9ff < *(undefined1 **)(param_1 + 8)) {
    puVar1 = *(undefined1 **)(param_1 + 8) + -1000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x0129154c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01291550 + *(int *)(&DAT_01291550 + (int)puVar1 * 4)))();
  return;
}

