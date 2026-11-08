// FUN_008dfd54 @ 008dfd54 size=304 calls_out=4 calls_in=2
// strings: 

void FUN_008dfd54(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x1d0) == '\0') {
    FUN_008df9e8(param_1);
    FUN_008dfd04(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    piVar2 = *(int **)(param_1 + 0x18);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
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
        FUN_018531c0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
        return;
      }
      return;
    }
  }
  else if (*(char *)(param_1 + 0x1d0) == '\x03') {
    FUN_008dfa38(param_1 + 0xb0);
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
    piVar2 = *(int **)(param_1 + 0x30);
    *(undefined1 *)(param_1 + 0x1d1) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    }
    *(undefined1 *)(param_1 + 0x1d2) = 0;
    FUN_008dfd04(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
    *(undefined2 *)(param_1 + 0x1d3) = 0;
    return;
  }
  return;
}

