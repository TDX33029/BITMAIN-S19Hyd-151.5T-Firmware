// FUN_009722ec @ 009722ec size=296 calls_out=7 calls_in=4
// strings: 

void FUN_009722ec(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(char *)(param_1 + 0xa9) == '\0') {
    piVar2 = *(int **)(param_1 + 0xa0);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00fa8e94(*(undefined4 *)(param_1 + 0xa0));
    }
    puVar4 = (undefined4 *)(param_1 + 0xa4);
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
  else if (*(char *)(param_1 + 0xa9) == '\x03') {
    FUN_00de080c(param_1);
    FUN_005e6cdc(param_1 + 0x80);
    if (*(int *)(param_1 + 0x8c) != -1) {
      FUN_016dffb2();
    }
    FUN_00a414e8(param_1 + 0x80);
    puVar4 = (undefined4 *)(param_1 + 0x9c);
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
    }
    piVar2 = *(int **)(param_1 + 0x98);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00fa8e94(*(undefined4 *)(param_1 + 0x98));
      return;
    }
    return;
  }
  return;
}

