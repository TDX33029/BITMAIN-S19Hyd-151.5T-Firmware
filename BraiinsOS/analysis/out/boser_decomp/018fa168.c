// FUN_018fa168 @ 018fa168 size=468 calls_out=7 calls_in=64
// strings: 

void FUN_018fa168(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0065f3f4(param_1 + 0x10);
  piVar2 = *(int **)(param_1 + 0x78);
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
    FUN_018531c0(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98));
  }
  piVar2 = *(int **)(param_1 + 0x9c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa09c(*(undefined4 *)(param_1 + 0x9c));
  }
  piVar2 = *(int **)(param_1 + 0xa0);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),4,8);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),4,8);
  piVar2 = *(int **)(param_1 + 0xa8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018f9e38(*(undefined4 *)(param_1 + 0xa8));
  }
  if (*(int *)(param_1 + 0x34) != -0x7ffffffe) {
    FUN_018fa510();
  }
  if (param_1 == -1) {
    return;
  }
  piVar2 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

