// FUN_00de1d78 @ 00de1d78 size=176 calls_out=4 calls_in=3
// strings: 

void FUN_00de1d78(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  FUN_00ef67d0();
  if (*param_1 == 0) {
    piVar4 = (int *)param_1[1];
    piVar2 = piVar4 + 0x12;
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      FUN_00e473d0(piVar4 + 2);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aacf14(param_1[1]);
    }
  }
  piVar2 = (int *)param_1[2];
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
    FUN_00e453f4(param_1[2]);
    return;
  }
  return;
}

