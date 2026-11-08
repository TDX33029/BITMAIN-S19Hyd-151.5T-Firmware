// FUN_00d38600 @ 00d38600 size=284 calls_out=5 calls_in=2
// strings: 

void FUN_00d38600(int *param_1)

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
    cVar1 = *(char *)((int)param_1 + 0x11);
    if (cVar1 == '\0') {
      piVar2 = (int *)param_1[2];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_011772ac(param_1[2]);
      }
    }
    else {
      if (cVar1 == '\x03') {
        FUN_01431b40(param_1 + 6);
      }
      else {
        if (cVar1 != '\x04') {
          return;
        }
        FUN_01139b38(param_1[5],param_1[6]);
      }
      piVar2 = (int *)param_1[2];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_011772ac(param_1[2]);
      }
      if ((char)param_1[4] == '\0') {
        return;
      }
    }
    piVar2 = (int *)param_1[3];
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
      FUN_01a38efc(param_1[3]);
      return;
    }
    return;
  }
  return;
}

