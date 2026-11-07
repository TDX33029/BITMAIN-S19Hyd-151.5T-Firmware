// FUN_00de09d0 @ 00de09d0 size=360 calls_out=7 calls_in=1
// strings: 

void FUN_00de09d0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x2ea) == '\0') {
    piVar2 = *(int **)(param_1 + 0x2e0);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e45d08(*(undefined4 *)(param_1 + 0x2e0));
    }
    iVar3 = *(int *)(param_1 + 0x2d8);
    piVar2 = (int *)(iVar3 + 0xa4);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      FUN_0163b708(iVar3 + 0x88);
    }
    piVar2 = *(int **)(param_1 + 0x2d8);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aacce0(*(undefined4 *)(param_1 + 0x2d8));
    }
    FUN_01663cc4(*(undefined4 *)(param_1 + 0x2e4));
    piVar2 = *(int **)(param_1 + 0x2e4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
  }
  else {
    if (*(char *)(param_1 + 0x2ea) != '\x03') {
      return;
    }
    FUN_00de0c9c(param_1);
    FUN_0163bdc0(param_1 + 0x2ac);
    if (*(int *)(param_1 + 700) != 0) {
      (**(code **)(*(int *)(param_1 + 700) + 0xc))(*(undefined4 *)(param_1 + 0x2c0));
    }
    piVar2 = *(int **)(param_1 + 0x2e0);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e45d08(*(undefined4 *)(param_1 + 0x2e0));
    }
    FUN_01663cc4(*(undefined4 *)(param_1 + 0x2e4));
    piVar2 = *(int **)(param_1 + 0x2e4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(param_1 + 0x2e4);
    return;
  }
  return;
}

