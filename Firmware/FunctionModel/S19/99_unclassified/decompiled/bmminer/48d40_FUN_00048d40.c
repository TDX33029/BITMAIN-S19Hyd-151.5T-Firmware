// FUN_00048d40 @ 00048d40  size=84  callers=2
// program: bmminer


void FUN_00048d40(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)param_2[1];
  piVar3 = param_1 + 1;
  piVar1 = (int *)*piVar2;
  param_2[1] = (int)piVar1;
  if (piVar1 != piVar3) {
    piVar1[2] = (int)param_2;
  }
  piVar1 = (int *)param_2[2];
  if (piVar3 != piVar2) {
    piVar2[2] = (int)piVar1;
    piVar1 = (int *)param_2[2];
  }
  if (piVar1 == (int *)0x0) {
    *param_1 = piVar2;
  }
  else if ((int *)*piVar1 == param_2) {
    *piVar1 = (int)piVar2;
  }
  else {
    piVar1[1] = (int)piVar2;
  }
  *piVar2 = (int)param_2;
  if (piVar3 != param_2) {
    param_2[2] = (int)piVar2;
  }
  return;
}

