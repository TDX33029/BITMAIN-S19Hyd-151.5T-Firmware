// FUN_0142079c @ 0142079c size=296 calls_out=5 calls_in=1
// strings: 

void FUN_0142079c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x110);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143db38(*(undefined4 *)(param_1 + 0x110));
    }
  }
  if (1 < *(byte *)(param_1 + 0xa0)) {
    piVar2 = *(int **)(param_1 + 0xa4);
    (**(code **)(*piVar2 + 0x10))(piVar2 + 3,piVar2[1],piVar2[2]);
    thunk_FUN_016d3fb4(piVar2);
  }
  (**(code **)(*(int *)(param_1 + 0xa8) + 0x10))
            (param_1 + 0xb4,*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb0));
  FUN_014205d8(param_1 + 0x70);
  FUN_0145d5e0(param_1 + 0xe4);
  piVar2 = *(int **)(param_1 + 0x60);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
  }
  piVar2 = *(int **)(param_1 + 0x68);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
    }
  }
  piVar2 = *(int **)(param_1 + 0xb8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc));
    return;
  }
  return;
}

