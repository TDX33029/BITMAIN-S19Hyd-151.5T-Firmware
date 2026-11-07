// FUN_000559b8 @ 000559b8  size=28  callers=1
// program: bmminer


int FUN_000559b8(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
    iVar1 = param_1[2];
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

