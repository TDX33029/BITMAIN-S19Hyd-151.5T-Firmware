// FUN_00acf2a8 @ 00acf2a8 size=376 calls_out=4 calls_in=3
// strings: 

void FUN_00acf2a8(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  if ((char)param_1[0x15] == '\0') {
    iVar2 = *param_1;
    piVar3 = (int *)(iVar2 + 0xa4);
    do {
      iVar4 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      FUN_0163b708(iVar2 + 0x88);
    }
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00784894(*param_1);
    }
    piVar3 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar2 + -1;
  }
  else {
    if ((char)param_1[0x15] != '\x03') {
      return;
    }
    if ((char)param_1[0x14] == '\x03') {
      cVar1 = (char)param_1[0x13];
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
    iVar2 = *param_1;
    piVar3 = (int *)(iVar2 + 0xa4);
    do {
      iVar4 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      FUN_0163b708(iVar2 + 0x88);
    }
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00784894(*param_1);
    }
    piVar3 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar2 + -1;
  }
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(param_1[2]);
    return;
  }
  return;
}

