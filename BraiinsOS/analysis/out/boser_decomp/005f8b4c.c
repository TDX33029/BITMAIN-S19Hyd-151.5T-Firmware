// FUN_005f8b4c @ 005f8b4c size=280 calls_out=8 calls_in=4
// strings: 

void FUN_005f8b4c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0193c71c();
  FUN_0193c71c(param_1 + 4);
  FUN_005f797c(param_1 + 8);
  FUN_005f5010(*(undefined4 *)(param_1 + 0xc));
  FUN_0193c71c(param_1 + 0x10);
  FUN_005f5010(*(undefined4 *)(param_1 + 0x14));
  FUN_005f7ab4(*(undefined4 *)(param_1 + 0x18));
  FUN_005f5010(*(undefined4 *)(param_1 + 0x1c));
  FUN_005f4d14(*(undefined4 *)(param_1 + 0x20));
  FUN_005f6234(*(undefined4 *)(param_1 + 0x24));
  piVar2 = *(int **)(param_1 + 0x28);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(*(undefined4 *)(param_1 + 0x28));
  }
  piVar2 = *(int **)(param_1 + 0x2c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(*(undefined4 *)(param_1 + 0x2c));
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
    FUN_01a38338(*(undefined4 *)(param_1 + 0x30));
  }
  piVar2 = *(int **)(param_1 + 0x34);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(*(undefined4 *)(param_1 + 0x34));
    return;
  }
  return;
}

