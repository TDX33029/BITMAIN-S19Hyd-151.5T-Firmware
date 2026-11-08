// FUN_000491e0 @ 000491e0  size=28  callers=12
// program: cgminer


int FUN_000491e0(int *param_1)

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

