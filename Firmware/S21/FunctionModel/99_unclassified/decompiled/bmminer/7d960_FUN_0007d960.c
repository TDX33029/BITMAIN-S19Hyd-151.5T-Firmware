// FUN_0007d960 @ 0007d960  size=112  callers=3
// program: bmminer


void * FUN_0007d960(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_0007d8a0(param_2 + 1);
  if (__dest == (void *)0x0) {
    __dest = (void *)0x0;
  }
  else {
    memcpy(__dest,param_1,param_2);
    *(undefined1 *)((int)__dest + param_2) = 0;
  }
  return __dest;
}

