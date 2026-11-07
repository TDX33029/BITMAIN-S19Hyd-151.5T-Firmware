// FUN_0076b2c0 @ 0076b2c0 size=496 calls_out=6 calls_in=0
// strings: 

void FUN_0076b2c0(int *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  if (*param_1 == 0 && param_1[1] == 0) {
    return;
  }
  cVar1 = (char)param_1[0x88];
  if (cVar1 == '\0') {
    FUN_0075d5b4(param_1 + 0x22);
    FUN_0074b190(param_1 + 2);
    piVar3 = (int *)param_1[0x82];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00795ca8(param_1[0x82],param_1[0x83]);
    }
    piVar3 = (int *)param_1[0x86];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[0x86]);
    }
    piVar3 = (int *)param_1[0x84];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00795ca8(param_1[0x84],param_1[0x85]);
    }
    FUN_0075d5b4(param_1 + 0x52);
    piVar3 = (int *)param_1[0x87];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
  }
  else {
    if (cVar1 == '\x03') {
      FUN_0076b740(param_1 + 0x8a);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_0076b740(param_1 + 0xa8);
      FUN_0076953c(param_1 + 0x8a);
    }
    if (*(char *)((int)param_1 + 0x223) != '\0') {
      FUN_0074b190(param_1 + 2);
    }
    piVar3 = (int *)param_1[0x86];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[0x86]);
    }
    if (*(char *)((int)param_1 + 0x222) != '\0') {
      piVar3 = (int *)param_1[0x84];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00795ca8(param_1[0x84],param_1[0x85]);
      }
    }
    if (*(char *)((int)param_1 + 0x221) != '\0') {
      FUN_0075d5b4(param_1 + 0x52);
    }
    piVar3 = (int *)param_1[0x87];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
  }
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[0x87]);
    return;
  }
  return;
}

