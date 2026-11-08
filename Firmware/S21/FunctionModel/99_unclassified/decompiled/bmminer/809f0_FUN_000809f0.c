// FUN_000809f0 @ 000809f0  size=84  callers=4
// program: bmminer


int FUN_000809f0(int *param_1)

{
  int iVar1;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 4)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1[2];
  }
  return iVar1;
}

