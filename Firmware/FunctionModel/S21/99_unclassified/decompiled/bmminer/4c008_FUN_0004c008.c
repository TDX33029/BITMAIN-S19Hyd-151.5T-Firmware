// FUN_0004c008 @ 0004c008  size=84  callers=3
// program: bmminer


undefined * FUN_0004c008(int *param_1,int *param_2)

{
  if (*param_1 - *param_2 < 0xe11) {
    return (undefined *)((*param_1 - *param_2) * 1000 + (param_1[1] - param_2[1]) / 1000);
  }
  return &DAT_0036ee80;
}

