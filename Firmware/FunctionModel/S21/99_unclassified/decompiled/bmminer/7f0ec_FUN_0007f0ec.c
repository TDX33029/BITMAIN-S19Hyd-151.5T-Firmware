// FUN_0007f0ec @ 0007f0ec  size=112  callers=0
// program: bmminer


undefined4 FUN_0007f0ec(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (((param_2 == 0) || (param_1 == (int *)0x0)) || (*param_1 != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0007adf8(param_1 + 2,param_2);
  }
  return uVar1;
}

