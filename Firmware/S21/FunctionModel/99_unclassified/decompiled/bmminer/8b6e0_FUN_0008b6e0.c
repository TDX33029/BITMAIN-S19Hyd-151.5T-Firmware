// FUN_0008b6e0 @ 0008b6e0  size=156  callers=3
// program: bmminer


void FUN_0008b6e0(void *param_1)

{
  if (param_1 == (void *)0x0) {
    FUN_00095b4c(2,"src/format.c",0x2d,"a_format is null or 0");
  }
  else {
    if (*(int *)((int)param_1 + 0x2004) != 0) {
      FUN_000947ac(*(undefined4 *)((int)param_1 + 0x2004));
    }
    FUN_00095b4c(0,"src/format.c",0x31,"zlog_format_del[%p]",param_1);
    free(param_1);
  }
  return;
}

