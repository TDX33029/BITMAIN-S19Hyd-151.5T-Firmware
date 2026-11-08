// FUN_019601b8 @ 019601b8 size=96 calls_out=3 calls_in=1
// strings: 

void FUN_019601b8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x114));
  if (*(int *)(param_1 + 0x38) == 0) {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
  }
  FUN_0194f108(param_1 + 0x50);
  piVar2 = *(int **)(param_1 + 0x128);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(*(undefined4 *)(param_1 + 0x128));
    return;
  }
  return;
}

