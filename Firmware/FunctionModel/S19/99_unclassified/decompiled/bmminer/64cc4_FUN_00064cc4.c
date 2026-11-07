// FUN_00064cc4 @ 00064cc4  size=120  callers=7
// program: bmminer


undefined4 FUN_00064cc4(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_000658a8(2,"src/thread.c",0xa7,"a_thread is null or 0");
    return 0xffffffff;
  }
  iVar1 = FUN_0005ecec(param_2);
  if (iVar1 == 0) {
    FUN_000658a8(2,"src/thread.c",0xab,"zlog_event_new fail");
    return 0xffffffff;
  }
  FUN_0005ec78(*(undefined4 *)(param_1 + 8));
  *(int *)(param_1 + 8) = iVar1;
  return 0;
}

