// FUN_010983c0 @ 010983c0 size=256 calls_out=2 calls_in=2
// strings: 

void FUN_010983c0(int param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  if (*(undefined1 **)(param_1 + 8) != &DAT_3b9aca00) {
    bVar3 = *(short *)(param_1 + 0x18) != 0;
    iVar1 = 0;
    if (bVar3) {
      iVar1 = *(int *)(param_1 + 0x1c);
    }
    if (bVar3 && iVar1 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x20));
    }
    bVar3 = *(short *)(param_1 + 0x3c) != 0;
    iVar1 = 0;
    if (bVar3) {
      iVar1 = *(int *)(param_1 + 0x40);
    }
    if (bVar3 && iVar1 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x44));
    }
    piVar2 = *(int **)(param_1 + 0x10);
    DataMemoryBarrier(0xb);
    do {
      iVar1 = *piVar2;
      bVar3 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar3);
    *piVar2 = iVar1 + -1;
    if (iVar1 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01059b88(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    }
  }
  if (*(undefined1 **)(param_1 + 0x70) == &DAT_3b9aca00) {
    return;
  }
  bVar3 = *(short *)(param_1 + 0x80) != 0;
  iVar1 = 0;
  if (bVar3) {
    iVar1 = *(int *)(param_1 + 0x84);
  }
  if (bVar3 && iVar1 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x88));
  }
  bVar3 = *(short *)(param_1 + 0xa4) != 0;
  iVar1 = 0;
  if (bVar3) {
    iVar1 = *(int *)(param_1 + 0xa8);
  }
  if (bVar3 && iVar1 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xac));
  }
  piVar2 = *(int **)(param_1 + 0x78);
  DataMemoryBarrier(0xb);
  do {
    iVar1 = *piVar2;
    bVar3 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar3);
  *piVar2 = iVar1 + -1;
  if (iVar1 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01059b88(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
    return;
  }
  return;
}

