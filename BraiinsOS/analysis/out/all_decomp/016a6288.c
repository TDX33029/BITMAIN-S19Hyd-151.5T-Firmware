// FUN_016a6288 @ 016a6288 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_016a6288(undefined4 *param_1)

{
  if (*(char *)(param_1 + 1) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x016a6344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&LAB_016a6348 + *(int *)(&LAB_016a6348 + *(int *)*param_1 * 4)))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x016a62ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_016a62b0 + *(int *)(&LAB_016a62b0 + *(int *)*param_1 * 4)))();
  return;
}

