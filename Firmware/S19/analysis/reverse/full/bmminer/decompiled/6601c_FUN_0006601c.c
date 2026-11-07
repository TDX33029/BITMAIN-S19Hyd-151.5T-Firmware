// FUN_0006601c @ 0006601c  size=76  callers=3
// program: bmminer


void FUN_0006601c(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
  }
  FUN_000658a8(0,"src/buf.c",0x52,"zlog_buf_del[%p]",param_1);
  free(param_1);
  return;
}

