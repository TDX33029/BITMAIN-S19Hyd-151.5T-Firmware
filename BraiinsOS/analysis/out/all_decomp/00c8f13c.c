// FUN_00c8f13c @ 00c8f13c size=468 calls_out=5 calls_in=2
// strings: 

void FUN_00c8f13c(int *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  if ((char)param_1[0xb] == '\x03') {
    if ((char)param_1[0x20] == '\x03') {
      iVar4 = 0x81;
      FUN_00c865f8(param_1 + 0x11);
      goto LAB_00c8f1e4;
    }
    if (((char)param_1[0x20] == '\0') && (param_1[0xd] != 0)) {
      thunk_FUN_016d3fb4(param_1[0xe]);
    }
  }
  else {
    if ((char)param_1[0xb] != '\x04') {
      return;
    }
    if ((char)param_1[0x1f] == '\x03') {
      iVar4 = 0x7d;
      FUN_00c865f8(param_1 + 0x10);
LAB_00c8f1e4:
      *(undefined1 *)((int)param_1 + iVar4) = 0;
      cVar1 = *(char *)((int)param_1 + 0x29);
      goto joined_r0x00c8f1c0;
    }
    if (((char)param_1[0x1f] == '\0') && (param_1[0xc] != 0)) {
      thunk_FUN_016d3fb4(param_1[0xd]);
      cVar1 = *(char *)((int)param_1 + 0x29);
      goto joined_r0x00c8f1c0;
    }
  }
  cVar1 = *(char *)((int)param_1 + 0x29);
joined_r0x00c8f1c0:
  if (cVar1 != '\0') {
    piVar3 = (int *)param_1[0xc];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00d0668c(param_1[0xc]);
    }
  }
  piVar3 = (int *)param_1[8];
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d0668c(param_1[8]);
  }
  piVar3 = (int *)*param_1;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x2a) = 0;
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(*param_1,param_1[1]);
    }
  }
  piVar3 = (int *)param_1[4];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(param_1[4]);
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
  *(undefined1 *)((int)param_1 + 0x2b) = 0;
  return;
}

