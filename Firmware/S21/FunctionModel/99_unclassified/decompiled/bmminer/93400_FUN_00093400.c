// FUN_00093400 @ 00093400  size=112  callers=4
// program: bmminer


void FUN_00093400(void *param_1)

{
  if (param_1 == (void *)0x0) {
    FUN_00095b4c(2,"src/spec.c",0x1cc,"a_spec is null or 0");
  }
  else {
    FUN_00095b4c(0,"src/spec.c",0x1cd,"zlog_spec_del[%p]",param_1);
    free(param_1);
  }
  return;
}

