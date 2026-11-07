// FUN_0005f438 @ 0005f438  size=92  callers=1
// program: bmminer


void FUN_0005f438(int param_1)

{
  if (param_1 == 0) {
    FUN_000658a8(2,"src/level_list.c",0x25,"levels is null or 0");
    return;
  }
  FUN_00064e94();
  FUN_000658a8(0,"src/level_list.c",0x27,"zc_level_list_del[%p]",param_1);
  return;
}

