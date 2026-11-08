// FUN_006d0234 @ 006d0234 size=304 calls_out=4 calls_in=1
// strings: 

void FUN_006d0234(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar3 = iVar2 + 0x80000001U & iVar2 >> 0x1f;
  if (uVar3 == 0) {
    piVar4 = *(int **)(param_1 + 0x54);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      }
    }
    piVar4 = *(int **)(param_1 + 0x44);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
    }
    FUN_006d01e4((int *)(param_1 + 0x10));
    FUN_00b96a8c(param_1 + 0x1c);
  }
  else {
    if (uVar3 == 1) {
      piVar4 = *(int **)(param_1 + 0x30);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
      }
      FUN_00b96a8c(param_1 + 0x1c);
      return;
    }
    piVar4 = *(int **)(param_1 + 0x4c);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      }
    }
    FUN_00b96a8c(param_1 + 0x1c);
  }
  FUN_006b39d0(param_1 + 0x28);
  return;
}

