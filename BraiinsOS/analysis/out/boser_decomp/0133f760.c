// FUN_0133f760 @ 0133f760 size=196 calls_out=1 calls_in=0
// strings: DelegateProtocol | inner

void FUN_0133f760(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 9;
  if (*(int *)*param_1 < 0) {
    iVar1 = *(int *)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0133f788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0133f78c + *(int *)(&DAT_0133f78c + iVar1 * 4)))();
  return;
}

