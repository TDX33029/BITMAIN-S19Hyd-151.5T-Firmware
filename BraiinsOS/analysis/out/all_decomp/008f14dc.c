// FUN_008f14dc @ 008f14dc size=464 calls_out=7 calls_in=1
// strings: 

void FUN_008f14dc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  piVar2 = *(int **)(param_1 + 800);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 800));
  }
  piVar2 = *(int **)(param_1 + 0x324);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x324));
  }
  if (*(int *)(param_1 + 0x2e8) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2ec));
  }
  if (*(int *)(param_1 + 600) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x25c));
  }
  if (*(int *)(param_1 + 0x1f0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 500));
  }
  if ((*(uint *)(param_1 + 0x1d8) & 0x7fffffff) == 0) {
    iVar3 = *(int *)(param_1 + 0x2d8);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1dc));
    iVar3 = *(int *)(param_1 + 0x2d8);
  }
  if (iVar3 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2dc));
  }
  FUN_008f2598(param_1);
  FUN_008f2674(param_1 + 0xe0);
  uVar5 = *(undefined4 *)(param_1 + 0x300);
  puVar6 = *(undefined4 **)(param_1 + 0x304);
  pcVar4 = (code *)*puVar6;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(uVar5);
  }
  if (puVar6[1] != 0) {
    thunk_FUN_016d3fb4(uVar5);
  }
  piVar2 = *(int **)(param_1 + 0x308);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(*(undefined4 *)(param_1 + 0x308),*(undefined4 *)(param_1 + 0x30c),0,0,unaff_r4,
                 unaff_r5);
  }
  iVar8 = *(int *)(param_1 + 0x318);
  iVar7 = *(int *)(param_1 + 0x31c) + 1;
  iVar3 = iVar8;
  while (iVar7 = iVar7 + -1, iVar7 != 0) {
    FUN_008ec7a8(iVar3);
    iVar3 = iVar3 + 0x108;
  }
  if (*(int *)(param_1 + 0x314) != 0) {
    thunk_FUN_016d3fb4(iVar8);
  }
  piVar2 = *(int **)(param_1 + 0x310);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1420(*(undefined4 *)(param_1 + 0x310));
    return;
  }
  return;
}

