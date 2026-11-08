// FUN_017c34d8 @ 017c34d8 size=140 calls_out=3 calls_in=5
// strings: 

void FUN_017c34d8(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *unaff_r4;
  
  FUN_017c3554();
  iVar3 = param_1[1];
  if (*param_1 != 0) {
    if (iVar3 == 0) {
      return;
    }
    piVar2 = (int *)param_1[2];
    if (piVar2 == (int *)0x0) {
      return;
    }
    FUN_0143c0bc(piVar2 + 2);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01436c0c(piVar2);
      return;
    }
    return;
  }
  if (iVar3 != 0) {
    unaff_r4 = (int *)param_1[2];
  }
  if (iVar3 == 0 || (int *)param_1[2] == (int *)0x0) {
    return;
  }
  FUN_01712764(unaff_r4 + 2);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *unaff_r4;
    bVar1 = (bool)hasExclusiveAccess(unaff_r4);
  } while (!bVar1);
  *unaff_r4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_017850a0(unaff_r4);
    return;
  }
  return;
}

