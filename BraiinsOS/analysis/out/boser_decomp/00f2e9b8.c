// FUN_00f2e9b8 @ 00f2e9b8 size=216 calls_out=4 calls_in=3
// strings: 

void FUN_00f2e9b8(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  if (*param_1 == 0) {
    piVar3 = param_1 + 2;
    cVar1 = *(char *)((int)param_1 + 0xd);
    if (cVar1 == '\0') {
      piVar2 = (int *)*piVar3;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar5 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar5);
      *piVar2 = iVar4 + -1;
    }
    else {
      if (cVar1 == '\x03') {
        FUN_00bba254(param_1 + 4);
      }
      else {
        if (cVar1 != '\x04') {
          return;
        }
        FUN_00f2e1dc(param_1 + 4);
      }
      piVar2 = (int *)*piVar3;
      *(undefined1 *)(param_1 + 3) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar5 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar5);
      *piVar2 = iVar4 + -1;
    }
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01180ffc(*piVar3);
      return;
    }
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  iVar4 = param_1[2];
  bVar5 = iVar4 == 0 && param_1[3] == 0;
  if (iVar4 != 0 || param_1[3] != 0) {
    iVar4 = param_1[4];
    bVar5 = iVar4 == 0;
  }
  if (bVar5) {
    return;
  }
  FUN_00f80320(iVar4,param_1[5]);
  return;
}

