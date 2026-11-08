// FUN_00e80a90 @ 00e80a90 size=204 calls_out=3 calls_in=2
// strings: 

void FUN_00e80a90(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  piVar2 = *(int **)(param_1 + 0x50);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078e66c(*(undefined4 *)(param_1 + 0x50));
  }
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  puVar6 = *(undefined4 **)(param_1 + 0x24);
  pcVar4 = (code *)*puVar6;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(uVar5);
  }
  if (puVar6[1] != 0) {
    thunk_FUN_016d3fb4(uVar5);
  }
  piVar2 = *(int **)(param_1 + 0x28);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  }
  piVar2 = *(int **)(param_1 + 0x30);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    return;
  }
  return;
}

