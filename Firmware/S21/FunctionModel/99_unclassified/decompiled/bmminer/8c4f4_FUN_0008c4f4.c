// FUN_0008c4f4 @ 0008c4f4  size=228  callers=1
// program: bmminer


int * FUN_0008c4f4(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = calloc(1,4);
  if (piVar1 == (int *)0x0) {
    piVar1 = __errno_location();
    FUN_00095b4c(2,"src/mdc.c",0x45,"calloc fail, errno[%d]",*piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    iVar2 = FUN_00094ce8(0x14,&LAB_00095a44,FUN_00095ab4,0,FUN_0008c3ec);
    *piVar1 = iVar2;
    if (*piVar1 == 0) {
      FUN_00095b4c(2,"src/mdc.c",0x4e,"zc_hashtable_new fail");
      FUN_0008c358(piVar1);
      piVar1 = (int *)0x0;
    }
  }
  return piVar1;
}

