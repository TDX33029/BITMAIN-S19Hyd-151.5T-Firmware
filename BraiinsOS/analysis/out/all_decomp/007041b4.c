// FUN_007041b4 @ 007041b4 size=304 calls_out=6 calls_in=2
// strings: 

void FUN_007041b4(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)((int)param_1 + 0x16)) {
  case 0:
    piVar2 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00791350(param_1[2]);
    }
    piVar2 = (int *)param_1[3];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aaaeec(param_1[3]);
      return;
    }
  default:
    return;
  case 3:
    FUN_007040c8(param_1 + 6);
    break;
  case 4:
    if (param_1[6] != 0) {
      FUN_006f5fbc(param_1[6],param_1[7],1);
    }
    break;
  case 5:
    FUN_00a07b4c(param_1 + 6);
  }
  if (*(char *)(param_1 + 5) != '\0') {
    piVar2 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00791880(param_1[1]);
    }
  }
  piVar2 = (int *)*param_1;
  *(undefined2 *)(param_1 + 5) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00791350(*param_1);
    return;
  }
  return;
}

