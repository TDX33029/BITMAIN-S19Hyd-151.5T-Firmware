// FUN_00f2d41c @ 00f2d41c size=376 calls_out=8 calls_in=2
// strings: 

void FUN_00f2d41c(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*param_1 == 0) {
    cVar1 = (char)param_1[0x18];
    if (cVar1 == '\0') {
      piVar2 = (int *)param_1[0x16];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38efc(param_1[0x16]);
      }
      FUN_00f2c444(param_1 + 2);
      piVar2 = (int *)param_1[0x17];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_011772ac(param_1[0x17]);
      }
    }
    else {
      if (cVar1 == '\x03') {
        if ((char)param_1[0x24] == '\x03') {
          FUN_0193c3cc(param_1 + 0x1c);
        }
      }
      else {
        if (cVar1 != '\x04') {
          return;
        }
        if ((char)param_1[0x4e] == '\x03') {
          FUN_00f2cf40(param_1 + 0x1e);
        }
        FUN_019f8c54(param_1[0x1b],param_1[0x1c]);
      }
      piVar2 = (int *)param_1[0x16];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38efc(param_1[0x16]);
      }
      FUN_00f2c444(param_1 + 2);
      piVar2 = (int *)param_1[0x17];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_011772ac(param_1[0x17]);
      }
    }
    FUN_00f29fc8(param_1 + 8);
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  iVar3 = param_1[2];
  bVar4 = iVar3 == 0 && param_1[3] == 0;
  if (iVar3 != 0 || param_1[3] != 0) {
    iVar3 = param_1[4];
    bVar4 = iVar3 == 0;
  }
  if (bVar4) {
    return;
  }
  FUN_00f80320(iVar3,param_1[5]);
  return;
}

