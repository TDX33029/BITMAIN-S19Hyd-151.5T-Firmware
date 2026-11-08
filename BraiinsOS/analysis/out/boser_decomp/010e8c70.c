// FUN_010e8c70 @ 010e8c70 size=104 calls_out=2 calls_in=4
// strings: 

void FUN_010e8c70(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0xb8);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc));
    }
  }
  FUN_010e6b50(param_1 + 0x98);
  piVar2 = *(int **)(param_1 + 0x94);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0117fe74(*(undefined4 *)(param_1 + 0x94));
  }
  if (*(int *)(param_1 + 0x88) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  return;
}

