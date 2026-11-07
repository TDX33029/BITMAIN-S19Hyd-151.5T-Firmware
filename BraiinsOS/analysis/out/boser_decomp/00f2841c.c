// FUN_00f2841c @ 00f2841c size=236 calls_out=4 calls_in=3
// strings: 

void FUN_00f2841c(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)((int)param_1 + 9);
  if (cVar1 == '\0') {
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011772ac(*param_1);
    }
  }
  else {
    if (cVar1 == '\x03') {
      FUN_01431b40(param_1 + 4);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_01139b38(param_1[3],param_1[4]);
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
      FUN_011772ac(*param_1);
    }
    if (*(char *)(param_1 + 2) == '\0') {
      return;
    }
  }
  piVar3 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  *(undefined1 *)(piVar3 + 2) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[1]);
    return;
  }
  return;
}

