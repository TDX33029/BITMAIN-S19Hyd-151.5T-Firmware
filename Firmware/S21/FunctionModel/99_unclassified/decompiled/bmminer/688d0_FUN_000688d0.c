// FUN_000688d0 @ 000688d0  size=276  callers=2
// program: bmminer


void FUN_000688d0(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  *param_2 = piVar1[1];
  if ((int *)piVar1[1] != param_1 + 1) {
    *(int **)(piVar1[1] + 8) = param_2;
  }
  if (piVar1 != param_1 + 1) {
    piVar1[2] = param_2[2];
  }
  if (param_2[2] == 0) {
    *param_1 = (int)piVar1;
  }
  else if (param_2 == *(int **)(param_2[2] + 4)) {
    *(int **)(param_2[2] + 4) = piVar1;
  }
  else {
    *(int **)param_2[2] = piVar1;
  }
  piVar1[1] = (int)param_2;
  if (param_2 != param_1 + 1) {
    param_2[2] = (int)piVar1;
  }
  return;
}

