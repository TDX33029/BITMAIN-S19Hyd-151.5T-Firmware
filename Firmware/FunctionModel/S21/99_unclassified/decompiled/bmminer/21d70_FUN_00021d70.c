// FUN_00021d70 @ 00021d70  size=84  callers=2
// program: bmminer


void * FUN_00021d70(void)

{
  void *__dest;
  undefined2 *puVar1;
  
  __dest = malloc(0x130);
  if (__dest != (void *)0x0) {
    puVar1 = malloc(0xfa);
    memset(puVar1 + 1,0,0xf8);
    *puVar1 = 0x3105;
    memcpy(__dest,&DAT_0009acb4,0x130);
    *(undefined2 **)((int)__dest + 300) = puVar1;
  }
  return __dest;
}

