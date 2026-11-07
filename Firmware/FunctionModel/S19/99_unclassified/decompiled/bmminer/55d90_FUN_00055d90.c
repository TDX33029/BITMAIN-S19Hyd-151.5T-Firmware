// FUN_00055d90 @ 00055d90  size=216  callers=0
// program: bmminer


undefined4 FUN_00055d90(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  void *__src;
  int *piVar4;
  size_t __n;
  uint uVar5;
  
  if ((((param_1 == (int *)0x0) || (*param_1 != 1 || param_2 == (int *)0x0)) || (*param_2 != 1)) ||
     (iVar2 = FUN_00055858(param_1,param_2[3]), iVar2 == 0)) {
    return 0xffffffff;
  }
  uVar3 = param_2[3];
  __src = (void *)param_2[4];
  __n = 0;
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      iVar2 = *(int *)((int)__src + uVar5 * 4);
      if ((iVar2 != 0) && (piVar4 = (int *)(iVar2 + 4), *(int *)(iVar2 + 4) != -1)) {
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = *piVar4 + 1;
        DataMemoryBarrier(0xb);
        uVar3 = param_2[3];
        __src = (void *)param_2[4];
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
    __n = uVar3 << 2;
  }
  memcpy((void *)(param_1[4] + param_1[3] * 4),__src,__n);
  param_1[3] = param_1[3] + param_2[3];
  return 0;
}

