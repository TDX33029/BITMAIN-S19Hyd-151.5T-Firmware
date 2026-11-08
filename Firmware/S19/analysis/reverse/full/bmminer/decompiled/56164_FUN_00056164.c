// FUN_00056164 @ 00056164  size=40  callers=6
// program: bmminer


undefined8 FUN_00056164(int *param_1)

{
  if ((param_1 == (int *)0x0) || (*param_1 != 3)) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 2);
}

