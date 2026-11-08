// FUN_000946a4 @ 000946a4  size=264  callers=7
// program: bmminer


int * FUN_000946a4(int param_1)

{
  int *piVar1;
  void *pvVar2;
  int *piVar3;
  
  piVar1 = calloc(1,0x10);
  if (piVar1 == (int *)0x0) {
    piVar1 = __errno_location();
    FUN_00095b4c(2,"src/zc_arraylist.c",0x16,"calloc fail, errno[%d]",*piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = 0x20;
    piVar1[1] = 0;
    piVar1[3] = param_1;
    pvVar2 = calloc(piVar1[2],4);
    *piVar1 = (int)pvVar2;
    if (*piVar1 == 0) {
      piVar3 = __errno_location();
      FUN_00095b4c(2,"src/zc_arraylist.c",0x20,"calloc fail, errno[%d]",*piVar3);
      free(piVar1);
      piVar1 = (int *)0x0;
    }
  }
  return piVar1;
}

