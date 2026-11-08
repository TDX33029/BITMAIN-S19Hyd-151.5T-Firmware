// FUN_00b126c4 @ 00b126c4 size=136 calls_out=2 calls_in=0
// strings: 

void FUN_00b126c4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(byte *)(param_1 + 0x58) - 3 < 4) {
    FUN_00b12bd8(*(undefined4 *)(param_1 + 0x50));
    FUN_00b12bd8(*(undefined4 *)(param_1 + 0x38));
    piVar2 = *(int **)(param_1 + 0x20);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
  }
  else {
    if (*(byte *)(param_1 + 0x58) != 0) {
      return;
    }
    piVar2 = *(int **)(param_1 + 0x20);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    return;
  }
  return;
}

