// FUN_019fd8f8 @ 019fd8f8 size=324 calls_out=6 calls_in=2
// strings: 

void FUN_019fd8f8(int *param_1)

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
    cVar1 = *(char *)((int)param_1 + 0x32);
    if (cVar1 == '\x04') {
      cVar1 = (char)param_1[0x25];
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = (char)param_1[0x24];
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x1c);
      }
      piVar2 = (int *)param_1[0xe];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38404(param_1[0xe]);
      }
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        piVar2 = (int *)param_1[0xb];
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar4 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar4);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a39294(param_1[0xb]);
        }
        FUN_019fb37c(param_1 + 6);
        return;
      }
      FUN_019faf5c(param_1 + 0xe);
    }
    *(undefined1 *)((int)param_1 + 0x31) = 0;
    FUN_019fb37c(param_1 + 2);
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

