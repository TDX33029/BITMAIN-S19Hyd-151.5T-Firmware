// FUN_0150119c @ 0150119c size=168 calls_out=3 calls_in=1
// strings: 

void FUN_0150119c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == -0x80000000) {
    piVar2 = (int *)param_1[4];
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01670fb0(param_1[4]);
      }
    }
    FUN_015015b0(param_1 + 1);
    return;
  }
  FUN_0074dd34(param_1);
  FUN_015015b0(param_1 + 3);
  piVar2 = (int *)param_1[6];
  if (piVar2 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01670fb0(param_1[6]);
    return;
  }
  return;
}

