// FUN_0192a3c8 @ 0192a3c8 size=140 calls_out=5 calls_in=5
// strings: 

void FUN_0192a3c8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x1c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa118(*(undefined4 *)(param_1 + 0x1c));
  }
  FUN_01af7ab4(param_1 + 0x24);
  FUN_0134bd64(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  piVar2 = *(int **)(param_1 + 0x20);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa5c0(*(undefined4 *)(param_1 + 0x20));
  }
  FUN_018fcdb0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  FUN_018fcdb0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  return;
}

