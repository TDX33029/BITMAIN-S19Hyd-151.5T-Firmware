// FUN_011ea21c @ 011ea21c size=200 calls_out=5 calls_in=2
// strings: 

void FUN_011ea21c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (*param_1 == 0) {
    piVar4 = param_1 + 2;
    if ((char)param_1[0x17] == '\0') {
      FUN_00b21e9c(param_1[0x15],param_1[0x16]);
      FUN_0132b958(param_1[0x14],param_1[0x15],4,0xc);
      piVar2 = (int *)*piVar4;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
    }
    else {
      if ((char)param_1[0x17] != '\x03') {
        return;
      }
      FUN_011ea0f0(param_1 + 6);
      piVar4 = param_1 + 4;
      piVar2 = (int *)*piVar4;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
    }
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*piVar4,piVar4[1]);
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

