// FUN_000496b0 @ 000496b0  size=144  callers=0
// program: cgminer


undefined4 FUN_000496b0(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 1)) {
    return 0xffffffff;
  }
  uVar3 = param_1[3];
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      iVar2 = *(int *)(param_1[4] + uVar5 * 4);
      if ((iVar2 != 0) && (piVar4 = (int *)(iVar2 + 4), *(int *)(iVar2 + 4) != -1)) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = iVar2 + -1;
        if (iVar2 + -1 == 0) {
          FUN_000495e4();
        }
        uVar3 = param_1[3];
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  param_1[3] = 0;
  return 0;
}

