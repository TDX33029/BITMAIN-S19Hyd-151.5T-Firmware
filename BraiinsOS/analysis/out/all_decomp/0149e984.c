// FUN_0149e984 @ 0149e984 size=296 calls_out=5 calls_in=1
// strings: 

void FUN_0149e984(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x128);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0149f9e0(*(undefined4 *)(param_1 + 0x128));
    }
  }
  if (1 < *(byte *)(param_1 + 0xb8)) {
    piVar2 = *(int **)(param_1 + 0xbc);
    (**(code **)(*piVar2 + 0x10))(piVar2 + 3,piVar2[1],piVar2[2]);
    thunk_FUN_016d3fb4(piVar2);
  }
  (**(code **)(*(int *)(param_1 + 0xc0) + 0x10))
            (param_1 + 0xcc,*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 200));
  FUN_0149e23c(param_1 + 0x70);
  FUN_0145d5e0(param_1 + 0xfc);
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
  piVar2 = *(int **)(param_1 + 0xd0);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4));
    return;
  }
  return;
}

