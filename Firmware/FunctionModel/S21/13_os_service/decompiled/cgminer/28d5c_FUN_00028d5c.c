// FUN_00028d5c @ 00028d5c  size=284  callers=2
// program: cgminer


void FUN_00028d5c(void)

{
  void *__arg;
  int param3;
  char acStack_820 [2052];
  
  if (DAT_00072e70 < 1) {
    return;
  }
  param3 = 0;
  do {
    while ((__arg = *(void **)(DAT_00072f14 + param3 * 4), *(char *)((int)__arg + 0x11c) != '\0' ||
           (DAT_00068a14 != '\0'))) {
LAB_00028da4:
      param3 = param3 + 1;
      if (DAT_00072e70 <= param3) {
        return;
      }
    }
    *(undefined1 *)((int)__arg + 0x11c) = 1;
    pthread_create((pthread_t *)((int)__arg + 0x118),(pthread_attr_t *)0x0,FUN_000330f0,__arg);
    if ((DAT_000686f1 == '\0') ||
       (((DAT_00072da0 == '\0' && (DAT_000686f0 == '\0')) && (DAT_00067848 < 7))))
    goto LAB_00028da4;
    snprintf(acStack_820,0x800,"create test_pool_thread pool[%d]\n",param3);
    param3 = param3 + 1;
    FUN_0001dd98(7,acStack_820,0);
    if (DAT_00072e70 <= param3) {
      return;
    }
  } while( true );
}

