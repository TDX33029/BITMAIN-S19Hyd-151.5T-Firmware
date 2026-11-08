// FUN_0078b46c @ 0078b46c size=148 calls_out=4 calls_in=0
// strings: 

void FUN_0078b46c(int param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  if (*(undefined1 **)(param_1 + 8) == &DAT_3b9aca00) {
    uVar2 = *(uint *)(param_1 + 0xc);
    uVar4 = 1;
    if ((int)uVar2 < 0) {
      uVar4 = uVar2 ^ 0x80000000;
    }
    if (uVar4 == 0) {
      return;
    }
    if (uVar4 == 1) {
      FUN_019bb7e0(uVar2,*(undefined4 *)(param_1 + 0x10));
      return;
    }
    FUN_013f6af8(param_1 + 0x10);
    return;
  }
  FUN_0079217c(param_1 + 0x18);
  piVar3 = *(int **)(param_1 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013cdd5c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    return;
  }
  return;
}

