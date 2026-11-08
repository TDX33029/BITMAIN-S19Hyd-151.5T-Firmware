// FUN_0140a174 @ 0140a174 size=200 calls_out=2 calls_in=0
// strings: 

void FUN_0140a174(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x80) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  }
  piVar2 = *(int **)(param_1 + 0x70);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
    }
  }
  piVar2 = *(int **)(param_1 + 0x78);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
    }
  }
  piVar2 = *(int **)(param_1 + 0x48);
  if (piVar2 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
    return;
  }
  return;
}

