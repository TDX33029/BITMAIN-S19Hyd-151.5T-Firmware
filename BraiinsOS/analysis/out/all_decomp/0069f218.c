// FUN_0069f218 @ 0069f218 size=308 calls_out=3 calls_in=5
// strings: 

void FUN_0069f218(int *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  piVar3 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0149d7c4(param_1[1]);
  }
  FUN_0064c7d0(param_1 + 2);
  iVar5 = *param_1;
  if (iVar5 != 0) {
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar5 + 0x68) = 1;
    pcVar6 = (char *)(iVar5 + 0x58);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar6;
      bVar2 = (bool)hasExclusiveAccess(pcVar6);
    } while (!bVar2);
    *pcVar6 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar4 = *(int *)(iVar5 + 0x50);
      *(undefined4 *)(iVar5 + 0x50) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar5 + 0x58) = 0;
      DataMemoryBarrier(0xb);
      if (iVar4 != 0) {
        (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar5 + 0x54));
      }
    }
    pcVar6 = (char *)(iVar5 + 100);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar6;
      bVar2 = (bool)hasExclusiveAccess(pcVar6);
    } while (!bVar2);
    *pcVar6 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar4 = *(int *)(iVar5 + 0x5c);
      *(undefined4 *)(iVar5 + 0x5c) = 0;
      if (iVar4 != 0) {
        (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar5 + 0x60));
      }
      DataMemoryBarrier(0xb);
      *pcVar6 = '\0';
      DataMemoryBarrier(0xb);
    }
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010b5534(*param_1);
      return;
    }
  }
  return;
}

