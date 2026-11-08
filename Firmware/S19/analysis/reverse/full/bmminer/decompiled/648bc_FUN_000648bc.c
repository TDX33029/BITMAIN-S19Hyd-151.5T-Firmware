// FUN_000648bc @ 000648bc  size=212  callers=8
// program: bmminer


void FUN_000648bc(void *param_1)

{
  if (param_1 == (void *)0x0) {
    FUN_000658a8(2,"src/thread.c",0x2b,"a_thread is null or 0");
    return;
  }
  if (*(int *)((int)param_1 + 4) != 0) {
    FUN_0005f8a8();
  }
  if (*(int *)((int)param_1 + 8) != 0) {
    FUN_0005ec78();
  }
  if (*(int *)((int)param_1 + 0xc) != 0) {
    FUN_0006601c();
  }
  if (*(int *)((int)param_1 + 0x10) != 0) {
    FUN_0006601c();
  }
  if (*(int *)((int)param_1 + 0x14) != 0) {
    FUN_0006601c();
  }
  if (*(int *)((int)param_1 + 0x18) != 0) {
    FUN_0006601c();
  }
  if (*(int *)((int)param_1 + 0x1c) != 0) {
    FUN_0006601c();
  }
  FUN_000658a8(0,"src/thread.c",0x3b,"zlog_thread_del[%p]",param_1);
  free(param_1);
  return;
}

