// FUN_00096504 @ 00096504  size=104  callers=3
// program: bmminer


void FUN_00096504(int *param_1)

{
  if (*param_1 != 0) {
    free((void *)*param_1);
  }
  FUN_00095b4c(0,"src/buf.c",0x52,"zlog_buf_del[%p]",param_1);
  free(param_1);
  return;
}

