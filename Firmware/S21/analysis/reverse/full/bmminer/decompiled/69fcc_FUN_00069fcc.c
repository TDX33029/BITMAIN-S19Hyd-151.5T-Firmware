// FUN_00069fcc @ 00069fcc  size=64  callers=2
// program: bmminer


void FUN_00069fcc(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    free((void *)*param_1);
    free(param_1);
  }
  return;
}

