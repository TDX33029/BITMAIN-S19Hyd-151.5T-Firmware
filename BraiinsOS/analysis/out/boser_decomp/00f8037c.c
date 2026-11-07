// FUN_00f8037c @ 00f8037c size=172 calls_out=3 calls_in=0
// strings: 

void FUN_00f8037c(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 6);
  if (cVar1 == '\0') {
    piVar3 = (int *)param_1[4];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182b58(param_1[4]);
    }
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_01139b38(param_1[7],param_1[8]);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_01139b38(param_1[10],param_1[0xb]);
  }
  piVar3 = (int *)param_1[5];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182b58(param_1[5]);
    return;
  }
  return;
}

