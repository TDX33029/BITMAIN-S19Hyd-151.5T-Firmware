// FUN_00094030 @ 00094030  size=340  callers=9
// program: bmminer


void FUN_00094030(void *param_1)

{
  if (param_1 == (void *)0x0) {
    FUN_00095b4c(2,"src/thread.c",0x2b,"a_thread is null or 0");
  }
  else {
    if (*(int *)((int)param_1 + 4) != 0) {
      FUN_0008c358(*(undefined4 *)((int)param_1 + 4));
    }
    if (*(int *)((int)param_1 + 8) != 0) {
      FUN_0008b204(*(undefined4 *)((int)param_1 + 8));
    }
    if (*(int *)((int)param_1 + 0xc) != 0) {
      FUN_00096504(*(undefined4 *)((int)param_1 + 0xc));
    }
    if (*(int *)((int)param_1 + 0x10) != 0) {
      FUN_00096504(*(undefined4 *)((int)param_1 + 0x10));
    }
    if (*(int *)((int)param_1 + 0x14) != 0) {
      FUN_00096504(*(undefined4 *)((int)param_1 + 0x14));
    }
    if (*(int *)((int)param_1 + 0x18) != 0) {
      FUN_00096504(*(undefined4 *)((int)param_1 + 0x18));
    }
    if (*(int *)((int)param_1 + 0x1c) != 0) {
      FUN_00096504(*(undefined4 *)((int)param_1 + 0x1c));
    }
    FUN_00095b4c(0,"src/thread.c",0x3b,"zlog_thread_del[%p]",param_1);
    free(param_1);
  }
  return;
}

