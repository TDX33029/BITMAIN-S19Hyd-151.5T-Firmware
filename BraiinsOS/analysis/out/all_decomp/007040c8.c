// FUN_007040c8 @ 007040c8 size=168 calls_out=2 calls_in=2
// strings: 

void FUN_007040c8(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)((int)param_1 + 0x15) != '\0') {
    if (*(char *)((int)param_1 + 0x15) != '\x03') {
      return;
    }
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
      FUN_00791880(param_1[2]);
    }
    *(undefined1 *)(param_1 + 5) = 0;
    return;
  }
  piVar2 = (int *)param_1[4];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00791880(param_1[4]);
    return;
  }
  return;
}

