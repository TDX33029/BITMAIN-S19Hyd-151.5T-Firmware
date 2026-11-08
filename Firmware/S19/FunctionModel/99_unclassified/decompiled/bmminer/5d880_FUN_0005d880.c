// FUN_0005d880 @ 0005d880  size=196  callers=3
// program: bmminer


int FUN_0005d880(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    FUN_000658a8(2,"src/category_table.c",0x69,"categories is null or 0");
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00065368();
    if (iVar1 == 0) {
      iVar2 = FUN_0005d1f8(param_2,param_3);
      if (iVar2 == 0) {
        FUN_000658a8(2,"src/category_table.c",0x72,"zc_category_new fail");
      }
      else {
        iVar3 = FUN_000653d0(param_1,iVar2,iVar2);
        if (iVar3 == 0) {
          iVar1 = iVar2;
        }
        else {
          FUN_000658a8(2,"src/category_table.c",0x77,"zc_hashtable_put fail");
          FUN_0005d184(iVar2);
        }
      }
    }
  }
  return iVar1;
}

