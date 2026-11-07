// FUN_00de0e9c @ 00de0e9c size=256 calls_out=4 calls_in=0
// strings: 

void FUN_00de0e9c(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0x138);
  if (cVar1 == '\0') {
    piVar3 = *(int **)(param_1 + 0x134);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0117fe74(*(undefined4 *)(param_1 + 0x134));
    }
    FUN_005f9b88(param_1);
    piVar3 = *(int **)(param_1 + 0x130);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
  }
  else {
    if (cVar1 == '\x03') {
      FUN_00fe4378(*(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x144));
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_00fe4378(*(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x144));
    }
    piVar3 = *(int **)(param_1 + 0x134);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0117fe74(*(undefined4 *)(param_1 + 0x134));
    }
    piVar3 = *(int **)(param_1 + 0x130);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
  }
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a939e0(*(undefined4 *)(param_1 + 0x130));
    return;
  }
  return;
}

