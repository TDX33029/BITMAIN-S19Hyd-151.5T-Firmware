// FUN_00d07bf0 @ 00d07bf0 size=368 calls_out=4 calls_in=3
// strings: 

void FUN_00d07bf0(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  if (*(char *)(param_1 + 0x15) == '\0') {
    piVar4 = (int *)*param_1;
    piVar2 = piVar4 + 0x29;
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      FUN_0163b708(piVar4 + 0x22);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar5 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar5);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00784894(*param_1);
    }
    piVar2 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
  }
  else {
    if (*(char *)(param_1 + 0x15) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x14) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x13);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)((int)param_1 + 0x29);
      }
      if (bVar5 && cVar1 == '\x04') {
        FUN_0163bdc0(param_1 + 0xb);
        if (param_1[0xf] != 0) {
          (**(code **)(param_1[0xf] + 0xc))(param_1[0x10]);
        }
        *(undefined1 *)(param_1 + 10) = 0;
      }
    }
    piVar4 = (int *)*param_1;
    piVar2 = piVar4 + 0x29;
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      FUN_0163b708(piVar4 + 0x22);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar5 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar5);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00784894(*param_1);
    }
    piVar2 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(param_1[2]);
    return;
  }
  return;
}

