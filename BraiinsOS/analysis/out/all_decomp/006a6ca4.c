// FUN_006a6ca4 @ 006a6ca4 size=304 calls_out=3 calls_in=1
// strings: 

void FUN_006a6ca4(uint *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  
  iVar4 = 1;
  if (3 < *param_1) {
    iVar4 = *param_1 - 4;
  }
  if (iVar4 == 0) {
    uVar6 = param_1[1];
    DataMemoryBarrier(0xb);
    pcVar5 = (char *)(uVar6 + 0x24);
    *(undefined1 *)(uVar6 + 0x34) = 1;
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar5;
      bVar2 = (bool)hasExclusiveAccess(pcVar5);
    } while (!bVar2);
    *pcVar5 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar4 = *(int *)(uVar6 + 0x1c);
      *(undefined4 *)(uVar6 + 0x1c) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(uVar6 + 0x24) = 0;
      DataMemoryBarrier(0xb);
      if (iVar4 != 0) {
        (**(code **)(iVar4 + 0xc))(*(undefined4 *)(uVar6 + 0x20));
      }
    }
    pcVar5 = (char *)(uVar6 + 0x30);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar5;
      bVar2 = (bool)hasExclusiveAccess(pcVar5);
    } while (!bVar2);
    *pcVar5 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar4 = *(int *)(uVar6 + 0x28);
      *(undefined4 *)(uVar6 + 0x28) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(uVar6 + 0x30) = 0;
      DataMemoryBarrier(0xb);
      if (iVar4 != 0) {
        (**(code **)(iVar4 + 4))(*(undefined4 *)(uVar6 + 0x2c));
      }
    }
    piVar3 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0105a70c(param_1[1]);
      return;
    }
    return;
  }
  if (iVar4 == 1) {
    FUN_006a70b4();
    return;
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_006a6e14();
  return;
}

