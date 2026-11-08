// FUN_01771e8c @ 01771e8c size=204 calls_out=6 calls_in=2
// strings: 

void FUN_01771e8c(int *param_1)

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
    if ((char)param_1[6] == '\x03') {
      return;
    }
    iVar2 = param_1[2];
    if (iVar2 != 0) {
      FUN_01771f3c(iVar2);
      FUN_01771fbc(iVar2 + 0x10);
      thunk_FUN_01be4678(iVar2);
    }
    FUN_017720fc(param_1 + 4);
    piVar1 = (int *)param_1[3];
    if (piVar1 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar1;
      bVar3 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar3);
    *piVar1 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01436864(param_1[3]);
      return;
    }
    return;
  }
  return;
}

