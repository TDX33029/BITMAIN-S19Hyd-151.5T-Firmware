// FUN_00c8edf4 @ 00c8edf4 size=708 calls_out=8 calls_in=2
// strings: 

void FUN_00c8edf4(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  
  cVar1 = *(char *)(param_1 + 100);
  if (cVar1 != '\0') {
    if (cVar1 == '\x03') {
      FUN_00d8f5e8(param_1 + 0x70);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(int *)(param_1 + 0x80) != 0) {
        FUN_00c8204c(*(int *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),1);
      }
      iVar3 = *(int *)(param_1 + 0x70);
      if (iVar3 != 0 && iVar3 != -1) {
        piVar4 = (int *)(iVar3 + 4);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          uVar8 = *(uint *)(*(int *)(param_1 + 0x74) + 8);
          if (uVar8 < 5) {
            uVar8 = 4;
          }
          if ((*(int *)(*(int *)(param_1 + 0x74) + 4) + uVar8 + 7 & -uVar8) != 0) {
            thunk_FUN_016d3fb4();
          }
        }
      }
      piVar4 = *(int **)(param_1 + 0x78);
      *(undefined1 *)(param_1 + 0x65) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
      }
    }
    piVar4 = *(int **)(param_1 + 0x60);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f31e8(*(undefined4 *)(param_1 + 0x60));
    }
    piVar4 = *(int **)(param_1 + 0x5c);
    *(undefined2 *)(param_1 + 0x66) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_009ba47c(*(undefined4 *)(param_1 + 0x5c));
    }
    *(undefined1 *)(param_1 + 0x68) = 0;
    return;
  }
  uVar9 = *(undefined4 *)(param_1 + 0x30);
  puVar10 = *(undefined4 **)(param_1 + 0x34);
  pcVar5 = (code *)*puVar10;
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(uVar9);
  }
  if (puVar10[1] != 0) {
    thunk_FUN_016d3fb4(uVar9);
  }
  iVar3 = *(int *)(param_1 + 0x3c);
  if (iVar3 != 0) {
    piVar4 = (int *)(iVar3 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + -1;
    DataMemoryBarrier(0xb);
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar3 + 0x10)) {
        puVar7 = (uint *)(iVar3 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar2);
        *puVar7 = *puVar7 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar7 = (uint *)(iVar3 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar8 = *puVar7;
        bVar2 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar2);
      *puVar7 = uVar8 | 2;
      DataMemoryBarrier(0xb);
      if (uVar8 == 0) {
        iVar6 = *(int *)(iVar3 + 0x18);
        *(undefined4 *)(iVar3 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar2);
        *puVar7 = *puVar7 & 0xfffffffd;
        if (iVar6 != 0) {
          (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar3 + 0x1c));
        }
      }
    }
    piVar4 = *(int **)(param_1 + 0x3c);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f23b4(*(undefined4 *)(param_1 + 0x3c));
    }
  }
  piVar4 = *(int **)(param_1 + 0x50);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1a50(*(undefined4 *)(param_1 + 0x50));
    return;
  }
  return;
}

