// FUN_000338e4 @ 000338e4  size=136  callers=1
// program: bmminer


void FUN_000338e4(undefined4 *param_1)

{
  undefined4 *puVar2;
  undefined4 *puVar1;
  
  puVar1 = param_1;
  do {
    puVar2 = puVar1 + 6;
    free((void *)*puVar1);
    free((void *)puVar1[2]);
    free((void *)puVar1[4]);
    puVar1 = puVar2;
  } while (puVar2 != param_1 + 0x12);
  if ((void *)param_1[0x13] != (void *)0x0) {
    free((void *)param_1[0x13]);
  }
  if ((void *)param_1[0x15] != (void *)0x0) {
    free((void *)param_1[0x15]);
  }
  if ((void *)param_1[0x17] != (void *)0x0) {
    free((void *)param_1[0x17]);
  }
  if ((void *)param_1[0x19] != (void *)0x0) {
    free((void *)param_1[0x19]);
  }
  if ((void *)param_1[0x1b] == (void *)0x0) {
    return;
  }
  free((void *)param_1[0x1b]);
  return;
}

