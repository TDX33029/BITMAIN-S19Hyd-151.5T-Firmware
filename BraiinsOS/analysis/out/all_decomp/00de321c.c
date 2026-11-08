// FUN_00de321c @ 00de321c size=240 calls_out=5 calls_in=1
// strings: 

void FUN_00de321c(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)((int)param_1 + 10);
  if (cVar1 == '\0') {
    param_1 = param_1 + 1;
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
  }
  else {
    if (cVar1 == '\x03') {
      if (param_1[8] != 0) {
        FUN_00e44660(param_1[8],param_1[9],1);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_00de33b8(param_1 + 4);
    }
    *(undefined1 *)((int)param_1 + 9) = 0;
    if (*(char *)(param_1 + 2) != '\0') {
      FUN_00d66ffc(param_1 + 3);
      piVar3 = (int *)param_1[6];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078d010(param_1[6]);
      }
    }
    piVar3 = (int *)*param_1;
    *(undefined1 *)(param_1 + 2) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
  }
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078f324(*param_1);
    return;
  }
  return;
}

