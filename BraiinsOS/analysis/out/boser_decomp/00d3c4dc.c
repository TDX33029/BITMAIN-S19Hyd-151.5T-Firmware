// FUN_00d3c4dc @ 00d3c4dc size=772 calls_out=14 calls_in=2
// strings: 

void FUN_00d3c4dc(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*param_1 == 1) {
    iVar3 = 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      iVar3 = param_1[4];
    }
    if ((param_1[2] != 0 || param_1[3] != 0) && iVar3 != 0) {
      FUN_01443048(iVar3,param_1[5]);
      return;
    }
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  if ((char)param_1[0x1bf] != '\x03') {
    if ((char)param_1[0x1bf] != '\0') {
      return;
    }
    FUN_00d35b58(param_1 + 2);
    FUN_00d36398(param_1[0x1bd]);
    if (param_1[0x1ba] != -0x80000000) {
      FUN_006a41c0();
    }
    piVar2 = (int *)param_1[0x1be];
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar2 + 2) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[0x1be]);
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
      FUN_0121cce0(param_1[0xe]);
      return;
    }
    return;
  }
  cVar1 = (char)param_1[0x4c];
  if (cVar1 == '\x04') {
    FUN_01139b38(param_1[0x4d],param_1[0x4e]);
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 == '\0') {
        FUN_005f9800(param_1 + 0x14);
        if (param_1[0x27] != -0x80000000) {
          FUN_006a41c0();
        }
        piVar2 = (int *)param_1[0x31];
        DataMemoryBarrier(0xb);
        *(undefined1 *)(piVar2 + 2) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar4 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar4);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a38efc(param_1[0x31]);
        }
        piVar2 = (int *)param_1[0x2a];
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar4 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar4);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0121cce0(param_1[0x2a]);
        }
      }
      goto LAB_00d3c75c;
    }
    cVar1 = (char)param_1[0x58];
    if (cVar1 == '\x04') {
      FUN_00668c84(param_1[0x60]);
      FUN_00d35d8c(param_1 + 100);
      piVar2 = (int *)param_1[0x5a];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38efc(param_1[0x5a]);
      }
    }
    else {
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = (char)param_1[0x1b9];
      }
      if (bVar4 && cVar1 == '\x03') {
        if (*(char *)((int)param_1 + 0x1bd) == '\x04') {
          if (param_1[0x75] != 0) {
            thunk_FUN_01be4678(param_1[0x74]);
          }
          FUN_005f649c(param_1 + 0x5e);
        }
        else {
          if (*(char *)((int)param_1 + 0x1bd) != '\x03') goto LAB_00d3c6b0;
          FUN_00d35cfc(param_1 + 0x74);
        }
        *(undefined1 *)(param_1 + 0x6f) = 0;
      }
    }
  }
LAB_00d3c6b0:
  piVar2 = (int *)param_1[0x46];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0121cce0(param_1[0x46]);
  }
  if (*(char *)((int)param_1 + 0x131) != '\0') {
    piVar2 = (int *)param_1[0x50];
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar2 + 2) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[0x50]);
    }
  }
  *(undefined1 *)((int)param_1 + 0x131) = 0;
  if ((*(char *)((int)param_1 + 0x132) != '\0') && (param_1[0x4d] != -0x80000000)) {
    FUN_006a41c0();
  }
  *(undefined1 *)((int)param_1 + 0x132) = 0;
  FUN_005f9800(param_1 + 0x33);
LAB_00d3c75c:
  FUN_00d35b58(param_1 + 2);
  thunk_FUN_01be4678(param_1[0x1bd]);
  return;
}

