// FUN_000895ac @ 000895ac  size=308  callers=3
// program: bmminer


void FUN_000895ac(void *param_1)

{
  if (param_1 == (void *)0x0) {
    FUN_00095b4c(2,"src/conf.c",0x53,"a_conf is null or 0");
  }
  else {
    if (*(int *)((int)param_1 + 0x1428) != 0) {
      FUN_0008cd64(*(undefined4 *)((int)param_1 + 0x1428));
    }
    if (*(int *)((int)param_1 + 0x2440) != 0) {
      FUN_0008bd80(*(undefined4 *)((int)param_1 + 0x2440));
    }
    if (*(int *)((int)param_1 + 0x2430) != 0) {
      FUN_0008b6e0(*(undefined4 *)((int)param_1 + 0x2430));
    }
    if (*(int *)((int)param_1 + 0x2444) != 0) {
      FUN_000947ac(*(undefined4 *)((int)param_1 + 0x2444));
    }
    if (*(int *)((int)param_1 + 0x2448) != 0) {
      FUN_000947ac(*(undefined4 *)((int)param_1 + 0x2448));
    }
    free(param_1);
    FUN_00095b4c(0,"src/conf.c",0x5a,"zlog_conf_del[%p]");
  }
  return;
}

