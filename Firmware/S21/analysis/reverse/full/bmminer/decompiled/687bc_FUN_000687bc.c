// FUN_000687bc @ 000687bc  size=276  callers=2
// program: bmminer


void FUN_000687bc(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)param_2[1];
  param_2[1] = *piVar1;
  if ((undefined4 *)*piVar1 != param_1 + 1) {
    *(undefined4 **)(*piVar1 + 8) = param_2;
  }
  if (piVar1 != param_1 + 1) {
    piVar1[2] = param_2[2];
  }
  if (param_2[2] == 0) {
    *param_1 = piVar1;
  }
  else if (param_2 == (undefined4 *)*(int *)param_2[2]) {
    *(int **)param_2[2] = piVar1;
  }
  else {
    *(int **)(param_2[2] + 4) = piVar1;
  }
  *piVar1 = (int)param_2;
  if (param_2 != param_1 + 1) {
    param_2[2] = piVar1;
  }
  return;
}

