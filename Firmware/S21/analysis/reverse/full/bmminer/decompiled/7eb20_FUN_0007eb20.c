// FUN_0007eb20 @ 0007eb20  size=112  callers=21
// program: bmminer


undefined4 FUN_0007eb20(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (((param_2 == 0) || (param_1 == (int *)0x0)) || (*param_1 != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0007abfc(param_1 + 2,param_2);
  }
  return uVar1;
}

