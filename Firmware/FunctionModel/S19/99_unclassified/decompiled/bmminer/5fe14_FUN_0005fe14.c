// FUN_0005fe14 @ 0005fe14  size=108  callers=1
// program: bmminer


int FUN_0005fe14(void)

{
  int iVar1;
  
  iVar1 = FUN_000650c8(0x14,&LAB_00065828,FUN_00065854,0,FUN_0005fbb4);
  if (iVar1 == 0) {
    FUN_000658a8(2,"src/record_table.c",0x31,"zc_hashtable_new fail");
  }
  else {
    FUN_0005fd28(iVar1,0);
  }
  return iVar1;
}

