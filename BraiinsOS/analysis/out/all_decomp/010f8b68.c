// FUN_010f8b68 @ 010f8b68 size=284 calls_out=1 calls_in=0
// strings: 

void FUN_010f8b68(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x13) != '\x03') {
    return;
  }
  iVar6 = *(int *)(param_1 + 8);
  DataMemoryBarrier(0xb);
  pcVar5 = (char *)(iVar6 + 0x20);
  *(undefined1 *)(iVar6 + 0x30) = 1;
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar5;
    bVar2 = (bool)hasExclusiveAccess(pcVar5);
  } while (!bVar2);
  *pcVar5 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar3 = *(int *)(iVar6 + 0x18);
    *(undefined4 *)(iVar6 + 0x18) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar6 + 0x20) = 0;
    DataMemoryBarrier(0xb);
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar6 + 0x1c));
    }
  }
  pcVar5 = (char *)(iVar6 + 0x2c);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar5;
    bVar2 = (bool)hasExclusiveAccess(pcVar5);
  } while (!bVar2);
  *pcVar5 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar3 = *(int *)(iVar6 + 0x24);
    *(undefined4 *)(iVar6 + 0x24) = 0;
    if (iVar3 == 0) {
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar6 + 0x2c) = 0;
      DataMemoryBarrier(0xb);
    }
    else {
      DataMemoryBarrier(0xb);
      *pcVar5 = '\0';
      DataMemoryBarrier(0xb);
      (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar6 + 0x28));
    }
  }
  piVar4 = *(int **)(param_1 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010fe564(*(undefined4 *)(param_1 + 8));
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  return;
}

