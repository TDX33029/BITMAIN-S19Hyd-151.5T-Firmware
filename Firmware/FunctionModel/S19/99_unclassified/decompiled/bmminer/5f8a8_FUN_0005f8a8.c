// FUN_0005f8a8 @ 0005f8a8  size=116  callers=2
// program: bmminer


void FUN_0005f8a8(int *param_1)

{
  if (param_1 == (int *)0x0) {
    FUN_000658a8(2,"src/mdc.c",0x23,"a_mdc is null or 0");
    return;
  }
  if (*param_1 != 0) {
    FUN_000651a0();
  }
  FUN_000658a8(0,"src/mdc.c",0x25,"zlog_mdc_del[%p]",param_1);
  free(param_1);
  return;
}

