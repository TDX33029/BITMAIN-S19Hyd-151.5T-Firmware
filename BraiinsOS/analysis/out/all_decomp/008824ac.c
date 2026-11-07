// FUN_008824ac @ 008824ac size=296 calls_out=1 calls_in=0
// strings: 

void FUN_008824ac(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  
  cVar1 = *(char *)(param_1 + 0x1c);
  bVar6 = cVar1 == '\x03';
  if (bVar6) {
    cVar1 = *(char *)(param_1 + 0x1b);
  }
  if (!bVar6 || cVar1 != '\x03') {
    return;
  }
  iVar5 = *(int *)(param_1 + 0xc);
  DataMemoryBarrier(0xb);
  pcVar4 = (char *)(iVar5 + 0x1c);
  *(undefined1 *)(iVar5 + 0x2c) = 1;
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar4;
    bVar6 = (bool)hasExclusiveAccess(pcVar4);
  } while (!bVar6);
  *pcVar4 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar2 = *(int *)(iVar5 + 0x14);
    *(undefined4 *)(iVar5 + 0x14) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar5 + 0x1c) = 0;
    DataMemoryBarrier(0xb);
    if (iVar2 != 0) {
      (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar5 + 0x18));
    }
  }
  pcVar4 = (char *)(iVar5 + 0x28);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar4;
    bVar6 = (bool)hasExclusiveAccess(pcVar4);
  } while (!bVar6);
  *pcVar4 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar2 = *(int *)(iVar5 + 0x20);
    *(undefined4 *)(iVar5 + 0x20) = 0;
    if (iVar2 == 0) {
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar5 + 0x28) = 0;
      DataMemoryBarrier(0xb);
    }
    else {
      DataMemoryBarrier(0xb);
      *pcVar4 = '\0';
      DataMemoryBarrier(0xb);
      (**(code **)(iVar2 + 4))(*(undefined4 *)(iVar5 + 0x24));
    }
  }
  piVar3 = *(int **)(param_1 + 0xc);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar6 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar6);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010fee9c(*(undefined4 *)(param_1 + 0xc));
  }
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  return;
}

