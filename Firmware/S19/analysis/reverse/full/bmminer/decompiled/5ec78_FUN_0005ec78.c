// FUN_0005ec78 @ 0005ec78  size=116  callers=3
// program: bmminer


void FUN_0005ec78(void *param_1)

{
  if (param_1 == (void *)0x0) {
    FUN_000658a8(2,"src/event.c",0x30,"a_event is null or 0");
    return;
  }
  if (*(void **)((int)param_1 + 0x174) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x174));
  }
  FUN_000658a8(0,"src/event.c",0x32,"zlog_event_del[%p]",param_1);
  free(param_1);
  return;
}

