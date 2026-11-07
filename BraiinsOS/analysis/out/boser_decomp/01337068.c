// FUN_01337068 @ 01337068 size=196 calls_out=1 calls_in=0
// strings: DelegateProtocol | inner

void FUN_01337068(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 9;
  if (*(int *)*param_1 < 0) {
    iVar1 = *(int *)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x01337090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01337094 + *(int *)(&DAT_01337094 + iVar1 * 4)))();
  return;
}

