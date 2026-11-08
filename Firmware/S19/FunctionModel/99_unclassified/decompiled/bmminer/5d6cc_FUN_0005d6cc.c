// FUN_0005d6cc @ 0005d6cc  size=108  callers=1
// program: bmminer


int FUN_0005d6cc(void)

{
  int iVar1;
  
  iVar1 = FUN_000650c8(0x14,&LAB_00065828,FUN_00065854,0,FUN_0005d184);
  if (iVar1 == 0) {
    FUN_000658a8(2,"src/category_table.c",0x31,"zc_hashtable_new fail");
  }
  else {
    FUN_0005d5e0(iVar1,0);
  }
  return iVar1;
}

