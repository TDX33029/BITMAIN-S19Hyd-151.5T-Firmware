// FUN_0008c854 @ 0008c854  size=116  callers=2
// program: bmminer


void FUN_0008c854(void *param_1)

{
  if (param_1 == (void *)0x0) {
    FUN_00095b4c(2,"src/record.c",0x15,"a_record is null or 0");
  }
  else {
    FUN_00095b4c(0,"src/record.c",0x16,"zlog_record_del[%p]",param_1);
    free(param_1);
  }
  return;
}

