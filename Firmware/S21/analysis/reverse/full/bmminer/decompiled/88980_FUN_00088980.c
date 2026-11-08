// FUN_00088980 @ 00088980  size=300  callers=1
// program: bmminer


undefined4 FUN_00088980(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/category.c",0x96,"a_category is null or 0");
    uVar2 = 0xffffffff;
  }
  else if (param_2 == 0) {
    FUN_00095b4c(2,"src/category.c",0x97,"new_rules is null or 0");
    uVar2 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x44c) != 0) {
      FUN_000947ac(*(undefined4 *)(param_1 + 0x44c));
    }
    *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(param_1 + 0x448);
    *(undefined4 *)(param_1 + 0x448) = 0;
    memcpy((void *)(param_1 + 0x428),(void *)(param_1 + 0x408),0x20);
    iVar1 = FUN_00088564(param_1,param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_00095b4c(2,"src/category.c",0xa3,"zlog_category_obtain_rules fail");
      *(undefined4 *)(param_1 + 0x448) = 0;
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

