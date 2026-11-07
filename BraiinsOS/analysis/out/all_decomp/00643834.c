// FUN_00643834 @ 00643834 size=232 calls_out=2 calls_in=4
// strings: 

void FUN_00643834(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)((int)param_1 + 0x2d) != '\x03') {
    return;
  }
  if (*(char *)((int)param_1 + 0x15) == '\x03') {
    if (*param_1 != 0) {
      FUN_006f5fbc(*param_1,param_1[1],1);
    }
    piVar2 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790c08(param_1[2]);
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else if (*(char *)((int)param_1 + 0x15) == '\0') {
    piVar2 = (int *)param_1[4];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790c08(param_1[4]);
    }
  }
  piVar2 = (int *)param_1[8];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790c08(param_1[8]);
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  return;
}

