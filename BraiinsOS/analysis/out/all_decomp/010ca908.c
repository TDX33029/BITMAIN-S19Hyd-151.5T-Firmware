// FUN_010ca908 @ 010ca908 size=272 calls_out=4 calls_in=0
// strings: 

void FUN_010ca908(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    piVar2 = *(int **)(param_1 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659344(*(undefined4 *)(param_1 + 0x1c));
    }
  }
  else {
    piVar2 = *(int **)(param_1 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_016586fc(*(undefined4 *)(param_1 + 0x1c));
    }
  }
  piVar2 = *(int **)(param_1 + 0x20);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    }
  }
  FUN_010caacc(param_1 + 0x30);
  if (*(int *)(param_1 + 0x58) != 0) {
    (**(code **)(*(int *)(param_1 + 0x58) + 0xc))(*(undefined4 *)(param_1 + 0x5c));
  }
  piVar2 = *(int **)(param_1 + 0x60);
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
    FUN_015614d8(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    return;
  }
  return;
}

