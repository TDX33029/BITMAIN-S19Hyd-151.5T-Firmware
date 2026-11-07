// FUN_0005e720 @ 0005e720  size=172  callers=3
// program: bmminer


void FUN_0005e720(void *param_1)

{
  if (param_1 == (void *)0x0) {
    FUN_000658a8(2,"src/conf.c",0x53,"a_conf is null or 0");
    return;
  }
  if (*(int *)((int)param_1 + 0x1428) != 0) {
    FUN_00060064();
  }
  if (*(int *)((int)param_1 + 0x2440) != 0) {
    FUN_0005f438();
  }
  if (*(int *)((int)param_1 + 0x2430) != 0) {
    FUN_0005ef80();
  }
  if (*(int *)((int)param_1 + 0x2444) != 0) {
    FUN_00064e94();
  }
  if (*(int *)((int)param_1 + 0x2448) != 0) {
    FUN_00064e94();
  }
  free(param_1);
  FUN_000658a8(0,"src/conf.c",0x5a,"zlog_conf_del[%p]");
  return;
}

