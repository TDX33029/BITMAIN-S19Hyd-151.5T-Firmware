// FUN_00055054 @ 00055054  size=76  callers=3
// program: bmminer


void * FUN_00055054(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)0x0;
  if ((param_2 + 1 != 0) && (__dest = (void *)(*DAT_000885d8)(param_2 + 1), __dest != (void *)0x0))
  {
    memcpy(__dest,param_1,param_2);
    *(undefined1 *)((int)__dest + param_2) = 0;
  }
  return __dest;
}

