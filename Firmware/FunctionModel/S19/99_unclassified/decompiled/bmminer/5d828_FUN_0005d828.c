// FUN_0005d828 @ 0005d828  size=88  callers=0
// program: bmminer


void FUN_0005d828(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_000658a8(2,"src/category_table.c",0x5b,"categories is null or 0");
    return;
  }
  iVar1 = FUN_00065770();
  if (iVar1 == 0) {
    return;
  }
  do {
    FUN_0005d4b4(*(undefined4 *)(iVar1 + 8));
    iVar1 = FUN_000657b8(param_1,iVar1);
  } while (iVar1 != 0);
  return;
}

