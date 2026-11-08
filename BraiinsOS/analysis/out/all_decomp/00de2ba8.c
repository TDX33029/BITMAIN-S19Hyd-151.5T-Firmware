// FUN_00de2ba8 @ 00de2ba8 size=392 calls_out=10 calls_in=2
// strings: 

void FUN_00de2ba8(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  cVar1 = *(char *)(param_1 + 0xec);
  if (cVar1 == '\0') {
    FUN_005e6cdc(param_1);
    if (*(int *)(param_1 + 0xc) != -1) {
      FUN_016dffb2();
    }
    FUN_00a414e8(param_1);
    FUN_00e7e088(param_1 + 0x10);
    piVar4 = *(int **)(param_1 + 0x18);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e454dc(*(undefined4 *)(param_1 + 0x18));
    }
    puVar6 = (undefined4 *)(param_1 + 0x88);
    FUN_01663cc4(*puVar6);
    piVar4 = (int *)*puVar6;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(puVar6);
      return;
    }
    return;
  }
  if (cVar1 == '\x03') {
    FUN_00972a48(param_1 + 0xf0);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (((1 < *(int *)(param_1 + 0x148) - 3U) && (iVar3 = *(int *)(param_1 + 0x174), iVar3 != 0)) &&
       (uVar5 = iVar3 * 0x11 & 0xfffffffc, uVar5 + iVar3 != -0x19)) {
      thunk_FUN_016d3fb4((*(int *)(param_1 + 0x170) - uVar5) + -0x14);
    }
  }
  FUN_005c178c(param_1 + 0x90);
  puVar6 = (undefined4 *)(param_1 + 0x8c);
  FUN_01663cc4(*puVar6);
  piVar4 = (int *)*puVar6;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar6);
  }
  FUN_00e7e088(param_1 + 0x20);
  piVar4 = *(int **)(param_1 + 0x28);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e454dc(*(undefined4 *)(param_1 + 0x28));
    return;
  }
  return;
}

