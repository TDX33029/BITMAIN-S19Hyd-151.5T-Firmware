// FUN_019dffdc @ 019dffdc size=104 calls_out=0 calls_in=3
// strings: 

void FUN_019dffdc(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  
  if (*param_2 == 0) {
    if (param_2 != (int *)*param_1) {
      return;
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
      return;
    }
    param_1[1] = *param_2;
  }
  else {
    *piVar1 = *param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}

