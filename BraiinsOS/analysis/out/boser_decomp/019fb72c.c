// FUN_019fb72c @ 019fb72c size=296 calls_out=5 calls_in=2
// strings: 

void FUN_019fb72c(int *param_1)

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
    cVar1 = (char)param_1[0xc];
    if (cVar1 == '\x04') {
      cVar1 = (char)param_1[0x1d];
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = (char)param_1[0x1c];
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x14);
      }
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
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
          FUN_01a39294(param_1[10]);
        }
        FUN_0193d87c(param_1 + 2);
        return;
      }
      if ((char)param_1[0x15] == '\x03') {
        FUN_01a17e08(param_1 + 0xf);
        if (param_1[0x10] != 0) {
          (**(code **)(param_1[0x10] + 0xc))(param_1[0x11]);
        }
      }
    }
    FUN_0193d87c(param_1 + 6);
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
      return;
    }
    return;
  }
  return;
}

