// FUN_00094ce8 @ 00094ce8  size=304  callers=3
// program: bmminer


undefined4 *
FUN_00094ce8(size_t param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *__ptr;
  int *piVar1;
  void *pvVar2;
  
  __ptr = calloc(1,0x1c);
  if (__ptr == (undefined4 *)0x0) {
    piVar1 = __errno_location();
    FUN_00095b4c(2,"src/zc_hashtable.c",0x26,"calloc fail, errno[%d]",*piVar1);
    __ptr = (undefined4 *)0x0;
  }
  else {
    pvVar2 = calloc(param_1,4);
    __ptr[1] = pvVar2;
    if (__ptr[1] == 0) {
      piVar1 = __errno_location();
      FUN_00095b4c(2,"src/zc_hashtable.c",0x2c,"calloc fail, errno[%d]",*piVar1);
      free(__ptr);
      __ptr = (undefined4 *)0x0;
    }
    else {
      __ptr[2] = param_1;
      *__ptr = 0;
      __ptr[3] = param_2;
      __ptr[4] = param_3;
      __ptr[5] = param_4;
      __ptr[6] = param_5;
    }
  }
  return __ptr;
}

