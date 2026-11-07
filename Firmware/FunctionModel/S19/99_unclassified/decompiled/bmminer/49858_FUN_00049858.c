// FUN_00049858 @ 00049858  size=92  callers=1
// program: bmminer


undefined4 * FUN_00049858(void *param_1,size_t param_2)

{
  undefined4 *__ptr;
  void *__dest;
  
  __ptr = malloc(8);
  if (__ptr != (undefined4 *)0x0) {
    __ptr[1] = param_2;
    __dest = malloc(param_2);
    *__ptr = __dest;
    if (__dest == (void *)0x0) {
      free(__ptr);
      __ptr = (undefined4 *)0x0;
    }
    else {
      memcpy(__dest,param_1,param_2);
    }
  }
  return __ptr;
}

