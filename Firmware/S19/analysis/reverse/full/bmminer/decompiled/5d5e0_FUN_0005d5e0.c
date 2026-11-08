// FUN_0005d5e0 @ 0005d5e0  size=144  callers=1
// program: bmminer


void FUN_0005d5e0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_000658a8(2,"src/category_table.c",0x15,"categories is null or 0");
    return;
  }
  FUN_000658a8(param_2,"src/category_table.c",0x16,"-category_table[%p]-",param_1);
  for (iVar1 = FUN_00065770(param_1); iVar1 != 0; iVar1 = FUN_000657b8(param_1,iVar1)) {
    FUN_0005d0d8(*(undefined4 *)(iVar1 + 8),param_2);
  }
  return;
}

