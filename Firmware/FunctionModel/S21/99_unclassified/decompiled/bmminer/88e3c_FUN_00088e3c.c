// FUN_00088e3c @ 00088e3c  size=132  callers=1
// program: bmminer


int FUN_00088e3c(void)

{
  int iVar1;
  
  iVar1 = FUN_00094ce8(0x14,&LAB_00095a44,FUN_00095ab4,0,FUN_00088434);
  if (iVar1 == 0) {
    FUN_00095b4c(2,"src/category_table.c",0x31,"zc_hashtable_new fail");
    iVar1 = 0;
  }
  else {
    FUN_00088d14(iVar1,0);
  }
  return iVar1;
}

