// FUN_0172e674 @ 0172e674 size=332 calls_out=4 calls_in=2
// strings: 

void FUN_0172e674(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x1c8) == '\0') {
    FUN_01139b38(*(undefined4 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1bc));
    FUN_0172e624(*(undefined4 *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x1a4));
    piVar2 = *(int **)(param_1 + 0x1a8);
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
    piVar2 = *(int **)(param_1 + 0x180);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(param_1 + 0x180),*(undefined4 *)(param_1 + 0x184));
        return;
      }
      return;
    }
  }
  else if (*(char *)(param_1 + 0x1c8) == '\x03') {
    FUN_017d9c80(param_1 + 0x70);
    piVar2 = *(int **)(param_1 + 0x198);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(param_1 + 0x198),*(undefined4 *)(param_1 + 0x19c));
      }
    }
    piVar2 = *(int **)(param_1 + 400);
    *(undefined1 *)(param_1 + 0x1c4) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x194));
    }
    *(undefined1 *)(param_1 + 0x1c5) = 0;
    FUN_0172e624(*(undefined4 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x18c));
    *(undefined2 *)(param_1 + 0x1c6) = 0;
    return;
  }
  return;
}

