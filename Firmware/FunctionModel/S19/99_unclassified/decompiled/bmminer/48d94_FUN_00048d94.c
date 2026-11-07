// FUN_00048d94 @ 00048d94  size=84  callers=2
// program: bmminer


void FUN_00048d94(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)*param_2;
  piVar4 = param_1 + 1;
  piVar1 = (int *)piVar3[1];
  *param_2 = (int)piVar1;
  if (piVar1 != piVar4) {
    piVar1[2] = (int)param_2;
  }
  puVar2 = (undefined4 *)param_2[2];
  if (piVar4 != piVar3) {
    piVar3[2] = (int)puVar2;
    puVar2 = (undefined4 *)param_2[2];
  }
  if (puVar2 == (undefined4 *)0x0) {
    *param_1 = piVar3;
  }
  else if ((int *)puVar2[1] == param_2) {
    puVar2[1] = piVar3;
  }
  else {
    *puVar2 = piVar3;
  }
  piVar3[1] = (int)param_2;
  if (piVar4 != param_2) {
    param_2[2] = (int)piVar3;
  }
  return;
}

