// FUN_007aee4c @ 007aee4c size=244 calls_out=5 calls_in=1
// strings: 

void FUN_007aee4c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x674) != '\0') {
    if (*(char *)(param_1 + 0x674) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x668) == '\0') {
      piVar2 = *(int **)(param_1 + 0x664);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00784894(*(undefined4 *)(param_1 + 0x664));
      }
    }
    else if (*(char *)(param_1 + 0x668) == '\x03') {
      FUN_007b0d8c(param_1 + 0x20);
    }
    FUN_005e6cdc(param_1 + 0x10);
    if (*(int *)(param_1 + 0x1c) != -1) {
      FUN_016dffb2();
    }
    FUN_00a414e8(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x675) = 0;
    return;
  }
  FUN_005e6cdc(param_1);
  if (*(int *)(param_1 + 0xc) != -1) {
    FUN_016dffb2();
  }
  FUN_00a414e8(param_1);
  piVar2 = *(int **)(param_1 + 0x670);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x670));
    return;
  }
  return;
}

