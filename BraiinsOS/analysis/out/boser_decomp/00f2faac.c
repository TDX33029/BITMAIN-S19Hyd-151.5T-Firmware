// FUN_00f2faac @ 00f2faac size=276 calls_out=8 calls_in=3
// strings: 

void FUN_00f2faac(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*param_1 == 0) {
    cVar1 = *(char *)((int)param_1 + 0x55);
    if (cVar1 == '\0') {
      FUN_005faf6c(param_1 + 0x12);
      piVar2 = (int *)param_1[0x13];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01177340(param_1[0x13]);
      }
    }
    else {
      if (cVar1 == '\x03') {
        FUN_019ede44(param_1 + 0x1c);
      }
      else {
        if (cVar1 != '\x04') {
          return;
        }
        if ((char)param_1[0x189] == '\x03') {
          FUN_00c0a5d8(param_1 + 0x16);
        }
      }
      FUN_00d35a90(param_1 + 8);
      FUN_00668c84(param_1[6]);
      FUN_005faf6c(param_1 + 0x12);
      piVar2 = (int *)param_1[0x13];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01177340(param_1[0x13]);
      }
    }
    FUN_00d35784(param_1 + 0x14);
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

