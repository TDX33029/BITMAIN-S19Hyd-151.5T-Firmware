// FUN_014b3fa0 @ 014b3fa0 size=252 calls_out=1 calls_in=1
// strings: 

void FUN_014b3fa0(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  
  iVar6 = *param_1;
  if (iVar6 != 0) {
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar6 + 0x68) = 1;
    pcVar5 = (char *)(iVar6 + 0x58);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar5;
      bVar2 = (bool)hasExclusiveAccess(pcVar5);
    } while (!bVar2);
    *pcVar5 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar3 = *(int *)(iVar6 + 0x50);
      *(undefined4 *)(iVar6 + 0x50) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar6 + 0x58) = 0;
      DataMemoryBarrier(0xb);
      if (iVar3 != 0) {
        (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar6 + 0x54));
      }
    }
    pcVar5 = (char *)(iVar6 + 100);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar5;
      bVar2 = (bool)hasExclusiveAccess(pcVar5);
    } while (!bVar2);
    *pcVar5 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar3 = *(int *)(iVar6 + 0x5c);
      *(undefined4 *)(iVar6 + 0x5c) = 0;
      if (iVar3 != 0) {
        (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar6 + 0x60));
      }
      DataMemoryBarrier(0xb);
      *pcVar5 = '\0';
      DataMemoryBarrier(0xb);
    }
    piVar4 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010b5534(*param_1);
      return;
    }
  }
  return;
}

