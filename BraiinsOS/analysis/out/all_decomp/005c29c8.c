// FUN_005c29c8 @ 005c29c8 size=612 calls_out=11 calls_in=4
// strings: 

void FUN_005c29c8(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if (*(char *)(param_1 + 0x1cc) == '\0') {
    FUN_005e6cdc(param_1);
    if (*(int *)(param_1 + 0xc) != -1) {
      FUN_016dffb2();
    }
    FUN_00a414e8(param_1);
    FUN_00e7e088(param_1 + 0x10);
    piVar3 = *(int **)(param_1 + 0x18);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e454dc(*(undefined4 *)(param_1 + 0x18));
    }
    puVar6 = (undefined4 *)(param_1 + 0x1c8);
    FUN_01663cc4(*puVar6);
    piVar3 = (int *)*puVar6;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
LAB_005c2b00:
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(puVar6);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0x1cc) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x10c);
  if (cVar1 == '\x04') {
    if (((1 < *(int *)(param_1 + 0x168) - 3U) && (iVar4 = *(int *)(param_1 + 0x194), iVar4 != 0)) &&
       (uVar5 = iVar4 * 0x11 & 0xfffffffc, uVar5 + iVar4 != -0x19)) {
      thunk_FUN_016d3fb4((*(int *)(param_1 + 400) - uVar5) + -0x14);
    }
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\0') {
        return;
      }
      FUN_005e6cdc(param_1 + 0x20);
      if (*(int *)(param_1 + 0x2c) != -1) {
        FUN_016dffb2();
      }
      FUN_00a414e8(param_1 + 0x20);
      FUN_00e7e088(param_1 + 0x30);
      piVar3 = *(int **)(param_1 + 0x38);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00e454dc(*(undefined4 *)(param_1 + 0x38));
      }
      puVar6 = (undefined4 *)(param_1 + 0xa8);
      FUN_01663cc4(*puVar6);
      piVar3 = (int *)*puVar6;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      goto LAB_005c2b00;
    }
    if (*(char *)(param_1 + 300) == '\x03') {
      FUN_00e7c67c(param_1 + 0x114);
      if (*(int *)(param_1 + 0x118) != 0) {
        (**(code **)(*(int *)(param_1 + 0x118) + 0xc))(*(undefined4 *)(param_1 + 0x11c));
      }
    }
    FUN_0163bdc0(param_1 + 0x134);
    if (*(int *)(param_1 + 0x144) != 0) {
      (**(code **)(*(int *)(param_1 + 0x144) + 0xc))(*(undefined4 *)(param_1 + 0x148));
    }
  }
  FUN_005c178c(param_1 + 0xb0);
  puVar6 = (undefined4 *)(param_1 + 0xac);
  FUN_01663cc4(*puVar6);
  piVar3 = (int *)*puVar6;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar6);
  }
  FUN_00e7e088(param_1 + 0x40);
  piVar3 = *(int **)(param_1 + 0x48);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e454dc(*(undefined4 *)(param_1 + 0x48));
    return;
  }
  return;
}

