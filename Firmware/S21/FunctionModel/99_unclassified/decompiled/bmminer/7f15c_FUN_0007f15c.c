// FUN_0007f15c @ 0007f15c  size=112  callers=7
// program: bmminer


undefined4 FUN_0007f15c(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (((param_1 == (int *)0x0) || (*param_1 != 0)) || (param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0007aea4(param_1 + 2,param_2);
  }
  return uVar1;
}

