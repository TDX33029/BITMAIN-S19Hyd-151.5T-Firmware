// FUN_00097d78 @ 00097d78  size=116  callers=2
// program: bmminer


void FUN_00097d78(void *param_1)

{
  if (param_1 == (void *)0x0) {
    FUN_00095b4c(2,"src/level.c",0x21,"a_level is null or 0");
  }
  else {
    FUN_00095b4c(0,"src/level.c",0x22,"zlog_level_del[%p]",param_1);
    free(param_1);
  }
  return;
}

