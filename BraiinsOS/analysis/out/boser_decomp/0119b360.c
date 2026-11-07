// FUN_0119b360 @ 0119b360 size=356 calls_out=6 calls_in=0
// strings: 

void FUN_0119b360(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if ((char)param_1[0x128] == '\0') {
    piVar2 = (int *)param_1[0xca];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(param_1[0xca],param_1[0xcb]);
    }
    piVar2 = (int *)param_1[0xf2];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[0xf2]);
    }
    if (param_1[0xcc] != 0) {
      FUN_01aae24c();
    }
  }
  else {
    if ((char)param_1[0x128] != '\x03') {
      return;
    }
    cVar1 = (char)param_1[0x127];
    bVar5 = cVar1 == '\x03';
    if (bVar5) {
      cVar1 = (char)param_1[0x118];
    }
    if (bVar5 && cVar1 == '\x03') {
      FUN_01139b38(param_1[0x119],param_1[0x11a]);
    }
    FUN_00a27c50(param_1 + 0xd0);
    FUN_019bb7e0(param_1[0xff],param_1[0x100]);
    if (param_1[0xfc] != -0x80000000) {
      FUN_019bb7e0(param_1[0xfc],param_1[0xfd]);
    }
    piVar2 = (int *)param_1[0xca];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(param_1[0xca],param_1[0xcb]);
    }
    piVar2 = (int *)param_1[0xf2];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[0xf2]);
    }
    if (param_1[0xcc] != 0) {
      FUN_01aae24c();
    }
  }
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  iVar3 = param_1[0xc4];
  if (iVar3 != -0x80000000) {
    iVar4 = param_1[0xc5];
    FUN_00b1e0e0(iVar4,param_1[0xc6]);
    FUN_0132b958(iVar3,iVar4,4,0x18);
  }
  if (param_1[0xc] != 3 || param_1[0xd] != 0) {
    FUN_019bb7e0(param_1[0x5a],param_1[0x5b]);
  }
  FUN_00f7ba04(param_1 + 0x60);
  FUN_00a9581c(param_1 + 199);
  return;
}

