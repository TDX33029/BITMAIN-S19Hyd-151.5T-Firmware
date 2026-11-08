// FUN_00a9b298 @ 00a9b298 size=324 calls_out=6 calls_in=2
// strings: 

void FUN_00a9b298(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  cVar1 = (char)param_1[6];
  if (cVar1 != '\0') {
    if (cVar1 == '\x03') {
      if (((char)param_1[10] == '\x03') && (param_1[8] != 0)) {
        FUN_00aa190c(param_1[8],param_1[9],1);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_00a9b4b4(param_1 + 0x92);
      *(undefined1 *)((int)param_1 + 0x19) = 0;
      if (param_1[8] != 3) {
        FUN_00b510e8();
      }
      FUN_00aa13c0(param_1[5]);
    }
    iVar3 = param_1[3];
    piVar4 = (int *)(iVar3 + 0x44);
    do {
      iVar5 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      FUN_00a8cda4(iVar3 + 8);
    }
    piVar4 = (int *)param_1[3];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa79bc(param_1[3]);
    }
    *(undefined1 *)((int)param_1 + 0x1a) = 0;
    return;
  }
  iVar3 = *param_1;
  piVar4 = (int *)(iVar3 + 0x44);
  do {
    iVar5 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    FUN_00a8cda4(iVar3 + 8);
  }
  piVar4 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aa79bc(*param_1);
    return;
  }
  return;
}

