// FUN_00d390ac @ 00d390ac size=176 calls_out=3 calls_in=2
// strings: 

void FUN_00d390ac(int *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  if (*param_1 == 1) {
    bVar3 = param_1[2] != 0 || param_1[3] != 0;
    iVar2 = 0;
    if (bVar3) {
      iVar2 = param_1[4];
    }
    if (bVar3 && iVar2 != 0) {
      FUN_01443048(iVar2,param_1[5]);
      return;
    }
  }
  else if (*param_1 == 0) {
    if ((char)param_1[0x18] == '\0') {
      param_1 = param_1 + 0x16;
      piVar1 = (int *)*param_1;
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar1;
        bVar3 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar3);
      *piVar1 = iVar2 + -1;
    }
    else {
      if ((char)param_1[0x18] != '\x03') {
        return;
      }
      FUN_01431b40(param_1 + 2);
      param_1 = param_1 + 0x17;
      piVar1 = (int *)*param_1;
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar1;
        bVar3 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar3);
      *piVar1 = iVar2 + -1;
    }
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0117fe74(*param_1);
      return;
    }
    return;
  }
  return;
}

