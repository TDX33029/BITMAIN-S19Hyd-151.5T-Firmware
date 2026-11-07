// FUN_0001ea90 @ 0001ea90  size=276  callers=15
// program: bmminer


undefined4 FUN_0001ea90(void)

{
  size_t param3;
  size_t __nmemb;
  void *__ptr;
  undefined4 uVar1;
  char acStack_818 [2052];
  
  __nmemb = DAT_0071c434;
  param3 = DAT_0071c3ec;
  __ptr = calloc(DAT_0071c3ec,0x210);
  DAT_0071c448 = __ptr;
  if (__ptr == (void *)0x0) {
    if (3 < DAT_00087bbc) {
      snprintf(acStack_818,0x800,"malloc %d runtime_chain failed\n",param3);
      FUN_00032218(3,acStack_818,0);
      return 0x80000400;
    }
    uVar1 = 0x80000400;
  }
  else {
    DAT_0071c450 = calloc(__nmemb,8);
    if (DAT_0071c450 == (void *)0x0) {
      if (3 < DAT_00087bbc) {
        snprintf(acStack_818,0x800,"malloc %d runtime_fan failed\n",__nmemb);
        FUN_00032218(3,acStack_818,0);
        __ptr = DAT_0071c448;
      }
      free(__ptr);
      uVar1 = 0x80000400;
    }
    else {
      DAT_0071c440 = 1;
      uVar1 = 0;
    }
  }
  return uVar1;
}

