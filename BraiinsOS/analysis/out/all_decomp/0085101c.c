// FUN_0085101c @ 0085101c size=256 calls_out=7 calls_in=1
// strings: 

void FUN_0085101c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  puVar4 = (undefined4 *)(param_1 + 0x10);
  FUN_016af0b0(puVar4);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*puVar4);
  }
  piVar5 = *(int **)(param_1 + 0x20);
  piVar2 = piVar5 + 0x12;
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    FUN_008ade4c(piVar5 + 2);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089df84(*(undefined4 *)(param_1 + 0x20));
  }
  FUN_016dffb2(*(undefined4 *)(param_1 + 0x18));
  piVar5 = *(int **)(param_1 + 0x24);
  piVar2 = piVar5 + 0x12;
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    FUN_008ae198(piVar5 + 2);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089e80c(*(undefined4 *)(param_1 + 0x24));
    return;
  }
  return;
}

