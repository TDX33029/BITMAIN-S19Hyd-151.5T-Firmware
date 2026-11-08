// FUN_013f3140 @ 013f3140 size=132 calls_out=2 calls_in=0
// strings: 

void FUN_013f3140(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  while (iVar2 = *(int *)(param_1 + 0x110), iVar2 != *(int *)(param_1 + 0x114)) {
    *(int *)(param_1 + 0x110) = iVar2 + 1;
    puVar4 = (undefined4 *)(param_1 + 8);
    if (8 < *(uint *)(param_1 + 0x108)) {
      puVar4 = *(undefined4 **)(param_1 + 8);
    }
    if (puVar4[iVar2 * 8 + 4] == 2 && puVar4[iVar2 * 8 + 5] == 0) break;
    piVar3 = (int *)puVar4[iVar2 * 8 + 2];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0140a97c();
    }
  }
  FUN_0140496c(param_1);
  return;
}

