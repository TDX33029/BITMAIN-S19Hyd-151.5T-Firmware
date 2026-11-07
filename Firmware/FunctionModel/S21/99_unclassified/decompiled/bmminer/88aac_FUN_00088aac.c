// FUN_00088aac @ 00088aac  size=176  callers=1
// program: bmminer


void FUN_00088aac(int param_1)

{
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/category.c",0xb0,"a_category is null or 0");
  }
  else if (*(int *)(param_1 + 0x44c) == 0) {
    FUN_00095b4c(1,"src/category.c",0xb2,"a_category->fit_rules_backup is NULL, never update before"
                );
  }
  else {
    FUN_000947ac(*(undefined4 *)(param_1 + 0x44c));
    *(undefined4 *)(param_1 + 0x44c) = 0;
    memset((void *)(param_1 + 0x428),0,0x20);
  }
  return;
}

