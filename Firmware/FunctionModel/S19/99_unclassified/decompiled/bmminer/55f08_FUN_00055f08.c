// FUN_00055f08 @ 00055f08  size=28  callers=5
// program: bmminer


int FUN_00055f08(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 2) {
    iVar1 = param_1[2];
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

