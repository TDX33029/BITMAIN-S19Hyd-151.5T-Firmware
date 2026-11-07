// FUN_00049758 @ 00049758  size=32  callers=0
// program: bmminer


int * FUN_00049758(int param_1,int *param_2)

{
  while ((int *)*param_2 != (int *)(param_1 + 4)) {
    param_2 = (int *)*param_2;
  }
  return param_2;
}

