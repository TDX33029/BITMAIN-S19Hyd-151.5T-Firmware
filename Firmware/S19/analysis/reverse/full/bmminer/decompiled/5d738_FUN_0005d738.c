// FUN_0005d738 @ 0005d738  size=152  callers=1
// program: bmminer


undefined4 FUN_0005d738(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    FUN_000658a8(2,"src/category_table.c",0x3e,"categories is null or 0");
    return 0xffffffff;
  }
  iVar1 = FUN_00065770();
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_0005d33c(*(undefined4 *)(iVar1 + 8),param_2);
    if (iVar2 != 0) break;
    iVar1 = FUN_000657b8(param_1,iVar1);
  }
  FUN_000658a8(2,"src/category_table.c",0x42,"zlog_category_update_rules fail, try rollback");
  return 0xffffffff;
}

