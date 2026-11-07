// FUN_00064008 @ 00064008  size=100  callers=4
// program: bmminer


void FUN_00064008(void *param_1)

{
  if (param_1 == (void *)0x0) {
    FUN_000658a8(2,"src/spec.c",0x1cc,"a_spec is null or 0");
    return;
  }
  FUN_000658a8(0,"src/spec.c",0x1cd,"zlog_spec_del[%p]",param_1);
  free(param_1);
  return;
}

