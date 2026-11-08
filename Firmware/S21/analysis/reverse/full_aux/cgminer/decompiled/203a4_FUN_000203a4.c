// FUN_000203a4 @ 000203a4  size=52  callers=1
// program: cgminer


bool FUN_000203a4(int *param_1,int *param_2)

{
  if (*param_1 == *param_2) {
    return param_1[1] < param_2[1];
  }
  return *param_1 < *param_2;
}

