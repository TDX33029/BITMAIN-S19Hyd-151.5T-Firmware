// FUN_006ade10 @ 006ade10 size=344 calls_out=3 calls_in=3
// strings: 

void FUN_006ade10(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  bool bVar8;
  
  FUN_006a7ac0();
  sVar2 = *(short *)(param_1 + 0x68);
  if (sVar2 != 2) {
    iVar5 = 0;
    if (sVar2 != 0) {
      iVar5 = *(int *)(param_1 + 0x6c);
    }
    if (sVar2 != 0 && iVar5 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x70));
    }
    bVar8 = *(short *)(param_1 + 0x8c) != 0;
    iVar5 = 0;
    if (bVar8) {
      iVar5 = *(int *)(param_1 + 0x90);
    }
    if (bVar8 && iVar5 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x94));
    }
  }
  piVar6 = (int *)(param_1 + 0xc0);
  iVar5 = *piVar6;
  DataMemoryBarrier(0xb);
  pcVar7 = (char *)(iVar5 + 0x24);
  *(undefined1 *)(iVar5 + 0x34) = 1;
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar7;
    bVar8 = (bool)hasExclusiveAccess(pcVar7);
  } while (!bVar8);
  *pcVar7 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar3 = *(int *)(iVar5 + 0x1c);
    *(undefined4 *)(iVar5 + 0x1c) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar5 + 0x24) = 0;
    DataMemoryBarrier(0xb);
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar5 + 0x20));
    }
  }
  pcVar7 = (char *)(iVar5 + 0x30);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar7;
    bVar8 = (bool)hasExclusiveAccess(pcVar7);
  } while (!bVar8);
  *pcVar7 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar3 = *(int *)(iVar5 + 0x28);
    *(undefined4 *)(iVar5 + 0x28) = 0;
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar5 + 0x2c));
    }
    DataMemoryBarrier(0xb);
    *pcVar7 = '\0';
    DataMemoryBarrier(0xb);
  }
  piVar4 = (int *)*piVar6;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar8 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar8);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0105a70c(*piVar6);
    return;
  }
  return;
}

