// FUN_00055f40 @ 00055f40  size=100  callers=2
// program: bmminer


undefined4 FUN_00055f40(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (((param_1 == (int *)0x0) || (*param_1 != 2 || param_2 == 0)) ||
     (iVar1 = FUN_00055054(param_2,param_3), iVar1 == 0)) {
    return 0xffffffff;
  }
  FUN_0005503c(param_1[2]);
  param_1[2] = iVar1;
  param_1[3] = param_3;
  return 0;
}

