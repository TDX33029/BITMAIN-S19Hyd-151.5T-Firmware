// FUN_00741cf8 @ 00741cf8 size=352 calls_out=5 calls_in=3
// strings: 

void FUN_00741cf8(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  if (*param_1 == 0) {
    piVar3 = param_1 + 2;
    cVar1 = (char)param_1[5];
    if (cVar1 == '\0') {
      piVar2 = (int *)*piVar3;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar5 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar5);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38efc(*piVar3);
      }
      piVar3 = (int *)param_1[3];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
    }
    else {
      if (cVar1 == '\x03') {
        if ((char)param_1[0x14] == '\x03') {
          cVar1 = (char)param_1[0x13];
          bVar5 = cVar1 == '\x03';
          if (bVar5) {
            cVar1 = (char)param_1[10];
          }
          if (bVar5 && cVar1 == '\x04') {
            FUN_0193c3cc(param_1 + 0xb);
          }
        }
      }
      else {
        if (cVar1 != '\x04') {
          return;
        }
        if ((char)param_1[0xac] == '\x03') {
          FUN_00741b30(param_1 + 0xc);
        }
        FUN_019f8c54(param_1[4],1);
      }
      piVar2 = (int *)*piVar3;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar5 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar5);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38efc(*piVar3);
      }
      piVar3 = (int *)param_1[3];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
    }
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[3]);
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

