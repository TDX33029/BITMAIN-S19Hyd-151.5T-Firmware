// FUN_000945d4 @ 000945d4  size=208  callers=7
// program: bmminer


/* WARNING: Removing unreachable block (ram,0x00094664) */

undefined4 FUN_000945d4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/thread.c",0xa7,"a_thread is null or 0");
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_0008b298(param_2);
    if (iVar1 == 0) {
      FUN_00095b4c(2,"src/thread.c",0xab,"zlog_event_new fail");
      uVar2 = 0xffffffff;
    }
    else {
      FUN_0008b204(*(undefined4 *)(param_1 + 8));
      *(int *)(param_1 + 8) = iVar1;
      uVar2 = 0;
    }
  }
  return uVar2;
}

