// FUN_006f5f6c @ 006f5f6c size=352 calls_out=5 calls_in=1
// strings: 

void FUN_006f5f6c(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  
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
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  FUN_006f6128(uVar5,*(undefined4 *)(param_1 + 0x38));
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x30),uVar5,4,0x5c);
  return;
}

