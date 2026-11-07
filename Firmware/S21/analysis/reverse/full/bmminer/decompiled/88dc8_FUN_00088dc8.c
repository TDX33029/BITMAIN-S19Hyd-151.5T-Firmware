// FUN_00088dc8 @ 00088dc8  size=116  callers=1
// program: bmminer


void FUN_00088dc8(int param_1)

{
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/category_table.c",0x22,"categories is null or 0");
  }
  else {
    FUN_00094e18(param_1);
    FUN_00095b4c(0,"src/category_table.c",0x24,"zlog_category_table_del[%p]",param_1);
  }
  return;
}

