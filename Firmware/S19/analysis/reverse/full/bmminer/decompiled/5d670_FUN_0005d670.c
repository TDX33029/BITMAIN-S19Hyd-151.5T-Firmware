// FUN_0005d670 @ 0005d670  size=92  callers=1
// program: bmminer


void FUN_0005d670(int param_1)

{
  if (param_1 == 0) {
    FUN_000658a8(2,"src/category_table.c",0x22,"categories is null or 0");
    return;
  }
  FUN_000651a0();
  FUN_000658a8(0,"src/category_table.c",0x24,"zlog_category_table_del[%p]",param_1);
  return;
}

