// FUN_00f2cc2c @ 00f2cc2c size=268 calls_out=8 calls_in=1
// strings: 

void FUN_00f2cc2c(int *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  if (*param_1 == 0) {
    if ((char)param_1[0x1bf] != '\0') {
      if ((char)param_1[0x1bf] == '\x03') {
        FUN_00f2c8a0(param_1 + 0x14);
        FUN_00d35b58(param_1 + 2);
        thunk_FUN_01be4678(param_1[0x1bd]);
        return;
      }
      return;
    }
    FUN_00d35b58(param_1 + 2);
    FUN_00d36398(param_1[0x1bd]);
    if (param_1[0x1ba] != -0x80000000) {
      FUN_006a41c0();
    }
    piVar1 = (int *)param_1[0x1be];
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar1 + 2) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar1;
      bVar3 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar3);
    *piVar1 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[0x1be]);
    }
    piVar1 = (int *)param_1[0xe];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar1;
      bVar3 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar3);
    *piVar1 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0121cce0(param_1[0xe]);
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

