// FUN_00d0b37c @ 00d0b37c size=564 calls_out=7 calls_in=1
// strings: 

void FUN_00d0b37c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  piVar2 = *(int **)(param_1 + 0x174);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x174));
  }
  FUN_00c5b124(param_1 + 0x130);
  piVar2 = *(int **)(param_1 + 0xb0);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_009ba06c(*(undefined4 *)(param_1 + 0xb0));
    }
  }
  piVar2 = *(int **)(param_1 + 0xd8);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_009ba06c(*(undefined4 *)(param_1 + 0xd8));
    }
  }
  puVar8 = *(undefined4 **)(param_1 + 0x154);
  uVar7 = *(undefined4 *)(param_1 + 0x150);
  pcVar6 = (code *)*puVar8;
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(uVar7);
  }
  if (puVar8[1] != 0) {
    thunk_FUN_016d3fb4(uVar7);
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x74));
  }
  if ((*(int *)(param_1 + 0x160) == 4) && (*(int *)(param_1 + 0x164) != 0)) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x168));
  }
  iVar5 = *(int *)(param_1 + 0x178);
  DataMemoryBarrier(0xb);
  piVar2 = (int *)(iVar5 + 0x198);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  DataMemoryBarrier(0xb);
  if (iVar3 == 1) {
    puVar4 = (uint *)(iVar5 + 400);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = *puVar4 | 1;
    FUN_0163b708(iVar5 + 8);
    FUN_0163b708(iVar5 + 0x18);
    FUN_0163b708(iVar5 + 0x28);
    FUN_0163b708(iVar5 + 0x38);
    FUN_0163b708(iVar5 + 0x48);
    FUN_0163b708(iVar5 + 0x58);
    FUN_0163b708(iVar5 + 0x68);
    FUN_0163b708(iVar5 + 0x78);
  }
  piVar2 = *(int **)(param_1 + 0x178);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f17d0(*(undefined4 *)(param_1 + 0x178));
  }
  piVar2 = *(int **)(param_1 + 0x17c);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x17c));
  }
  piVar2 = *(int **)(param_1 + 0x180);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x180));
    return;
  }
  return;
}

