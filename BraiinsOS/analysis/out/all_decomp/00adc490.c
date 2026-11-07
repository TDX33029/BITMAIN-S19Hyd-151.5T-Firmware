// FUN_00adc490 @ 00adc490 size=212 calls_out=4 calls_in=3
// strings: 

void FUN_00adc490(int param_1)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  uVar5 = *(undefined4 *)(param_1 + 8);
  puVar6 = *(undefined4 **)(param_1 + 0xc);
  pcVar3 = (code *)*puVar6;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(uVar5);
  }
  if (puVar6[1] != 0) {
    thunk_FUN_016d3fb4(uVar5);
  }
  piVar2 = *(int **)(param_1 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  }
  iVar8 = *(int *)(param_1 + 0x20);
  iVar7 = *(int *)(param_1 + 0x24) + 1;
  iVar4 = iVar8;
  while (iVar7 = iVar7 + -1, iVar7 != 0) {
    FUN_00cce13c(iVar4);
    iVar4 = iVar4 + 0x108;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_016d3fb4(iVar8);
  }
  piVar2 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1420(*(undefined4 *)(param_1 + 0x18));
    return;
  }
  return;
}

