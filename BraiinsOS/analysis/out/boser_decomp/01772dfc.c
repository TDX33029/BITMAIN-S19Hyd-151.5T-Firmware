// FUN_01772dfc @ 01772dfc size=204 calls_out=5 calls_in=13
// strings: 

void FUN_01772dfc(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *unaff_r4;
  
  FUN_017c3554();
  iVar2 = param_1[1];
  piVar3 = (int *)param_1[2];
  if (*param_1 != 0) {
    if (iVar2 != 0) {
      unaff_r4 = piVar3;
    }
    if (iVar2 != 0 && piVar3 != (int *)0x0) {
      FUN_0143c0bc(unaff_r4 + 2);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *unaff_r4;
        bVar1 = (bool)hasExclusiveAccess(unaff_r4);
      } while (!bVar1);
      *unaff_r4 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01436c0c(unaff_r4);
        return;
      }
      return;
    }
    return;
  }
  if (iVar2 != 0) {
    unaff_r4 = piVar3;
  }
  if (iVar2 == 0 || piVar3 == (int *)0x0) {
    return;
  }
  FUN_01712764(unaff_r4 + 2);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *unaff_r4;
    bVar1 = (bool)hasExclusiveAccess(unaff_r4);
  } while (!bVar1);
  *unaff_r4 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_017850a0(unaff_r4);
    return;
  }
  return;
}

