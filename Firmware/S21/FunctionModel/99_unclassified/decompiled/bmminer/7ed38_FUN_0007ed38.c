// FUN_0007ed38 @ 0007ed38  size=92  callers=0
// program: bmminer


undefined4 FUN_0007ed38(int *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_0007ad04(param_1 + 2);
    uVar1 = 0;
  }
  return uVar1;
}

