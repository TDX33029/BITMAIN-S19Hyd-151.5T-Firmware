// FUN_00d356e0 @ 00d356e0 size=48 calls_out=1 calls_in=2
// strings: 

void FUN_00d356e0(int *param_1)

{
  if (*param_1 != 8) {
                    /* WARNING: Could not recover jumptable at 0x00d3570c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&LAB_00d35710 + *(int *)(&LAB_00d35710 + *param_1 * 4)))();
    return;
  }
  if (param_1[4] == 0) {
    return;
  }
  FUN_01443048(param_1[4],param_1[5]);
  return;
}

