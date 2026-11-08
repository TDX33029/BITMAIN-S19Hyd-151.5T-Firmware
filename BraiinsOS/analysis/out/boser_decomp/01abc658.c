// FUN_01abc658 @ 01abc658 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_01abc658(undefined4 *param_1)

{
  if (*(char *)(param_1 + 1) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x01abc714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&LAB_01abc718 + *(int *)(&LAB_01abc718 + *(int *)*param_1 * 4)))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01abc67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_01abc680 + *(int *)(&LAB_01abc680 + *(int *)*param_1 * 4)))();
  return;
}

