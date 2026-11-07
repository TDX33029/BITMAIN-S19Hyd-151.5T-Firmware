// FUN_010fe78c @ 010fe78c size=1360 calls_out=3 calls_in=2
// strings: 

void FUN_010fe78c(int *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  if (*param_1 == 0) {
    return;
  }
  switch((char)param_1[3]) {
  case '\0':
    iVar7 = param_1[5];
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
    piVar4 = (int *)param_1[5];
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010fe564(param_1[5]);
      return;
    }
    return;
  case '\x01':
    if (param_1[5] != 0) {
      thunk_FUN_016d3fb4(param_1[6]);
    }
    iVar7 = param_1[4];
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
    piVar4 = (int *)param_1[4];
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    break;
  case '\x02':
    iVar7 = param_1[6];
    puVar6 = (undefined4 *)(iVar7 + 4);
    for (iVar5 = param_1[7]; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (puVar6[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar6);
      }
      puVar6 = puVar6 + 3;
    }
    if (param_1[5] != 0) {
      thunk_FUN_016d3fb4(iVar7);
    }
    iVar7 = param_1[4];
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
    piVar4 = (int *)param_1[4];
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    break;
  case '\x03':
    iVar7 = param_1[4];
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
    piVar4 = (int *)param_1[4];
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    break;
  default:
    iVar7 = param_1[5];
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
    piVar4 = (int *)param_1[5];
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010fee9c(param_1[5]);
      return;
    }
  case '\x05':
    goto switchD_010fe7b4_caseD_5;
  }
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010fee9c(param_1[4]);
    return;
  }
switchD_010fe7b4_caseD_5:
  return;
}

