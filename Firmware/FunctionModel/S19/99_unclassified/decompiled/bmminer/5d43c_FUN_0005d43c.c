// FUN_0005d43c @ 0005d43c  size=120  callers=1
// program: bmminer


void FUN_0005d43c(int param_1)

{
  if (param_1 == 0) {
    FUN_000658a8(2,"src/category.c",0xb0,"a_category is null or 0");
    return;
  }
  if (*(int *)(param_1 + 0x44c) == 0) {
    FUN_000658a8(1,"src/category.c",0xb2,"a_category->fit_rules_backup is NULL, never update before"
                );
    return;
  }
  FUN_00064e94();
  *(undefined4 *)(param_1 + 0x44c) = 0;
  memset((void *)(param_1 + 0x428),0,0x20);
  return;
}

