// FUN_0185bc30 @ 0185bc30 size=396 calls_out=6 calls_in=4
// strings: 

void FUN_0185bc30(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0065f3f4(param_1 + 8);
  piVar2 = *(int **)(param_1 + 0x70);
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
  piVar2 = *(int **)(param_1 + 0x7c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80));
  }
  piVar2 = *(int **)(param_1 + 0x84);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88));
  }
  piVar2 = *(int **)(param_1 + 0x8c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90));
  }
  piVar2 = *(int **)(param_1 + 0x94);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa09c(*(undefined4 *)(param_1 + 0x94));
  }
  piVar2 = *(int **)(param_1 + 0x98);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),4,8);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),4,8);
  piVar2 = *(int **)(param_1 + 0xa0);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018f9e38(*(undefined4 *)(param_1 + 0xa0));
  }
  FUN_0185bf44(param_1 + 0x2c);
  return;
}

