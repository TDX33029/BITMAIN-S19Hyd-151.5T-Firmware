// FUN_0008bf18 @ 0008bf18  size=160  callers=1
// program: bmminer


int FUN_0008bf18(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_000946a4(FUN_00097d78);
  if (iVar1 == 0) {
    FUN_00095b4c(2,"src/level_list.c",0x3e,"zc_arraylist_new fail");
    iVar1 = 0;
  }
  else {
    iVar2 = FUN_0008bdf4(iVar1);
    if (iVar2 != 0) {
      FUN_00095b4c(2,"src/level_list.c",0x43,"zlog_level_set_default fail");
      FUN_000947ac(iVar1);
      iVar1 = 0;
    }
  }
  return iVar1;
}

