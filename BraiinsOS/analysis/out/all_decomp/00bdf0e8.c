// FUN_00bdf0e8 @ 00bdf0e8 size=176 calls_out=5 calls_in=0
// strings: 

void FUN_00bdf0e8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x7cc) == '\0') {
    piVar2 = *(int **)(param_1 + 0x7c8);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00d06854(*(undefined4 *)(param_1 + 0x7c8));
    }
    FUN_005e6cdc(param_1);
    if (*(int *)(param_1 + 0xc) != -1) {
      FUN_016dffb2();
    }
    FUN_00a414e8(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x7cc) != '\x03') {
    return;
  }
  FUN_00be3d4c(param_1 + 0x10);
  piVar2 = *(int **)(param_1 + 0x7c8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d06854(*(undefined4 *)(param_1 + 0x7c8));
    return;
  }
  return;
}

