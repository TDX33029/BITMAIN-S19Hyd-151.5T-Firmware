// FUN_00049060 @ 00049060  size=88  callers=1
// program: bmminer


void FUN_00049060(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = malloc(0x28);
  if (piVar1 == (int *)0x0) {
    return;
  }
  piVar2 = piVar1 + 1;
  piVar1[5] = 0;
  piVar1[6] = 0;
  piVar1[3] = 0;
  piVar1[4] = 0;
  piVar1[9] = param_1;
  piVar1[7] = param_2;
  piVar1[8] = param_3;
  *piVar1 = (int)piVar2;
  piVar1[1] = (int)piVar2;
  piVar1[2] = (int)piVar2;
  return;
}

