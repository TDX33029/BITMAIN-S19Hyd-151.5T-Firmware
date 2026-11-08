// FUN_0140a404 @ 0140a404 size=340 calls_out=12 calls_in=5
// strings: 

void FUN_0140a404(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_013f4cd4();
  if (*(int *)(param_1 + 0x138) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x13c));
  }
  FUN_013f3a74(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
  FUN_013f3ba8(param_1 + 0x144);
  FUN_013f3ab8(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac));
  if (*(int *)(param_1 + 0xcc) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 200));
  }
  FUN_013f3b70(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  FUN_013f3b38(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  piVar2 = *(int **)(param_1 + 0x38);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
    }
  }
  piVar2 = *(int **)(param_1 + 0xe8);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xec));
    }
  }
  piVar2 = *(int **)(param_1 + 0x1a8);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1ac));
    }
  }
  FUN_013f3a28(*(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf4));
  FUN_013f3c0c(param_1 + 0x110);
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

