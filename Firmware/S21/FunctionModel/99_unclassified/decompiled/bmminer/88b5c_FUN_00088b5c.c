// FUN_00088b5c @ 00088b5c  size=276  callers=1
// program: bmminer


void FUN_00088b5c(int param_1)

{
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/category.c",0xc2,"a_category is null or 0");
  }
  else if (*(int *)(param_1 + 0x44c) == 0) {
    FUN_00095b4c(1,"src/category.c",0xc4,"a_category->fit_rules_backup in NULL, never update before"
                );
  }
  else {
    if (*(int *)(param_1 + 0x448) == 0) {
      *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(param_1 + 0x44c);
      *(undefined4 *)(param_1 + 0x44c) = 0;
    }
    else {
      FUN_000947ac(*(undefined4 *)(param_1 + 0x448));
      *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(param_1 + 0x44c);
      *(undefined4 *)(param_1 + 0x44c) = 0;
    }
    memcpy((void *)(param_1 + 0x408),(void *)(param_1 + 0x428),0x20);
    memset((void *)(param_1 + 0x428),0,0x20);
  }
  return;
}

