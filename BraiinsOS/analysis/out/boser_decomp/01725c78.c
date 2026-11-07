// FUN_01725c78 @ 01725c78 size=84 calls_out=1 calls_in=2
// strings: 

void FUN_01725c78(int param_1,int *param_2)

{
  if (*(char *)(param_1 + 0x2c) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x01725cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&LAB_01725ccc + *(int *)(&LAB_01725ccc + *param_2 * 4)))();
    return;
  }
  FUN_01885284(param_1 + 0x18);
  return;
}

