// FUN_019fdba8 @ 019fdba8 size=348 calls_out=8 calls_in=2
// strings: 

void FUN_019fdba8(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*param_1 == 1) {
    bVar4 = param_1[2] != 0 || param_1[3] != 0;
    iVar3 = 0;
    if (bVar4) {
      iVar3 = param_1[4];
    }
    if (bVar4 && iVar3 != 0) {
      FUN_01443048(iVar3,param_1[5]);
      return;
    }
  }
  else if (*param_1 == 0) {
    cVar1 = *(char *)((int)param_1 + 0x3a);
    if (cVar1 == '\x04') {
      cVar1 = (char)param_1[0x33];
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = (char)param_1[0x32];
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x2a);
      }
      piVar2 = (int *)param_1[0x10];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38404(param_1[0x10]);
      }
      *(undefined1 *)(param_1 + 0xe) = 0;
      FUN_019fdaec(param_1 + 0x12);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        piVar2 = (int *)param_1[0xc];
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar4 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar4);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a39294(param_1[0xc]);
        }
        FUN_019fcf58(param_1 + 6);
        FUN_0193c71c(param_1 + 0xd);
        return;
      }
      FUN_019faf5c(param_1 + 0x10);
    }
    *(undefined1 *)((int)param_1 + 0x39) = 0;
    FUN_0193c71c(param_1 + 0xb);
    FUN_019fcf58(param_1 + 2);
    piVar2 = (int *)param_1[10];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a39294(param_1[10]);
      return;
    }
    return;
  }
  return;
}

