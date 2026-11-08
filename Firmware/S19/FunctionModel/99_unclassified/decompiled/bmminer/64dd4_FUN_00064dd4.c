// FUN_00064dd4 @ 00064dd4  size=192  callers=7
// program: bmminer


undefined4 * FUN_00064dd4(undefined4 param_1)

{
  undefined4 *__ptr;
  void *pvVar1;
  int *piVar2;
  
  __ptr = calloc(1,0x10);
  if (__ptr == (undefined4 *)0x0) {
    piVar2 = __errno_location();
    FUN_000658a8(2,"src/zc_arraylist.c",0x16,"calloc fail, errno[%d]",*piVar2);
  }
  else {
    __ptr[3] = param_1;
    __ptr[2] = 0x20;
    __ptr[1] = 0;
    pvVar1 = calloc(0x20,4);
    *__ptr = pvVar1;
    if (pvVar1 == (void *)0x0) {
      piVar2 = __errno_location();
      FUN_000658a8(2,"src/zc_arraylist.c",0x20,"calloc fail, errno[%d]",*piVar2);
      free(__ptr);
      __ptr = (undefined4 *)0x0;
    }
  }
  return __ptr;
}

