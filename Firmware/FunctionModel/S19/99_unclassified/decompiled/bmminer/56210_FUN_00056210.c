// FUN_00056210 @ 00056210  size=36  callers=1
// program: bmminer


undefined4 FUN_00056210(int *param_1)

{
  if ((param_1 == (int *)0x0) || (*param_1 != 4)) {
    return 0;
  }
  return (int)*(undefined8 *)(param_1 + 2);
}

