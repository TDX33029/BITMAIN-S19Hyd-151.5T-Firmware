// FUN_00066d84 @ 00066d84  size=100  callers=2
// program: bmminer


void FUN_00066d84(void *param_1)

{
  if (param_1 == (void *)0x0) {
    FUN_000658a8(2,"src/level.c",0x21,"a_level is null or 0");
    return;
  }
  FUN_000658a8(0,"src/level.c",0x22,"zlog_level_del[%p]",param_1);
  free(param_1);
  return;
}

