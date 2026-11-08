// FUN_0008b204 @ 0008b204  size=148  callers=3
// program: bmminer


void FUN_0008b204(void *param_1)

{
  if (param_1 == (void *)0x0) {
    FUN_00095b4c(2,"src/event.c",0x30,"a_event is null or 0");
  }
  else {
    if (*(int *)((int)param_1 + 0x174) != 0) {
      free(*(void **)((int)param_1 + 0x174));
    }
    FUN_00095b4c(0,"src/event.c",0x32,"zlog_event_del[%p]",param_1);
    free(param_1);
  }
  return;
}

