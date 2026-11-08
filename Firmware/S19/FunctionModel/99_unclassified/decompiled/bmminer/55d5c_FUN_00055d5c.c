// FUN_00055d5c @ 00055d5c  size=52  callers=5
// program: bmminer


undefined4 FUN_00055d5c(int *param_1,uint param_2)

{
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if ((*param_1 == 1) && (param_2 < (uint)param_1[3])) {
    return *(undefined4 *)(param_1[4] + param_2 * 4);
  }
  return 0;
}

