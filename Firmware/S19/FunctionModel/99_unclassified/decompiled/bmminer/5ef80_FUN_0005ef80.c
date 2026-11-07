// FUN_0005ef80 @ 0005ef80  size=120  callers=3
// program: bmminer


void FUN_0005ef80(void *param_1)

{
  if (param_1 == (void *)0x0) {
    FUN_000658a8(2,"src/format.c",0x2d,"a_format is null or 0");
    return;
  }
  if (*(int *)((int)param_1 + 0x2004) != 0) {
    FUN_00064e94();
  }
  FUN_000658a8(0,"src/format.c",0x31,"zlog_format_del[%p]",param_1);
  free(param_1);
  return;
}

