// FUN_00eba3bc @ 00eba3bc size=796 calls_out=2 calls_in=1
// strings: 

void FUN_00eba3bc(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  
  cVar1 = *(char *)((int)param_1 + 5);
  if (cVar1 == '\0') {
    iVar6 = *param_1;
    DataMemoryBarrier(0xb);
    pcVar5 = (char *)(iVar6 + 0x10);
    *(undefined1 *)(iVar6 + 0x22) = 1;
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar5;
      bVar2 = (bool)hasExclusiveAccess(pcVar5);
    } while (!bVar2);
    *pcVar5 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar3 = *(int *)(iVar6 + 8);
      *(undefined4 *)(iVar6 + 8) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar6 + 0x10) = 0;
      DataMemoryBarrier(0xb);
      if (iVar3 != 0) {
        (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar6 + 0xc));
      }
    }
    pcVar5 = (char *)(iVar6 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar5;
      bVar2 = (bool)hasExclusiveAccess(pcVar5);
    } while (!bVar2);
    *pcVar5 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar3 = *(int *)(iVar6 + 0x14);
      *(undefined4 *)(iVar6 + 0x14) = 0;
      if (iVar3 == 0) {
        DataMemoryBarrier(0xb);
        *(undefined1 *)(iVar6 + 0x1c) = 0;
        DataMemoryBarrier(0xb);
      }
      else {
        DataMemoryBarrier(0xb);
        *pcVar5 = '\0';
        DataMemoryBarrier(0xb);
        (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar6 + 0x18));
      }
    }
    piVar4 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + -1;
  }
  else {
    if (cVar1 == '\x03') {
      FUN_00eaab84(param_1 + 2);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      iVar6 = param_1[2];
      DataMemoryBarrier(0xb);
      pcVar5 = (char *)(iVar6 + 0x10);
      *(undefined1 *)(iVar6 + 0x22) = 1;
      DataMemoryBarrier(0xb);
      do {
        cVar1 = *pcVar5;
        bVar2 = (bool)hasExclusiveAccess(pcVar5);
      } while (!bVar2);
      *pcVar5 = '\x01';
      DataMemoryBarrier(0xb);
      if (cVar1 == '\0') {
        iVar3 = *(int *)(iVar6 + 8);
        *(undefined4 *)(iVar6 + 8) = 0;
        DataMemoryBarrier(0xb);
        *(undefined1 *)(iVar6 + 0x10) = 0;
        DataMemoryBarrier(0xb);
        if (iVar3 != 0) {
          (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar6 + 0xc));
        }
      }
      pcVar5 = (char *)(iVar6 + 0x1c);
      DataMemoryBarrier(0xb);
      do {
        cVar1 = *pcVar5;
        bVar2 = (bool)hasExclusiveAccess(pcVar5);
      } while (!bVar2);
      *pcVar5 = '\x01';
      DataMemoryBarrier(0xb);
      if (cVar1 == '\0') {
        iVar3 = *(int *)(iVar6 + 0x14);
        *(undefined4 *)(iVar6 + 0x14) = 0;
        if (iVar3 == 0) {
          DataMemoryBarrier(0xb);
          *(undefined1 *)(iVar6 + 0x1c) = 0;
          DataMemoryBarrier(0xb);
        }
        else {
          DataMemoryBarrier(0xb);
          *pcVar5 = '\0';
          DataMemoryBarrier(0xb);
          (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar6 + 0x18));
        }
      }
      piVar4 = (int *)param_1[2];
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089dea4(param_1[2]);
      }
    }
    if ((char)param_1[1] == '\0') {
      return;
    }
    iVar6 = *param_1;
    DataMemoryBarrier(0xb);
    pcVar5 = (char *)(iVar6 + 0x10);
    *(undefined1 *)(iVar6 + 0x22) = 1;
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar5;
      bVar2 = (bool)hasExclusiveAccess(pcVar5);
    } while (!bVar2);
    *pcVar5 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar3 = *(int *)(iVar6 + 8);
      *(undefined4 *)(iVar6 + 8) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar6 + 0x10) = 0;
      DataMemoryBarrier(0xb);
      if (iVar3 != 0) {
        (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar6 + 0xc));
      }
    }
    pcVar5 = (char *)(iVar6 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar5;
      bVar2 = (bool)hasExclusiveAccess(pcVar5);
    } while (!bVar2);
    *pcVar5 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar3 = *(int *)(iVar6 + 0x14);
      *(undefined4 *)(iVar6 + 0x14) = 0;
      if (iVar3 == 0) {
        DataMemoryBarrier(0xb);
        *(undefined1 *)(iVar6 + 0x1c) = 0;
        DataMemoryBarrier(0xb);
      }
      else {
        DataMemoryBarrier(0xb);
        *pcVar5 = '\0';
        DataMemoryBarrier(0xb);
        (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar6 + 0x18));
      }
    }
    piVar4 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + -1;
  }
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089dea4(*param_1);
    return;
  }
  return;
}

