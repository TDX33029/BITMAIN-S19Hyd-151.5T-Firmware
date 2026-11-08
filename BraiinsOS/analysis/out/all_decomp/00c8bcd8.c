// FUN_00c8bcd8 @ 00c8bcd8 size=344 calls_out=3 calls_in=2
// strings: 

void FUN_00c8bcd8(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 6);
  if (cVar1 != '\0') {
    if (cVar1 == '\x03') {
      FUN_00654988(param_1 + 8);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_00654988(param_1 + 7);
    }
    if (*(char *)((int)param_1 + 0x19) != '\0') {
      piVar3 = (int *)param_1[4];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(param_1[4]);
      }
    }
    *(undefined1 *)((int)param_1 + 0x19) = 0;
    if (*(char *)((int)param_1 + 0x1a) != '\0') {
      piVar3 = (int *)param_1[7];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(param_1[7]);
      }
    }
    *(undefined1 *)((int)param_1 + 0x1a) = 0;
    return;
  }
  piVar3 = (int *)param_1[2];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(param_1[2]);
  }
  piVar3 = (int *)param_1[3];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(param_1[3]);
  }
  piVar3 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0155edc8(*param_1);
    return;
  }
  return;
}

