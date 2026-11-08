// FUN_00f2df08 @ 00f2df08 size=324 calls_out=5 calls_in=2
// strings: 

void FUN_00f2df08(int *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  if (*param_1 == 0) {
    if ((char)param_1[0x12] == '\0') {
      piVar1 = (int *)param_1[0xe];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar1;
        bVar3 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar3);
      *piVar1 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01181abc(param_1[0xe]);
      }
      piVar1 = (int *)param_1[0xf];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar1;
        bVar3 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar3);
      *piVar1 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01182478(param_1[0xf]);
        return;
      }
    }
    else if ((char)param_1[0x12] == '\x03') {
      if ((char)param_1[0xd] == '\x03') {
        FUN_009cdcac(param_1 + 7);
      }
      FUN_00d35adc(param_1 + 2);
      piVar1 = (int *)param_1[0x11];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar1;
        bVar3 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar3);
      *piVar1 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01182478(param_1[0x11]);
      }
      piVar1 = (int *)param_1[0x10];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar1;
        bVar3 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar3);
      *piVar1 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01181abc(param_1[0x10]);
        return;
      }
      return;
    }
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  iVar2 = param_1[2];
  bVar3 = iVar2 == 0 && param_1[3] == 0;
  if (iVar2 != 0 || param_1[3] != 0) {
    iVar2 = param_1[4];
    bVar3 = iVar2 == 0;
  }
  if (bVar3) {
    return;
  }
  FUN_00f80320(iVar2,param_1[5]);
  return;
}

