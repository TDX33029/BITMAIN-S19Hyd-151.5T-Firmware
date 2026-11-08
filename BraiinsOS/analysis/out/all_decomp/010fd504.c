// FUN_010fd504 @ 010fd504 size=1348 calls_out=3 calls_in=3
// strings: 

void FUN_010fd504(undefined1 *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  switch(*param_1) {
  case 0:
    iVar7 = *(int *)(param_1 + 8);
    DataMemoryBarrier(0xb);
    pcVar3 = (char *)(iVar7 + 0x20);
    *(undefined1 *)(iVar7 + 0x30) = 1;
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar3;
      bVar2 = (bool)hasExclusiveAccess(pcVar3);
    } while (!bVar2);
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar5 = *(int *)(iVar7 + 0x18);
      *(undefined4 *)(iVar7 + 0x18) = 0;
      if (iVar5 == 0) {
        DataMemoryBarrier(0xb);
        *(undefined1 *)(iVar7 + 0x20) = 0;
        DataMemoryBarrier(0xb);
      }
      else {
        DataMemoryBarrier(0xb);
        *pcVar3 = '\0';
        DataMemoryBarrier(0xb);
        (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar7 + 0x1c));
      }
    }
    pcVar3 = (char *)(iVar7 + 0x2c);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar3;
      bVar2 = (bool)hasExclusiveAccess(pcVar3);
    } while (!bVar2);
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar5 = *(int *)(iVar7 + 0x24);
      *(undefined4 *)(iVar7 + 0x24) = 0;
      if (iVar5 != 0) {
        (**(code **)(iVar5 + 0xc))(*(undefined4 *)(iVar7 + 0x28));
      }
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar7 + 0x2c) = 0;
      DataMemoryBarrier(0xb);
    }
    piVar4 = *(int **)(param_1 + 8);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010fe564(*(undefined4 *)(param_1 + 8));
      return;
    }
    return;
  case 1:
    if (*(int *)(param_1 + 8) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc));
    }
    iVar7 = *(int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    pcVar3 = (char *)(iVar7 + 0x1c);
    *(undefined1 *)(iVar7 + 0x2c) = 1;
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar3;
      bVar2 = (bool)hasExclusiveAccess(pcVar3);
    } while (!bVar2);
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar5 = *(int *)(iVar7 + 0x14);
      *(undefined4 *)(iVar7 + 0x14) = 0;
      if (iVar5 == 0) {
        DataMemoryBarrier(0xb);
        *(undefined1 *)(iVar7 + 0x1c) = 0;
        DataMemoryBarrier(0xb);
      }
      else {
        DataMemoryBarrier(0xb);
        *pcVar3 = '\0';
        DataMemoryBarrier(0xb);
        (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar7 + 0x18));
      }
    }
    pcVar3 = (char *)(iVar7 + 0x28);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar3;
      bVar2 = (bool)hasExclusiveAccess(pcVar3);
    } while (!bVar2);
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar5 = *(int *)(iVar7 + 0x20);
      *(undefined4 *)(iVar7 + 0x20) = 0;
      if (iVar5 != 0) {
        (**(code **)(iVar5 + 0xc))(*(undefined4 *)(iVar7 + 0x24));
      }
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar7 + 0x28) = 0;
      DataMemoryBarrier(0xb);
    }
    piVar4 = *(int **)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    break;
  case 2:
    iVar7 = *(int *)(param_1 + 0xc);
    puVar6 = (undefined4 *)(iVar7 + 4);
    for (iVar5 = *(int *)(param_1 + 0x10); iVar5 != 0; iVar5 = iVar5 + -1) {
      if (puVar6[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar6);
      }
      puVar6 = puVar6 + 3;
    }
    if (*(int *)(param_1 + 8) != 0) {
      thunk_FUN_016d3fb4(iVar7);
    }
    iVar7 = *(int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    pcVar3 = (char *)(iVar7 + 0x1c);
    *(undefined1 *)(iVar7 + 0x2c) = 1;
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar3;
      bVar2 = (bool)hasExclusiveAccess(pcVar3);
    } while (!bVar2);
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar5 = *(int *)(iVar7 + 0x14);
      *(undefined4 *)(iVar7 + 0x14) = 0;
      if (iVar5 == 0) {
        DataMemoryBarrier(0xb);
        *(undefined1 *)(iVar7 + 0x1c) = 0;
        DataMemoryBarrier(0xb);
      }
      else {
        DataMemoryBarrier(0xb);
        *pcVar3 = '\0';
        DataMemoryBarrier(0xb);
        (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar7 + 0x18));
      }
    }
    pcVar3 = (char *)(iVar7 + 0x28);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar3;
      bVar2 = (bool)hasExclusiveAccess(pcVar3);
    } while (!bVar2);
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar5 = *(int *)(iVar7 + 0x20);
      *(undefined4 *)(iVar7 + 0x20) = 0;
      if (iVar5 != 0) {
        (**(code **)(iVar5 + 0xc))(*(undefined4 *)(iVar7 + 0x24));
      }
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar7 + 0x28) = 0;
      DataMemoryBarrier(0xb);
    }
    piVar4 = *(int **)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    break;
  case 3:
    iVar7 = *(int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    pcVar3 = (char *)(iVar7 + 0x1c);
    *(undefined1 *)(iVar7 + 0x2c) = 1;
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar3;
      bVar2 = (bool)hasExclusiveAccess(pcVar3);
    } while (!bVar2);
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar5 = *(int *)(iVar7 + 0x14);
      *(undefined4 *)(iVar7 + 0x14) = 0;
      if (iVar5 == 0) {
        DataMemoryBarrier(0xb);
        *(undefined1 *)(iVar7 + 0x1c) = 0;
        DataMemoryBarrier(0xb);
      }
      else {
        DataMemoryBarrier(0xb);
        *pcVar3 = '\0';
        DataMemoryBarrier(0xb);
        (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar7 + 0x18));
      }
    }
    pcVar3 = (char *)(iVar7 + 0x28);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar3;
      bVar2 = (bool)hasExclusiveAccess(pcVar3);
    } while (!bVar2);
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar5 = *(int *)(iVar7 + 0x20);
      *(undefined4 *)(iVar7 + 0x20) = 0;
      if (iVar5 != 0) {
        (**(code **)(iVar5 + 0xc))(*(undefined4 *)(iVar7 + 0x24));
      }
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar7 + 0x28) = 0;
      DataMemoryBarrier(0xb);
    }
    piVar4 = *(int **)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    break;
  default:
    iVar7 = *(int *)(param_1 + 8);
    DataMemoryBarrier(0xb);
    pcVar3 = (char *)(iVar7 + 0x1c);
    *(undefined1 *)(iVar7 + 0x2c) = 1;
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar3;
      bVar2 = (bool)hasExclusiveAccess(pcVar3);
    } while (!bVar2);
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar5 = *(int *)(iVar7 + 0x14);
      *(undefined4 *)(iVar7 + 0x14) = 0;
      if (iVar5 == 0) {
        DataMemoryBarrier(0xb);
        *(undefined1 *)(iVar7 + 0x1c) = 0;
        DataMemoryBarrier(0xb);
      }
      else {
        DataMemoryBarrier(0xb);
        *pcVar3 = '\0';
        DataMemoryBarrier(0xb);
        (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar7 + 0x18));
      }
    }
    pcVar3 = (char *)(iVar7 + 0x28);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar3;
      bVar2 = (bool)hasExclusiveAccess(pcVar3);
    } while (!bVar2);
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar5 = *(int *)(iVar7 + 0x20);
      *(undefined4 *)(iVar7 + 0x20) = 0;
      if (iVar5 != 0) {
        (**(code **)(iVar5 + 0xc))(*(undefined4 *)(iVar7 + 0x24));
      }
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar7 + 0x28) = 0;
      DataMemoryBarrier(0xb);
    }
    piVar4 = *(int **)(param_1 + 8);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010fee9c(*(undefined4 *)(param_1 + 8));
      return;
    }
    return;
  }
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010fee9c(*(undefined4 *)(param_1 + 4));
    return;
  }
  return;
}

