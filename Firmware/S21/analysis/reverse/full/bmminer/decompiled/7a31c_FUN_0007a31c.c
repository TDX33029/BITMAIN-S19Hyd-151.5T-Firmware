// FUN_0007a31c @ 0007a31c  size=92  callers=2
// program: bmminer


void FUN_0007a31c(int *param_1,int *param_2)

{
  param_2[1] = (int)param_1;
  *param_2 = *param_1;
  *(int **)(*param_1 + 4) = param_2;
  *param_1 = (int)param_2;
  return;
}

