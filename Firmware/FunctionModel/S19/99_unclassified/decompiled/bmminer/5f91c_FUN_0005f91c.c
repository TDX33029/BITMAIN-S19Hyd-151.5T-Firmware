// FUN_0005f91c @ 0005f91c  size=184  callers=1
// program: bmminer


int * FUN_0005f91c(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = calloc(1,4);
  if (piVar1 == (int *)0x0) {
    piVar3 = __errno_location();
    FUN_000658a8(2,"src/mdc.c",0x45,"calloc fail, errno[%d]",*piVar3);
  }
  else {
    iVar2 = FUN_000650c8(0x14,&LAB_00065828,FUN_00065854,0,FUN_0005f7ac);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
      FUN_000658a8(2,"src/mdc.c",0x4e,"zc_hashtable_new fail");
      FUN_0005f8a8(piVar1);
      piVar1 = (int *)0x0;
    }
  }
  return piVar1;
}

