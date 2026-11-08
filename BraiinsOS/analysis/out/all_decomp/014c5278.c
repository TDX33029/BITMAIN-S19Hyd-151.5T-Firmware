// FUN_014c5278 @ 014c5278 size=200 calls_out=4 calls_in=4
// strings: 

void FUN_014c5278(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x9a) == '\0') {
    piVar2 = *(int **)(param_1 + 0x18);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143daec(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0x9a) != '\x03') {
    return;
  }
  FUN_005e6cdc(param_1);
  if (*(int *)(param_1 + 0xc) != -1) {
    FUN_016dffb2();
  }
  FUN_00f02ff8(param_1);
  *(undefined1 *)(param_1 + 0x99) = 0;
  if (*(char *)(param_1 + 0x98) != '\0') {
    piVar2 = *(int **)(param_1 + 0x10);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143daec(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
      *(undefined1 *)(param_1 + 0x98) = 0;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x98) = 0;
  return;
}

