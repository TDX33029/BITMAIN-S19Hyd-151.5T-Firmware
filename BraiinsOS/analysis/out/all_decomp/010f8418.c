// FUN_010f8418 @ 010f8418 size=296 calls_out=1 calls_in=0
// strings: 

void FUN_010f8418(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  
  cVar1 = *(char *)(param_1 + 0x23);
  bVar6 = cVar1 == '\x03';
  if (bVar6) {
    cVar1 = *(char *)(param_1 + 0x1b);
  }
  if (!bVar6 || cVar1 != '\x03') {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x10);
  DataMemoryBarrier(0xb);
  pcVar4 = (char *)(iVar5 + 0x20);
  *(undefined1 *)(iVar5 + 0x30) = 1;
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar4;
    bVar6 = (bool)hasExclusiveAccess(pcVar4);
  } while (!bVar6);
  *pcVar4 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar2 = *(int *)(iVar5 + 0x18);
    *(undefined4 *)(iVar5 + 0x18) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar5 + 0x20) = 0;
    DataMemoryBarrier(0xb);
    if (iVar2 != 0) {
      (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar5 + 0x1c));
    }
  }
  pcVar4 = (char *)(iVar5 + 0x2c);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar4;
    bVar6 = (bool)hasExclusiveAccess(pcVar4);
  } while (!bVar6);
  *pcVar4 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar2 = *(int *)(iVar5 + 0x24);
    *(undefined4 *)(iVar5 + 0x24) = 0;
    if (iVar2 == 0) {
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar5 + 0x2c) = 0;
      DataMemoryBarrier(0xb);
    }
    else {
      DataMemoryBarrier(0xb);
      *pcVar4 = '\0';
      DataMemoryBarrier(0xb);
      (**(code **)(iVar2 + 4))(*(undefined4 *)(iVar5 + 0x28));
    }
  }
  piVar3 = *(int **)(param_1 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar6 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar6);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010fe564(*(undefined4 *)(param_1 + 0x10));
  }
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  return;
}

