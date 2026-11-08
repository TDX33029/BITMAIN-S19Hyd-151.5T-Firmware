// FUN_00de2a30 @ 00de2a30 size=192 calls_out=8 calls_in=1
// strings: 

void FUN_00de2a30(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(char *)(param_1 + 0x1cc) != '\0') {
    if (*(char *)(param_1 + 0x1cc) == '\x03') {
      FUN_00de2ba8(param_1 + 0x20);
      return;
    }
    return;
  }
  FUN_005e6cdc(param_1);
  if (*(int *)(param_1 + 0xc) != -1) {
    FUN_016dffb2();
  }
  FUN_00a414e8(param_1);
  FUN_00e7e088(param_1 + 0x10);
  piVar2 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e454dc(*(undefined4 *)(param_1 + 0x18));
  }
  puVar4 = (undefined4 *)(param_1 + 0x1c8);
  FUN_01663cc4(*puVar4);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar4);
    return;
  }
  return;
}

