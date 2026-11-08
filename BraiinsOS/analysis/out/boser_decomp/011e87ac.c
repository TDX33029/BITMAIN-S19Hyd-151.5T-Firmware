// FUN_011e87ac @ 011e87ac size=212 calls_out=5 calls_in=2
// strings: 

void FUN_011e87ac(int *param_1)

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
    if ((char)param_1[0x1d] == '\0') {
      FUN_007372d8(param_1 + 2);
      param_1 = param_1 + 6;
      piVar1 = (int *)*param_1;
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar1;
        bVar3 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar3);
      *piVar1 = iVar2 + -1;
    }
    else {
      if ((char)param_1[0x1d] != '\x03') {
        return;
      }
      FUN_019bb7e0(param_1[0x1a],param_1[0x1b]);
      FUN_007372d8(param_1 + 0xe);
      if (param_1[0x13] != 0) {
        thunk_FUN_01be4678(param_1[0x12]);
      }
      param_1 = param_1 + 8;
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
      FUN_018531c0(*param_1,param_1[1]);
      return;
    }
    return;
  }
  return;
}

