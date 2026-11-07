// FUN_0005d184 @ 0005d184  size=116  callers=2
// program: bmminer


void FUN_0005d184(void *param_1)

{
  if (param_1 == (void *)0x0) {
    FUN_000658a8(2,"src/category.c",0x26,"a_category is null or 0");
    return;
  }
  if (*(int *)((int)param_1 + 0x448) != 0) {
    FUN_00064e94();
  }
  FUN_000658a8(0,"src/category.c",0x28,"zlog_category_del[%p]",param_1);
  free(param_1);
  return;
}

