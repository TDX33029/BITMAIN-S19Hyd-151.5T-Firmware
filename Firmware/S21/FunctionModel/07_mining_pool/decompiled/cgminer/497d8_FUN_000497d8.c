// FUN_000497d8 @ 000497d8  size=204  callers=0
// program: cgminer


undefined4 FUN_000497d8(int *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  if (((param_1 == (int *)0x0) || (*param_1 != 1)) || (uVar5 = param_1[3], uVar5 <= param_2)) {
    return 0xffffffff;
  }
  iVar2 = *(int *)(param_1[4] + param_2 * 4);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != -1)) {
    piVar3 = (int *)(iVar2 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      FUN_000495e4();
    }
    uVar5 = param_1[3];
  }
  uVar4 = uVar5 - 1;
  if (param_2 < uVar4) {
    memmove((void *)(param_1[4] + param_2 * 4),(void *)(param_1[4] + param_2 * 4 + 4),
            (~param_2 + uVar5) * 4);
    uVar4 = param_1[3] - 1;
  }
  param_1[3] = uVar4;
  return 0;
}

