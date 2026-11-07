// FUN_00088ec0 @ 00088ec0  size=200  callers=1
// program: bmminer


undefined4 FUN_00088ec0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/category_table.c",0x3e,"categories is null or 0");
    uVar2 = 0xffffffff;
  }
  else {
    for (local_c = FUN_000958d8(param_1); local_c != 0; local_c = FUN_00095974(param_1,local_c)) {
      iVar1 = FUN_00088980(*(undefined4 *)(local_c + 8),param_2);
      if (iVar1 != 0) {
        FUN_00095b4c(2,"src/category_table.c",0x42,"zlog_category_update_rules fail, try rollback");
        return 0xffffffff;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

