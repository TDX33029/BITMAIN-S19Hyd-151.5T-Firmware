// FUN_00049928 @ 00049928  size=32  callers=2
// program: bmminer


void FUN_00049928(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  free((void *)*param_1);
  free(param_1);
  return;
}

