// FUN_000494e8 @ 000494e8  size=36  callers=3
// program: cgminer


undefined4 FUN_000494e8(int *param_1)

{
  if ((param_1 == (int *)0x0) || (*param_1 != 4)) {
    return 0;
  }
  return (int)*(undefined8 *)(param_1 + 2);
}

