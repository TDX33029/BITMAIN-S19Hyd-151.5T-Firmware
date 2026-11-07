// FUN_019dfd84 @ 019dfd84 size=120 calls_out=0 calls_in=2
// strings: 

int * FUN_019dfd84(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  
  if (*param_2 == 0) {
    if (param_2 != (int *)*param_1) {
      return (int *)0x0;
    }
    piVar1 = (int *)param_2[1];
    *param_1 = piVar1;
  }
  else {
    piVar1 = (int *)param_2[1];
    *(int **)(*param_2 + 4) = piVar1;
  }
  if (piVar1 == (int *)0x0) {
    if (param_2 != (int *)param_1[1]) {
      return (int *)0x0;
    }
    param_1[1] = *param_2;
  }
  else {
    *piVar1 = *param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}

