// FUN_0005fdb8 @ 0005fdb8  size=92  callers=1
// program: bmminer


void FUN_0005fdb8(int param_1)

{
  if (param_1 == 0) {
    FUN_000658a8(2,"src/record_table.c",0x22,"records is null or 0");
    return;
  }
  FUN_000651a0();
  FUN_000658a8(0,"src/record_table.c",0x24,"zlog_record_table_del[%p]",param_1);
  return;
}

