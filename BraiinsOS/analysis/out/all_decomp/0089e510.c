// FUN_0089e510 @ 0089e510 size=320 calls_out=2 calls_in=2
// strings: 

void FUN_0089e510(int *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if ((*param_1 == 0 && param_1[1] == 0) || (param_1[4] != 0)) {
    return;
  }
  piVar5 = (int *)param_1[5];
  if (*piVar5 != 0) {
    thunk_FUN_016d3fb4(piVar5[1]);
  }
  thunk_FUN_016d3fb4(piVar5);
  iVar6 = param_1[6];
  DataMemoryBarrier(0xb);
  pcVar3 = (char *)(iVar6 + 0x1c);
  *(undefined1 *)(iVar6 + 0x2c) = 1;
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar3;
    bVar2 = (bool)hasExclusiveAccess(pcVar3);
  } while (!bVar2);
  *pcVar3 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar4 = *(int *)(iVar6 + 0x14);
    *(undefined4 *)(iVar6 + 0x14) = 0;
    if (iVar4 == 0) {
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar6 + 0x1c) = 0;
      DataMemoryBarrier(0xb);
    }
    else {
      DataMemoryBarrier(0xb);
      *pcVar3 = '\0';
      DataMemoryBarrier(0xb);
      (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar6 + 0x18));
    }
  }
  pcVar3 = (char *)(iVar6 + 0x28);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar3;
    bVar2 = (bool)hasExclusiveAccess(pcVar3);
  } while (!bVar2);
  *pcVar3 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar4 = *(int *)(iVar6 + 0x20);
    *(undefined4 *)(iVar6 + 0x20) = 0;
    if (iVar4 != 0) {
      (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar6 + 0x24));
    }
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar6 + 0x28) = 0;
    DataMemoryBarrier(0xb);
  }
  piVar5 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010fee9c(param_1[6]);
    return;
  }
  return;
}

