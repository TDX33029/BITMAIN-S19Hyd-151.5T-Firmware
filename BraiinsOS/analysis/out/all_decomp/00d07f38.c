// FUN_00d07f38 @ 00d07f38 size=376 calls_out=6 calls_in=3
// strings: 

void FUN_00d07f38(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  if (*(char *)(param_1 + 0x124) == '\0') {
    piVar2 = *(int **)(param_1 + 0x110);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1030(*(undefined4 *)(param_1 + 0x110));
    }
    iVar3 = *(int *)(param_1 + 0x11c);
    if (iVar3 != 0) {
      iVar8 = *(int *)(param_1 + 0x118);
      iVar5 = 0;
      do {
        piVar2 = *(int **)(iVar8 + iVar5 * 4);
        iVar6 = iVar5 + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f31e8(*(undefined4 *)(iVar8 + iVar5 * 4));
        }
        iVar5 = iVar6;
      } while (iVar6 != iVar3);
    }
    if (*(int *)(param_1 + 0x114) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x118));
    }
    puVar7 = (undefined4 *)(param_1 + 0x100);
    FUN_016af0b0(puVar7);
    piVar2 = (int *)*puVar7;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*puVar7);
    }
    puVar7 = (undefined4 *)(param_1 + 0x108);
    FUN_016af0b0(puVar7);
    piVar2 = (int *)*puVar7;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*puVar7);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x124) == '\x03') {
    FUN_00d081f4(param_1);
    piVar2 = *(int **)(param_1 + 0x110);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1030(*(undefined4 *)(param_1 + 0x110));
      return;
    }
  }
  return;
}

