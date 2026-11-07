// FUN_019fbf3c @ 019fbf3c size=228 calls_out=5 calls_in=2
// strings: 

void FUN_019fbf3c(int *param_1)

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
    cVar1 = (char)param_1[0xf];
    if (cVar1 == '\0') {
      piVar2 = (int *)param_1[3];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
    }
    else {
      if (cVar1 == '\x03') {
        cVar1 = (char)param_1[0x1b];
        bVar4 = cVar1 == '\x03';
        if (bVar4) {
          cVar1 = (char)param_1[0x1a];
        }
        if (bVar4 && cVar1 == '\x03') {
          FUN_0193c3cc(param_1 + 0x12);
        }
      }
      else {
        if (cVar1 != '\x04') {
          return;
        }
        FUN_01139b38(param_1[0x10],param_1[0x11]);
        FUN_019f8c54(param_1[0xc],param_1[0xd]);
      }
      piVar2 = (int *)param_1[3];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
    }
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(param_1[3]);
      return;
    }
    return;
  }
  return;
}

