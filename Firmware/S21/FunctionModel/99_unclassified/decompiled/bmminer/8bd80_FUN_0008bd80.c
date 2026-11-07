// FUN_0008bd80 @ 0008bd80  size=116  callers=1
// program: bmminer


void FUN_0008bd80(int param_1)

{
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/level_list.c",0x25,"levels is null or 0");
  }
  else {
    FUN_000947ac(param_1);
    FUN_00095b4c(0,"src/level_list.c",0x27,"zc_level_list_del[%p]",param_1);
  }
  return;
}

