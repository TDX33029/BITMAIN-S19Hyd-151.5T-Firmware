// FUN_01196924 @ 01196924 size=364 calls_out=7 calls_in=0
// strings: 

void FUN_01196924(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if ((char)param_1[0x68] == '\0') {
    piVar2 = (int *)param_1[10];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(param_1[10],param_1[0xb]);
    }
    piVar2 = (int *)param_1[0x32];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[0x32]);
    }
    if (param_1[0xc] != 0) {
      FUN_01aae24c();
    }
  }
  else {
    if ((char)param_1[0x68] != '\x03') {
      return;
    }
    cVar1 = (char)param_1[0x67];
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = (char)param_1[0x58];
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_01139b38(param_1[0x59],param_1[0x5a]);
    }
    FUN_00a27c50(param_1 + 0x10);
    FUN_019bb7e0(param_1[0x3f],param_1[0x40]);
    if (param_1[0x3c] != -0x80000000) {
      FUN_019bb7e0(param_1[0x3c],param_1[0x3d]);
    }
    piVar2 = (int *)param_1[10];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(param_1[10],param_1[0xb]);
    }
    piVar2 = (int *)param_1[0x32];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[0x32]);
    }
    if (param_1[0xc] != 0) {
      FUN_01aae24c();
    }
  }
  if (*param_1 - 1U < 2) {
    return;
  }
  FUN_00f58dd0(param_1 + 1);
  return;
}

