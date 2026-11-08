// FUN_00021d2c @ 00021d2c  size=68  callers=0
// program: bmminer


void FUN_00021d2c(void *param_1)

{
  if ((param_1 != (void *)0x0) && (*(void **)((int)param_1 + 300) != (void *)0x0)) {
    free(*(void **)((int)param_1 + 300));
    free(param_1);
    return;
  }
  if (DAT_000be63c < 4) {
    return;
  }
  FUN_00021cd0();
  return;
}

