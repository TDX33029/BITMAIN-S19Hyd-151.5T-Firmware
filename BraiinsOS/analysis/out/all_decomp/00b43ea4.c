// FUN_00b43ea4 @ 00b43ea4 size=948 calls_out=13 calls_in=2
// strings: 

void FUN_00b43ea4(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x2d4) != '\0') {
    if (*(char *)(param_1 + 0x2d4) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0xe8) == '\x04') {
      FUN_00b40c24(param_1 + 0x100);
      piVar3 = *(int **)(param_1 + 0xe4);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078ecac(*(undefined4 *)(param_1 + 0xe4));
      }
    }
    else if (*(char *)(param_1 + 0xe8) == '\x03') {
      if (*(char *)(param_1 + 0x152) == '\x03') {
        if (*(int *)(param_1 + 0x118) != 0) {
          FUN_00c81a4c(*(int *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x11c),1);
        }
        if (*(int *)(param_1 + 0x124) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x128));
        }
        *(undefined1 *)(param_1 + 0x151) = 0;
      }
      else if ((*(char *)(param_1 + 0x152) == '\0') && (*(int *)(param_1 + 0x144) != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x148));
      }
    }
    iVar2 = *(int *)(param_1 + 0xd0);
    piVar3 = (int *)(iVar2 + 0xfc);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      FUN_0163b708(iVar2 + 0xe8);
    }
    piVar3 = *(int **)(param_1 + 0xd0);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aad1e0(*(undefined4 *)(param_1 + 0xd0));
    }
    piVar3 = *(int **)(param_1 + 0x2cc);
    *(undefined1 *)(param_1 + 0x2d5) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aad0bc(*(undefined4 *)(param_1 + 0x2cc));
    }
    *(undefined1 *)(param_1 + 0x2d6) = 0;
    FUN_00b351e8(param_1 + 0xc0);
    *(undefined2 *)(param_1 + 0x2d7) = 0;
    if (4 < *(ushort *)(param_1 + 0x2c8)) {
      *(undefined2 *)(param_1 + 0x2ca) = 0;
    }
    piVar3 = *(int **)(param_1 + 0xbc);
    *(undefined1 *)(param_1 + 0x2d9) = 0;
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aa7b14(*(undefined4 *)(param_1 + 0xbc));
      }
    }
    piVar3 = *(int **)(param_1 + 0xb8);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa6194(*(undefined4 *)(param_1 + 0xb8));
    }
    *(undefined1 *)(param_1 + 0x2da) = 0;
    FUN_00b40624(param_1 + 0x70);
    *(undefined1 *)(param_1 + 0x2db) = 0;
    FUN_00b40204(param_1 + 700);
    piVar3 = *(int **)(param_1 + 0x2b8);
    *(undefined1 *)(param_1 + 0x2dc) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078d010(*(undefined4 *)(param_1 + 0x2b8));
    }
    *(undefined1 *)(param_1 + 0x2dd) = 0;
    return;
  }
  piVar3 = *(int **)(param_1 + 0x2a4);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078d010(*(undefined4 *)(param_1 + 0x2a4));
  }
  FUN_00b40204(param_1 + 0x2a8);
  FUN_00b40624(param_1);
  piVar3 = *(int **)(param_1 + 0x4c);
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa7b14(*(undefined4 *)(param_1 + 0x4c));
    }
  }
  piVar3 = *(int **)(param_1 + 0x48);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aa6194(*(undefined4 *)(param_1 + 0x48));
  }
  if (4 < *(ushort *)(param_1 + 0x2a0)) {
    *(undefined2 *)(param_1 + 0x2a2) = 0;
  }
  FUN_00b351e8(param_1 + 0x50);
  piVar3 = *(int **)(param_1 + 0x2b4);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad0bc(*(undefined4 *)(param_1 + 0x2b4));
  }
  iVar2 = *(int *)(param_1 + 0x60);
  piVar3 = (int *)(iVar2 + 0xfc);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    FUN_0163b708(iVar2 + 0xe8);
  }
  piVar3 = *(int **)(param_1 + 0x60);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad1e0(*(undefined4 *)(param_1 + 0x60));
    return;
  }
  return;
}

