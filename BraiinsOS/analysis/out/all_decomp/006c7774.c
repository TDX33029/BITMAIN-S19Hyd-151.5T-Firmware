// FUN_006c7774 @ 006c7774 size=172 calls_out=3 calls_in=2
// strings: 

void FUN_006c7774(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  piVar4 = *(int **)(param_1 + 0x50);
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar11 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar11);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    }
  }
  piVar4 = *(int **)(param_1 + 0x58);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar11 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar11);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01089b40(*(undefined4 *)(param_1 + 0x58));
  }
  piVar4 = *(int **)(param_1 + 0x5c);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar11 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar11);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0108a284(*(undefined4 *)(param_1 + 0x5c));
  }
  piVar7 = (int *)(param_1 + 300);
  FUN_006adf40(piVar7);
  piVar4 = (int *)*piVar7;
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar11 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar11);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0105aee4(*piVar7);
    }
  }
  iVar5 = *(int *)(param_1 + 0x68);
  if (iVar5 != -0x80000000) {
    iVar9 = *(int *)(param_1 + 0x70);
    iVar10 = *(int *)(param_1 + 0x6c);
    if (iVar9 != 0) {
      psVar8 = (short *)(iVar10 + 0x24);
      do {
        iVar3 = 0;
        if (psVar8[-0x12] != 0) {
          iVar3 = *(int *)(psVar8 + -0x10);
        }
        if (psVar8[-0x12] != 0 && iVar3 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(psVar8 + -0xe));
        }
        iVar3 = 0;
        if (*psVar8 != 0) {
          iVar3 = *(int *)(psVar8 + 2);
        }
        if (*psVar8 != 0 && iVar3 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(psVar8 + 4));
        }
        psVar8 = psVar8 + 0x26;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    if (iVar5 != 0) {
      thunk_FUN_016d3fb4(iVar10);
    }
    iVar10 = *(int *)(param_1 + 0x78);
    iVar9 = *(int *)(param_1 + 0x7c) + 1;
    iVar5 = iVar10;
    while (iVar9 = iVar9 + -1, iVar9 != 0) {
      FUN_007b5fa0(iVar5);
      iVar5 = iVar5 + 0xe8;
    }
    if (*(int *)(param_1 + 0x74) != 0) {
      thunk_FUN_016d3fb4(iVar10);
    }
    iVar10 = *(int *)(param_1 + 0x84);
    iVar9 = *(int *)(param_1 + 0x88) + 1;
    iVar5 = iVar10;
    while (iVar9 = iVar9 + -1, iVar9 != 0) {
      FUN_007b5fa0(iVar5);
      iVar5 = iVar5 + 0xe8;
    }
    if (*(int *)(param_1 + 0x80) != 0) {
      thunk_FUN_016d3fb4(iVar10);
    }
    iVar10 = *(int *)(param_1 + 0x90);
    iVar9 = *(int *)(param_1 + 0x94) + 1;
    iVar5 = iVar10;
    while (iVar9 = iVar9 + -1, iVar9 != 0) {
      FUN_007b5fa0(iVar5);
      iVar5 = iVar5 + 0xe8;
    }
    if (*(int *)(param_1 + 0x8c) != 0) {
      thunk_FUN_016d3fb4(iVar10);
    }
    iVar10 = *(int *)(param_1 + 0x9c);
    iVar9 = *(int *)(param_1 + 0xa0) + 1;
    iVar5 = iVar10;
    while (iVar9 = iVar9 + -1, iVar9 != 0) {
      FUN_007b5fa0(iVar5);
      iVar5 = iVar5 + 0xe8;
    }
    if (*(int *)(param_1 + 0x98) != 0) {
      thunk_FUN_016d3fb4(iVar10);
    }
    iVar5 = *(int *)(param_1 + 0xa4);
    if (iVar5 != -0x80000000) {
      iVar9 = *(int *)(param_1 + 0xac);
      iVar10 = *(int *)(param_1 + 0xa8);
      if (iVar9 != 0) {
        piVar4 = (int *)(iVar10 + 8);
        do {
          bVar11 = (char)piVar4[-1] != '\0';
          iVar3 = 0;
          if (bVar11) {
            iVar3 = *piVar4;
          }
          if (bVar11 && iVar3 != 0) {
            thunk_FUN_016d3fb4(piVar4[1]);
          }
          piVar4 = piVar4 + 6;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      if (iVar5 != 0) {
        thunk_FUN_016d3fb4(iVar10);
      }
    }
    sVar2 = *(short *)(param_1 + 0xd0);
    if (sVar2 != 2) {
      iVar5 = 0;
      if (sVar2 != 0) {
        iVar5 = *(int *)(param_1 + 0xd4);
      }
      if (sVar2 != 0 && iVar5 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd8));
      }
      bVar11 = *(short *)(param_1 + 0xf4) != 0;
      iVar5 = 0;
      if (bVar11) {
        iVar5 = *(int *)(param_1 + 0xf8);
      }
      if (bVar11 && iVar5 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xfc));
      }
    }
    iVar5 = *(int *)(param_1 + 0x128);
    DataMemoryBarrier(0xb);
    pcVar6 = (char *)(iVar5 + 0x24);
    *(undefined1 *)(iVar5 + 0x34) = 1;
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar6;
      bVar11 = (bool)hasExclusiveAccess(pcVar6);
    } while (!bVar11);
    *pcVar6 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar9 = *(int *)(iVar5 + 0x1c);
      *(undefined4 *)(iVar5 + 0x1c) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar5 + 0x24) = 0;
      DataMemoryBarrier(0xb);
      if (iVar9 != 0) {
        (**(code **)(iVar9 + 4))(*(undefined4 *)(iVar5 + 0x20));
      }
    }
    pcVar6 = (char *)(iVar5 + 0x30);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar6;
      bVar11 = (bool)hasExclusiveAccess(pcVar6);
    } while (!bVar11);
    *pcVar6 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar9 = *(int *)(iVar5 + 0x28);
      *(undefined4 *)(iVar5 + 0x28) = 0;
      if (iVar9 != 0) {
        (**(code **)(iVar9 + 0xc))(*(undefined4 *)(iVar5 + 0x2c));
      }
      DataMemoryBarrier(0xb);
      *pcVar6 = '\0';
      DataMemoryBarrier(0xb);
    }
    piVar4 = *(int **)(param_1 + 0x128);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar11 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar11);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0105a70c(*(undefined4 *)(param_1 + 0x128));
      return;
    }
  }
  return;
}

