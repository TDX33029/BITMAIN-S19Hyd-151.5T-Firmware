// FUN_00049018 @ 00049018  size=28  callers=9
// program: cgminer


int FUN_00049018(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 1) {
    iVar1 = param_1[3];
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

