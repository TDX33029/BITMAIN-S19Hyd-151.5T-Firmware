// FUN_00a62068 @ 00a62068 size=236 calls_out=6 calls_in=2
// strings: 

void FUN_00a62068(int *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  if (*param_1 == 0) {
    piVar5 = param_1 + 2;
    cVar1 = (char)param_1[7];
    if (cVar1 == '\0') {
      piVar3 = (int *)*piVar5;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
    }
    else {
      if (cVar1 == '\x03') {
        if ((char)param_1[0x11] == '\x03') {
          FUN_019ede44(param_1 + 9);
        }
      }
      else {
        if (cVar1 != '\x04') {
          return;
        }
        FUN_00a6183c(param_1 + 0x10);
        FUN_009d4300(param_1 + 8);
      }
      if (param_1[4] != 0) {
        FUN_0084ec48();
      }
      piVar5 = param_1 + 3;
      piVar3 = (int *)*piVar5;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
    }
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a97528(*piVar5);
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

