// FUN_009d95cc @ 009d95cc size=292 calls_out=4 calls_in=0
// strings: 

void FUN_009d95cc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x54) == '\0') {
    piVar2 = *(int **)(param_1 + 0x10);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    }
    if (1 < *(int *)(param_1 + 0x1c) + 1U) {
      piVar2 = (int *)(*(int *)(param_1 + 0x1c) + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        thunk_FUN_01be4678();
      }
    }
    FUN_008dfa80(param_1 + 0x18);
    return;
  }
  if (*(char *)(param_1 + 0x54) != '\x03') {
    return;
  }
  FUN_008dfa80(param_1 + 0x50);
  FUN_01139b38(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  piVar2 = *(int **)(param_1 + 0x30);
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
  if (1 < *(int *)(param_1 + 0x3c) + 1U) {
    piVar2 = (int *)(*(int *)(param_1 + 0x3c) + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678();
    }
  }
  *(undefined1 *)(param_1 + 0x55) = 0;
  return;
}

