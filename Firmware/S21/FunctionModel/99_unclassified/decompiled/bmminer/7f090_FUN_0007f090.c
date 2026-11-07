// FUN_0007f090 @ 0007f090  size=92  callers=7
// program: bmminer


undefined4 FUN_0007f090(int *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0007adc4(param_1 + 2);
  }
  return uVar1;
}

