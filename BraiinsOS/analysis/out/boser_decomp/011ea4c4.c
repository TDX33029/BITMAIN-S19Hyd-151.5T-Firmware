// FUN_011ea4c4 @ 011ea4c4 size=192 calls_out=5 calls_in=2
// strings: 

void FUN_011ea4c4(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 0) {
    if ((char)param_1[0x1d] == '\0') {
      FUN_007372d8(param_1 + 2);
      param_1 = param_1 + 6;
      piVar2 = (int *)*param_1;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
    }
    else {
      if ((char)param_1[0x1d] != '\x03') {
        return;
      }
      FUN_019bb7e0(param_1[0x1a],param_1[0x1b]);
      FUN_011ea478(param_1 + 10);
      param_1 = param_1 + 8;
      piVar2 = (int *)*param_1;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
    }
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*param_1,param_1[1]);
      return;
    }
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  if (param_1[2] == 0 && param_1[3] == 0) {
    return;
  }
  FUN_00b91e68(param_1[4],param_1[5]);
  return;
}

