// FUN_00088434 @ 00088434  size=148  callers=2
// program: bmminer


void FUN_00088434(void *param_1)

{
  if (param_1 == (void *)0x0) {
    FUN_00095b4c(2,"src/category.c",0x26,"a_category is null or 0");
  }
  else {
    if (*(int *)((int)param_1 + 0x448) != 0) {
      FUN_000947ac(*(undefined4 *)((int)param_1 + 0x448));
    }
    FUN_00095b4c(0,"src/category.c",0x28,"zlog_category_del[%p]",param_1);
    free(param_1);
  }
  return;
}

