// FUN_0008c358 @ 0008c358  size=148  callers=2
// program: bmminer


void FUN_0008c358(int *param_1)

{
  if (param_1 == (int *)0x0) {
    FUN_00095b4c(2,"src/mdc.c",0x23,"a_mdc is null or 0");
  }
  else {
    if (*param_1 != 0) {
      FUN_00094e18(*param_1);
    }
    FUN_00095b4c(0,"src/mdc.c",0x25,"zlog_mdc_del[%p]",param_1);
    free(param_1);
  }
  return;
}

