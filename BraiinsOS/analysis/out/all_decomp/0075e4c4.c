// FUN_0075e4c4 @ 0075e4c4 size=312 calls_out=3 calls_in=2
// strings: 

void FUN_0075e4c4(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  bool bVar7;
  
  FUN_0079f1cc();
  sVar2 = *(short *)(param_1 + 0x68);
  if (sVar2 != 2) {
    iVar3 = 0;
    if (sVar2 != 0) {
      iVar3 = *(int *)(param_1 + 0x6c);
    }
    if (sVar2 != 0 && iVar3 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x70));
    }
    bVar7 = *(short *)(param_1 + 0x8c) != 0;
    iVar3 = 0;
    if (bVar7) {
      iVar3 = *(int *)(param_1 + 0x90);
    }
    if (bVar7 && iVar3 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x94));
    }
  }
  iVar3 = *(int *)(param_1 + 0xc0);
  DataMemoryBarrier(0xb);
  pcVar6 = (char *)(iVar3 + 0x24);
  *(undefined1 *)(iVar3 + 0x34) = 1;
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar6;
    bVar7 = (bool)hasExclusiveAccess(pcVar6);
  } while (!bVar7);
  *pcVar6 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar4 = *(int *)(iVar3 + 0x1c);
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar3 + 0x24) = 0;
    DataMemoryBarrier(0xb);
    if (iVar4 != 0) {
      (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar3 + 0x20));
    }
  }
  pcVar6 = (char *)(iVar3 + 0x30);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar6;
    bVar7 = (bool)hasExclusiveAccess(pcVar6);
  } while (!bVar7);
  *pcVar6 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar4 = *(int *)(iVar3 + 0x28);
    *(undefined4 *)(iVar3 + 0x28) = 0;
    if (iVar4 != 0) {
      (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar3 + 0x2c));
    }
    DataMemoryBarrier(0xb);
    *pcVar6 = '\0';
    DataMemoryBarrier(0xb);
  }
  piVar5 = *(int **)(param_1 + 0xc0);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar5;
    bVar7 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar7);
  *piVar5 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0105a70c(*(undefined4 *)(param_1 + 0xc0));
    return;
  }
  return;
}

