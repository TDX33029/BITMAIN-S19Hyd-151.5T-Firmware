// FUN_0005fbb4 @ 0005fbb4  size=100  callers=1
// program: bmminer


void FUN_0005fbb4(void *param_1)

{
  if (param_1 == (void *)0x0) {
    FUN_000658a8(2,"src/record.c",0x15,"a_record is null or 0");
    return;
  }
  FUN_000658a8(0,"src/record.c",0x16,"zlog_record_del[%p]",param_1);
  free(param_1);
  return;
}

