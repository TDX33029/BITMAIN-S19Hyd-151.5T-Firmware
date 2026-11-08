// FUN_00f29b30 @ 00f29b30 size=184 calls_out=4 calls_in=2
// strings: 

void FUN_00f29b30(int *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  if (*param_1 == 0) {
    if ((char)param_1[0x75] == '\0') {
      FUN_00f80320(param_1[10],param_1[0xb]);
      piVar1 = (int *)param_1[0x6c];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar1;
        bVar3 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar3);
      *piVar1 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01182080(param_1[0x6c]);
      }
      FUN_006763fc(param_1 + 0x6d);
      return;
    }
    if ((char)param_1[0x75] == '\x03') {
      FUN_00f26938(param_1 + 0xc);
      *(undefined4 *)((int)param_1 + 0x1d5) = 0;
      *(undefined2 *)((int)param_1 + 0x1d9) = 0;
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

