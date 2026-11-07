// FUN_00055c88 @ 00055c88  size=52  callers=1
// program: bmminer


undefined4 FUN_00055c88(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0 || param_2 == 0)) {
    return 0;
  }
  uVar1 = FUN_0005363c(param_1 + 2);
  return uVar1;
}

