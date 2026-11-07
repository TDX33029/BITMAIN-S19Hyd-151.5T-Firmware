// memchr @ 00043ad4  size=276  callers=2
// program: bmminer


void * memchr(void *__s,int __c,size_t __n)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (__n == 0) {
    return (void *)0x0;
  }
  uVar4 = __c & 0xff;
  if (((uint)__s & 3) == 0) {
LAB_00043b2c:
    uVar3 = (__c & 0xffU) << 8 | uVar4;
    uVar3 = uVar3 | uVar3 << 0x10;
    if (3 < __n) {
      uVar2 = *(uint *)__s ^ uVar3;
      for (uVar2 = uVar2 + 0xfefefeff & ~uVar2; (uVar2 & 0x80808080) == 0;
          uVar2 = uVar2 + 0xfefefeff & ~uVar2) {
        __s = (void *)((int)__s + 4);
        __n = __n - 4;
        if (__n < 4) {
          if (__n == 0) {
            return (void *)0x0;
          }
          break;
        }
        uVar2 = *(uint *)__s ^ uVar3;
      }
    }
    if ((byte)*(uint *)__s == uVar4) {
      return __s;
    }
    puVar1 = (uint *)((int)__s + __n);
    while (__s = (void *)((int)__s + 1), __s != puVar1) {
      if (*(byte *)__s == uVar4) {
        return __s;
      }
    }
  }
  else {
    if (*(byte *)__s == uVar4) {
      return __s;
    }
    while( true ) {
      __s = (void *)((int)__s + 1);
      __n = __n - 1;
      if (__n == 0) break;
      if (((uint)__s & 3) == 0) goto LAB_00043b2c;
      if (*(byte *)__s == uVar4) {
        return __s;
      }
    }
  }
  return (void *)0x0;
}

