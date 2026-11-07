// FUN_000491fc @ 000491fc  size=28  callers=1
// program: cgminer


int FUN_000491fc(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 2) {
    iVar1 = param_1[3];
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

