// FUN_0004845c @ 0004845c  size=204  callers=1
// program: cgminer


undefined4 FUN_0004845c(int *param_1,void *param_2,size_t param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  void *__dest;
  
  iVar2 = param_1[2];
  uVar1 = param_1[1];
  if (param_3 < iVar2 - uVar1) {
    __dest = (void *)*param_1;
LAB_000484f0:
    memcpy((void *)((int)__dest + uVar1),param_2,param_3);
    iVar2 = param_1[1];
    param_1[1] = param_3 + iVar2;
    *(undefined1 *)(*param_1 + param_3 + iVar2) = 0;
    return 0;
  }
  if ((param_3 != 0xffffffff && -1 < iVar2) && (uVar1 <= -param_3 - 2)) {
    uVar3 = iVar2 << 1;
    uVar1 = param_3 + 1 + uVar1;
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    __dest = (void *)FUN_000482f8(uVar3);
    if (__dest != (void *)0x0) {
      memcpy(__dest,(void *)*param_1,param_1[1]);
      FUN_00048310(*param_1);
      uVar1 = param_1[1];
      *param_1 = (int)__dest;
      param_1[2] = uVar3;
      goto LAB_000484f0;
    }
  }
  return 0xffffffff;
}

