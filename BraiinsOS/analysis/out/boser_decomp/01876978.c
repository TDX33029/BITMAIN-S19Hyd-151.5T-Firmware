// FUN_01876978 @ 01876978 size=84 calls_out=1 calls_in=6
// strings: 

void FUN_01876978(int param_1,int *param_2)

{
  if (*(char *)(param_1 + 0x24) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x018769c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&LAB_018769cc + *(int *)(&LAB_018769cc + *param_2 * 4)))();
    return;
  }
  FUN_01885284(param_1 + 0x10);
  return;
}

