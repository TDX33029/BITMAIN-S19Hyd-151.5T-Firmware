// FUN_00f2ecd8 @ 00f2ecd8 size=224 calls_out=5 calls_in=3
// strings: 

void FUN_00f2ecd8(int *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  if (*param_1 == 0) {
    cVar1 = (char)param_1[0xf];
    if (cVar1 == '\0') {
      piVar3 = (int *)param_1[0xe];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
    }
    else {
      if (cVar1 == '\x03') {
        FUN_019ede44(param_1 + 0x10);
      }
      else {
        if (cVar1 != '\x04') {
          return;
        }
        if ((char)param_1[0x65] == '\x03') {
          FUN_00f2db7c(param_1 + 0x10);
        }
      }
      piVar3 = (int *)param_1[0xe];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
    }
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[0xe]);
    }
    FUN_00d35b58(param_1 + 2);
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  if (param_1[4] == 0) {
    return;
  }
  FUN_00f80320(param_1[4],param_1[5]);
  return;
}

