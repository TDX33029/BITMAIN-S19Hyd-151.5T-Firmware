// FUN_00048b30 @ 00048b30  size=140  callers=3
// program: cgminer


void * FUN_00048b30(int param_1,int param_2,int param_3)

{
  void *__dest;
  void *__src;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  __src = *(void **)(param_1 + 0x10);
  if (uVar1 < (uint)(param_2 + *(int *)(param_1 + 0xc))) {
    uVar2 = uVar1 + param_2;
    if (uVar2 <= uVar1 << 1) {
      uVar2 = uVar1 << 1;
    }
    __dest = (void *)FUN_000482f8(uVar2 << 2);
    if (__dest == (void *)0x0) {
      __src = (void *)0x0;
    }
    else {
      *(uint *)(param_1 + 8) = uVar2;
      *(void **)(param_1 + 0x10) = __dest;
      if (param_3 != 0) {
        memcpy(__dest,__src,*(int *)(param_1 + 0xc) << 2);
        FUN_00048310(__src);
        return *(void **)(param_1 + 0x10);
      }
    }
  }
  return __src;
}

