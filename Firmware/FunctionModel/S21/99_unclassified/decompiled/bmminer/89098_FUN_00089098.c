// FUN_00089098 @ 00089098  size=268  callers=3
// program: bmminer


int FUN_00089098(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/category_table.c",0x69,"categories is null or 0");
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_000952d0(param_1,param_2);
    if (iVar2 == 0) {
      iVar2 = FUN_000887f4(param_2,param_3);
      if (iVar2 == 0) {
        FUN_00095b4c(2,"src/category_table.c",0x72,"zc_category_new fail");
        iVar2 = 0;
      }
      else {
        iVar1 = FUN_00095390(param_1,iVar2,iVar2);
        if (iVar1 != 0) {
          FUN_00095b4c(2,"src/category_table.c",0x77,"zc_hashtable_put fail");
          FUN_00088434(iVar2);
          iVar2 = 0;
        }
      }
    }
  }
  return iVar2;
}

