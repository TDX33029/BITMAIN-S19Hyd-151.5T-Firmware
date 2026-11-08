// FUN_00ad50e8 @ 00ad50e8 size=436 calls_out=7 calls_in=3
// strings: 

void FUN_00ad50e8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  piVar2 = *(int **)(param_1 + 0x174);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x174));
  }
  FUN_00c5b124(param_1 + 0x130);
  piVar2 = *(int **)(param_1 + 0xb0);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_009ba06c(*(undefined4 *)(param_1 + 0xb0));
    }
  }
  piVar2 = *(int **)(param_1 + 0xd8);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_009ba06c(*(undefined4 *)(param_1 + 0xd8));
    }
  }
  puVar6 = *(undefined4 **)(param_1 + 0x154);
  uVar5 = *(undefined4 *)(param_1 + 0x150);
  pcVar4 = (code *)*puVar6;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(uVar5);
  }
  if (puVar6[1] != 0) {
    thunk_FUN_016d3fb4(uVar5);
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x74));
  }
  if ((*(int *)(param_1 + 0x160) == 4) && (*(int *)(param_1 + 0x164) != 0)) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x168));
  }
  piVar2 = *(int **)(param_1 + 0x178);
  FUN_00d3e838(piVar2);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f17d0(*(undefined4 *)(param_1 + 0x178));
  }
  piVar2 = *(int **)(param_1 + 0x17c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x17c));
  }
  piVar2 = *(int **)(param_1 + 0x180);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x180));
    return;
  }
  return;
}

