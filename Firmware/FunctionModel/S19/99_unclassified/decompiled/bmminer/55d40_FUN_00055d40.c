// FUN_00055d40 @ 00055d40  size=28  callers=5
// program: bmminer


int FUN_00055d40(int *param_1)

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

