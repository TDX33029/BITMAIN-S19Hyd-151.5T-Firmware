// FUN_007d9eb8 @ 007d9eb8 size=356 calls_out=4 calls_in=0
// strings: 

void FUN_007d9eb8(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)((int)param_1 + 0x66) != '\0') {
    if (*(char *)((int)param_1 + 0x66) != '\x03') {
      return;
    }
    if ((char)param_1[0x13] == '\x03') {
      FUN_007da17c(param_1 + 4);
      *(undefined1 *)((int)param_1 + 0x4d) = 0;
    }
    else if (((char)param_1[0x13] == '\0') && (*param_1 != 0)) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    piVar2 = (int *)param_1[0x16];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089e240(param_1[0x16]);
    }
    piVar2 = (int *)param_1[0x15];
    *(undefined1 *)(param_1 + 0x19) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(param_1[0x15]);
    }
    piVar2 = (int *)param_1[0x14];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089e240(param_1[0x14]);
    }
    *(undefined1 *)((int)param_1 + 0x65) = 0;
    return;
  }
  piVar2 = (int *)param_1[0x17];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089e240(param_1[0x17]);
  }
  piVar2 = (int *)param_1[0x18];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(param_1[0x18]);
    return;
  }
  return;
}

