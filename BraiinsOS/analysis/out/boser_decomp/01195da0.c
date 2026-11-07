// FUN_01195da0 @ 01195da0 size=360 calls_out=6 calls_in=0
// strings: 

void FUN_01195da0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if ((char)param_1[0x62] == '\0') {
    piVar2 = (int *)param_1[4];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(param_1[4],param_1[5]);
    }
    piVar2 = (int *)param_1[0x2c];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[0x2c]);
    }
    if (param_1[6] != 0) {
      FUN_01aae24c();
    }
  }
  else {
    if ((char)param_1[0x62] != '\x03') {
      return;
    }
    cVar1 = (char)param_1[0x61];
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = (char)param_1[0x52];
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_01139b38(param_1[0x53],param_1[0x54]);
    }
    FUN_00a27c50(param_1 + 10);
    FUN_019bb7e0(param_1[0x39],param_1[0x3a]);
    if (param_1[0x36] != -0x80000000) {
      FUN_019bb7e0(param_1[0x36],param_1[0x37]);
    }
    piVar2 = (int *)param_1[4];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(param_1[4],param_1[5]);
    }
    piVar2 = (int *)param_1[0x2c];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[0x2c]);
    }
    if (param_1[6] != 0) {
      FUN_01aae24c();
    }
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_019bb7e0(param_1[1],param_1[2]);
  return;
}

