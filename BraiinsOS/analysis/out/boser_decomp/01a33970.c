// FUN_01a33970 @ 01a33970 size=228 calls_out=3 calls_in=0
// strings: 

void FUN_01a33970(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if ((char)param_1[0x17] == '\0') {
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
  }
  else {
    if ((char)param_1[0x17] != '\x03') {
      return;
    }
    cVar1 = (char)param_1[0x16];
    bVar5 = cVar1 == '\x03';
    if (bVar5) {
      cVar1 = (char)param_1[0x15];
    }
    if (bVar5 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0xd);
    }
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
  }
  if (iVar3 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar3 = *param_1;
  FUN_01a30ca4(iVar3 + 0x20);
  if (iVar3 == -1) {
    return;
  }
  piVar2 = (int *)(iVar3 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(iVar3);
    return;
  }
  return;
}

