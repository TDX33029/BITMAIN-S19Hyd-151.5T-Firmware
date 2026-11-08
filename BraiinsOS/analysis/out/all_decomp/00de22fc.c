// FUN_00de22fc @ 00de22fc size=248 calls_out=5 calls_in=1
// strings: 

void FUN_00de22fc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(char *)(param_1 + 0x104) == '\0') {
    piVar2 = *(int **)(param_1 + 0xf8);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e45d08(*(undefined4 *)(param_1 + 0xf8));
    }
    piVar2 = *(int **)(param_1 + 0xfc);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aaaeec(*(undefined4 *)(param_1 + 0xfc));
    }
    puVar4 = (undefined4 *)(param_1 + 0x100);
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
  }
  else if (*(char *)(param_1 + 0x104) == '\x03') {
    FUN_00de24b0(param_1 + 0x10);
    piVar2 = *(int **)(param_1 + 0xf8);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e45d08(*(undefined4 *)(param_1 + 0xf8));
      return;
    }
    return;
  }
  return;
}

