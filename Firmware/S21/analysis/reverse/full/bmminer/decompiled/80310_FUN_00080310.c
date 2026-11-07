// FUN_00080310 @ 00080310  size=76  callers=14
// program: bmminer


int FUN_00080310(int *param_1)

{
  int iVar1;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 2)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1[2];
  }
  return iVar1;
}

