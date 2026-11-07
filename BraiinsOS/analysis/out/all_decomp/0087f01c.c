// FUN_0087f01c @ 0087f01c size=908 calls_out=6 calls_in=1
// strings: 

void FUN_0087f01c(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  
  switch(*(undefined1 *)(param_1 + 0x34)) {
  case 0:
    FUN_008ae4e4(*(undefined4 *)(param_1 + 0x20));
    piVar3 = *(int **)(param_1 + 0x20);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar6 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar6);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010ff294(*(undefined4 *)(param_1 + 0x20));
    }
    piVar3 = *(int **)(param_1 + 0x28);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar6 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar6);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010cf448(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
      return;
    }
    return;
  default:
    goto switchD_0087f038_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0x60) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x5c);
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = *(char *)(param_1 + 0x5b);
      }
      if (bVar6 && cVar1 == '\x03') {
        iVar2 = *(int *)(param_1 + 0x4c);
        DataMemoryBarrier(0xb);
        pcVar5 = (char *)(iVar2 + 0x1c);
        *(undefined1 *)(iVar2 + 0x2c) = 1;
        DataMemoryBarrier(0xb);
        do {
          cVar1 = *pcVar5;
          bVar6 = (bool)hasExclusiveAccess(pcVar5);
        } while (!bVar6);
        *pcVar5 = '\x01';
        DataMemoryBarrier(0xb);
        if (cVar1 == '\0') {
          iVar4 = *(int *)(iVar2 + 0x14);
          *(undefined4 *)(iVar2 + 0x14) = 0;
          DataMemoryBarrier(0xb);
          *(undefined1 *)(iVar2 + 0x1c) = 0;
          DataMemoryBarrier(0xb);
          if (iVar4 != 0) {
            (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar2 + 0x18));
          }
        }
        pcVar5 = (char *)(iVar2 + 0x28);
        DataMemoryBarrier(0xb);
        do {
          cVar1 = *pcVar5;
          bVar6 = (bool)hasExclusiveAccess(pcVar5);
        } while (!bVar6);
        *pcVar5 = '\x01';
        DataMemoryBarrier(0xb);
        if (cVar1 == '\0') {
          iVar4 = *(int *)(iVar2 + 0x20);
          *(undefined4 *)(iVar2 + 0x20) = 0;
          if (iVar4 == 0) {
            DataMemoryBarrier(0xb);
            *(undefined1 *)(iVar2 + 0x28) = 0;
            DataMemoryBarrier(0xb);
          }
          else {
            DataMemoryBarrier(0xb);
            *pcVar5 = '\0';
            DataMemoryBarrier(0xb);
            (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar2 + 0x24));
          }
        }
        piVar3 = *(int **)(param_1 + 0x4c);
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar6 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar6);
        *piVar3 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_010fee9c(*(undefined4 *)(param_1 + 0x4c));
        }
        *(undefined1 *)(param_1 + 0x5a) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
      }
    }
    break;
  case 4:
    FUN_00880e78(param_1 + 0x38);
    break;
  case 5:
    if (*(char *)(param_1 + 100) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x60);
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = *(char *)(param_1 + 0x5f);
      }
      if (!bVar6 || cVar1 != '\x03') goto LAB_0087f1c8;
      iVar2 = *(int *)(param_1 + 0x50);
      DataMemoryBarrier(0xb);
      pcVar5 = (char *)(iVar2 + 0x1c);
      *(undefined1 *)(iVar2 + 0x2c) = 1;
      DataMemoryBarrier(0xb);
      do {
        cVar1 = *pcVar5;
        bVar6 = (bool)hasExclusiveAccess(pcVar5);
      } while (!bVar6);
      *pcVar5 = '\x01';
      DataMemoryBarrier(0xb);
      if (cVar1 == '\0') {
        iVar4 = *(int *)(iVar2 + 0x14);
        *(undefined4 *)(iVar2 + 0x14) = 0;
        DataMemoryBarrier(0xb);
        *(undefined1 *)(iVar2 + 0x1c) = 0;
        DataMemoryBarrier(0xb);
        if (iVar4 != 0) {
          (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar2 + 0x18));
        }
      }
      pcVar5 = (char *)(iVar2 + 0x28);
      DataMemoryBarrier(0xb);
      do {
        cVar1 = *pcVar5;
        bVar6 = (bool)hasExclusiveAccess(pcVar5);
      } while (!bVar6);
      *pcVar5 = '\x01';
      DataMemoryBarrier(0xb);
      if (cVar1 == '\0') {
        iVar4 = *(int *)(iVar2 + 0x20);
        *(undefined4 *)(iVar2 + 0x20) = 0;
        if (iVar4 == 0) {
          DataMemoryBarrier(0xb);
          *(undefined1 *)(iVar2 + 0x28) = 0;
          DataMemoryBarrier(0xb);
        }
        else {
          DataMemoryBarrier(0xb);
          *pcVar5 = '\0';
          DataMemoryBarrier(0xb);
          (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar2 + 0x24));
        }
      }
      piVar3 = *(int **)(param_1 + 0x50);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar6 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar6);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010fee9c(*(undefined4 *)(param_1 + 0x50));
      }
      *(undefined1 *)(param_1 + 0x5e) = 0;
      *(undefined2 *)(param_1 + 0x5c) = 0;
      iVar2 = *(int *)(param_1 + 0x14c);
    }
    else {
LAB_0087f1c8:
      iVar2 = *(int *)(param_1 + 0x14c);
    }
    if (iVar2 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x150));
    }
    *(undefined1 *)(param_1 + 0x31) = 0;
  }
  piVar3 = *(int **)(param_1 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar6 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar6);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010cf448(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  }
  *(undefined1 *)(param_1 + 0x32) = 0;
  FUN_008ae4e4(*(undefined4 *)(param_1 + 8));
  piVar3 = *(int **)(param_1 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar6 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar6);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010ff294(*(undefined4 *)(param_1 + 8));
  }
  *(undefined1 *)(param_1 + 0x33) = 0;
switchD_0087f038_caseD_1:
  return;
}

