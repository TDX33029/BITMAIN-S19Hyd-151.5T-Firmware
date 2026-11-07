// FUN_0142010c @ 0142010c size=376 calls_out=7 calls_in=0
// strings: 

void FUN_0142010c(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  piVar3 = *(int **)(param_1 + 0x74);
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010b53fc(*(undefined4 *)(param_1 + 0x74));
    }
  }
  FUN_00ac4930(param_1 + 0x40);
  iVar5 = *(int *)(param_1 + 0x4c);
  DataMemoryBarrier(0xb);
  pcVar6 = (char *)(iVar5 + 0x10);
  *(undefined1 *)(iVar5 + 0x20) = 1;
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar6;
    bVar2 = (bool)hasExclusiveAccess(pcVar6);
  } while (!bVar2);
  *pcVar6 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar4 = *(int *)(iVar5 + 8);
    *(undefined4 *)(iVar5 + 8) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar5 + 0x10) = 0;
    DataMemoryBarrier(0xb);
    if (iVar4 != 0) {
      (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar5 + 0xc));
    }
  }
  pcVar6 = (char *)(iVar5 + 0x1c);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar6;
    bVar2 = (bool)hasExclusiveAccess(pcVar6);
  } while (!bVar2);
  *pcVar6 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar4 = *(int *)(iVar5 + 0x14);
    *(undefined4 *)(iVar5 + 0x14) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar5 + 0x1c) = 0;
    DataMemoryBarrier(0xb);
    if (iVar4 != 0) {
      (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar5 + 0x18));
    }
  }
  piVar3 = *(int **)(param_1 + 0x4c);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089dea4(*(undefined4 *)(param_1 + 0x4c));
  }
  piVar3 = *(int **)(param_1 + 0x50);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
  }
  FUN_01420480(param_1 + 0x58);
  FUN_0141fdd4(param_1 + 0x6c);
  FUN_0141c310(param_1);
  return;
}

