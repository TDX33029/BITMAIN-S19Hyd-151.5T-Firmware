// FUN_0008cb3c @ 0008cb3c  size=132  callers=1
// program: bmminer


int FUN_0008cb3c(void)

{
  int iVar1;
  
  iVar1 = FUN_00094ce8(0x14,&LAB_00095a44,FUN_00095ab4,0,FUN_0008c854);
  if (iVar1 == 0) {
    FUN_00095b4c(2,"src/record_table.c",0x31,"zc_hashtable_new fail");
    iVar1 = 0;
  }
  else {
    FUN_0008ca14(iVar1,0);
  }
  return iVar1;
}

